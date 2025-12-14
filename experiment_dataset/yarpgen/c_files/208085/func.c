/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208085
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
    var_20 = ((/* implicit */unsigned char) var_3);
    var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) var_11))));
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_8)) : (var_11)))) ? (((/* implicit */int) var_10)) : (var_11)));
    var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_18) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned long long int) var_18)) : (var_17)))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            var_24 = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_1]) : (((/* implicit */unsigned long long int) arr_1 [18] [i_1]))));
            var_25 = ((/* implicit */signed char) var_9);
            arr_6 [i_0] [i_0] = ((/* implicit */short) arr_4 [i_0] [i_0]);
            var_26 = ((((/* implicit */_Bool) -57263157)) ? (((/* implicit */int) (short)-30747)) : (((/* implicit */int) (short)1)));
        }
        for (unsigned char i_2 = 3; i_2 < 23; i_2 += 2) 
        {
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_3 [i_2 - 3])) ? (var_17) : (((/* implicit */unsigned long long int) arr_5 [19] [i_2] [i_2 + 1]))));
            arr_11 [i_0] [i_2] = ((/* implicit */short) var_3);
        }
        arr_12 [i_0] = ((/* implicit */unsigned char) var_15);
        arr_13 [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0]);
    }
}
