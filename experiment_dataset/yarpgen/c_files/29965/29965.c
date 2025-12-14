/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29965
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29965 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29965
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 17393779734164256076;

    /* vectorizable */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0 + 1] = var_9;
        arr_5 [8] [8] = (17393779734164256076 ? (arr_3 [i_0 + 1]) : (0 + 12133883845075739976));

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_15 = (((3749998126461970679 ? var_11 : var_6)) + 16695550935760319149);
            var_16 = (~14696745947247580942);
        }
        for (int i_2 = 4; i_2 < 21;i_2 += 1)
        {
            arr_12 [i_0] = ((!(arr_2 [i_0 - 2])));
            var_17 = (~(arr_1 [i_2 + 2]));
            var_18 = (var_5 ? var_13 : ((var_9 ? 545892366484826786 : 6572516269345240862)));
            var_19 = (~(arr_6 [i_2 + 1]));
        }
        var_20 = ((arr_11 [i_0 - 2]) ? (arr_11 [i_0 + 1]) : 0);
        arr_13 [i_0] = arr_8 [i_0] [i_0 + 1] [i_0 + 1];
    }
    var_21 = ((!var_0) ? ((var_7 ? var_9 : ((8941188604764032643 ? 17900851707224724836 : 15)))) : (((((1981719045344213337 ? var_2 : var_12))) ? 3984024072879530491 : (18446744073709551600 + var_10))));
    var_22 = (-var_3 + ((var_6 ? (var_9 + 6) : (var_6 + var_3))));
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 3; i_5 < 15;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        var_23 = ((!(((var_3 ? ((var_1 ? var_6 : 8370598234184123796)) : 18)))));
                        var_24 = (arr_8 [6] [i_5] [7]);
                        arr_25 [6] [i_3] [i_5 + 1] = ((!var_2) + (var_9 + 998026661200739946));
                    }

                    for (int i_7 = 1; i_7 < 12;i_7 += 1)
                    {
                        arr_30 [7] [i_4] [i_3] [i_4] = ((!((((!var_2) ? 18446744073709551615 : 18446744073709551594)))));
                        arr_31 [i_3] [12] [i_3] [12] [i_3] = (((arr_27 [i_3 - 1] [i_7 + 3] [i_5 + 1]) + 545892366484826779));
                        arr_32 [5] [i_3] [i_5] [i_7] = ((arr_15 [i_3]) + 31);
                        arr_33 [i_7] [i_3] [5] [5] [i_3] [i_3] = ((-(arr_29 [i_7] [i_7] [i_5 + 1] [11] [0])));
                    }
                    arr_34 [10] [i_3] [i_3] = (min((arr_16 [7]), var_9));
                }
            }
        }
    }
    #pragma endscop
}
