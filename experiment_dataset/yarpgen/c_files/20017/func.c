/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20017
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                var_18 = min((var_4), (min((arr_3 [i_1]), (arr_0 [(_Bool)1] [i_1]))));
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_9 [i_0] [i_2] [i_2] [i_3] = (!(min((arr_4 [i_0] [i_0 + 1] [i_3]), (arr_4 [(_Bool)1] [i_0 + 1] [i_0]))));
                        arr_10 [i_3] [(_Bool)1] &= ((/* implicit */_Bool) min(((+(((/* implicit */int) (!(arr_8 [(_Bool)1] [i_1] [i_2] [i_1] [(_Bool)1])))))), (min(((-(((/* implicit */int) arr_4 [i_2] [i_1] [i_0])))), (((/* implicit */int) ((_Bool) (_Bool)1)))))));
                        var_19 &= (!(min(((_Bool)1), (arr_3 [i_1]))));
                        var_20 = ((((/* implicit */_Bool) (-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1]))))) || ((_Bool)1));
                    }
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_1] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) ((((/* implicit */int) min(((_Bool)1), (arr_12 [i_0 + 1] [i_0 + 1] [i_0])))) & (((/* implicit */int) (_Bool)1))));
                        arr_15 [i_0] [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((var_9) ? (((/* implicit */int) arr_0 [i_2] [i_1])) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((var_13) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_10)))) == (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1)))))))));
                        var_21 = ((/* implicit */_Bool) min((((/* implicit */int) ((((/* implicit */int) ((var_2) || ((_Bool)1)))) < (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))))), (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) min((arr_5 [i_4] [i_2] [i_2] [i_0]), (arr_0 [i_2] [i_2])))) : (((/* implicit */int) arr_2 [i_0 + 1]))))));
                    }
                    /* vectorizable */
                    for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
                    {
                        var_22 = (((_Bool)1) && (arr_2 [i_0 + 1]));
                        arr_18 [i_2] [i_2] [i_1] [i_0] [i_2] = var_1;
                    }
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) var_14))), (((var_13) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))));
                                var_24 = var_11;
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_25 = var_14;
}
