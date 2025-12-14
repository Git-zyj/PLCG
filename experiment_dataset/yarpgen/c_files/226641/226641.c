/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226641
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_18 = (min((((((~(arr_7 [i_0] [i_1] [i_2])))) ? ((~(arr_6 [i_0]))) : (arr_9 [i_1 - 1] [i_1 + 1] [i_1] [i_3] [i_3]))), ((40714 ? (((arr_3 [i_1] [i_1]) ? (arr_11 [i_1] [i_2]) : (-9223372036854775807 - 1))) : (arr_8 [i_0] [i_1 + 1])))));
                            var_19 = 4294967285;
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        {
                            var_20 = (min(var_20, (((((min((arr_10 [i_1 + 1] [i_1 + 3] [i_0]), (arr_13 [i_4] [i_4])))) ? (!32104) : var_3)))));

                            for (int i_6 = 0; i_6 < 14;i_6 += 1)
                            {
                                arr_21 [i_1] [i_1] [i_4] [i_5] [i_1 + 4] = 21;
                                var_21 = (((((((((arr_17 [i_0] [0] [i_4] [i_1] [i_5] [i_6]) < -1))) == (arr_3 [i_1] [i_1])))) ^ 19586));
                            }
                        }
                    }
                }
                var_22 = (((((11453095711768015773 - 19698) << -18414)) < (((0 / (max(10, -4)))))));
            }
        }
    }
    var_23 = (min(var_23, ((min(var_15, ((((max(4, var_8))) ? (4294967285 ^ 1681682030) : (((min(var_3, -50)))))))))));
    var_24 = (max(45963, (min(20536, (var_10 * -20537)))));
    #pragma endscop
}
