/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= 4277687171;

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_4 [i_0] = var_12;
        var_14 += (arr_3 [12]);

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 = (((arr_3 [i_0]) == ((((var_10 + 2147483647) << (((arr_6 [i_0] [i_1]) + 111)))))));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_16 = (min(var_16, (((((max(((var_9 ? var_11 : var_5)), ((17280125 ? var_8 : var_11))))) ? (((max(2251799813685184, (arr_1 [i_2] [i_1]))) + (arr_8 [i_0]))) : var_1)))));
                arr_9 [i_0] [1] [i_2] = (17280125 / 4277687171);
                arr_10 [i_2] [i_1] [i_1] [i_0] &= var_0;
                arr_11 [i_1] &= (arr_3 [i_1]);
            }

            for (int i_3 = 3; i_3 < 16;i_3 += 1)
            {
                var_17 = (min(var_17, (arr_13 [i_0] [i_1])));
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 18;i_5 += 1)
                    {
                        {
                            arr_18 [0] [i_1] [i_1] [i_1] [i_1] [i_0] [0] = (arr_14 [i_0] [i_0] [i_0]);
                            var_18 = (max(var_18, (~1)));
                            arr_19 [i_0] [3] [i_3] [i_4] [i_5] = (min((1 % var_12), var_9));
                            arr_20 [i_0] [i_5] [4] = ((max((arr_14 [i_3 - 3] [i_3 - 2] [i_3 - 2]), 2251799813685184)));
                            var_19 = (((0 && -86) % (((arr_17 [i_0] [i_1] [i_0] [i_4] [i_5]) ? 12004 : ((((arr_16 [i_0] [i_1] [9] [i_4] [i_5]) < 2807109286)))))));
                        }
                    }
                }
                var_20 = (((((-870197978 ? 18444492273895866431 : 0)))) ? (arr_14 [i_0] [16] [i_3]) : 22);
            }
        }
    }
    #pragma endscop
}
