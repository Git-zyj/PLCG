/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248050
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_8;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_13 = 0;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_6 [i_0] [i_1] [i_1] = -5823674763711635219;
                    arr_7 [i_1] = 1;
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 18;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 18;i_4 += 1)
            {
                {
                    var_14 = 0;
                    arr_16 [i_3] [i_3] [i_3] [i_3] = 1;

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        var_15 = 8384512;

                        for (int i_6 = 2; i_6 < 15;i_6 += 1) /* same iter space */
                        {
                            var_16 = -8076080740771157186;
                            var_17 = 10;
                        }
                        for (int i_7 = 2; i_7 < 15;i_7 += 1) /* same iter space */
                        {
                            var_18 = 3843901826;
                            var_19 += 1;
                        }
                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_20 = 1;
                            arr_27 [i_8] [i_3] [i_3] [i_0] = 8987652806487251513;
                        }
                        for (int i_9 = 0; i_9 < 18;i_9 += 1)
                        {
                            var_21 = 2501;
                            arr_32 [i_3] [i_3] [i_3] [i_3] [i_3] = 2120067459801408970;
                            var_22 = -63;
                        }
                        var_23 = -65;
                    }
                }
            }
        }
    }
    for (int i_10 = 0; i_10 < 10;i_10 += 1)
    {
        arr_37 [i_10] [i_10] &= 2684519340387045303;
        arr_38 [i_10] [i_10] = -265421262;
        arr_39 [i_10] [i_10] = -62;
    }
    #pragma endscop
}
