/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24046
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_16 = (!206);
                var_17 = ((((~((-231795962 ? 4725075227758660845 : -42)))) != (((((~var_6) || (arr_4 [i_0] [i_0])))))));
                arr_5 [i_1] = (~(arr_2 [i_0 - 2]));
                var_18 += ((!(!34)));
            }
        }
    }
    var_19 += ((~(((!(var_10 * var_0))))));
    var_20 -= (max((((((var_3 ? var_3 : var_5)) * var_3))), var_15));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_21 = (max(var_21, var_11));
                    var_22 &= (arr_12 [21]);
                    arr_17 [14] [14] [i_2] [i_4] = (min(((max((arr_14 [i_2 - 1] [i_3]), (arr_14 [i_2 - 1] [i_3])))), (-231795970 / 3739261177833354983)));
                    var_23 &= (arr_8 [i_2]);
                    var_24 = (arr_15 [i_2 + 2] [i_2]);
                }
            }
        }
    }
    #pragma endscop
}
