/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = -var_13;
    var_21 = ((~(max(55699, -var_14))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                var_22 &= (max(65529, ((-(arr_2 [i_0])))));
                arr_5 [i_1] [i_1] [i_1] = var_15;

                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    var_23 = (max((arr_6 [i_1 - 1] [i_0 + 1] [i_0] [i_0 - 1]), (arr_7 [i_0 + 1])));
                    var_24 = var_14;

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        var_25 = -65535;
                        var_26 *= ((arr_3 [i_2]) >= (arr_2 [i_0 - 1]));
                        arr_10 [i_3 + 1] [i_2] [i_2] [i_0] [i_0] &= ((230 <= (arr_6 [i_3 + 1] [i_3] [i_3 + 2] [i_3 + 1])));
                        var_27 &= var_2;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        var_28 = var_4;
                        var_29 = (((((((~37730) != (arr_3 [i_1 - 1]))))) < (max((arr_8 [i_0 + 1]), (arr_8 [i_0 + 1])))));
                        var_30 = ((((min(var_13, (arr_13 [i_1 - 1] [i_4] [i_1 - 1] [i_1 - 1] [i_0 + 1])))) ? (arr_6 [i_1 + 1] [i_1] [i_2] [i_2]) : ((max((arr_13 [i_1 - 1] [i_1] [i_1] [i_2] [i_0 - 1]), (arr_13 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_4] [i_0 + 1]))))));
                    }
                }
                arr_14 [i_0 - 1] [i_1 - 1] = (arr_12 [i_0] [i_0] [i_1 - 1] [i_1]);
            }
        }
    }
    var_31 ^= (((-((min(251, 65529))))));
    var_32 = var_4;
    #pragma endscop
}
