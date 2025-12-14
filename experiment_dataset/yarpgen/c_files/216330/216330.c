/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = 146;
        arr_3 [i_0] = var_2;
        arr_4 [i_0] = var_4;
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 15;i_2 += 1)
        {
            var_11 = (~(min(((min(127, 146))), ((5914117849202730557 << (var_4 - 3505575287))))));
            var_12 = (min(63488, 3004534365));
        }
        var_13 = ((((min(((max((arr_0 [i_1] [i_1]), var_0))), 12))) ? ((18446744073709551588 ^ ((min((arr_1 [i_1]), -1207435905))))) : ((18446744073709551603 >> (arr_1 [i_1])))));
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1)
    {
        var_14 = (((arr_1 [i_3]) ? var_5 : (max((((arr_0 [i_3] [i_3]) ? 20 : 18446744073709551600)), (var_4 ^ var_2)))));
        var_15 = ((1207435892 ? 112 : 1207435892));
    }
    /* LoopNest 2 */
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            {
                arr_18 [i_4] [i_5] [i_4] = ((min(9223372036854775807, (92 == 18446744073709551577))));
                var_16 = (max(var_16, (((((var_0 ? (arr_13 [i_4 + 1]) : (arr_13 [i_4 + 1]))) / ((min((arr_14 [i_4] [i_4 + 1]), 238))))))));
            }
        }
    }
    #pragma endscop
}
