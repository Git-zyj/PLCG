/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20416
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20416 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20416
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((~((-var_8 ? ((1119784819 ? -29084 : 4828121446995229414)) : (!var_11))))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_15 = (arr_1 [i_0]);

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_1] [i_2] [i_3] = ((0 ? ((~(arr_7 [i_2]))) : var_3));
                        arr_13 [i_0] [i_2] [i_1] [i_1] [i_2] [i_3] = (((arr_7 [i_1]) ? (((18446744073709551615 ? 32767 : 3175182486))) : 2));
                        var_16 = ((~(~804042347)));
                        arr_14 [i_0] [i_1] [i_1] [12] &= 15506731189080337431;
                    }
                }
            }
            arr_15 [i_1] [i_0] = ((!(arr_10 [i_0] [i_0] [i_0 - 1] [i_0 + 1])));
            var_17 = arr_8 [i_0] [i_0] [i_0];
            arr_16 [i_0] [i_0] [i_0] = ((var_11 ? 2147483647 : (arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0])));
        }
    }
    var_18 |= var_11;
    #pragma endscop
}
