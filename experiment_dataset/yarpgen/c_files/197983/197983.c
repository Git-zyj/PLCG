/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197983
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197983 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197983
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_12 = (max(1, ((~(min(4294967295, 1))))));
        var_13 = 68;
    }
    for (int i_1 = 2; i_1 < 24;i_1 += 1)
    {
        arr_7 [i_1] = -342981217583750664;

        for (int i_2 = 0; i_2 < 25;i_2 += 1)
        {
            var_14 = (~((-342981217583750679 ? 255 : ((-342981217583750680 ? var_9 : 209)))));
            /* LoopNest 3 */
            for (int i_3 = 1; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    for (int i_5 = 3; i_5 < 22;i_5 += 1)
                    {
                        {
                            arr_21 [i_1] [i_2] = ((-(max(((var_0 ? 1 : 342981217583750679)), 88))));
                            arr_22 [i_2] [12] [12] [22] [i_5 + 3] [i_4] [12] &= 1;
                        }
                    }
                }
            }
            var_15 = (min(67, (--579820554)));
            var_16 += (max((min(0, ((var_2 ? var_1 : 46958)))), ((((max(-342981217583750680, -8562731169032066107)) == 187)))));
        }
    }
    var_17 = ((-24 ? (min((var_9 >= var_7), (~8346393959749344254))) : ((((min(-820870187, 29))) ? (((min(0, 0)))) : ((-20 ? 8346393959749344254 : -1616936074))))));
    #pragma endscop
}
