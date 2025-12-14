/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236467
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(var_16, (((var_4 <= (1 <= var_9))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 = (min(((-(arr_5 [i_2 + 1] [i_1 + 2] [i_2 + 2] [i_2]))), (arr_5 [i_2 + 1] [i_1 - 3] [i_1 - 2] [i_2])));
                    var_20 = (min(8062962046667442259, -8062962046667442259));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_21 = (max((max(243, (39624 + 11))), ((((2147483647 || var_6) && var_2)))));
                                arr_13 [i_1] [i_1] [i_1] [i_3] [i_4] [i_3] [i_3] = (max((-40 - 56497), (((8062962046667442263 == 0) % 64))));
                                var_22 = (min(var_22, ((((max((min(var_7, (arr_0 [i_2 + 2]))), -8062962046667442259)) >> (-var_3 + 6094842125279459606))))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
