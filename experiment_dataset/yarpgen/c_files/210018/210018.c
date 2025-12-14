/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((~(min((((var_3 ? 1996946473 : var_8))), (min(var_11, 1894900611))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_19 = ((-(((arr_3 [i_1]) ? 49152 : var_5))));
                var_20 = (max(-var_8, (((arr_3 [i_1]) >> ((((var_10 ? var_6 : 18446744073709551592)) - 70938596))))));
            }
        }
    }
    var_21 = ((!((((((1996946473 ? 3872409143 : var_16))) ? (min(var_0, 9780567370150085543)) : (~var_14))))));

    for (int i_2 = 2; i_2 < 11;i_2 += 1)
    {
        var_22 = (((arr_3 [i_2 + 3]) / 22701));
        var_23 = (max(var_23, 7446418295058714358));
        var_24 = var_5;
        var_25 = (arr_4 [i_2 + 2] [i_2] [0]);
    }
    for (int i_3 = 3; i_3 < 15;i_3 += 1)
    {
        var_26 += ((-(!var_6)));
        var_27 = min((arr_2 [i_3 - 3]), (!18446744073709027328));
    }
    #pragma endscop
}
