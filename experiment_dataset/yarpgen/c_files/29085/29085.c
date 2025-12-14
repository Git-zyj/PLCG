/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29085
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29085 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29085
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 16;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1 + 1] [i_2] [i_1] = (((var_4 && -70368744177664) >> ((((min(43877, 60500))) - 43871))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_4] = 43855;
                                arr_14 [i_0] [12] [i_2] [1] = ((((max(21659, (var_6 << var_2)))) ? (max(var_4, 43886)) : ((((var_4 + 2147483647) << (43879 - 43879))))));
                            }
                        }
                    }
                    arr_15 [i_0] [i_1 + 3] [i_2] = (var_6 | var_7);
                }
            }
        }
    }

    /* vectorizable */
    for (int i_5 = 3; i_5 < 19;i_5 += 1)
    {
        arr_18 [i_5] [0] = ((((388883457518242764 << (var_6 - 52585))) <= 52773));
        arr_19 [i_5] [i_5] = 65535;

        for (int i_6 = 3; i_6 < 19;i_6 += 1)
        {
            var_13 = (min(var_13, ((-107 ? var_5 : ((2009009817 >> (12763 - 12752)))))));
            var_14 = ((20202 ? 255 : 0));
            arr_22 [i_5] [i_6 - 3] [i_6] = (21656 && 64020);
            arr_23 [i_6] [9] = (-1419352020 != var_7);
            arr_24 [i_6] [i_6] = var_2;
        }
    }
    for (int i_7 = 0; i_7 < 10;i_7 += 1)
    {
        arr_27 [i_7] = (min(((((min(64669, var_10))) > ((var_6 << (var_11 - 1486506227))))), ((((min(6, 10932530648830149894))) && ((max(var_8, var_10)))))));
        var_15 += (min((var_8 & var_12), var_11));
    }
    var_16 = (max(18197619035035114771, 0));
    #pragma endscop
}
