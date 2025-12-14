/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38454
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38454 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38454
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_14 = (max(var_14, ((min((((970827532 | ((-1667158730 ? 255 : 3324139764))))), 17554540390532510846)))));

        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            arr_5 [i_0] = (min(970827532, 17554540390532510846));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_15 = (min(var_15, 3324139764));

                        for (int i_4 = 3; i_4 < 23;i_4 += 1)
                        {
                            arr_14 [i_2] [i_1] [i_1 + 2] = -408498645;
                            var_16 = var_6;
                            var_17 -= ((-1 - 892203683177040770) * (arr_11 [16] [i_1] [16] [i_2] [i_2] [i_4]));
                        }
                    }
                }
            }
        }
        arr_15 [i_0] |= ((((((-var_10 >= ((5283475560187794467 * (arr_12 [5] [1]))))))) | (min(3006776638, 3324139763))));
    }
    var_18 = (max(var_18, var_11));
    #pragma endscop
}
