/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36992
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
    var_13 = ((/* implicit */signed char) -244513850);
    var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((short) (_Bool)1)))));
    var_15 = (+(var_2));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            {
                arr_6 [i_0] [i_1] = min((((/* implicit */int) (!(((16320LL) < (((/* implicit */long long int) var_8))))))), (((((/* implicit */_Bool) (~(7732333838642219404LL)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0]))))) : (var_5))));
                var_16 = ((/* implicit */short) arr_3 [i_1]);
            }
        } 
    } 
    var_17 &= ((/* implicit */long long int) (!(((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_7)) < (var_5))))) >= (((long long int) var_5))))));
}
