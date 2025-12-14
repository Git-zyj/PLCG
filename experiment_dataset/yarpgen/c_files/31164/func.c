/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31164
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31164 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31164
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 3; i_3 < 16; i_3 += 4) 
                {
                    {
                        var_10 = ((/* implicit */unsigned int) max((var_10), (var_8)));
                        var_11 = ((arr_3 [i_2 + 1] [i_0 - 1]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1]))));
                        /* LoopSeq 3 */
                        for (int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            var_12 = ((/* implicit */_Bool) max((var_12), (((/* implicit */_Bool) var_8))));
                            var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) (-((((_Bool)1) ? (var_2) : (((/* implicit */unsigned int) var_9)))))))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            var_14 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_3 - 2] [i_3 - 1] [i_2 + 1] [i_0 - 3] [i_0 - 1])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))) : (var_0)));
                            var_15 = ((((/* implicit */unsigned int) 1804159301)) | ((+(var_0))));
                            var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_0 - 2]))));
                            arr_16 [i_5] [i_2] [i_3] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_0 - 3] [i_0 - 3] [i_3] [i_2] [i_5])) ^ (-73743381)));
                        }
                        for (int i_6 = 3; i_6 < 18; i_6 += 4) 
                        {
                            arr_19 [(_Bool)1] [16U] [i_2] [i_1] |= ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_6 - 1] [i_6]))))) : (((/* implicit */int) (_Bool)0)));
                            var_17 = (~(arr_2 [i_0 - 1]));
                            var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [(_Bool)1] [i_6 + 1] [i_3 + 3] [i_3 - 1] [i_2])) ? (arr_14 [i_6] [i_3 + 3] [i_3 + 3] [i_3 - 3] [i_3 - 3]) : (arr_14 [i_3] [i_3] [i_3 + 3] [i_3] [i_3]))))));
                        }
                        /* LoopSeq 3 */
                        for (int i_7 = 1; i_7 < 18; i_7 += 4) /* same iter space */
                        {
                            arr_22 [i_0] [i_1] [i_1] [15U] [i_3] [i_3] [i_7] = ((/* implicit */_Bool) -1804159301);
                            var_19 = ((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)));
                        }
                        for (int i_8 = 1; i_8 < 18; i_8 += 4) /* same iter space */
                        {
                            arr_25 [(_Bool)1] [(_Bool)1] [i_3] [3U] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(-1250279506)))) ? (var_4) : (((/* implicit */int) arr_10 [i_3] [i_0 - 1] [i_2 - 1] [i_0 + 1]))));
                            var_20 -= var_7;
                            var_21 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_5) : (arr_0 [i_0])))));
                        }
                        for (unsigned int i_9 = 2; i_9 < 18; i_9 += 4) 
                        {
                            arr_28 [i_0] [i_0] [i_0] [i_3] = ((/* implicit */_Bool) ((((/* implicit */int) ((_Bool) (_Bool)1))) << (((/* implicit */int) (!(((/* implicit */_Bool) 12U)))))));
                            arr_29 [i_9] [i_9] [i_3] [i_3] [i_3] [i_1] [i_0] = var_4;
                            var_22 = ((/* implicit */unsigned int) (((+(var_1))) == (((1804159301) - (((/* implicit */int) arr_17 [i_0] [i_2] [i_2] [i_3] [i_3]))))));
                        }
                        /* LoopSeq 2 */
                        for (int i_10 = 0; i_10 < 19; i_10 += 4) 
                        {
                            var_23 = ((/* implicit */int) ((_Bool) 1804159301));
                            var_24 |= ((((/* implicit */_Bool) arr_9 [i_0 - 3] [i_1] [i_2 + 1] [i_3 + 2] [12])) && (((/* implicit */_Bool) arr_9 [i_0 + 1] [i_2] [i_2 - 1] [i_3 + 2] [i_3 + 2])));
                            arr_33 [i_0] [i_0] [i_0] [i_0 - 3] [i_10] [i_0] [18] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) -1804159311)) ? (((/* implicit */int) var_6)) : (arr_2 [i_0 - 3])));
                        }
                        for (int i_11 = 0; i_11 < 19; i_11 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((int) var_0));
                            var_26 = ((arr_18 [i_3] [i_0 - 3] [i_3]) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_8));
                            arr_37 [i_11] [i_11] |= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) / (1203150982)));
                            var_27 ^= ((/* implicit */unsigned int) ((arr_10 [i_1] [i_3 - 3] [i_1] [i_3]) ? (((/* implicit */int) (_Bool)1)) : (var_1)));
                        }
                    }
                } 
            } 
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((int) arr_7 [i_0 - 2] [i_1])))));
            var_29 = ((/* implicit */int) var_0);
        }
        var_30 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_34 [(_Bool)1]), (var_1)))) ? (((/* implicit */unsigned int) ((int) arr_11 [10]))) : (max((((/* implicit */unsigned int) ((int) var_0))), ((((_Bool)1) ? (((/* implicit */unsigned int) var_3)) : (var_2)))))));
        var_31 = ((/* implicit */int) (~(((unsigned int) var_1))));
        arr_38 [i_0 - 2] [i_0 - 2] = ((int) (-(((unsigned int) var_6))));
    }
    var_32 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
}
