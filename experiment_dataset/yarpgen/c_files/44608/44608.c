/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44608
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44608 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44608
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= ((-var_2 ? ((var_7 ? (var_5 || -6525) : (var_16 && var_7))) : 0));
    var_18 ^= var_10;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_19 = (arr_2 [i_4]);
                                arr_14 [i_0] [i_1] [8] [i_0] [i_4] = (((((arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 2]) != (arr_8 [i_1 + 1] [i_1 + 2] [i_1 - 2]))) ? (((arr_8 [i_1 + 3] [i_1 + 3] [i_1 - 2]) - 16)) : ((((arr_8 [i_1 + 1] [i_1 + 3] [i_1 + 2]) && (arr_8 [i_1 + 1] [i_1 + 2] [i_1 + 2]))))));
                                var_20 += 15;
                            }
                        }
                    }
                    arr_15 [i_2] [i_0] [i_0] [i_0] = (((((-6525 == (arr_10 [i_1 + 3] [i_1 + 2] [i_1] [i_1] [i_1] [i_1])))) << ((((821215495 ? 1310235178 : (arr_3 [i_0] [i_1 - 1]))) - 1310235156))));
                }
            }
        }
    }
    #pragma endscop
}
