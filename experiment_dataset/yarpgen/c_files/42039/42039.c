/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_2, (min(var_5, ((min(86, 87)))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_14 |= (0 * 2130039152);

                            for (int i_4 = 1; i_4 < 13;i_4 += 1)
                            {
                                arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [0] = 694584228;
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (max((arr_8 [4] [i_1] [1] [i_1] [i_0]), (max(((-(arr_8 [i_0] [i_1] [i_2] [i_2] [i_0]))), ((min((arr_8 [i_0] [i_1] [i_2] [i_1] [i_0]), var_7)))))));
                            }
                        }
                    }
                }
                var_15 += (((((87 ? ((17046464025954001777 << (268690537143674428 - 268690537143674372))) : (-127 - 1)))) ? ((min(-11694, 167))) : 2224));
            }
        }
    }
    #pragma endscop
}
