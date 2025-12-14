/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35299
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
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */signed char) 9223372036854775807LL);
        arr_4 [i_0] = ((/* implicit */long long int) (short)7635);
        arr_5 [i_0] = ((/* implicit */short) var_13);
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_19 = ((/* implicit */short) var_9);
        arr_10 [i_1] = ((/* implicit */long long int) var_4);
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            arr_13 [i_2] = (signed char)75;
            arr_14 [i_1] [i_1] [i_2] = (short)7635;
            arr_15 [i_2] [i_2] [i_2] = ((/* implicit */signed char) var_4);
        }
        var_20 = ((/* implicit */signed char) (short)32754);
    }
    var_21 = ((/* implicit */short) -1007820865662758016LL);
    var_22 = var_10;
    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (short)-7636))));
    var_24 *= (short)7646;
}
