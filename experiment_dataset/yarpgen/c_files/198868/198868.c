/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198868
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198868 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198868
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (2147483641 / 1163263185);
    var_13 = (((((var_8 & var_9) ? var_7 : (((4914649206267606038 ? var_6 : 1163263185))))) > (((var_3 ? ((var_7 ? var_3 : var_8)) : 2147483641)))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_14 = (((arr_2 [i_2]) ? 0 : (arr_8 [i_0] [i_1] [i_1])));
                    var_15 = (min((min(4914649206267606038, var_2)), ((((((arr_1 [i_0]) ? -1290589643 : var_5)) <= 13532094867441945601)))));

                    for (int i_3 = 0; i_3 < 17;i_3 += 1)
                    {
                        var_16 = ((((-(arr_7 [i_0] [i_0] [i_2]))) - (arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0])));
                        arr_11 [i_3] [i_2] [i_2] [i_1] [i_0] = ((-2147483631 / ((((-1464904218199104509 == (arr_6 [i_0 - 1]))) ? (arr_10 [i_0] [i_1] [i_2] [i_3]) : (-2147483647 - 1)))));
                        arr_12 [i_0] = (~1464904218199104507);
                        arr_13 [i_2] [i_2] [i_2] [i_2] |= -553322531;
                    }
                }
            }
        }
    }
    var_17 = var_1;
    #pragma endscop
}
