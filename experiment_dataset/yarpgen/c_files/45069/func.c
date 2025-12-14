/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45069
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45069 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45069
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
    var_19 = (!(((/* implicit */_Bool) var_11)));
    var_20 += ((/* implicit */unsigned short) var_17);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) arr_0 [i_0] [i_0]))));
    }
    var_22 = ((/* implicit */signed char) (((~(((/* implicit */int) ((signed char) var_0))))) << ((((((-(((/* implicit */int) var_6)))) + (153))) - (8)))));
}
