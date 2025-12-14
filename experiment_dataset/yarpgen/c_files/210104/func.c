/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210104
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
    var_18 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) var_15)), (var_17)));
    var_19 += var_14;
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 20; i_1 += 4) 
        {
            {
                arr_6 [i_0 - 2] [i_0 - 2] [i_0 - 2] = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_1)) ? (arr_3 [i_0 - 1]) : (arr_3 [i_0 - 1]))), (((arr_3 [i_0 - 1]) / (arr_3 [i_0 - 1])))));
                var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */unsigned long long int) 5906938461236973681LL)) ^ (2919280688407664486ULL)))))));
                var_21 = ((/* implicit */long long int) arr_2 [i_0] [i_0 - 1] [i_0]);
            }
        } 
    } 
    var_22 = ((/* implicit */unsigned char) var_5);
    var_23 = ((/* implicit */signed char) (short)30423);
}
