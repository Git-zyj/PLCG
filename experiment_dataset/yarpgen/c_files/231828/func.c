/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231828
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231828 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231828
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
    for (short i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_0] [i_0] = ((/* implicit */_Bool) (~(12350337345078806832ULL)));
                arr_7 [i_0] [i_0] = ((/* implicit */int) (unsigned short)35997);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) var_1);
    /* LoopNest 3 */
    for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 3) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) /* same iter space */
                    {
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((unsigned short) arr_0 [i_4])))));
                        arr_17 [i_2] [(short)4] [(signed char)6] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_5 + 1] [i_2 - 1])) ? (((/* implicit */int) arr_3 [i_5 + 1] [i_2 - 1])) : (((/* implicit */int) var_14))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) (unsigned char)233)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_15)))), (((/* implicit */int) (short)-9109)))))));
                        arr_18 [i_2] [i_2] = ((/* implicit */signed char) min((arr_16 [(unsigned char)1] [i_3] [i_4] [i_3] [i_4] [i_4]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_4])))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) /* same iter space */
                    {
                        var_21 ^= (!(((_Bool) arr_12 [i_6 + 1] [i_2 - 1] [i_2 - 1])));
                        var_22 |= ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) var_14)))));
                        arr_21 [i_2] [i_2] [i_2] [(unsigned char)13] [i_2] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_11 [i_2] [i_2 - 1] [i_6 + 1]), (arr_13 [i_2] [i_2 - 1] [i_2])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6] [i_6] [i_2]))))) : (max((((/* implicit */int) ((unsigned short) arr_10 [i_6] [i_3] [(unsigned char)13]))), (((((/* implicit */_Bool) arr_19 [i_2] [i_4] [i_2])) ? (((/* implicit */int) arr_19 [i_2] [i_2] [i_2])) : (((/* implicit */int) var_10))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_23 ^= ((/* implicit */unsigned long long int) ((_Bool) var_1));
                        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) var_3))));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_8 = 0; i_8 < 14; i_8 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -999630018)) ? (30731173) : (-1596667031)));
                        var_26 = arr_8 [1];
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 14; i_9 += 2) 
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            arr_32 [i_2] [i_3] [i_2] [i_9] [i_9] = ((unsigned short) arr_26 [i_2] [i_4] [i_9]);
                            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_6) | (((/* implicit */int) var_1))))) ? (((((/* implicit */_Bool) arr_26 [i_2] [i_4] [i_9])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)233)))) : (((/* implicit */int) var_8))));
                            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) <= (((((/* implicit */_Bool) arr_3 [i_2] [i_3])) ? (((/* implicit */int) arr_26 [i_2] [i_3] [i_4])) : (((/* implicit */int) var_16))))));
                        }
                        for (unsigned short i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) arr_2 [i_2] [i_2]))));
                            arr_35 [i_2] [i_2] = ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) arr_25 [i_2 - 1] [i_11] [i_11] [i_9])) || (((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_9] [i_4])))));
                        }
                        var_30 = ((/* implicit */unsigned char) arr_34 [i_2] [i_9] [i_4] [i_4] [i_3] [i_2]);
                        var_31 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) 30731174)), (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_34 [i_9] [i_3] [i_3] [i_3] [i_9] [i_9])) <= (((/* implicit */int) (short)9108)))))) - (((((/* implicit */_Bool) -778664875)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_9] [i_9] [i_3]))) : (arr_12 [i_9] [i_2 - 1] [i_2 - 1])))))));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_32 = ((/* implicit */signed char) ((int) arr_12 [i_4] [i_3] [i_2 - 1]));
                        var_33 = ((((/* implicit */_Bool) max((max((arr_4 [i_2] [i_2]), (((/* implicit */int) var_16)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) && (((/* implicit */_Bool) var_6)))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2])) ? (min((arr_16 [i_12] [i_2] [i_2] [i_3] [i_2] [i_2]), (((/* implicit */unsigned long long int) arr_9 [i_3] [i_12])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_2] [i_2 - 1] [(unsigned char)11] [i_12] [i_4] [10])))))));
                    }
                    for (unsigned char i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        arr_42 [i_13 + 1] [i_2] [i_2] = ((/* implicit */short) max(((unsigned char)159), ((unsigned char)217)));
                        arr_43 [i_2 - 1] [i_13] [i_3] [i_13 + 1] [i_3] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)239)))))) ? ((~(((/* implicit */int) arr_33 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_13 + 1] [i_13 - 1])))) : (((/* implicit */int) var_2))));
                    }
                    var_34 = ((/* implicit */unsigned char) var_18);
                    arr_44 [(_Bool)1] [i_2] = ((/* implicit */signed char) arr_34 [i_2] [(_Bool)1] [i_3] [i_3] [i_4] [(_Bool)1]);
                }
            } 
        } 
    } 
}
