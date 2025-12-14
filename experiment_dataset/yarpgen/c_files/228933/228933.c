/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;

    /* vectorizable */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] &= var_2;
        arr_4 [i_0] = (((4254223225 ^ 13) ? (~1578764344) : -16858));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_7 [i_1] |= (arr_5 [i_1]);
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_13 = ((var_2 ? (((var_8 ? 0 : var_7))) : (arr_9 [i_1] [i_2] [i_3])));
                    var_14 = (max(var_14, 1484100093));
                    /* LoopNest 2 */
                    for (int i_4 = 3; i_4 < 16;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_15 = 65;
                                var_16 = (var_11 | var_10);
                                arr_17 [i_1] [i_1] [i_3] [15] [i_4] [i_5] = (~var_0);
                            }
                        }
                    }
                    var_17 = ((((((arr_11 [i_1] [i_3] [i_1]) ? var_8 : (arr_14 [i_1] [i_1] [1] [i_2] [1] [1] [i_1])))) ? 1 : (arr_11 [9] [i_3] [i_3])));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 3; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_18 = (min(var_18, (arr_15 [12] [0] [12] [i_6] [i_2])));
                                arr_24 [i_1] [i_2] [i_3] [i_3] [i_6] [i_7 + 3] = (~var_5);
                            }
                        }
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_8 = 2; i_8 < 15;i_8 += 1)
    {
        var_19 *= var_6;
        arr_27 [i_8] [i_8] = 16843;
    }
    #pragma endscop
}
