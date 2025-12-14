/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_1] [i_1] = 1537177233;
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 24;i_3 += 1)
                    {
                        {
                            var_20 = ((-((max(7583, 28)))));
                            arr_11 [i_3] [i_3] [i_2] = 124520937668045988;
                            var_21 &= (12871557507847198728 <= 5575186565862352895);
                        }
                    }
                }
                arr_12 [i_1] [i_1] = (var_7 > var_2);
            }
        }
    }
    var_22 |= ((((-8338103759791313884 <= (9014123307732255800 % var_3)))));
    #pragma endscop
}
