/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245416
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
    var_10 = ((/* implicit */int) var_2);
    var_11 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned short)64302))))) <= (((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 2; i_0 < 13; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 15; i_1 += 3) 
        {
            {
                var_12 = (~(max((((/* implicit */unsigned long long int) arr_2 [i_0 + 3] [i_1 + 1])), (var_9))));
                var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_6 [i_0] [(unsigned char)12] [i_0]))))) : (((((/* implicit */long long int) ((((/* implicit */int) (short)28672)) ^ (var_6)))) * (((((/* implicit */long long int) ((/* implicit */int) (signed char)53))) & (-2058744230922941269LL)))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) var_7);
    var_15 = ((/* implicit */int) var_1);
}
