/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32725
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32725 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32725
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= 0;

    for (int i_0 = 1; i_0 < 14;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            var_19 = (arr_4 [i_0] [i_0 - 1] [i_0]);
            var_20 = (arr_5 [i_0 + 1] [i_0 + 1]);
        }
        arr_6 [i_0] [i_0] = 1944565193;
        var_21 &= var_8;
    }
    for (int i_2 = 1; i_2 < 14;i_2 += 1) /* same iter space */
    {
        var_22 += (arr_10 [i_2]);
        var_23 &= 1980914870;

        for (int i_3 = 2; i_3 < 12;i_3 += 1)
        {
            arr_15 [i_2] [i_2] = ((7496 ? -var_16 : (min((~-121), ((max(var_14, var_16)))))));
            var_24 = (arr_8 [i_2 + 1]);
        }
        for (int i_4 = 2; i_4 < 12;i_4 += 1)
        {
            arr_19 [i_4] &= (arr_2 [i_4]);
            /* LoopNest 3 */
            for (int i_5 = 1; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 14;i_6 += 1)
                {
                    for (int i_7 = 2; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_25 = (max(var_25, (((~(arr_22 [i_7] [i_5] [i_4] [i_2]))))));
                            var_26 ^= (min((((~(min(var_7, (arr_9 [i_4] [i_5])))))), var_15));
                        }
                    }
                }
            }
            arr_26 [i_4] [i_4] = (~var_5);
        }
        for (int i_8 = 0; i_8 < 15;i_8 += 1)
        {
            arr_29 [i_2] [i_8] [1] = (min(13, 5));
            arr_30 [i_8] [i_8] [i_8] = ((0 ? (max(-8149473218595722292, 12519)) : ((((arr_4 [i_2] [i_2 - 1] [i_2 - 1]) / (arr_4 [i_2 + 1] [i_2] [i_2 + 1]))))));
            var_27 = (arr_0 [i_2]);
            arr_31 [i_2] = (arr_16 [i_2] [i_8] [i_8]);
        }
        arr_32 [i_2] = -1;
        var_28 = (arr_20 [i_2 - 1] [i_2]);
    }
    #pragma endscop
}
