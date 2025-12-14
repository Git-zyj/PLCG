/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 9;i_2 += 1)
                {
                    arr_7 [3] [i_1] [i_1] [2] = -2085526703;

                    /* vectorizable */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] &= 5462912154078349907;

                        for (int i_4 = 3; i_4 < 7;i_4 += 1)
                        {
                            arr_13 [i_0] [i_4] [i_0] [i_3] [i_4] [i_4] = (((var_8 | var_3) ? var_10 : ((-116 & (arr_0 [i_4])))));
                            arr_14 [i_4] [i_0] [i_0] [i_0] = ((-((var_10 ? -126 : 1))));
                        }
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_12 &= (((arr_8 [i_0] [i_5 + 1] [i_2] [i_3 + 2]) ? (arr_8 [i_2] [i_5 + 1] [5] [i_3 + 2]) : 255));
                            var_13 = (max(var_13, 4));
                        }
                        var_14 = 255;
                    }
                }
                var_15 = (max(var_15, (((((((((~(arr_12 [6]))) >= ((1404122981 ? 242 : var_0)))))) <= (max(((4294967048 - (-127 - 1))), (((-17805 ? (arr_11 [i_1 + 2] [i_0]) : -858526105))))))))));
            }
        }
    }

    /* vectorizable */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_16 = (min(var_16, (((!(((19 ? 2097151 : 4294967295))))))));
        arr_21 [6] [14] = 10;
    }
    #pragma endscop
}
