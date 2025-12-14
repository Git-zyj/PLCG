/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239292
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239292 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239292
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
    var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (-(((/* implicit */int) var_4)))))));
    var_15 = ((/* implicit */_Bool) var_9);
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 9; i_0 += 1) 
    {
        var_16 &= ((((arr_1 [8U]) / (((((/* implicit */_Bool) (unsigned short)63)) ? (arr_1 [(unsigned char)10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [0LL]))))))) * (arr_1 [(unsigned short)2]));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) arr_1 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) arr_4 [i_1]))));
        arr_5 [i_1] &= ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-34))));
    }
    for (unsigned short i_2 = 0; i_2 < 15; i_2 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) var_11);
        var_19 -= ((/* implicit */signed char) arr_7 [i_2] [i_2]);
    }
}
