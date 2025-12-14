/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3604
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
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 3; i_1 < 13; i_1 += 2) 
        {
            {
                var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) (((~(2988217051U))) >> (((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) ((short) var_12)))))))))));
                arr_4 [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (((~(((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) || (arr_0 [i_0])))))))) + (3168269215841636307ULL)));
                arr_5 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) 2811611609457650137ULL))));
                var_17 = ((/* implicit */int) min((var_17), (((/* implicit */int) var_9))));
                var_18 = ((/* implicit */long long int) var_15);
            }
        } 
    } 
    var_19 = ((/* implicit */int) ((long long int) 4294967295U));
}
