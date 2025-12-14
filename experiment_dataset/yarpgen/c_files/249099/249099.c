/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249099
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 1660555357;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_15 = (max((((arr_1 [i_0]) * (arr_1 [i_0]))), (arr_1 [i_0])));
        var_16 = ((max(288230375883276288, 1312602863153620079)));
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_6 [i_1] [i_1] [0] = (arr_0 [i_1]);
            var_17 = (((9368375246608460138 ? ((var_7 << (var_4 - 28))) : (arr_1 [i_1]))));
            var_18 = (max((113 % 9078368827101091480), ((min(((min(61899, var_1))), (arr_4 [i_1]))))));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_19 = ((!(arr_7 [i_2] [i_2] [i_2])));
                var_20 = (min((max(576460752302374912, 56)), (arr_0 [i_2])));
                var_21 += ((!(((max(-25719, var_5))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_22 = ((-26553 ? 11770168756740850339 : 2676351051364231914));
                var_23 = (arr_1 [i_2]);
            }
        }
        var_24 = -369067154;

        /* vectorizable */
        for (int i_5 = 2; i_5 < 14;i_5 += 1)
        {
            /* LoopNest 3 */
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 14;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 1;i_8 += 1)
                    {
                        {
                            arr_25 [i_1] [i_5 - 1] [14] [14] [i_6] [14] [i_8] = 1;
                            arr_26 [i_1] [i_5] [12] [i_6] [1] = (50 > 0);
                            arr_27 [i_6] = ((274877890560 ? 61899 : 4080));
                        }
                    }
                }
            }

            for (int i_9 = 0; i_9 < 15;i_9 += 1)
            {
                arr_30 [14] [i_9] [i_1] = (arr_7 [i_5] [i_5] [i_5 - 1]);
                var_25 = (((61259 ? 0 : 1533955825)));
                arr_31 [i_9] [i_5 - 1] [i_1] = -896142093;
            }
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                var_26 = ((!(arr_21 [i_1] [i_5] [i_10] [i_5] [i_10])));
                var_27 += ((~(((arr_1 [i_1]) >> (15360 - 15330)))));
                var_28 = (min(var_28, (arr_17 [i_5 - 2] [i_5 + 1] [i_5 - 2])));
            }
            arr_35 [0] = (~var_0);
        }
    }
    var_29 = ((((max(var_12, 9368375246608460138))) ? 287104476244869120 : 200));
    /* LoopNest 2 */
    for (int i_11 = 0; i_11 < 19;i_11 += 1)
    {
        for (int i_12 = 0; i_12 < 19;i_12 += 1)
        {
            {
                arr_40 [i_11] [i_12] = 4080;
                /* LoopNest 3 */
                for (int i_13 = 0; i_13 < 19;i_13 += 1)
                {
                    for (int i_14 = 2; i_14 < 15;i_14 += 1)
                    {
                        for (int i_15 = 0; i_15 < 19;i_15 += 1)
                        {
                            {
                                var_30 &= ((((24576 || 237) || 200)));
                                var_31 = max((max((arr_46 [8] [5] [i_14] [i_14] [i_14 - 2] [i_14 + 1] [i_14 - 2]), (arr_46 [i_15] [i_15] [15] [i_15] [i_14 + 2] [i_14 + 4] [i_14 - 2]))), (arr_47 [i_15] [i_13] [i_15] [i_15] [i_14 - 1] [i_13] [i_14 + 3]));
                                var_32 = (min(var_1, ((((((arr_42 [i_11] [i_11] [i_11]) & 19219))) ? 150 : 16384))));
                            }
                        }
                    }
                }
                var_33 = var_11;
            }
        }
    }
    #pragma endscop
}
