/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246894
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] = ((-((-(!-1933150629)))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 13;i_3 += 1)
                    {
                        {
                            var_12 = 9223372036854775798;
                            var_13 = (max(var_13, (~7483686555588987172)));
                            var_14 ^= 1933150629;
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    var_15 += ((~(min((~1), -9))));
                    var_16 = (!-9);
                    var_17 = (max(var_17, ((min(-464622849, ((max(-13, 2254066900))))))));
                    arr_15 [i_0] [i_1] [i_4] = 268435455;
                }
            }
        }
    }
    var_18 = (((~(max(983353566, 31207)))));
    var_19 = 56119;
    var_20 = (max((max((min(5, 2254066899)), 1933150629)), (((~(!85))))));
    var_21 = -983353565;
    #pragma endscop
}
