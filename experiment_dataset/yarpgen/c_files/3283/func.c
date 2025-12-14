/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3283
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
    var_14 -= ((/* implicit */_Bool) (+(max((((/* implicit */int) var_13)), (((((/* implicit */int) (_Bool)0)) << (((/* implicit */int) (_Bool)0))))))));
    var_15 = max((var_4), ((_Bool)1));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */_Bool) ((((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) << (((/* implicit */int) min(((_Bool)1), ((_Bool)1)))))) << (((/* implicit */int) (_Bool)1))));
                /* LoopSeq 2 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
                {
                    var_16 = ((/* implicit */_Bool) max((((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) == (((/* implicit */int) (_Bool)1))))) << (((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_3 [i_2 + 1] [i_1] [i_1])) + (((/* implicit */int) var_0))))));
                    /* LoopSeq 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        var_17 = ((/* implicit */_Bool) ((arr_6 [i_2 + 1]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((_Bool)0), (arr_3 [i_2 + 1] [i_2 + 1] [i_2 + 1]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_2 + 1] [i_3] [i_4] = arr_4 [i_0];
                            var_18 = ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)))))))) && (((/* implicit */_Bool) min(((+(((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [i_0] [(_Bool)1])))), (((/* implicit */int) max((arr_8 [i_0] [i_1] [i_2 + 1]), ((_Bool)0))))))));
                            var_19 = ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) arr_3 [i_2 + 1] [(_Bool)1] [i_2])) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> ((((~(((/* implicit */int) var_9)))) + (20)))))));
                            var_20 = ((/* implicit */_Bool) max((var_20), (arr_9 [(_Bool)1])));
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_21 = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1]))));
                        /* LoopSeq 3 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_22 ^= (_Bool)0;
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_0] [i_1] [i_2 + 1])) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (_Bool)0))))));
                            arr_19 [i_0] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_0] [(_Bool)1] [i_0] [i_0] [i_0] = arr_12 [i_0] [i_1] [i_0] [i_5] [i_5] [i_0];
                            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) ((((/* implicit */int) arr_17 [i_0] [i_2 + 1] [i_7] [i_7] [i_7] [i_7] [(_Bool)1])) ^ (((/* implicit */int) arr_17 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 + 1] [i_2 + 1])))))));
                            arr_24 [i_0] [i_0] [i_0] = (_Bool)0;
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_29 [i_0] [i_5] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_11 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_0] [i_2 + 1]))));
                            arr_30 [i_5] [i_5] [i_2 + 1] [i_5] [i_8] [i_0] [(_Bool)1] = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                        }
                    }
                    var_25 = arr_0 [i_0] [i_1];
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_33 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                    var_26 &= ((/* implicit */_Bool) min((((/* implicit */int) var_13)), (max((((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (((_Bool)1) && ((_Bool)1))))))));
                    var_27 = (_Bool)1;
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
        {
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                {
                    var_28 = ((/* implicit */_Bool) (((-(((/* implicit */int) min((var_9), ((_Bool)1)))))) / (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))));
                    var_29 *= max(((_Bool)1), (max((var_6), (arr_2 [i_12]))));
                }
            } 
        } 
    } 
}
