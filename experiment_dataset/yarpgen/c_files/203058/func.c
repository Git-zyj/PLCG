/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203058
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) ((unsigned int) min((1041468905746627140ULL), (arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 14; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_19 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_9 [i_0] [i_1 - 1] [(_Bool)0])) ? (arr_9 [i_0] [i_1 + 1] [i_2]) : (arr_9 [i_0] [i_1 - 2] [i_3]))), (min((arr_9 [i_0] [i_1 - 4] [i_1 - 4]), (arr_9 [i_0] [i_1 - 1] [i_0])))));
                            var_20 = ((/* implicit */_Bool) (unsigned char)199);
                            arr_12 [i_0] [i_1 - 3] [14] [i_3] [i_4] = ((/* implicit */_Bool) arr_9 [i_4] [13ULL] [i_0]);
                        }
                    } 
                } 
            } 
            var_21 = ((/* implicit */unsigned short) ((_Bool) (_Bool)0));
            arr_13 [i_0] [0] = ((/* implicit */_Bool) 15228741507101204549ULL);
            arr_14 [i_0] = ((/* implicit */unsigned char) ((unsigned int) max((((unsigned long long int) 5451443926674081379LL)), (((/* implicit */unsigned long long int) 2889611139U)))));
        }
    }
    for (unsigned short i_5 = 2; i_5 < 16; i_5 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 4) 
        {
            for (unsigned short i_7 = 0; i_7 < 17; i_7 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_6])) ? (5451443926674081379LL) : (5451443926674081363LL)))) ? (((/* implicit */int) ((signed char) 5451443926674081379LL))) : (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (unsigned short)15277)) : (((/* implicit */int) (unsigned char)1))))))) ? (((((/* implicit */_Bool) (signed char)36)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)61)) ? (-5451443926674081389LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)34974)))))) : (min((((/* implicit */unsigned long long int) (signed char)-61)), (arr_15 [i_5]))))) : (((/* implicit */unsigned long long int) min((max((arr_20 [(unsigned char)13] [i_5] [i_7] [i_5]), (363898798U))), (((/* implicit */unsigned int) ((unsigned char) -451689433)))))))))));
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (unsigned char)11))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (int i_8 = 0; i_8 < 17; i_8 += 3) 
        {
            arr_24 [i_5] [i_8] [i_8] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)83)), (((((/* implicit */_Bool) ((unsigned char) arr_20 [i_5] [(_Bool)1] [(_Bool)1] [(unsigned short)12]))) ? (((((/* implicit */_Bool) arr_21 [i_5 - 1] [i_8] [i_8])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_5] [(_Bool)1] [i_5]))) : (4194387460U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 0U))))))));
            var_24 |= ((/* implicit */unsigned char) 1006632960U);
            var_25 = ((/* implicit */unsigned char) max((var_25), (((unsigned char) 4194387460U))));
        }
        for (unsigned char i_9 = 4; i_9 < 14; i_9 += 4) 
        {
            var_26 ^= ((/* implicit */unsigned int) ((unsigned char) ((_Bool) (signed char)36)));
            arr_27 [i_9] = ((/* implicit */unsigned short) ((int) ((unsigned char) (unsigned char)255)));
            arr_28 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_17 [i_5 - 2] [(short)2]), (arr_17 [i_5 - 2] [i_9 - 1])))) ? (((/* implicit */int) (unsigned short)7890)) : (((/* implicit */int) (signed char)36))));
        }
        for (unsigned char i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            arr_33 [i_5] [i_5] [i_10] = ((/* implicit */unsigned char) ((unsigned int) min((max((((/* implicit */unsigned long long int) (unsigned short)65535)), (13006804411289289363ULL))), (((/* implicit */unsigned long long int) 0U)))));
            arr_34 [i_10] = ((/* implicit */unsigned int) (signed char)61);
        }
    }
    var_27 = ((/* implicit */short) var_15);
    var_28 = ((/* implicit */unsigned long long int) min((var_28), (((/* implicit */unsigned long long int) var_16))));
}
