/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24959
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [14] = (max(268435455, 3475));

        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            var_19 = (min((!0), 0));
            arr_6 [i_1] [i_0] = (min((min(1, -2293664978267069613)), 1065806432));
            arr_7 [i_0] [i_0] [i_1] = ((-(~1)));

            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 23;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        {
                            arr_14 [i_4] [i_3] [i_1] [i_1] [i_1] [i_4] = (max((max((min(17557826306048, 1)), (1 >> 1))), ((max(((min(64, 241))), (min(103, 882)))))));
                            arr_15 [i_4] [1] [i_3] [i_0] [i_0] [i_1 + 2] [i_4] = 1;
                            arr_16 [i_1] [i_1] [i_1] [i_4] [1] [i_1] = (min(((min(4290, (max(541360104, 1))))), 3));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_5 = 2; i_5 < 24;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 23;i_6 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((~((max(((min(0, 0))), 32746))))))));
                            arr_21 [i_0] [i_0] [i_2] [i_5] [i_6] = ((~((min(1, 95)))));
                        }
                    }
                }
                arr_22 [i_0] [i_2] [i_0] = (max(((min((3762 ^ 192), (1 % 2621750459)))), (min(-80, ((max(105, 1)))))));
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 24;i_7 += 1)
                {
                    for (int i_8 = 1; i_8 < 22;i_8 += 1)
                    {
                        {
                            arr_27 [i_0] [i_0] [i_2] [i_7] [i_7] = ((-(min(8154700171265391823, 1))));
                            var_21 = (max(var_21, ((min((min(52131, 1)), 1)))));
                            var_22 = (((min(12, 1))));
                        }
                    }
                }
            }
            arr_28 [i_0] [i_1] = (((!174667899) && (((194 & ((min(1, 13412))))))));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            arr_31 [i_9] [23] = -1;
            var_23 = (max(var_23, (-174667899 == 3199109591605251924)));
            arr_32 [i_9] = (-34 <= 44);
        }
    }
    var_24 += var_13;
    var_25 = var_17;
    #pragma endscop
}
