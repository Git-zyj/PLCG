/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28090
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        var_16 = (((((var_15 ? 48 : -1))) ? var_1 : ((-8182124646376847711 + (arr_0 [i_0] [i_0 - 1])))));
        var_17 -= (((((-9223372036854775807 - 1) || (-9223372036854775807 - 1))) ? (arr_2 [i_0]) : (min(var_10, 8182124646376847699))));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_18 = ((-9223372036854775807 - 1) ? 8182124646376847710 : 65535);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                {

                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_13 [i_4] [i_2] [i_2] [i_2] [i_2] [0] = ((var_13 ? (((min(var_0, 363007490)) ^ (arr_1 [i_3] [i_1]))) : (((((((arr_9 [i_4] [i_2] [i_1]) / (arr_12 [i_3])))) ? (min(-8182124646376847711, 1023)) : (1 * 0))))));
                        var_19 -= (!0);
                    }
                    var_20 = (arr_2 [i_2]);
                    arr_14 [i_1] = (min((min((var_2 && 234881024), (min(-7796, (-9223372036854775807 - 1))))), (((-1 ? 2147483647 : 0)))));
                }
            }
        }
        arr_15 [i_1] = (min((((-9223372036854775807 - 1) * var_13)), 0));
    }
    var_21 = var_15;
    #pragma endscop
}
