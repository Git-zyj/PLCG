/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47029
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
    var_19 = var_15;
    var_20 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((_Bool) ((var_13) != (((/* implicit */long long int) ((/* implicit */int) var_11))))))), (min((((/* implicit */long long int) ((int) (_Bool)0))), (var_5)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 2) 
        {
            {
                var_21 = ((228778105) - (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))));
                arr_5 [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) -710347539)) || (((/* implicit */_Bool) (((~(-710347539))) >> (((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 79020301))))))))));
                arr_6 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_3)) != (((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0])))))) % (((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_0])) || (((/* implicit */_Bool) var_1)))), (((_Bool) arr_1 [i_0] [i_0])))))));
                var_22 = ((/* implicit */long long int) min((((int) arr_1 [i_1 + 2] [i_0])), (-76761110)));
                var_23 = arr_3 [i_0];
            }
        } 
    } 
}
