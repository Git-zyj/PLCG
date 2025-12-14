/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34536
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34536 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34536
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (min((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */int) arr_3 [i_0] [i_1])) >> (((((/* implicit */int) var_7)) - (53240))))))) : (((((/* implicit */_Bool) (+(var_8)))) ? (((var_8) + (((/* implicit */int) arr_1 [i_0] [i_1])))) : (((/* implicit */int) arr_4 [i_0] [i_0] [i_0 + 1]))))));
                arr_6 [i_0] = ((/* implicit */unsigned short) (+(arr_2 [i_1])));
                var_11 *= ((/* implicit */_Bool) var_3);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 1; i_2 < 23; i_2 += 4) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned short i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_13 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned long long int) var_0))) ? ((+(((/* implicit */int) arr_3 [i_0] [i_1])))) : (((/* implicit */int) ((((/* implicit */int) arr_7 [i_2 + 1] [i_0] [i_2])) < (((/* implicit */int) arr_12 [(_Bool)1] [i_1] [i_2] [i_0])))))));
                        arr_14 [(unsigned char)12] [i_1] [(_Bool)1] [i_0] [i_3] [i_2 + 1] = ((/* implicit */unsigned int) arr_8 [i_0] [(_Bool)1] [i_0]);
                    }
                    arr_15 [i_0] [18ULL] [i_0] = ((/* implicit */unsigned int) ((unsigned short) arr_7 [i_0 + 1] [i_0] [i_2 - 1]));
                }
                for (int i_4 = 2; i_4 < 21; i_4 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 2; i_5 < 23; i_5 += 4) 
                    {
                        arr_23 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_0);
                        var_12 |= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_8 [i_5] [(unsigned short)8] [i_4])), (max((((/* implicit */int) ((((/* implicit */unsigned long long int) var_8)) != (arr_2 [i_0])))), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))))));
                        arr_24 [i_0] [i_1] [i_0] [i_5] = ((/* implicit */unsigned long long int) var_4);
                        arr_25 [i_5] [i_1] [i_1] [i_5] [i_0] [19ULL] = ((/* implicit */short) ((((((/* implicit */_Bool) arr_8 [i_0] [i_0 - 3] [i_0 - 3])) ? (((((/* implicit */_Bool) (unsigned char)156)) ? (4294443008U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1))))) >= (524287U)));
                        arr_26 [i_0 - 1] [(unsigned short)6] [i_5] [i_0 - 1] [i_0 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_22 [i_0 - 1] [i_0 - 1] [i_4 + 2] [i_5])), (var_4)))) : (min((((/* implicit */int) arr_19 [i_5 - 1] [i_5] [i_5] [i_5])), (var_8)))));
                    }
                    var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) ((arr_18 [i_0 + 1] [i_0] [i_1] [i_4 - 1]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]))) : (((((((/* implicit */_Bool) 6ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)35452))) : (1221179277133203211ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2534036763U)) ? (((/* implicit */unsigned int) arr_17 [i_4] [(unsigned short)14] [i_4])) : (524267U)))))))))));
                    var_14 ^= ((/* implicit */short) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) != (min((var_0), (((/* implicit */unsigned long long int) var_6))))))) - (1)))));
                }
                for (unsigned char i_6 = 0; i_6 < 24; i_6 += 4) 
                {
                    arr_29 [i_0] = ((/* implicit */unsigned char) ((unsigned short) arr_9 [(unsigned short)2] [i_0] [(unsigned char)23] [i_6]));
                    arr_30 [i_0] [i_0] = ((/* implicit */unsigned short) arr_28 [i_0] [i_0 + 1] [i_1] [i_6]);
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_7 = 2; i_7 < 15; i_7 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_8 = 1; i_8 < 13; i_8 += 2) 
        {
            for (short i_9 = 0; i_9 < 17; i_9 += 4) 
            {
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    {
                        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 946255250)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (524274U)));
                        arr_41 [i_8] [i_8] = ((/* implicit */short) arr_21 [i_8] [i_8 + 3] [i_8 + 1] [12ULL]);
                        arr_42 [(short)3] [i_8] [i_8] [i_9] [i_8] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_7 - 1])) ? (((/* implicit */int) arr_35 [i_7])) : (((/* implicit */int) arr_35 [i_9]))));
                    }
                } 
            } 
        } 
        arr_43 [i_7] = ((((/* implicit */int) (unsigned short)46101)) <= (((/* implicit */int) arr_19 [i_7] [i_7 + 1] [i_7] [i_7 + 1])));
    }
}
