/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_14, (!var_2)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_9 [i_2] = (arr_6 [i_2] [i_1] [9]);
                    var_20 = (((arr_1 [i_1 - 2]) != ((((arr_1 [i_1 - 1]) >= var_11)))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 7;i_4 += 1)
        {
            {
                var_21 *= (var_5 > -65536);
                var_22 = var_12;

                /* vectorizable */
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_23 = (min(var_23, var_18));
                    var_24 = (max(var_24, (((-((4294967295 / (arr_15 [1] [8]))))))));
                    arr_21 [i_3] [i_3] [i_5] = (arr_14 [i_4 + 4] [i_4] [i_4 - 1]);
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    var_25 = (max(var_25, (arr_1 [i_3])));
                    arr_25 [i_3] = arr_18 [i_4];
                }
                var_26 = (min(var_26, (+-4294967292)));
            }
        }
    }
    var_27 = (var_5 <= 4294967292);
    var_28 = ((0 >> (87 - 83)));
    #pragma endscop
}
