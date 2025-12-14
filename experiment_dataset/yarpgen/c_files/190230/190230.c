/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190230
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190230 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190230
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 += (min((max(((min(58, (arr_4 [i_0] [1] [1])))), (min(1, var_3)))), ((max((max((arr_4 [i_0 - 1] [6] [14]), var_8)), ((min((arr_1 [i_0] [i_0 + 3]), (arr_3 [i_0 + 2] [i_1 - 1])))))))));
                    arr_7 [i_2] [i_1] [i_2] = (min((max(((max(var_11, 3208257201847819487))), (max(var_5, 144115187807420416)))), (max(144115187807420424, 1048064))));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    var_14 = (max((max(-1, (min(-144115187807420394, (-32767 - 1))))), (max((max(41127, 3208257201847819504)), ((max((arr_5 [6] [16] [13]), (arr_12 [i_3] [i_4] [i_3] [i_3]))))))));
                    var_15 = (max((max((max(0, var_5)), (max(var_0, var_5)))), ((max(-3208257201847819495, -3208257201847819505)))));
                    var_16 = (max((max((min(0, var_0)), ((max(var_4, 3208257201847819504))))), ((max(((min(var_12, (arr_5 [i_3] [9] [5])))), (max((arr_1 [i_3] [i_3]), (arr_3 [14] [i_5]))))))));
                }
            }
        }
    }
    var_17 = max((min(((max(var_10, 602439704))), (max(var_6, var_3)))), ((min((min(1675274016, -107)), (max(0, 1))))));
    var_18 = (min((max((max(var_4, 3208257201847819487)), ((min(var_2, var_4))))), (max(((max(255, var_12))), (min(1, 3208257201847819531))))));
    #pragma endscop
}
