/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197055
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197055 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197055
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (1979169251 / var_7);
    var_12 = (max(var_12, ((min(((((~0) > var_0))), -21308)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_13 = 21290;
                    var_14 = (arr_5 [i_0] [i_1] [i_2]);
                }
            }
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_15 = (((max((arr_1 [i_3]), (arr_1 [i_0]))) && ((max(-21296, (min((arr_4 [1] [i_0]), -21281)))))));
                    var_16 = (((((arr_3 [i_3]) * (arr_3 [i_4]))) * (((max(21281, (arr_11 [i_0] [i_3] [i_4])))))));
                    arr_13 [i_0] [i_0] [i_3] [i_0] = (22 == 164);
                    var_17 -= (min((max((arr_1 [i_3]), (arr_1 [i_0]))), (arr_10 [1] [12] [12])));
                }
            }
        }
        arr_14 [i_0] = ((!((!(arr_11 [i_0] [4] [i_0])))));
    }
    #pragma endscop
}
