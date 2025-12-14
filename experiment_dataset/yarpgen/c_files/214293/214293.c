/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214293
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_11;
    var_20 = (min(var_20, 192));

    for (int i_0 = 1; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 + 1] = (arr_2 [i_0]);
        var_21 ^= 32399;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        var_22 = (((((~(arr_6 [i_1 + 1])))) ? 27244 : (~3865508910326740316)));
        var_23 = (arr_4 [i_1 + 1]);

        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            arr_9 [16] &= var_0;
            var_24 = 4294967272;
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 20;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 19;i_6 += 1)
                        {
                            {
                                var_25 *= -27245;
                                var_26 = (min(var_26, (!13)));
                                var_27 = (arr_17 [i_1] [12] [i_3] [i_4] [12] [i_1] [5]);
                            }
                        }
                    }
                    arr_18 [i_1] [i_3] = ((~(((351539104 ? (arr_7 [i_3]) : 3865933375)))));
                }
            }
        }
    }
    #pragma endscop
}
