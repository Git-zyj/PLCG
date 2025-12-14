/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36518
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 2) 
    {
        arr_3 [i_0] = (~(max((min((var_17), (var_17))), (((/* implicit */long long int) var_14)))));
        arr_4 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            arr_7 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) 0)) ? ((-2147483647 - 1)) : (33554432)));
            arr_8 [i_0] = ((/* implicit */short) ((var_8) ? (((/* implicit */int) arr_6 [i_0])) : (((/* implicit */int) var_15))));
            arr_9 [i_0] [i_1] = ((/* implicit */unsigned char) (+((-(((/* implicit */int) arr_0 [i_1] [i_0]))))));
        }
        arr_10 [(signed char)4] = ((/* implicit */unsigned char) var_6);
    }
    var_19 = (+(var_13));
}
