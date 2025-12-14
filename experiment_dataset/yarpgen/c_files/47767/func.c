/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47767
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
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_13 = ((/* implicit */_Bool) min(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */int) arr_0 [i_0] [i_1])) / (((/* implicit */int) arr_0 [i_0] [i_1]))))));
                                arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) var_1)) * (((min(((_Bool)1), ((_Bool)1))) ? (((arr_3 [i_2]) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_6 [i_1] [i_2])))) : (((((/* implicit */int) var_12)) * (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_0] [i_0]))))))));
                                var_14 = ((/* implicit */_Bool) min((var_14), (((((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_1] [i_2] [(_Bool)1] [i_4])) >= (((/* implicit */int) arr_5 [i_0] [i_1] [i_3]))))) >= (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : ((+(((/* implicit */int) arr_2 [i_0] [i_1]))))))))));
                                var_15 = ((/* implicit */_Bool) min((((/* implicit */int) min(((_Bool)1), ((_Bool)1)))), (((arr_3 [i_0]) ? (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_3] [i_0])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_2] [i_0] [i_4]))))));
                                var_16 = ((/* implicit */_Bool) max((var_16), (((((/* implicit */int) arr_10 [i_1] [i_1] [(_Bool)1] [i_1] [i_1])) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_2] [i_2])) & (((/* implicit */int) var_12))))))))))));
                            }
                        } 
                    } 
                    var_17 = arr_3 [i_0];
                }
            } 
        } 
    } 
    var_18 = var_1;
}
