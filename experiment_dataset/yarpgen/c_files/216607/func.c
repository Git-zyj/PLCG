/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216607
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */int) (signed char)-107);
        var_20 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_0])) && (((/* implicit */_Bool) ((var_10) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3)))))))))) == (((((/* implicit */_Bool) arr_1 [i_0])) ? (var_10) : (((arr_1 [i_0]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)12)))))))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] [i_1] = ((/* implicit */_Bool) max((var_10), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)3)))))));
        arr_8 [i_1] = ((/* implicit */short) ((((/* implicit */int) max((var_9), ((unsigned char)90)))) << (((((((int) var_2)) + (9468))) - (14)))));
    }
    for (short i_2 = 0; i_2 < 23; i_2 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) max((((((/* implicit */_Bool) arr_6 [i_2])) ? ((-2147483647 - 1)) : (var_6))), (var_16)));
        var_22 = ((/* implicit */unsigned short) ((unsigned char) ((unsigned char) max((2147483647), (var_6)))));
        var_23 = ((/* implicit */int) (unsigned char)6);
        var_24 = ((/* implicit */unsigned char) 2147483647);
    }
    var_25 |= var_1;
    /* LoopSeq 1 */
    for (short i_3 = 0; i_3 < 24; i_3 += 3) 
    {
        var_26 = ((/* implicit */_Bool) min((max((((/* implicit */long long int) (_Bool)1)), (((9223372036854775807LL) | (((/* implicit */long long int) ((/* implicit */int) var_14))))))), (max((min((((/* implicit */long long int) arr_13 [(unsigned char)6])), (-993031247279970177LL))), (((/* implicit */long long int) 2147483647))))));
        var_27 = ((/* implicit */long long int) max((var_27), (((/* implicit */long long int) min((((/* implicit */int) var_11)), (-1539437729))))));
    }
    var_28 = (-((~(((/* implicit */int) max((((/* implicit */signed char) var_18)), (var_14)))))));
}
