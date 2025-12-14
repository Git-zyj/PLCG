/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242330
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242330 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242330
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_0, var_9));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_18 *= (arr_11 [i_0 - 1] [i_1] [i_3] [i_4]);
                                var_19 = (max(var_19, ((((min((max(var_13, -125)), ((min(-121, (arr_8 [i_3] [i_3] [i_2] [6] [3])))))) >= ((((((56 ? -125 : (arr_1 [i_0 - 1] [i_1 - 1]))) <= ((-125 ? 3626828533 : 3626828527)))))))))));
                                var_20 = (min(var_20, ((((-(~1745920321)))))));
                                var_21 = (((!-123) ? ((~(arr_5 [i_0] [i_0 + 1]))) : (arr_0 [i_4 + 1] [i_4 - 2])));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 12;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 12;i_6 += 1)
                        {
                            {
                                var_22 &= ((!(((((arr_13 [i_0] [i_5] [i_2] [i_0]) ? 13805818403179220040 : (arr_9 [i_0] [i_1] [i_2] [i_0] [i_0] [i_5]))) != ((min(var_11, (arr_3 [i_0] [i_0] [i_0]))))))));
                                arr_16 [i_0 - 2] [i_0 - 2] [i_1] [i_2] [2] [i_6] = (arr_9 [i_0 - 1] [i_0 - 1] [i_2] [i_5] [i_0 - 1] [i_2]);
                                var_23 |= (min((((!(arr_15 [i_1 + 3] [i_0 - 2] [i_0 - 2])))), (((arr_6 [i_0 - 1]) ? (((arr_9 [i_0 + 1] [i_0 + 1] [i_1] [i_0 + 1] [i_5] [i_5]) ? 1264252468583464787 : 101)) : -562805437))));
                            }
                        }
                    }
                }
            }
        }
    }
    var_24 = (min(var_24, var_1));
    #pragma endscop
}
