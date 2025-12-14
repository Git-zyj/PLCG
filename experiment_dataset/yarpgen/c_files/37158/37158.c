/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37158
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37158 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37158
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = (((3967233129 == 1274515359) ? (max((arr_0 [i_0]), (arr_2 [i_0] [i_0]))) : ((((arr_2 [i_0] [i_0]) ? (arr_0 [i_0]) : -7294)))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            var_11 = (~var_8);
            var_12 -= (max((((-(arr_1 [i_1 - 1])))), (~3020451945)));
            var_13 = (min(var_13, -4568));
        }
    }
    for (int i_2 = 2; i_2 < 20;i_2 += 1) /* same iter space */
    {
        var_14 = (((arr_1 [i_2]) ? ((max(var_4, var_4))) : -9));
        arr_8 [i_2] = (max(120, 274877906943));
        var_15 |= -3;
    }
    for (int i_3 = 2; i_3 < 20;i_3 += 1) /* same iter space */
    {
        var_16 = (~3);
        arr_13 [i_3 + 1] [i_3] = -81;
    }
    for (int i_4 = 2; i_4 < 20;i_4 += 1) /* same iter space */
    {
        var_17 = (max(var_17, (((!(((1023 ? 1023 : 0))))))));
        arr_17 [i_4] = (max((var_4 && 10831956649100795249), (max((!-8766794326874074026), 191))));
    }

    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        var_18 = ((-(arr_18 [i_5] [i_5])));
        var_19 = 1023;
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 23;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 20;i_7 += 1)
            {
                {
                    var_20 ^= -274877906943;
                    arr_25 [i_6] [i_6] [i_6] = (var_8 && var_0);
                }
            }
        }
    }
    var_21 = (max(var_4, (max((((var_0 + 2147483647) >> (var_1 + 158668438))), ((max(-24351, 0)))))));
    var_22 = 3836176185;
    #pragma endscop
}
