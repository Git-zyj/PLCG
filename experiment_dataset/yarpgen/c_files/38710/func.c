/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38710
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38710 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38710
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
    var_19 = var_1;
    var_20 = var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                arr_5 [i_1] = ((int) (+(((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
                arr_6 [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((arr_3 [i_1]) + (var_13)))) ? (((((/* implicit */_Bool) arr_3 [i_1])) ? (var_15) : (arr_3 [i_0]))) : (1755457088));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [19] = (((((_Bool)1) || (var_2))) ? ((+(arr_0 [i_0]))) : ((-(((/* implicit */int) ((signed char) arr_3 [i_0]))))));
                            arr_13 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */int) (_Bool)1)), (1755457088)))) ? (min((((/* implicit */int) var_17)), (var_0))) : (((/* implicit */int) var_2)))));
                            arr_14 [i_0] [i_1] [i_2] [i_3] |= (signed char)41;
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) var_0);
}
