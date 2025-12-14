/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214220
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214220 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214220
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_19;
    var_21 = ((-(var_18 == -13873)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_1] [i_2] = (arr_2 [i_0]);
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_22 = -1;
                                arr_18 [i_0] [0] [i_0] [i_1] [i_1] [i_4] = (max(var_13, (((-28203 >= ((min(var_1, (arr_14 [i_0] [i_1] [i_0] [8] [i_3] [i_4] [i_1])))))))));
                                arr_19 [5] [5] [i_1] [5] = (arr_16 [i_0] [i_0] [i_0]);
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] [3] = 1;
                    arr_21 [i_0] [i_1] = (i_1 % 2 == zero) ? (((16764364416712813515 != ((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((arr_17 [i_1 + 2] [i_1] [i_1] [i_1] [i_1]) - 17096)))))))) : (((16764364416712813515 != ((((arr_17 [i_1] [i_1] [i_1] [i_1] [i_1]) >> (((((arr_17 [i_1 + 2] [i_1] [i_1] [i_1] [i_1]) - 17096)) - 10448))))))));
                }
            }
        }
    }
    var_23 = ((1 >= (min(var_16, var_4))));
    #pragma endscop
}
