/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4871
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4871 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4871
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_9, ((-(!-115)))));

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            var_11 = (min(var_11, ((min(0, 0)))));
            var_12 *= 50643;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 0;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 19;i_3 += 1)
                {
                    {
                        var_13 -= (((arr_5 [i_3 - 1] [i_3 + 1] [i_3 + 2]) ? 14 : var_7));
                        arr_11 [16] [i_2] [i_2] [i_3] = ((((~((min(-3, -1))))) == 45));
                    }
                }
            }
            var_14 = max(50664, 2903135990);
            var_15 ^= (arr_2 [i_0]);
        }
        for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
        {
            var_16 = var_0;
            var_17 = (max(var_17, ((max((1740477445718620525 * 0), (((-(min(var_6, (arr_6 [i_0])))))))))));
            arr_15 [i_0] = ((((((-7 ? 2788629050 : 96)) * 15)) > (arr_3 [i_0] [i_0])));
        }
        var_18 += ((((((-17 ? 1 : -13)) ? 8 : 65507))));
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                {
                    arr_27 [i_7] = ((((-(max(0, 14440542772832126989)))) >= var_1));
                    var_19 -= var_2;
                    arr_28 [i_7] [i_6] [i_7] = 30;
                    arr_29 [i_7] [i_6] [2] &= ((((((arr_26 [i_5]) / var_7))) ? 3694415616 : 14905));
                }
            }
        }
        arr_30 [i_5] [i_5] = ((((((arr_12 [i_5]) ^ (arr_17 [i_5])))) ? (arr_8 [19] [19]) : (((arr_10 [i_5] [i_5]) ? (arr_10 [i_5] [i_5]) : var_7))));
        arr_31 [i_5] [i_5] &= 2133612266;
    }
    var_20 = (min(var_6, 4006201300877424639));
    var_21 = ((var_6 ? (max(var_8, var_9)) : ((min(43, 1)))));
    #pragma endscop
}
