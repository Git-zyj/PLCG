/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 |= -1002071504;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (!786432);
                var_19 = ((!(((~(~2760426458937819498))))));
            }
        }
    }
    var_20 = var_4;

    /* vectorizable */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        arr_9 [i_2] = (4294180861 & 18014398509481983);
        var_21 = (max(var_21, (+-166)));
        arr_10 [i_2] = 4294180861;
        arr_11 [i_2] = 4294180849;
    }

    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 17;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 17;i_5 += 1)
            {
                {
                    arr_21 [i_3] [i_4] [14] = ((!15686317614771732134) && 2760426458937819481);
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 14;i_7 += 1)
                        {
                            {
                                var_22 = (min(var_22, (((!(11093856739470400447 && 84))))));
                                var_23 = ((~(!24394)));
                            }
                        }
                    }
                    var_24 = (min(var_24, (~31355)));
                }
            }
        }
        var_25 = (max(var_25, (((!(-127 - 1))))));
        var_26 = ((~(1937625809 ^ 2760426458937819498)));
    }
    #pragma endscop
}
