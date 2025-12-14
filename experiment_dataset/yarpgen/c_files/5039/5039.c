/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_20 = ((max((arr_1 [i_0]), (max(var_19, -127483190641544509)))));
        var_21 = (1118090062999342993 << ((8540987003708383346 ? (arr_0 [i_0]) : 0)));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    {
                        var_22 = (arr_8 [i_0] [22] [i_1] [i_2] [i_2] [20]);
                        arr_10 [i_2] [21] = (max((~var_2), (((-8540987003708383346 ? (arr_6 [i_2 - 2] [i_0]) : -18)))));
                        var_23 = ((-(max((arr_5 [i_2 + 1] [i_2 + 1] [11]), -8540987003708383346))));
                        var_24 = 16774020501457598770;
                    }
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_13 [i_4] [i_4] = (arr_2 [i_4] [i_4]);
        var_25 = (min(var_25, ((max(((max((max((arr_6 [i_4] [i_4]), (arr_9 [1] [i_4] [i_4] [i_4]))), (arr_4 [i_4] [i_4])))), 127)))));

        for (int i_5 = 1; i_5 < 20;i_5 += 1)
        {
            var_26 = (((((+(((arr_2 [i_4] [i_5 + 2]) ? (arr_12 [i_4]) : (arr_15 [1] [14] [12])))))) ? (arr_0 [1]) : (arr_6 [i_4] [22])));
            var_27 = (((arr_5 [i_4] [13] [i_4]) ? ((max((arr_14 [16] [i_5] [11]), var_13))) : (((arr_12 [i_4]) / (arr_12 [i_4])))));
            var_28 = (min((((((((arr_14 [i_4] [i_4] [i_5]) ? (arr_8 [i_4] [i_4] [i_4] [i_4] [i_4] [1]) : 8540987003708383346))) && -25))), (((arr_15 [22] [i_5] [i_4]) % (arr_2 [12] [i_5 + 3])))));
        }
    }
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_29 = (arr_15 [i_6] [i_6] [i_6]);
        var_30 &= ((-(max(((max((arr_1 [i_6]), 20114))), ((var_18 ? 8540987003708383346 : (arr_4 [i_6] [i_6])))))));
        arr_20 [i_6] [12] = ((((((max((arr_16 [0] [1]), 248))) ? (arr_15 [3] [0] [0]) : (((max(var_17, 248)))))) <= (arr_14 [i_6] [i_6] [1])));
        var_31 = (((((~(((arr_16 [i_6] [i_6]) ? var_19 : (arr_7 [10] [17] [10])))))) ? ((~(arr_19 [i_6] [i_6]))) : ((~((max(1, 1)))))));
        var_32 |= var_2;
    }
    var_33 = (max(var_33, var_9));
    #pragma endscop
}
