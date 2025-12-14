/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += var_3;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_18 = (((arr_5 [i_1 + 2] [i_1 + 2] [i_1]) ? (arr_5 [i_1 + 2] [3] [i_1]) : ((0 ? -26 : 6676550079348665847))));
                    arr_7 [i_2] [i_1] [i_0] = (arr_4 [i_0]);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 21;i_4 += 1)
        {
            {
                arr_13 [i_3] [16] = (min((((var_3 ? (arr_10 [i_3 + 3]) : (arr_10 [i_3 + 3])))), (min((arr_12 [i_3 + 3]), (arr_12 [i_3 + 3])))));
                var_19 = (max(var_19, ((1 ? 53193 : ((11700098758360517992 ? 4118391751 : 53193))))));
            }
        }
    }
    #pragma endscop
}
