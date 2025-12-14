/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21817
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        var_15 = ((((min((~9052312796046383001), (-9223372036854775807 - 1)))) ? var_14 : (arr_0 [i_1 - 1])));
                        var_16 = (arr_3 [i_3]);
                    }
                    arr_13 [i_0 + 1] [i_1] [i_2] |= 0;
                    var_17 = (min(var_17, -4955973289787623862));
                    arr_14 [i_0 - 1] [i_1] [i_2] [i_2] = ((((((arr_0 [i_2]) ? (arr_1 [6] [6]) : (~var_13)))) ? var_7 : var_11));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 4; i_6 < 16;i_6 += 1)
            {
                {
                    var_18 = ((var_1 ? (~15360) : ((((!(arr_5 [1] [i_5])))))));
                    /* LoopNest 2 */
                    for (int i_7 = 3; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 20;i_8 += 1)
                        {
                            {
                                var_19 = (max(var_19, (1712022349 || 15360)));
                                arr_26 [i_4] [i_5] [i_7] [i_6] [1] [i_5] [i_8] = 2033503223;
                                var_20 = var_11;
                                arr_27 [8] [i_7] [i_5] [i_6 + 4] [3] [i_8] [i_8] = (arr_19 [i_6] [i_7] [i_8]);
                            }
                        }
                    }
                    var_21 = (((((var_0 | ((max(var_2, var_8)))))) ? (arr_25 [i_4] [i_5] [3] [i_6 + 3] [12] [i_4]) : (arr_12 [i_4] [i_5] [i_6 - 1] [i_6])));
                }
            }
        }
    }
    #pragma endscop
}
