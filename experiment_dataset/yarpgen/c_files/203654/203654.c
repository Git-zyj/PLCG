/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(!var_9)));

    for (int i_0 = 1; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_14 = (((arr_1 [i_0 - 1] [i_0 - 1]) ? -28169 : (((max((arr_0 [i_0 - 1]), (arr_2 [i_0 - 1])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_15 = (max(((min((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]), var_3))), (((arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) + (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        var_16 = 12795;
                        var_17 = ((28169 ? (arr_6 [i_0 - 1]) : (arr_6 [i_0 - 1])));
                        var_18 = (arr_10 [i_0] [i_2] [i_2] [1]);
                        var_19 = ((15888134441226155656 ? (arr_7 [i_0] [17]) : (arr_1 [i_0] [i_1])));
                        var_20 = (((arr_7 [i_0 - 1] [i_0 - 1]) ? (arr_7 [i_0 - 1] [i_0 - 1]) : (arr_7 [i_0 - 1] [i_0 - 1])));
                    }
                    for (int i_4 = 1; i_4 < 24;i_4 += 1)
                    {
                        var_21 = (((((max(28138, (arr_10 [i_2] [i_2] [i_2] [i_2]))))) ? (((arr_4 [i_0] [i_0 - 1] [i_0]) >> ((max((arr_0 [i_0]), var_4))))) : (((!((((arr_2 [6]) ? var_4 : var_5))))))));
                        arr_13 [i_2] [i_4] [i_2] [5] [i_2] = 2486301690;
                    }
                    for (int i_5 = 1; i_5 < 24;i_5 += 1)
                    {
                        arr_17 [1] [i_0 - 1] [i_0 - 1] [i_2] = (arr_1 [i_5] [1]);
                        var_22 -= ((!(+-28168)));
                    }
                    for (int i_6 = 0; i_6 < 25;i_6 += 1)
                    {
                        var_23 = 10465;
                        var_24 = ((((min((-32767 - 1), (arr_16 [i_2] [i_2] [i_2] [i_2]))) ^ -1082763367)) << (16418223146311127029 - 1));
                        var_25 = (arr_4 [i_0 - 1] [i_0 - 1] [14]);
                    }
                    arr_21 [i_0] [i_1] [i_2] [i_2] = ((((max(1, 16949802724644328136))) ? (arr_6 [i_2]) : ((-(arr_0 [8])))));
                }
            }
        }
        var_26 = (max((!13853), (-32767 - 1)));
        var_27 = 1;
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 1;i_7 += 1) /* same iter space */
    {

        for (int i_8 = 0; i_8 < 25;i_8 += 1)
        {
            var_28 = (((arr_20 [i_7] [i_7] [i_8]) ^ (arr_20 [1] [i_7] [i_8])));
            var_29 = (((!31427) ^ (!-24053)));
            var_30 += (arr_18 [2] [i_7] [6] [i_7 - 1] [2]);
        }
        arr_26 [i_7] = -10465;
    }
    #pragma endscop
}
