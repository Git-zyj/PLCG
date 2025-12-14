/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((6336204001725811508 ? 1436 : -76)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((min(0, 16887574713840114618)), -91));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_11 [i_0] [i_1] [i_1] [i_1] [i_1] = 71;

                            for (int i_4 = 3; i_4 < 12;i_4 += 1)
                            {
                                arr_15 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_1] [5] [11] [i_0] = 41;
                                var_21 = (min(var_21, (((33554400 << (33554400 - 33554369))))));
                            }
                            for (int i_5 = 0; i_5 < 13;i_5 += 1)
                            {
                                var_22 = (min(var_22, 357610144));
                                var_23 |= ((-70 ? 4294967295 : (2039748929 * 6512938806069539550)));
                            }

                            for (int i_6 = 2; i_6 < 11;i_6 += 1)
                            {
                                var_24 &= (0 && -1);
                                arr_21 [i_0] [i_0] [i_2] [i_2] [i_2] = 3145728;
                                var_25 = -79;
                                arr_22 [i_0 - 3] [11] [1] [i_0] [i_6 + 2] [i_2] [i_2] = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
