/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 0;i_3 += 1)
                {
                    {
                        var_16 = (max(var_16, ((((((((arr_2 [i_0]) <= (((arr_6 [i_1] [i_2] [i_3]) & 77)))))) % (min((max(67, 4028031352)), ((min((arr_7 [i_0] [i_0]), 70))))))))));
                        var_17 = (min(((((arr_3 [i_3 + 1]) ? 1 : (arr_3 [i_3 + 1])))), 197));
                        arr_13 [i_3] [i_3] [i_2] [i_0] [i_0] [i_3] = ((min((55471 / 6752079877191555584), (arr_7 [i_2] [i_3 + 1]))) >= ((((arr_1 [i_1]) ? -0 : ((18 | (arr_6 [i_0] [i_0] [i_0])))))));
                    }
                }
            }
        }
        arr_14 [i_0] [i_0] = ((((!(arr_4 [i_0]))) ? (max(4294967295, 0)) : (((min((arr_3 [i_0]), (arr_4 [i_0])))))));
        var_18 = (min((((var_12 | ((min(var_4, (arr_7 [6] [6]))))))), (min(((max(1, (arr_1 [i_0])))), 266935955))));
        var_19 = var_13;

        /* vectorizable */
        for (int i_4 = 1; i_4 < 11;i_4 += 1)
        {
            arr_17 [10] [10] = 60764;
            var_20 = ((12144 % (~11)));
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_20 [i_0] [i_5] [i_5] = ((((arr_10 [i_0] [i_0] [7]) ? (!6752079877191555584) : ((120 ? var_7 : var_15)))));
            arr_21 [i_5] = ((-1752 ? 191 : ((((var_5 / (arr_15 [8])))))));
            var_21 = (((((arr_12 [i_5] [i_5] [i_0] [i_0]) / 231)) / (max((arr_12 [i_5] [i_5] [i_5] [i_0]), 57))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            arr_25 [i_0] = (~var_8);
            arr_26 [10] [i_6] = -113;
            arr_27 [i_0] [i_0] [i_0] = (((4064528160 ? 1 : (arr_15 [i_6]))));
            var_22 -= (arr_5 [i_6] [i_0] [i_0]);
        }
    }
    var_23 = ((((!102) ? 4789718278851966151 : (((min(0, 145)))))));
    #pragma endscop
}
