/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 *= ((((!(var_0 + var_15))) ? (min((var_10 / var_11), (min(15, -2063153003723983999)))) : (((2063153003723983983 ? -2063153003723983999 : -2063153003723983999)))));
    var_18 = (((max(var_10, (var_11 / var_6)))) ? var_8 : var_2);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_19 ^= (min(var_16, (min((var_4 + var_9), var_7))));
                var_20 = (min(var_20, ((max(-2063153003723983999, (-2063153003723983999 != 2063153003723984013))))));
            }
        }
    }
    #pragma endscop
}
