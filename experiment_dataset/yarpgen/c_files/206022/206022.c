/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206022
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206022 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206022
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= 2147084300;
    var_20 = var_18;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    arr_8 [i_1] [3] [i_2] [i_1] = var_13;
                    arr_9 [i_1] [i_1] [19] = max(var_11, (arr_4 [i_0] [17]));
                }
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_21 = ((!688179301) ? 79 : (arr_1 [i_0]));
                    arr_13 [i_1] = (~var_11);
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    var_22 = (((max(((((arr_5 [11] [11] [i_4]) >= var_16))), (arr_6 [i_1])))) ? (arr_11 [i_4] [10] [i_0]) : (((max((arr_12 [12] [24] [3]), (arr_5 [i_4] [i_1] [10]))) % (arr_0 [i_0]))));
                    arr_17 [i_1] [i_1] = (arr_6 [i_0]);
                }
                arr_18 [i_1] = (arr_5 [i_0] [i_1] [i_1]);
            }
        }
    }
    #pragma endscop
}
