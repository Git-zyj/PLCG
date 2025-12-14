/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191831
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
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 3) 
        {
            var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) var_2))));
            var_14 = (-(((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-81))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_0)))))))));
        }
        var_15 += ((/* implicit */short) ((((/* implicit */_Bool) max(((signed char)81), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_10)))))))) ? (min((((/* implicit */int) (!(((/* implicit */_Bool) (short)(-32767 - 1)))))), (((((/* implicit */int) var_10)) << (((((/* implicit */int) arr_2 [i_0] [i_0])) - (113))))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_1)) : (((1073741824) % (((/* implicit */int) arr_1 [i_0]))))))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 1; i_3 < 21; i_3 += 2) 
        {
            arr_9 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_3 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3 + 1]))) : (var_4)));
            var_16 ^= ((/* implicit */int) ((unsigned long long int) ((var_11) <= (((/* implicit */int) arr_5 [(_Bool)1])))));
        }
        var_17 ^= ((unsigned long long int) min((4375864185472184722LL), (((/* implicit */long long int) arr_8 [i_2]))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_4 = 1; i_4 < 21; i_4 += 1) 
        {
            var_18 *= ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)0))));
            arr_13 [i_2] [(signed char)13] [i_4 - 1] = arr_11 [i_2] [i_4 + 1];
            /* LoopNest 2 */
            for (unsigned short i_5 = 1; i_5 < 22; i_5 += 1) 
            {
                for (short i_6 = 0; i_6 < 23; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) (unsigned char)17);
                        /* LoopSeq 4 */
                        for (unsigned short i_7 = 0; i_7 < 23; i_7 += 4) 
                        {
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((arr_16 [i_4] [i_4 + 1] [i_5 - 1] [i_6]) <= (((/* implicit */long long int) var_4)))))));
                            arr_22 [i_2] [i_2] [i_5] [i_2] [i_2] = var_3;
                        }
                        for (signed char i_8 = 4; i_8 < 20; i_8 += 4) 
                        {
                            var_21 *= ((/* implicit */signed char) arr_5 [i_8]);
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_4 [i_4]))));
                        }
                        for (short i_9 = 1; i_9 < 20; i_9 += 4) 
                        {
                            arr_27 [i_2] [i_2] [(signed char)18] [(signed char)18] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) 2958620144709205709ULL))))));
                            arr_28 [i_2] [i_4 + 2] [i_5] [(unsigned short)1] [i_9] = ((/* implicit */unsigned long long int) -2037148489);
                        }
                        for (int i_10 = 0; i_10 < 23; i_10 += 1) 
                        {
                            var_23 += ((/* implicit */unsigned long long int) (signed char)71);
                            var_24 = ((/* implicit */signed char) var_10);
                            var_25 += ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)8)));
                            arr_31 [i_2] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_2] [i_4] [i_5 + 1] [i_5 + 1] [i_10])) + (((/* implicit */int) var_2)))))));
                        }
                    }
                } 
            } 
            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) arr_29 [i_2] [(_Bool)1] [(signed char)15] [17ULL] [i_2] [i_4 - 1] [i_4]))));
            var_27 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2])))))));
        }
    }
    var_28 += ((/* implicit */long long int) var_5);
}
