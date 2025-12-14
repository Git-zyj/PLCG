/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_0;

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        var_17 = var_6;
        var_18 -= (arr_0 [i_0 + 2]);

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            var_19 ^= 30000;
            var_20 = -10;
        }
        for (int i_2 = 0; i_2 < 24;i_2 += 1)
        {
            var_21 = (min((((arr_2 [i_0 + 3]) ? (arr_4 [i_0 + 1] [i_2] [23]) : 35536)), (arr_4 [i_0 + 3] [i_2] [i_2])));
            arr_11 [2] [i_0] [18] = min(2862621195884034655, 35536);
            var_22 = (max(var_22, ((max(131072, (max(4018776975289133261, 128)))))));
            arr_12 [i_0] [i_2] [14] = (arr_7 [i_0] [i_2]);
        }
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            var_23 = (((arr_8 [i_0] [i_0]) ? -var_7 : var_8));
            arr_15 [i_0] [i_3] [i_0 + 1] = ((!(((-((35536 ? 4227858432 : -7935)))))));
            var_24 = ((24576 ? 1653019375 : 0));
            arr_16 [i_3] = ((((arr_2 [i_3 - 1]) || -18)));
        }
    }

    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                {
                    arr_25 [i_4] [i_5] [i_5] = (max((arr_17 [i_5]), ((((arr_2 [i_4 + 4]) && (arr_2 [i_4 + 3]))))));
                    arr_26 [i_4] [6] [4] [i_6] &= (min(7965, (1097100165404497855 & -7935)));
                }
            }
        }
        var_25 ^= (arr_7 [i_4] [i_4]);
        arr_27 [5] = (arr_9 [i_4] [i_4] [i_4 + 3]);
    }
    for (int i_7 = 0; i_7 < 23;i_7 += 1)
    {
        var_26 = ((((min((arr_9 [i_7] [i_7] [i_7]), (arr_9 [i_7] [i_7] [i_7])))) ? 0 : (arr_28 [i_7])));
        var_27 = (min(var_27, (((((min((arr_10 [i_7] [i_7]), (!3885738206)))) || (arr_9 [i_7] [i_7] [i_7]))))));
        var_28 *= var_7;
        /* LoopNest 3 */
        for (int i_8 = 0; i_8 < 23;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    {
                        arr_40 [i_7] [i_7] [i_7] [i_9] [22] = (((-(arr_31 [i_8]))));
                        var_29 = (min(var_29, (min(9684, ((((arr_29 [12]) < 5369)))))));
                        var_30 = (min((-1987329356578159400 != 17012), ((15 ? -10 : 8324533814915438186))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
