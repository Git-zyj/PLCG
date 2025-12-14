/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_12 = (1 < 1);
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    arr_7 [i_0] = (((~-1285506659) > (!var_3)));
                    arr_8 [i_0] [i_1] [i_0] = (arr_4 [i_0 - 1]);
                    var_13 = 1899867925;
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_14 = (min(10227647317234437779, 1));
                                var_15 = (arr_4 [i_0 - 2]);
                                var_16 = (min(var_16, var_2));
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 0; i_5 < 23;i_5 += 1)
    {
        var_17 = (max(var_17, (-4908897142882398948 - var_9)));
        var_18 = (arr_15 [i_5]);

        for (int i_6 = 0; i_6 < 23;i_6 += 1)
        {
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 23;i_8 += 1)
                {
                    {

                        for (int i_9 = 1; i_9 < 20;i_9 += 1)
                        {
                            var_19 = ((1 != (~-9019691396483214143)));
                            var_20 = (((1 + 9019691396483214143) % (var_9 < var_2)));
                        }
                        var_21 = -9019691396483214143;
                        arr_27 [i_5] = (var_2 * var_1);
                        var_22 *= (var_3 <= var_6);
                    }
                }
            }
            var_23 = (((arr_26 [i_5] [i_5] [i_5] [i_6] [i_6] [i_6] [i_6]) & (((arr_24 [i_5] [i_6] [i_6] [i_5] [i_6] [i_6]) - (arr_16 [i_6] [i_5])))));
            var_24 = (min(var_24, (arr_24 [i_5] [i_6] [7] [i_5] [i_5] [i_6])));
            var_25 *= (arr_26 [i_5] [i_5] [1] [9] [i_6] [i_5] [21]);
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 23;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 23;i_11 += 1)
            {
                {
                    arr_33 [i_5] [i_10] = (arr_26 [i_5] [i_10] [i_10] [4] [i_11] [i_11] [9]);
                    var_26 = (var_3 ? var_1 : (~-7160750289356190757));
                }
            }
        }
    }
    var_27 = (max(var_27, var_7));
    #pragma endscop
}
