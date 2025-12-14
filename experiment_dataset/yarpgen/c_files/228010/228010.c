/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_11 ^= (19 + -var_0);
                                var_12 = (max(var_2, ((~((48 ? var_6 : var_2))))));
                                var_13 = (((max((arr_5 [16] [7] [i_2 + 1] [i_4 - 2]), ((var_9 ? 19 : var_0)))) == 0));
                            }
                        }
                    }
                }
                var_14 = (~65516);
            }
        }
    }
    var_15 = ((((min((min(0, 18446744073709551615)), var_4))) || var_6));
    #pragma endscop
}
