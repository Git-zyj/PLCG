/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222240
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222240 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222240
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
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned long long int i_0 = 1; i_0 < 19; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */int) var_9);
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) var_16))));
        arr_3 [i_0] [i_0] = ((/* implicit */signed char) var_15);
    }
    for (unsigned long long int i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) var_17);
        arr_9 [i_1 - 1] = ((/* implicit */short) max((((/* implicit */unsigned int) min((((/* implicit */signed char) var_9)), (var_4)))), (min((((/* implicit */unsigned int) var_2)), (var_15)))));
        var_21 = min((((/* implicit */unsigned short) var_16)), (max((var_8), (((/* implicit */unsigned short) var_9)))));
        var_22 = ((/* implicit */unsigned int) var_7);
    }
    for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */long long int) min((var_0), (((/* implicit */unsigned short) max((var_6), (((/* implicit */short) min((((/* implicit */unsigned char) var_9)), (var_5)))))))));
        arr_12 [i_2] = ((/* implicit */_Bool) var_0);
        arr_13 [i_2] = ((/* implicit */signed char) var_13);
    }
    for (unsigned long long int i_3 = 1; i_3 < 19; i_3 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) var_3))));
        arr_18 [i_3] = ((/* implicit */signed char) var_0);
        arr_19 [i_3 - 1] [i_3] = ((/* implicit */long long int) var_17);
        var_25 = ((/* implicit */int) var_17);
    }
    var_26 = ((/* implicit */long long int) var_14);
    var_27 = ((/* implicit */unsigned long long int) var_17);
}
