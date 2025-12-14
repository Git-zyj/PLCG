/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25360
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
    var_14 = var_0;
    var_15 = ((/* implicit */long long int) min((var_15), (max((min((var_0), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) var_9))))));
    var_16 = ((/* implicit */int) var_3);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */long long int) (~(arr_0 [i_0])));
        var_18 = (~(arr_0 [i_0]));
        var_19 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0]))))), ((+(arr_0 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_20 ^= ((/* implicit */short) arr_0 [i_1]);
        var_21 = ((/* implicit */short) (+(((/* implicit */int) arr_1 [16U]))));
    }
}
