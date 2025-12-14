/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_10 = (-2147483647 - 1);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 0;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] = var_5;
                                arr_14 [1] [1] [i_0] = (((7016347309759197386 > -823479306) || (((-(arr_0 [4]))))));
                                arr_15 [3] [i_1] [i_2] [i_1] [i_4 + 2] [1] [i_3 + 1] = (arr_6 [i_2]);
                            }
                        }
                    }
                }
                var_11 ^= (((~(arr_1 [i_0]))));
                var_12 = ((-2462131682610874486 || 7016347309759197386) || (arr_8 [i_0] [i_0] [i_0] [i_0] [i_1] [6]));
            }
        }
    }
    var_13 = ((var_7 ? var_5 : 7016347309759197376));
    var_14 = (-32767 - 1);
    #pragma endscop
}
