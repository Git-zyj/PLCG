/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (var_6 == var_6);
    var_12 = (min(var_12, var_8));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] = ((-(arr_0 [23])));
        var_13 = ((19 > (arr_1 [i_0])));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        var_14 = (min(var_14, -1677050062));
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 3; i_4 < 21;i_4 += 1)
                {
                    {
                        var_15 = (arr_7 [5]);

                        for (int i_5 = 0; i_5 < 22;i_5 += 1)
                        {
                            var_16 = arr_14 [i_4 - 1] [i_5] [i_4 + 1] [i_4 - 1] [i_4 + 1];
                            arr_15 [i_1] [i_1] [i_3] [i_4 - 3] [i_4] [i_5] = (((~(arr_12 [i_1] [i_1] [i_3] [i_1] [i_4] [i_5]))));
                            arr_16 [i_2] [i_2] [i_4] [i_5] = (((arr_13 [i_4] [10] [10] [i_4 - 1] [i_4 - 3] [i_4 - 1] [i_4 - 2]) & (arr_13 [i_1] [16] [i_4 + 1] [i_4 - 3] [i_4 - 3] [i_4] [i_4 - 3])));
                            arr_17 [i_5] [i_2] [i_2] [8] [i_3] [i_3] [1] = (arr_1 [i_5]);
                        }
                    }
                }
            }
        }
    }
    var_17 = (min(var_17, ((((~var_3) > (((var_8 <= var_9) ? (~var_1) : (((var_7 + 2147483647) << (var_8 - 165))))))))));
    #pragma endscop
}
