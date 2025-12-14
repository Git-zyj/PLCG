/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [19] = var_7;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    arr_10 [i_2] = ((+(min((~var_7), (max(var_5, var_2))))));
                    var_10 += (((var_4 ? var_6 : var_2)));
                    var_11 -= max(8191, (((!var_7) ? 13357417762023707183 : (max(13357417762023707181, -107)))));
                    arr_11 [i_0] [i_0] [i_2 + 3] |= ((var_0 ? (max(var_2, ((var_8 ? var_2 : var_3)))) : (((min((min(-87, -11086)), var_3))))));
                    arr_12 [i_0] [i_0] [i_0] [i_0] = var_6;
                }
            }
        }
        var_12 = (max(var_12, (((~(max((max(var_6, var_3)), var_6)))))));
    }
    var_13 = 18446744073709551605;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 17;i_4 += 1)
        {
            {
                var_14 = (((max(var_4, var_4))));
                var_15 += ((((min(var_7, var_1)))));
                arr_19 [i_3] [i_3] &= (min(((max((min(var_1, var_2)), (max(var_2, var_0))))), var_6));
            }
        }
    }
    var_16 |= min(var_5, var_8);
    var_17 -= var_7;
    #pragma endscop
}
