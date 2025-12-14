/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225529
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225529 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225529
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, ((((((max(var_11, var_15))) ? -var_14 : var_3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_19 *= (max(((-((var_2 ? var_15 : 66)))), ((max((arr_6 [i_0] [i_0]), (arr_6 [i_2] [i_2]))))));
                                var_20 = (max(var_20, (((((((-1075049738 + 2147483647) >> (var_2 - 4984382970517401265))) >> ((((var_12 ? var_3 : var_10)) + 10115))))))));
                                var_21 = (arr_12 [i_2] [i_3] [i_2] [i_2] [i_2] [i_1] [1]);
                                arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] = 14312628543178440546;
                            }
                        }
                    }
                }
                var_22 = (4134115530531111055 | -11924);
            }
        }
    }
    #pragma endscop
}
