/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4101
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4101 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4101
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_4;
    var_21 |= var_16;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_22 = var_18;
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        {
                            var_23 = (min(var_23, ((((arr_0 [1] [i_3]) ? (((-118 ? var_1 : 0))) : (--123))))));
                            arr_10 [i_1] [7] [3] = (arr_7 [i_0] [i_1]);
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_19 [i_0] [i_1] [14] [i_4] = 1;
                            var_24 = (((16017 ? 126 : 0)));
                            var_25 = (min(var_25, (arr_8 [11] [0] [i_4] [i_5])));
                            arr_20 [i_4] [i_4] [i_4] = (1 >= 4);
                            arr_21 [i_4] [i_1] [i_4] [i_1] [i_5] = (((((arr_13 [i_4 - 1] [i_4 - 1]) - (arr_7 [i_4 + 1] [i_4 + 1]))) < ((-(min((arr_4 [i_4] [i_4]), (arr_5 [i_0] [i_0] [9] [1])))))));
                        }
                    }
                }
                var_26 = (max(var_26, (((-(arr_3 [7] [3] [17]))))));
            }
        }
    }
    var_27 = (-((((24 ? var_15 : 4)))));
    #pragma endscop
}
