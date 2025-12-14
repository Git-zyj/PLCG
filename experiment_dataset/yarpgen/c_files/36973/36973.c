/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 3051036187;

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_19 = ((459319791393347750 > (459319791393347750 - 63)));
        arr_2 [i_0] [i_0] = ((((((18446744073709551615 ? 1073741792 : 6953150127507929134))) ? (min(459319791393347750, var_11)) : 11493593946201622482)));
        var_20 = (arr_0 [i_0] [10]);
    }
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            {
                arr_7 [i_2] [i_2] [0] = ((!(arr_4 [i_1])));
                arr_8 [10] [i_2] [10] = ((((arr_5 [i_2] [i_2] [i_1]) ? (arr_5 [i_2] [i_2] [i_1]) : (arr_5 [i_2] [i_2] [i_1]))));
            }
        }
    }
    #pragma endscop
}
