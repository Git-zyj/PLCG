/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 17;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_3] = ((~(max(2511831754, 1029033082))));
                                var_10 = (max(var_10, (max((arr_4 [i_2]), (max(var_1, (arr_11 [i_3 + 2] [i_1 - 1] [i_4 + 1])))))));
                                arr_16 [i_0] [i_3] [i_3] [i_3] [i_3] [i_3] [1] = -1029033082;
                            }
                        }
                    }
                }

                /* vectorizable */
                for (int i_5 = 1; i_5 < 17;i_5 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 19;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 15;i_7 += 1)
                        {
                            {
                                arr_25 [i_5] [i_1] [i_1] = ((arr_8 [i_7 - 1]) ? (arr_8 [i_7 + 4]) : -2073582257);
                                var_11 = 4294967289;
                                arr_26 [i_0] [i_5] [i_5] [i_6] = (arr_20 [i_7] [i_6] [i_5 - 1] [i_0]);
                                arr_27 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = (((arr_22 [i_1 + 1] [i_5 - 1]) * (arr_23 [i_0] [0] [i_6] [i_5] [i_7])));
                            }
                        }
                    }
                    var_12 = ((-1 ? var_6 : var_3));
                    var_13 = (max(var_13, ((((arr_1 [i_1 - 2]) ? 397577801 : (arr_1 [i_1 - 1]))))));
                }
                arr_28 [18] [18] [i_0] &= ((((-112 ? -1 : 0))) && (arr_8 [i_0]));
            }
        }
    }
    var_14 = var_7;
    #pragma endscop
}
