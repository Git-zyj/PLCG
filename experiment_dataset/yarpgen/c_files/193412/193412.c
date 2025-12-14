/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193412
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_10 = (max(var_10, (((var_0 ? 10 : (min((((164612135 == (arr_6 [i_0])))), (min((arr_5 [i_0]), 4066091957134355708)))))))));
                var_11 = -6426516264424488838;
                var_12 = (max(var_12, var_9));
                var_13 = 7284097845334506760;
            }
        }
    }
    var_14 = ((((var_5 ? ((var_7 << (var_6 - 735570747240257428))) : (var_8 ^ var_7)))) ? (((((var_6 ? var_6 : var_7))) ? var_3 : var_9)) : var_3);
    #pragma endscop
}
