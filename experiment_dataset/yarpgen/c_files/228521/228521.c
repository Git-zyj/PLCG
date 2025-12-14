/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    arr_7 [18] [18] = ((((min((arr_6 [i_0] [12] [i_2]), (arr_5 [i_2] [i_1] [i_1] [18])))) ? ((-45 >> (((arr_1 [i_0]) + 48)))) : (min((~55860), (60979 == 14667)))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_14 += (-14657 ^ -131);
                                var_15 = -14666;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
