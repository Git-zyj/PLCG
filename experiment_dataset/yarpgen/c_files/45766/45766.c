/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_12 = (((0 % (max((arr_0 [i_0]), 2886247698121097865)))));
                var_13 = ((max((min(31446, -38)), (arr_4 [i_0] [i_0]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 11;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 13;i_4 += 1)
            {
                {
                    var_14 = (~var_6);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 13;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            {
                                var_15 = (((((arr_20 [i_2 - 1] [i_2 - 1] [i_2] [i_3 - 1] [i_4]) < (arr_20 [i_2 + 2] [3] [i_2] [i_3 - 1] [3]))) ? (((-65 || ((max(var_6, 2886247698121097866)))))) : ((~(arr_3 [i_2])))));
                                var_16 = (min(var_16, (arr_1 [i_4] [i_5])));
                            }
                        }
                    }

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 13;i_7 += 1)
                    {
                        var_17 = (min(var_17, (arr_10 [i_3 - 1] [i_3 - 1] [i_2 + 1])));
                        var_18 ^= (~34359672832);
                        var_19 ^= 38;
                        var_20 ^= (arr_3 [i_4]);
                    }
                    var_21 = (~2886247698121097865);
                    var_22 = ((((arr_14 [i_4] [i_3 - 1] [i_2 + 2] [i_2 + 2]) ? (arr_14 [i_2] [i_4] [4] [i_4]) : 3912631945774788633)) << (34359672810 - 34359672769));
                }
            }
        }
    }
    #pragma endscop
}
