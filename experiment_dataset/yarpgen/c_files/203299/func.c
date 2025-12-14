/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203299
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
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            arr_5 [i_0] [i_0] = arr_3 [i_1];
            /* LoopSeq 1 */
            for (int i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 1]))));
                /* LoopNest 2 */
                for (short i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned long long int) (((_Bool)0) ? ((~(arr_1 [i_0]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)49)))))));
                            arr_13 [i_4] [i_3] [i_0] [i_1] [i_4] = ((/* implicit */short) arr_2 [(_Bool)1] [i_1]);
                            arr_14 [i_4] [i_4] [i_3] [(unsigned char)8] [(short)2] [i_4] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 2964189105U)))))));
                            arr_15 [i_4] [i_3] [i_2] [i_0] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_11 [(_Bool)1] [i_1 + 1] [i_2] [(unsigned short)13] [i_1 - 1] [i_1 + 1]))));
                        }
                    } 
                } 
                arr_16 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned short) var_12)))));
                arr_17 [i_2] [i_0] [i_0] = ((((/* implicit */int) var_3)) + (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0)))));
            }
            var_15 = ((/* implicit */unsigned short) (((_Bool)1) ? ((+(((/* implicit */int) arr_3 [i_1 + 1])))) : (((/* implicit */int) arr_4 [i_1 - 1]))));
            var_16 = ((/* implicit */_Bool) min((var_16), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)2155))) > (arr_1 [i_0])))));
            var_17 += ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-1))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_8))));
        }
        arr_18 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_0] [i_0]))))) ? (((/* implicit */int) (unsigned short)49701)) : (((/* implicit */int) var_8))));
        arr_19 [i_0] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)27201)) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [13])) : (arr_1 [i_0])))));
    }
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 1) /* same iter space */
    {
        arr_22 [i_5] = ((/* implicit */unsigned long long int) (_Bool)1);
        var_18 = arr_21 [(signed char)3];
    }
    /* vectorizable */
    for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) arr_21 [i_6])) ? (arr_24 [i_6] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_6]))))));
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_6])) ? (((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_2))))) : (((/* implicit */int) arr_21 [i_6]))));
        arr_25 [i_6] = ((/* implicit */_Bool) (unsigned short)27188);
        arr_26 [i_6] = ((/* implicit */unsigned int) (+(0ULL)));
    }
    /* LoopSeq 2 */
    for (short i_7 = 0; i_7 < 10; i_7 += 4) 
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_7]))) % (((((/* implicit */_Bool) 1128281569)) ? (9ULL) : (1152919305583591424ULL))))))));
        var_22 = arr_1 [i_7];
    }
    for (unsigned long long int i_8 = 2; i_8 < 13; i_8 += 3) 
    {
        arr_32 [i_8] = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)36450)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-11340)) || (((/* implicit */_Bool) 1029652149)))))) : (max((((/* implicit */unsigned int) var_3)), (((1003654030U) / (((/* implicit */unsigned int) -1636973248))))))));
        var_23 = ((/* implicit */unsigned int) (+(((arr_31 [i_8]) & (((/* implicit */int) var_4))))));
        arr_33 [(unsigned char)1] = arr_23 [(short)24];
        arr_34 [i_8] [i_8] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 1623541074U)) && (((/* implicit */_Bool) arr_20 [i_8 + 1] [i_8 - 1])))) ? (((((/* implicit */int) arr_20 [i_8 + 1] [i_8 + 1])) & (((/* implicit */int) arr_20 [i_8 - 1] [i_8 - 2])))) : ((~(((/* implicit */int) arr_20 [i_8 + 2] [i_8 - 2]))))));
        var_24 = ((/* implicit */int) (~(max((((((/* implicit */_Bool) arr_3 [i_8])) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)27974))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (short)2047)))))))));
    }
}
