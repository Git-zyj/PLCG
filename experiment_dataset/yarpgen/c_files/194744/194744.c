/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194744
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194744 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194744
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((var_3 > var_4), (!var_7)));
    var_13 += (((((var_6 - var_7) ? ((var_5 ? var_8 : var_5)) : var_8))) ? ((var_6 ? ((min(var_8, 3272670220))) : var_10)) : (((((min(var_10, var_0)) + 9223372036854775807)) << (var_7 - 2887710189))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = -var_10;
                var_14 -= ((-(((var_2 + var_6) * ((var_7 ? 0 : 202))))));
                var_15 = (((((((arr_1 [i_0]) < 60811)) ? var_5 : (var_9 - var_6))) % (((var_0 ^ (arr_4 [i_0] [i_1]))))));
            }
        }
    }
    var_16 += (var_8 - -4294967291);
    #pragma endscop
}
