/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246070
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
    var_14 |= ((/* implicit */int) var_12);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (signed char i_1 = 1; i_1 < 13; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (signed char i_2 = 2; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    arr_7 [i_2] [i_2] [i_2] [i_0] &= arr_4 [i_0] [i_1] [i_1];
                    arr_8 [i_0] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_0 [i_1 + 2]) ? (((/* implicit */int) arr_0 [i_1 - 1])) : (((/* implicit */int) arr_0 [i_1 + 1])))))));
                }
                for (signed char i_3 = 2; i_3 < 14; i_3 += 2) /* same iter space */
                {
                    arr_12 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) max((min((((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3])) && (arr_11 [i_0])))), (min((((/* implicit */int) arr_2 [i_0])), (arr_4 [i_0] [i_3] [i_3]))))), (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0])))))));
                    var_15 = ((min((arr_11 [i_3 + 1]), (arr_0 [i_1 + 2]))) ? (((/* implicit */int) arr_0 [i_1 - 1])) : ((+(((/* implicit */int) (signed char)-20)))));
                    arr_13 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((((arr_10 [i_0] [i_0]) & (((/* implicit */unsigned int) arr_9 [i_0] [i_1] [i_1])))) + (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (signed char)-23))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_0 [i_0])))))));
                    var_16 = ((/* implicit */unsigned int) arr_11 [i_1]);
                }
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    arr_18 [i_0] = ((/* implicit */int) arr_2 [i_0]);
                    var_17 ^= ((/* implicit */unsigned int) arr_11 [i_4]);
                }
                /* LoopSeq 3 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 4) 
                {
                    arr_21 [i_0] = (((((+(1189999113))) - (((/* implicit */int) (signed char)-35)))) > (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [i_0]))))))));
                    var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) -1189999103)))))));
                    arr_22 [i_0] [i_1] [i_1] [i_1] = ((((/* implicit */_Bool) (-((-(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) min((249131795), (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) (signed char)48)), (4023029414U))));
                    var_19 = ((/* implicit */unsigned int) min((var_19), (((((/* implicit */unsigned int) arr_9 [i_5] [i_1] [i_5])) / (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (2785849720U)))))));
                }
                /* vectorizable */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 15; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 14; i_8 += 2) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) arr_2 [i_6]))));
                                arr_29 [i_8] [i_8] [i_8] [i_8] [i_0] = ((/* implicit */int) arr_17 [i_0] [i_0] [i_8]);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned int) arr_4 [i_0] [i_1 + 1] [i_1 + 1]);
                }
                for (int i_9 = 0; i_9 < 15; i_9 += 4) 
                {
                    var_22 *= max((((((/* implicit */unsigned int) ((/* implicit */int) max((arr_28 [i_0] [i_1] [i_9] [i_9] [i_1] [i_1]), (((/* implicit */signed char) arr_25 [i_0] [i_0] [i_0] [i_9] [i_0])))))) % (((41129625U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16))))))), (((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (signed char)44)) < (((/* implicit */int) (signed char)125)))))))));
                    var_23 = ((/* implicit */_Bool) arr_2 [i_0]);
                    var_24 = (+(((arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 1]) + ((+(arr_15 [i_9] [i_1] [i_0]))))));
                    var_25 = ((/* implicit */int) (-(min((((/* implicit */unsigned int) ((1711208307) << (((/* implicit */int) (_Bool)0))))), (arr_24 [i_0] [i_0])))));
                }
                var_26 = ((/* implicit */_Bool) (+(max((67425696), (((/* implicit */int) arr_23 [i_1 + 2] [i_1 + 2] [i_0]))))));
                var_27 = (((_Bool)1) ? (((/* implicit */int) (signed char)9)) : (((/* implicit */int) (_Bool)1)));
                arr_32 [i_0] [i_0] [i_1] = ((/* implicit */int) ((3807720174U) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
            }
        } 
    } 
}
