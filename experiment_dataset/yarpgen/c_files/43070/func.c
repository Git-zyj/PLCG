/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43070
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
    var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) var_9))));
    var_17 = ((/* implicit */_Bool) var_11);
    var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) var_10))));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_19 = var_8;
            var_20 = var_4;
            var_21 = ((/* implicit */unsigned short) var_9);
        }
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) var_14))));
        arr_6 [i_0] = ((/* implicit */long long int) var_12);
        var_23 = var_7;
        var_24 = ((/* implicit */unsigned char) var_13);
    }
    for (unsigned short i_2 = 3; i_2 < 20; i_2 += 1) 
    {
        var_25 = var_5;
        var_26 = ((/* implicit */int) var_0);
    }
    var_27 = ((/* implicit */int) var_15);
}
