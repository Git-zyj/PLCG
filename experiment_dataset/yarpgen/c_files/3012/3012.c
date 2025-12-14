/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 3; i_3 < 9;i_3 += 1)
                {
                    {
                        var_11 = (((var_4 + (arr_2 [i_0 - 1] [i_0]))) & (((arr_10 [i_0] [i_0] [1] [i_0 + 3] [i_2]) ^ (arr_2 [i_0 + 1] [i_0]))));
                        var_12 *= (arr_1 [i_0 + 3] [i_2]);
                        var_13 *= var_8;
                        arr_12 [i_0] [i_0] [i_2] [i_3 + 1] [i_2] [i_1] = (arr_1 [i_0] [i_3]);
                        arr_13 [i_1] [i_1] [i_0] [i_3 + 1] = ((((max(8446535714852522772, (arr_4 [i_3] [i_0])))) + 0));
                    }
                }
            }
        }
        var_14 ^= (min((var_8 * 1), (max(var_8, (arr_8 [i_0] [i_0 - 2] [i_0])))));
        var_15 = (1 & -4331637345585286432);
        var_16 *= ((max((arr_0 [i_0 + 3] [2]), -16)));
    }
    /* vectorizable */
    for (int i_4 = 1; i_4 < 19;i_4 += 1)
    {
        var_17 = var_9;
        arr_16 [i_4] = var_3;
        /* LoopNest 3 */
        for (int i_5 = 1; i_5 < 21;i_5 += 1)
        {
            for (int i_6 = 1; i_6 < 18;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 22;i_7 += 1)
                {
                    {
                        arr_26 [17] [17] [i_6] [i_5] = ((2118653210 + (~-32165)));
                        var_18 = ((var_1 + ((((arr_23 [i_4] [i_4 - 1] [i_4] [i_6 + 2] [i_5]) ? 8191 : (arr_14 [19]))))));
                    }
                }
            }
        }
        arr_27 [i_4] = var_7;
    }
    var_19 = 4917688697374844690;
    var_20 |= 16310644892161249411;
    #pragma endscop
}
