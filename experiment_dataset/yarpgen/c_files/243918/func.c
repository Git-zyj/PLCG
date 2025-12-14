/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243918
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 2; i_2 < 12; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) max((var_8), (((/* implicit */signed char) (_Bool)1)))))), ((~(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_12 [i_3] [i_3] [i_3] [i_1] [i_1] [i_0] = ((arr_8 [i_2 + 2] [i_2 - 1] [i_2] [i_2 - 1] [i_1]) - (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [i_3]))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1))));
                        /* LoopSeq 4 */
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) + (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned int) arr_11 [i_0] [i_0] [i_2 - 1] [i_3])) : ((~(3414455085U)))));
                            var_16 |= arr_15 [i_4];
                            var_17 = ((/* implicit */unsigned char) arr_11 [i_0] [i_0] [i_3] [i_4 - 1]);
                        }
                        for (signed char i_5 = 2; i_5 < 12; i_5 += 3) /* same iter space */
                        {
                            var_18 += ((/* implicit */unsigned int) var_11);
                            arr_21 [i_0] [i_0] [i_5] [i_5 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) : (3414455085U)))) ? (((/* implicit */int) ((signed char) arr_14 [i_2 - 2] [i_1] [i_2 + 2] [(_Bool)1]))) : ((~(((/* implicit */int) (_Bool)1))))));
                            arr_22 [i_5] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_0 [i_3]);
                            arr_23 [i_0] [i_1] [i_5] [i_3] [i_0] [i_5] = ((/* implicit */int) (_Bool)1);
                            var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])) || (((_Bool) var_8))));
                        }
                        for (signed char i_6 = 2; i_6 < 12; i_6 += 3) /* same iter space */
                        {
                            arr_27 [i_6 - 1] [i_3] [i_2] [i_1] [i_0] = ((/* implicit */int) ((((unsigned int) var_0)) >> ((((_Bool)0) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))));
                            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_14 [i_6 - 2] [i_1] [i_1] [i_6 + 2])))))));
                        }
                        for (int i_7 = 2; i_7 < 13; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) ((((((/* implicit */int) var_1)) < (((/* implicit */int) var_2)))) ? (((/* implicit */int) var_13)) : ((+(arr_15 [3]))))))));
                            arr_31 [i_0] [i_1] = ((var_6) || (((/* implicit */_Bool) ((int) arr_14 [i_0] [i_2 + 2] [i_2 + 2] [i_7 + 1]))));
                        }
                    }
                    for (int i_8 = 0; i_8 < 14; i_8 += 3) /* same iter space */
                    {
                        var_22 = ((/* implicit */signed char) ((((arr_15 [i_8]) >= (arr_24 [i_0] [i_1]))) ? (((/* implicit */unsigned int) max((((/* implicit */int) ((arr_0 [i_2 - 2]) >= (((/* implicit */int) arr_3 [i_0] [i_1]))))), ((~(((/* implicit */int) (_Bool)1))))))) : (((arr_8 [i_2 + 2] [i_2 + 1] [i_2 + 2] [i_2] [i_2]) ^ (arr_8 [i_2 + 1] [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 + 2])))));
                        arr_34 [i_8] [i_2 + 2] [i_1] [i_1] [i_1] [i_0] = min(((_Bool)1), ((_Bool)1));
                        /* LoopSeq 1 */
                        for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) 
                        {
                            arr_37 [i_1] = ((((/* implicit */unsigned int) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-127)), (var_7))))))) < (arr_1 [i_8]));
                            var_23 += (~(((/* implicit */int) ((((/* implicit */int) (_Bool)0)) != (((/* implicit */int) (_Bool)1))))));
                            var_24 += ((/* implicit */signed char) ((min((((arr_18 [i_0] [i_1] [i_2 - 1] [i_8] [i_9 + 1]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (max((arr_18 [i_0] [i_1] [i_1] [i_8] [i_2]), (((/* implicit */unsigned int) var_14)))))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)127)))));
                            var_25 ^= min((max((((((/* implicit */int) var_3)) ^ (((/* implicit */int) arr_33 [i_2 - 1] [i_8] [i_9])))), (((/* implicit */int) var_14)))), (((/* implicit */int) var_6)));
                        }
                    }
                    for (int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        arr_40 [i_0] [i_1] [i_1] [i_2] [i_10] = ((/* implicit */_Bool) (unsigned char)138);
                        arr_41 [i_1] [i_1] = ((unsigned char) (_Bool)0);
                        var_26 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (-(arr_0 [i_0])))), (max((arr_8 [i_0] [i_1] [i_2] [i_10] [i_0]), (((/* implicit */unsigned int) arr_26 [i_0] [i_0] [i_0] [i_2 + 1] [i_10]))))))) ? (((/* implicit */int) ((((/* implicit */int) var_2)) > (((/* implicit */int) var_2))))) : (((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_0] [i_2 - 2])), (var_5))))));
                        arr_42 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((signed char) ((_Bool) (_Bool)1));
                    }
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned int) var_13);
    var_28 = ((/* implicit */_Bool) (~(((/* implicit */int) var_6))));
}
