/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48427
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48427 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48427
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 7;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            {
                                var_17 = (((!var_13) && ((-408766515 && ((((arr_12 [i_4] [4] [i_0] [i_0] [i_0] [i_0]) ? var_0 : (arr_7 [i_0] [i_1] [6] [i_1] [5]))))))));
                                var_18 = (max(var_18, (((1705642404592100990 - (min((min(var_14, var_3)), ((min((arr_4 [i_3] [8] [6]), (arr_5 [i_0])))))))))));
                                var_19 *= (min((min((((var_1 + (arr_7 [i_1] [i_2 - 3] [i_2 - 3] [i_1 + 1] [i_1])))), ((1 ? 39078 : 1705642404592100962)))), 1705642404592100990));
                            }
                        }
                    }
                }
                var_20 = (((var_0 && 604982528182476908) < (((!(arr_12 [0] [i_1 + 1] [i_0] [i_1] [i_1] [i_1]))))));
                arr_13 [i_0] [2] [i_1] |= (arr_4 [i_1] [i_1] [i_1 + 1]);
            }
        }
    }
    var_21 = var_7;
    var_22 = var_9;
    #pragma endscop
}
