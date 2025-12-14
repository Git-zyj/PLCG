/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233335
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
    var_20 = ((/* implicit */int) min((var_20), (var_19)));
    var_21 = var_13;
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        var_22 = ((/* implicit */short) (-(((/* implicit */int) (!(arr_0 [i_0 + 1]))))));
        arr_2 [i_0] [9] = ((/* implicit */long long int) (-((-(((/* implicit */int) arr_0 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        arr_7 [i_1] = ((/* implicit */short) arr_4 [i_1]);
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned int) arr_3 [i_1]);
        arr_9 [i_1] [i_1] = ((/* implicit */signed char) (((~((-2147483647 - 1)))) | (((/* implicit */int) arr_3 [i_1]))));
        var_23 = ((/* implicit */long long int) arr_3 [i_1]);
    }
    /* vectorizable */
    for (short i_2 = 1; i_2 < 16; i_2 += 4) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) (-(arr_11 [i_2 + 3] [i_2 + 3]))))));
        var_25 = ((/* implicit */signed char) arr_12 [i_2 + 1] [i_2 + 1]);
    }
    for (signed char i_3 = 0; i_3 < 16; i_3 += 4) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */long long int) (~(-2147483636)));
        var_26 -= ((/* implicit */short) (~(arr_13 [i_3])));
        var_27 = arr_13 [i_3];
    }
}
