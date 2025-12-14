/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221178
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221178 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221178
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 14;i_3 += 1)
                    {
                        {
                            var_13 = var_2;
                            arr_10 [i_2] [i_2] = ((min(var_2, (min((arr_6 [7] [i_2] [i_2 + 2] [i_2]), (arr_5 [i_0 - 3] [i_1] [0] [i_1]))))));
                            arr_11 [i_0] [i_2] [i_1] [8] = (max((arr_7 [i_3 - 3] [11] [i_3 + 1] [4] [i_3 - 2] [i_3 + 2]), (46 == 12)));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 16;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 16;i_5 += 1)
                    {
                        {
                            var_14 = (((!-6618349686656190728) < var_2));
                            arr_19 [i_0] [i_1] [i_1] [i_5] = ((((arr_9 [i_4] [i_0 + 1] [i_1] [i_5]) ? (arr_9 [i_0] [i_0 + 2] [i_4] [i_5]) : var_9)));
                            var_15 = ((arr_6 [i_0 + 2] [i_5] [i_0 - 1] [i_0 - 3]) ? (arr_6 [i_0 + 1] [i_5] [i_0 - 4] [i_0 - 2]) : ((((arr_6 [i_0 - 2] [i_5] [i_0 - 2] [i_0 + 2]) > var_2))));
                        }
                    }
                }
            }
        }
    }
    var_16 = (max(((-((max(-112, 32753))))), var_9));
    var_17 = (max(var_17, var_6));
    /* LoopNest 2 */
    for (int i_6 = 1; i_6 < 17;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 16;i_7 += 1)
        {
            {
                var_18 -= (min(((-((0 | (-32767 - 1))))), (min(-100, ((max(var_5, (arr_20 [14] [i_7]))))))));
                var_19 = (-31171 * 4294967290);
            }
        }
    }
    var_20 = var_9;
    #pragma endscop
}
