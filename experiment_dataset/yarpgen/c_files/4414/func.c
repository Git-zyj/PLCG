/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4414
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
    var_10 = ((/* implicit */unsigned short) max((((/* implicit */int) var_0)), (min(((-(((/* implicit */int) (unsigned short)23902)))), (((/* implicit */int) (unsigned short)23902))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */long long int) arr_3 [i_0] [i_1] [i_0]);
                arr_4 [(unsigned short)23] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)23902), (((/* implicit */unsigned short) ((_Bool) 3941384348431776801LL))))))) : (arr_2 [i_0])));
            }
        } 
    } 
    var_12 = (!(((/* implicit */_Bool) (unsigned short)41634)));
    var_13 = ((/* implicit */long long int) var_4);
    var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) var_0))));
}
