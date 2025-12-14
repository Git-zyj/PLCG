/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((max((arr_0 [i_0 + 1]), (arr_0 [i_0 - 3])))) / (~18446744073709551614)));
                var_15 = (max(var_15, (((max((23440 > 42093), (min(var_5, 4032))))))));

                for (int i_2 = 1; i_2 < 24;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                arr_12 [i_2] [i_2] [i_2] [6] [i_2] = 46809;
                                var_16 = ((!(((-(arr_3 [i_2 + 1] [i_2] [i_4]))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_1] [i_2] = (984589735553893434 || -1);
                    arr_14 [i_2] = (min(((((arr_11 [i_2] [i_2 - 1] [i_2] [i_2] [i_2]) ? (arr_11 [i_2] [i_2 + 1] [i_0] [i_1] [i_0]) : (arr_11 [i_2] [i_2 - 1] [i_2] [i_0] [i_1])))), 10656176861359541397));
                }
                var_17 = var_14;
                var_18 = ((+(((var_3 <= var_13) * (32 && 23452)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 9;i_6 += 1)
        {
            {
                arr_22 [3] = var_13;
                var_19 = (arr_0 [i_5]);
                var_20 = ((~(arr_16 [i_5 - 1])));
                arr_23 [i_6] [i_5] [i_5] = var_7;
                var_21 = ((max((min((arr_9 [i_5] [i_6] [i_5] [7]), (arr_9 [1] [0] [i_6] [0]))), (arr_3 [i_6] [i_6 - 2] [i_5 + 2]))));
            }
        }
    }
    var_22 = ((var_9 && ((max(((7679992458016653869 ? -9315 : 699415799357269923)), -1518457077464988870)))));
    #pragma endscop
}
