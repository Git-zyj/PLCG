/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192590
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192590 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192590
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = 115;
    var_18 = (var_11 == var_12);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_19 -= (min(((((((arr_0 [i_0]) ? var_10 : var_3)) < (arr_3 [i_0])))), (min((max(var_9, var_9)), 1))));
                            var_20 = (min(((min((-1 <= 255), var_11))), (min((arr_4 [i_0] [i_3]), (((~(arr_10 [0]))))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        {
                            var_21 ^= (arr_11 [12] [i_1] [i_1] [12]);
                            var_22 = -var_14;
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_6 = 2; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 22;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            {
                                var_23 -= ((((max((arr_13 [i_0 + 3] [i_1] [i_6 + 1]), (-32767 - 1)))) ^ (max(var_3, ((((arr_0 [13]) + var_6)))))));
                                var_24 = 92;
                            }
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 24;i_9 += 1)
                {
                    for (int i_10 = 2; i_10 < 21;i_10 += 1)
                    {
                        {
                            arr_30 [i_0] [i_0] [i_9] [i_0] = (min(var_16, (((!(arr_14 [i_10 + 2] [i_9] [3] [i_0] [i_0]))))));
                            arr_31 [i_0] [i_1] [i_10] = ((-1 ? 391841422 : 14));
                            var_25 = (max(((min(var_10, var_5))), (arr_0 [i_0 + 3])));
                            var_26 = ((((max(((max(var_10, (arr_25 [i_0] [i_10] [i_9] [i_10 - 2])))), var_6))) ? ((max(-20, 1332515005))) : (min(var_5, var_4))));
                            var_27 = (min(var_27, (~19)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
