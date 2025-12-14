/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219578
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_12 [i_4] [i_3 + 3] [i_4] [i_4] [0] [i_0] = -19;
                                arr_13 [i_4] = -15;
                                arr_14 [i_0] [i_4] [i_2] = 0;
                                arr_15 [i_0] [i_1] [i_1] [i_2] [13] [i_4] [i_4] = 36028794871480320;
                            }
                        }
                    }
                    var_18 = 24;

                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        var_19 = -15;

                        for (int i_6 = 0; i_6 < 18;i_6 += 1)
                        {
                            arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = -7463438012887891058;
                            arr_23 [i_0] [i_1] [i_2] [i_6] = -1824825379;
                            arr_24 [1] [i_5] = 62914560;
                            arr_25 [i_2] = 12668;
                            arr_26 [i_0] [i_1] [i_2] [i_2] [i_6] [i_6] = -110;
                        }
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_31 [i_0] [i_1] [i_2] [i_2] = 52868;
                        arr_32 [i_0] [10] [i_1] [i_2] [i_7] [i_7] = 30181;
                        var_20 = 852657479;
                    }
                    arr_33 [i_2] [i_2] [8] = -849484468882306692;
                    var_21 = 1;
                }
                arr_34 [15] [i_1] = 15;
                var_22 = 7463438012887891057;
                arr_35 [i_0] = 7126;
            }
        }
    }

    for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
    {
        var_23 = -8;
        var_24 = 1;
    }
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        var_25 = 65535;
        arr_43 [i_9] = 28772;
        var_26 = 60680;
        var_27 = -4679704285377351582;
    }
    #pragma endscop
}
