/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52383
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52383 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52383
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0 + 1] = var_3;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_0] = 3367862992;
                            arr_14 [i_0] [i_0] [i_2] [i_3] = (((!520093696) >= ((((min(3345163462, 4294967295))) ? 1419241735 : 14))));
                            var_16 = max(520093696, (arr_1 [i_0]));
                            var_17 = (arr_3 [4] [i_0 + 1] [i_0 + 1]);
                            var_18 = arr_3 [i_0 - 1] [i_1 + 3] [i_1 + 3];
                        }
                    }
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 0; i_4 < 18;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    {

                        for (int i_8 = 0; i_8 < 18;i_8 += 1)
                        {
                            var_19 = (~(~var_0));
                            var_20 ^= (1635803940 ? (arr_21 [i_8] [i_6 - 1] [i_6 - 1]) : ((3395427564 / (arr_29 [i_4] [i_5] [i_6] [i_6] [i_5] [i_7]))));
                        }
                        arr_31 [i_4] [i_4] [i_4] [i_4] = (((arr_18 [i_5] [i_7] [i_6 - 2]) || (arr_18 [i_5] [i_4] [i_6 + 2])));
                        arr_32 [1] = ((-(((3774873580 < (arr_15 [i_5]))))));
                        arr_33 [7] [i_5] [i_5] [i_5] = ((-(!3345163460)));
                        var_21 = (min(var_21, ((((arr_15 [i_6 - 2]) < (arr_15 [i_5]))))));
                    }
                }
            }
        }
        var_22 = arr_26 [i_4];
    }
    #pragma endscop
}
