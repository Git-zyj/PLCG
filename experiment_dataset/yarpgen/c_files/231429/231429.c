/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231429
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_10 -= ((233 & (arr_2 [1] [i_0])));

            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                var_11 -= (arr_5 [i_0] [i_1] [i_1]);
                var_12 = (arr_3 [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_3 = 2; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_13 = (0 / 2147483647);
                            arr_13 [i_0] [i_0] [i_0] [i_2] [i_4] = 0;
                            var_14 = (1 & 1);
                            var_15 *= ((((((arr_3 [i_1] [i_2]) + var_6))) ? (arr_9 [i_4 - 1] [i_1] [i_3] [i_3 + 3]) : -var_4));
                        }
                    }
                }
                var_16 = (((((-8998469516352098700 ? -1482 : 28250))) ? 0 : 1));
            }
        }
        var_17 = (max(var_17, ((min((((3374011139 ? (22035 & 35059) : 43504))), (max((arr_1 [14]), var_1)))))));
        var_18 &= (max(var_0, ((-((-(arr_0 [16])))))));
        arr_14 [i_0] = ((((((~(arr_2 [i_0] [i_0]))) | -var_0)) % (-1456940963352925964 | var_7)));
    }

    /* vectorizable */
    for (int i_5 = 0; i_5 < 24;i_5 += 1)
    {
        var_19 -= -1;
        var_20 = ((var_9 ? 48 : (9248 <= 920956167)));
        arr_17 [i_5] = (!(((var_2 ? var_7 : (arr_16 [i_5])))));
        arr_18 [i_5] = arr_16 [20];
        var_21 = (max(var_21, (~var_4)));
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            {
                var_22 = (((((var_5 & var_9) & ((min(var_3, var_9)))))) ? var_9 : var_1);
                var_23 = (min(var_23, (((!((min(((var_4 % (arr_7 [i_6] [i_7]))), (arr_1 [2])))))))));
                var_24 = (min(var_24, ((max((~920956157), ((max(4095, 1482))))))));
            }
        }
    }
    #pragma endscop
}
