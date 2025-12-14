/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21838
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21838 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21838
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_16 &= (-127 - 1);
        var_17 -= (min(((min((arr_0 [i_0]), var_9))), (((arr_0 [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_0 [i_0])))));
        var_18 = ((4128838377326671830 ? (min((arr_1 [i_0] [i_0]), (max(var_8, 16143233297168878717)))) : var_3));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 22;i_2 += 1)
        {
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 22;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        {
                            arr_17 [i_1] [i_2] [i_3] [i_1] [i_5] = ((var_6 <= ((13707750679679564459 ? var_11 : 2056976022))));
                            var_19 = (((((1 ? (arr_9 [i_1 - 2] [i_3] [i_3]) : var_5))) != (var_9 + 2303510776540672898)));
                            var_20 = (var_3 <= 16143233297168878722);
                        }
                    }
                }
            }
            var_21 = (max(var_21, (((((2264664035 ? 17314226451748795274 : -1)) > (((var_9 | (arr_7 [i_1])))))))));

            for (int i_6 = 2; i_6 < 21;i_6 += 1)
            {
                var_22 = (max(var_22, (!146)));
                arr_21 [i_6] [i_2] [i_1 - 1] [15] = ((((((arr_19 [i_1] [i_2] [i_6]) >> (var_8 - 12403197188732550513)))) / 8614103581025699205));
                var_23 = (max(var_23, var_8));
            }
            for (int i_7 = 0; i_7 < 22;i_7 += 1)
            {
                var_24 = ((var_3 << (((arr_11 [i_1 - 2] [i_2]) - 17301660331297978696))));
                var_25 = var_13;
            }
            var_26 &= ((!(arr_24 [20] [i_2] [i_1 - 1] [i_1 - 1])));
        }
        for (int i_8 = 0; i_8 < 22;i_8 += 1)
        {
            var_27 = (((var_10 ? (arr_10 [i_8] [0] [0] [0]) : (arr_20 [i_1] [i_1] [i_8]))));
            var_28 = (max(var_28, ((((~6869286551059521901) ? (arr_16 [i_1] [i_1 - 1] [i_8] [i_8] [2]) : var_3)))));
        }

        for (int i_9 = 2; i_9 < 21;i_9 += 1)
        {
            var_29 = ((var_7 ? (arr_24 [i_1] [i_1] [i_1 + 1] [i_1 + 1]) : (arr_7 [1])));
            var_30 = var_15;
            var_31 = (max(var_31, 237));
            var_32 = ((((-1 ? 16143233297168878717 : var_4)) > (arr_25 [i_1 + 1])));
        }
    }
    var_33 = (~var_3);
    var_34 = var_9;
    var_35 = (((min(((-1102579500 ? 2305843009213693951 : 11077290368529217661)), ((var_1 ? 16143233297168878717 : var_15))))) ? var_15 : var_10);
    #pragma endscop
}
