/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203360
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
    var_19 |= ((/* implicit */_Bool) var_17);
    var_20 = ((/* implicit */long long int) var_18);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */short) var_11);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 4; i_1 < 7; i_1 += 1) 
        {
            arr_7 [i_1] = ((/* implicit */unsigned int) var_0);
            var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) var_4))));
            arr_8 [i_1] = ((/* implicit */short) var_16);
        }
        var_22 = ((/* implicit */_Bool) var_18);
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) var_12))));
        arr_9 [i_0] = ((/* implicit */unsigned char) var_9);
    }
    for (unsigned int i_2 = 1; i_2 < 9; i_2 += 1) /* same iter space */
    {
        arr_12 [i_2 + 1] = ((/* implicit */unsigned int) var_17);
        var_24 += ((/* implicit */short) min((((/* implicit */long long int) var_12)), (min((var_10), (((/* implicit */long long int) var_14))))));
        arr_13 [i_2 - 1] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((var_18), (var_16)))), (min((var_11), (min((((/* implicit */unsigned long long int) var_14)), (var_11)))))));
    }
    for (long long int i_3 = 0; i_3 < 19; i_3 += 3) 
    {
        var_25 = ((/* implicit */unsigned long long int) var_9);
        var_26 = ((/* implicit */short) min((((/* implicit */unsigned short) var_9)), (var_4)));
        var_27 = ((/* implicit */long long int) var_9);
    }
    var_28 = ((/* implicit */int) var_12);
}
