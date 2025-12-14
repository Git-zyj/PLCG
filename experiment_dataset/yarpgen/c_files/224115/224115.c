/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224115
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224115 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224115
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 *= var_4;

                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        arr_11 [i_0 - 2] [0] [8] [10] = ((-7958101662845977495 ? 21585 : -21585));
                        var_12 = var_1;
                    }
                    for (int i_4 = 0; i_4 < 12;i_4 += 1) /* same iter space */
                    {
                        var_13 *= ((-var_6 ? (((1939955459 ? (arr_7 [11] [i_2] [10] [11] [11]) : -5720527179045530177))) : ((152 ? (arr_7 [i_0 + 2] [i_0 + 3] [i_1] [i_2] [4]) : var_3))));
                        var_14 -= (((((18446744073709551615 - (arr_12 [i_0 + 1] [i_0 - 1] [i_2] [i_4])))) ? (((arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 1]) % (arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0]))) : (arr_12 [i_0 + 1] [i_0 - 1] [i_0] [i_0 + 2])));
                    }
                    for (int i_5 = 0; i_5 < 12;i_5 += 1) /* same iter space */
                    {
                        var_15 = (((((((((arr_14 [i_0] [9] [11] [9]) ? -1818439338 : -12874))) ? -923075581 : ((var_3 ? -923075582 : (arr_9 [i_0 + 2] [i_1] [i_0 + 2])))))) ? ((var_6 ? (((12873 ? 3540469979 : 18))) : (arr_14 [i_2] [i_2] [i_1] [i_0]))) : var_5));
                        arr_16 [i_0] [i_1] [3] [i_1] = var_0;
                    }
                }
            }
        }
    }
    var_16 = (min(var_16, ((((((12492086807829761031 ? 0 : 84))) < var_3)))));
    var_17 &= -125;
    #pragma endscop
}
