/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249063
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((var_0 / (var_1 || 37))));
    var_11 = ((2581286040 ? var_7 : var_4));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = ((1484349555 ^ (((1713681239 ? (arr_3 [i_0 + 1]) : 1288)))));
                var_13 = (1713681253 ^ 9223372036854775807);
                var_14 = (((!((min(1, (arr_0 [13])))))) ? ((((!((!(arr_1 [i_0]))))))) : (min(((var_5 ? 209 : var_4)), (arr_6 [i_0] [i_1]))));
                arr_7 [0] [0] [i_1] = (-(((2581286056 < (((29616 << (((-13453 + 13474) - 8)))))))));
            }
        }
    }
    var_15 = 2581286040;
    #pragma endscop
}
