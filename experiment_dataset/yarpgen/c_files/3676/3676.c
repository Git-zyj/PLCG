/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3676
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -14042;
    var_11 = 1;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (~67);
                arr_6 [i_0] [i_0 + 2] [i_0] = ((!(~-14019)));

                /* vectorizable */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_13 = (min(var_13, -14037));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, (!-14035)));
                                var_15 = -14037;
                                var_16 = (!2);
                            }
                        }
                    }
                    arr_16 [i_2] [i_0] = 2;
                    var_17 = -14042;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 19;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_18 *= ((!(!0)));
                                var_19 = (!14022);
                                arr_22 [i_0 - 1] [9] [i_2] [i_1 - 1] [i_5] = (!240);
                                var_20 = (min(var_20, (!22)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_21 = 14041;
    /* LoopNest 2 */
    for (int i_7 = 2; i_7 < 12;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            {
                var_22 = 14036;
                arr_30 [i_8] [i_7] = (!14041);
                arr_31 [i_7] = 4190208;
            }
        }
    }
    #pragma endscop
}
