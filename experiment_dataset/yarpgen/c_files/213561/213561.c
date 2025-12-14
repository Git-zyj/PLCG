/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213561
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = (-(max(3005655933337313546, 15441088140372238069)));
                arr_5 [i_0] [i_1] = ((((147 > (arr_2 [i_1 - 1] [i_1 + 1]))) ? var_12 : ((~((~(arr_1 [i_0] [i_0])))))));
            }
        }
    }
    var_16 = (min(var_3, (63234 >= 3058487226524138578)));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 25;i_6 += 1)
                        {
                            {
                                arr_17 [i_2] [i_3] [i_4] [i_2] [i_6] = (max(15441088140372238056, 15441088140372238069));
                                var_17 = ((255 << (!var_10)));
                                var_18 = (max(var_18, (((2566 ? var_1 : (((max((arr_8 [i_3]), 72)))))))));
                            }
                        }
                    }
                }
                var_19 = ((max(1, 1940226370935033266)));
                arr_18 [i_2] [i_2] = (max(((var_11 ? (-2147483647 - 1) : (!var_3))), 15841));
            }
        }
    }
    #pragma endscop
}
