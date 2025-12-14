/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236699
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236699 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236699
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (unsigned int i_1 = 3; i_1 < 17; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 1) 
                    {
                        {
                            var_18 = ((/* implicit */int) arr_3 [i_0] [(unsigned char)9] [i_0]);
                            var_19 = ((/* implicit */int) var_3);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_20 = var_14;
                            arr_12 [i_0] [i_1] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? ((+(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_2 [i_4]))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_1 + 3] [i_4]))));
                            var_21 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_1 - 2] [i_4] [i_5]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (((((/* implicit */_Bool) (+(2034405033)))) ? (((/* implicit */int) var_17)) : (((/* implicit */int) var_0))))));
    var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) (-2147483647 - 1))) ? (var_10) : (((/* implicit */int) max((var_7), (((/* implicit */signed char) (_Bool)1))))))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (var_10))))))))));
}
