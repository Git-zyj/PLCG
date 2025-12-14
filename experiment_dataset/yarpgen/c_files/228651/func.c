/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228651
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 3) 
                    {
                        var_14 = max((max((((((/* implicit */_Bool) (short)-5180)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_6 [i_0] [i_1] [i_0] [i_3]))), (((((/* implicit */_Bool) (unsigned short)1)) ? (arr_3 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32757))))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((_Bool) var_2)))))));
                        var_15 += ((/* implicit */unsigned short) ((((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1] [i_0] [i_0 - 1])) > (((/* implicit */int) arr_9 [i_1 + 1] [i_0] [i_0 - 1] [i_0 - 1])))) ? (((/* implicit */unsigned int) (-(var_12)))) : (((arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_1 + 1] [i_0 - 1] [i_0 - 1] [i_0 - 1]))) : (var_2)))));
                        var_16 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-32757)) ? (((arr_3 [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)-32767))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) var_0)) != (0U)))))))) ? (var_2) : (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) % (arr_4 [i_1]))));
                        /* LoopSeq 4 */
                        for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned int) (unsigned short)35298)), (arr_3 [i_1 + 1]))) + (((/* implicit */unsigned int) min((var_12), (((/* implicit */int) (_Bool)1)))))));
                            arr_13 [i_4] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned long long int) var_13)), (min((((/* implicit */unsigned long long int) var_7)), (var_1)))));
                            arr_14 [i_2 + 1] [i_0] [4U] [i_0] [i_4] [i_2] = ((/* implicit */_Bool) (~(max((min((var_12), (1684467474))), (((/* implicit */int) var_4))))));
                            var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_8 [i_0] [i_1] [i_2 + 1])), (((unsigned short) arr_5 [2] [i_3 + 1])))))) : (((unsigned long long int) ((((/* implicit */_Bool) (short)-32744)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6)))))));
                            var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)0)), (min((var_11), (1873864735U))))))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 23; i_5 += 2) 
                        {
                            var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) var_12)), (((arr_9 [i_3] [i_3 - 2] [i_3 + 1] [i_3 + 2]) ? (((((/* implicit */unsigned int) 230826496)) | (var_11))) : (max((arr_11 [i_0] [(short)1] [i_0] [i_1 + 1] [i_0]), (((/* implicit */unsigned int) var_7))))))));
                            var_21 = ((/* implicit */short) ((max((((/* implicit */unsigned int) arr_0 [i_2 + 1])), (var_13))) >> (((((/* implicit */int) var_6)) - (24185)))));
                            var_22 -= ((var_2) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_9 [i_0 - 2] [8U] [i_2 + 1] [i_3 + 2])) : (arr_10 [i_0 + 1] [i_0 + 1] [i_2 + 1] [i_3 - 1] [i_5] [i_5 - 1])))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_3] [i_6 - 1] [i_0] = ((/* implicit */unsigned int) arr_0 [i_1]);
                            var_23 = 4294967284U;
                        }
                        /* vectorizable */
                        for (unsigned long long int i_7 = 1; i_7 < 21; i_7 += 4) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_17 [i_1] [i_2 + 1]))));
                            var_25 ^= ((/* implicit */_Bool) var_8);
                        }
                    }
                    for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                    {
                        arr_29 [i_0] = ((/* implicit */_Bool) var_3);
                        arr_30 [i_0] [i_2] [i_2] = (((!(((/* implicit */_Bool) var_5)))) ? (((/* implicit */unsigned int) var_12)) : (((((/* implicit */_Bool) var_12)) ? (arr_3 [i_2 + 1]) : (arr_3 [i_2 + 1]))));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_26 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_21 [i_0] [i_0] [i_2 + 1])) && (((/* implicit */_Bool) arr_26 [i_2] [i_2] [i_2 + 1] [i_2] [i_9]))));
                            var_27 |= ((/* implicit */unsigned int) ((var_9) | (((/* implicit */int) var_7))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 2) 
                        {
                            var_28 *= ((((/* implicit */_Bool) ((arr_18 [i_10] [(short)9] [i_1] [i_1] [i_0]) - (((/* implicit */unsigned int) var_0))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((((/* implicit */_Bool) 465702511U)) || (((var_11) != (var_11)))))));
                            var_29 = var_11;
                        }
                    }
                    /* vectorizable */
                    for (short i_11 = 0; i_11 < 24; i_11 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned int) (~(((((/* implicit */int) var_8)) << (((((/* implicit */int) var_4)) - (17659)))))));
                        var_31 = ((/* implicit */unsigned long long int) ((unsigned int) arr_10 [i_0] [i_0 - 2] [i_0] [i_1 + 1] [i_2 + 1] [i_11]));
                        var_32 = ((unsigned int) (-(((/* implicit */int) arr_1 [i_0] [i_0]))));
                    }
                    var_33 = ((/* implicit */unsigned int) max((var_33), (((/* implicit */unsigned int) (short)32736))));
                }
            } 
        } 
    } 
    var_34 |= min((((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) var_4)))))))), (((var_1) + (((/* implicit */unsigned long long int) 11U)))));
}
