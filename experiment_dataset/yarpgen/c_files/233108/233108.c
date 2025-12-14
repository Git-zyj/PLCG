/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233108
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;
    var_13 = var_2;
    var_14 -= ((127 << (((-127 - 1) + 144))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_7 [i_1] [i_1] [i_1] [i_2] = arr_0 [i_0];
                    var_15 += (((arr_6 [i_2] [i_2 + 4] [i_2 - 1] [i_2]) ? (arr_6 [i_2 + 2] [i_2 + 2] [i_2] [i_2]) : (((!(arr_6 [5] [i_2 - 1] [5] [5]))))));
                }
                for (int i_3 = 0; i_3 < 13;i_3 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] = 18136084903898097191;
                                var_16 = -127;
                            }
                        }
                    }
                    arr_15 [i_1] = var_1;
                    arr_16 [i_1] [i_1] = -2537999234;
                }
                arr_17 [i_1] [i_1] [i_0] = ((((((var_11 || (arr_1 [i_1]))))) | 0));
                var_17 = (max((max(2147483640, -117)), ((((-127 - 1) >= 60174)))));
            }
        }
    }
    #pragma endscop
}
