/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211531
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            arr_4 [i_0] [0] [0] = -446586243;
            var_19 = ((-(arr_1 [i_0 - 1] [i_1])));
            arr_5 [i_0 - 3] = (42 ^ 39347);
        }
        for (int i_2 = 1; i_2 < 12;i_2 += 1) /* same iter space */
        {
            var_20 = (((arr_2 [i_2 + 1] [i_0 + 2]) ? -var_7 : ((~(arr_2 [i_2] [i_2])))));
            var_21 = (-9223372036854775807 - 1);
        }
        for (int i_3 = 1; i_3 < 12;i_3 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 1;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 13;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 13;i_6 += 1) /* same iter space */
                        {
                            var_22 += (arr_1 [i_4] [i_4]);
                            var_23 = -9223372036854775780;
                            arr_20 [7] [i_3] [i_3] [i_5] [i_6] = (arr_13 [i_0] [2]);
                            var_24 = (min(var_24, (!1)));
                        }
                        for (int i_7 = 0; i_7 < 13;i_7 += 1) /* same iter space */
                        {
                            arr_23 [i_4] [i_4] [i_0] [i_4] [i_4] = 30125;
                            var_25 = 1;
                        }
                        var_26 = (min(var_26, -4115498902364737519));
                        arr_24 [i_0] [i_0] [i_0 - 3] [i_0 - 3] = ((-(arr_0 [i_0])));
                        var_27 = var_13;
                    }
                }
            }
            var_28 = ((1 ? 279223176896970752 : ((6643027000850548974 + (arr_15 [i_0] [i_3 + 1] [i_3] [i_3 + 1])))));
        }
        arr_25 [8] [8] = (((arr_16 [i_0 + 1] [i_0] [i_0 - 2] [i_0] [i_0] [i_0] [i_0]) + 21850));
        arr_26 [i_0] [5] = ((((48328 ? 2147483136 : (arr_22 [i_0] [i_0 - 1] [i_0 - 1] [i_0] [i_0]))) << (((arr_17 [i_0 - 2] [i_0 - 2] [i_0 + 2]) - 1))));
        var_29 = (arr_9 [i_0 - 1] [i_0 - 1] [i_0]);
    }
    var_30 = var_9;
    #pragma endscop
}
