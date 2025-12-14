/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47488
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {

                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            arr_11 [7] = 3633392477;
                            arr_12 [i_4] [i_4] [i_2] [i_1] [i_4] = ((((~(arr_4 [i_2 + 1] [i_1]))) ^ (arr_7 [i_1] [i_1] [i_3] [i_4])));
                            arr_13 [i_2] [i_0] [i_2] [i_2] [i_2] = ((((((((!(arr_10 [i_0] [i_1] [i_3] [i_4])))) / ((max((arr_3 [i_1]), (arr_3 [i_4]))))))) - (max(-7024739713036440384, 1))));
                            var_14 = var_8;
                        }
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            var_15 = ((!(((115 * ((max(1, var_3))))))));
                            var_16 &= (arr_5 [i_1] [i_2] [i_3] [15]);
                            arr_16 [19] [i_1] [i_1] [i_1] [i_1] |= 1;
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            arr_19 [i_0] [i_3] [i_2] [i_6] [i_3] = 2672395331;
                            var_17 = ((!(((-(arr_9 [i_2 - 4] [i_2 - 3] [i_2 - 1] [i_2 + 1]))))));
                            arr_20 [i_0] [0] [i_6] = (((arr_4 [i_2] [i_2 - 4]) >= (arr_17 [i_3] [i_3] [i_6] [i_3] [i_3] [i_2])));
                        }
                        var_18 ^= (min((arr_7 [i_0] [i_1] [i_2] [i_3]), var_5));
                    }
                    var_19 = ((133 >= ((min((arr_14 [i_1] [i_1] [i_2] [i_2] [i_2 - 2] [i_2] [i_2 - 3]), ((max(128, (arr_18 [i_0] [i_0] [i_0] [i_0] [i_0])))))))));
                }
            }
        }
    }
    var_20 = (~var_9);
    #pragma endscop
}
