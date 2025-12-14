/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31106
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31106 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31106
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
    var_16 += ((/* implicit */unsigned short) (-((((!(var_5))) ? (((/* implicit */int) ((_Bool) var_2))) : ((((_Bool)0) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (_Bool)1))))))));
    var_17 = max((((/* implicit */unsigned short) var_0)), (var_1));
    var_18 &= ((/* implicit */unsigned short) min((((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_5)))), (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (_Bool)1)))) / (((/* implicit */int) var_12))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = var_2;
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) ((((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) arr_0 [i_2] [i_1])) : (((/* implicit */int) var_5)))))))) & (((/* implicit */int) max((var_1), ((unsigned short)9239))))));
                                var_21 *= ((_Bool) arr_11 [i_0] [i_1 - 1] [(unsigned short)9] [i_1 - 1] [i_4]);
                                var_22 = ((/* implicit */_Bool) min((var_22), (arr_5 [(unsigned short)3] [i_1 - 1] [i_1])));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
