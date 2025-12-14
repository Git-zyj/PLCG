/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234323
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234323 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234323
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 17;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            var_15 = ((-((+(min((arr_12 [i_0] [i_1] [i_2] [i_3] [i_4] [i_2] [i_3]), var_11))))));
                            var_16 = var_2;
                        }
                        for (int i_5 = 0; i_5 < 19;i_5 += 1)
                        {
                            arr_17 [i_0] [i_1] [i_2] [1] [i_3 + 2] [i_1] = (max(((((arr_15 [i_3 - 2]) || (arr_15 [i_3 - 4])))), (arr_14 [i_3] [i_1] [i_3] [i_3 - 3] [i_3 + 1] [i_3 - 1])));
                            arr_18 [i_0] [i_1] [i_1] [i_2] [16] [i_3] [i_5] = (((max((arr_9 [i_0] [i_1]), var_0))));
                        }
                        var_17 = var_6;
                        arr_19 [i_1] = -4161223698729843456;
                    }
                }
            }
        }
        arr_20 [i_0] = var_10;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_24 [i_6] &= ((!((max((max(var_4, var_4)), 27131)))));

        /* vectorizable */
        for (int i_7 = 0; i_7 < 0;i_7 += 1)
        {
            var_18 = -371455991;
            var_19 = (0 <= (arr_22 [i_6] [i_6]));
        }
        var_20 = (max(var_11, ((~(arr_25 [i_6])))));

        for (int i_8 = 0; i_8 < 20;i_8 += 1)
        {
            var_21 += (((((arr_26 [i_6]) - (arr_26 [i_8]))) >= (((!(arr_26 [i_6]))))));
            var_22 = ((1 > (max((arr_22 [i_6] [10]), (arr_30 [i_6] [i_8])))));
        }
    }
    var_23 *= var_14;
    var_24 = (var_8 | var_12);
    #pragma endscop
}
