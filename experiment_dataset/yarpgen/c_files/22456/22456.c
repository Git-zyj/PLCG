/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            arr_4 [4] = (((max(22497, -4394092688139420343)) >> (((min((arr_1 [i_0 - 1]), (arr_3 [i_0] [i_1] [i_0 + 1]))) - 11529))));
            arr_5 [i_0] [i_0] [i_1] = (min(64632, (max((max(209, (arr_1 [i_0]))), (((1022 ^ (arr_0 [i_0]))))))));
            arr_6 [i_0] [i_0 - 1] [i_0] = (max((arr_3 [i_0] [i_1] [i_0]), ((max(var_2, var_8)))));
            arr_7 [i_0 - 1] [i_1] = (min(-16151, 37));
            /* LoopNest 2 */
            for (int i_2 = 2; i_2 < 6;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 7;i_3 += 1)
                {
                    {
                        var_14 = (max(var_14, ((min(903, 903)))));
                        var_15 = (arr_9 [i_0] [i_2] [i_2]);
                    }
                }
            }
        }
        arr_12 [1] = ((~(var_1 | var_12)));
    }
    for (int i_4 = 1; i_4 < 12;i_4 += 1)
    {
        var_16 = ((!((max(-37, -4394092688139420343)))));

        for (int i_5 = 3; i_5 < 12;i_5 += 1)
        {
            var_17 = ((29 >> (65535 - 65504)));
            arr_20 [i_5] = (arr_16 [i_4 + 1]);
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 9;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 11;i_8 += 1)
                    {
                        {
                            var_18 = (min(var_18, (arr_23 [i_6] [i_5] [i_6] [i_7])));
                            var_19 += ((((max((arr_13 [i_4] [i_5 - 3]), 64632))) && var_8));
                        }
                    }
                }
            }
        }
        var_20 = (((arr_14 [i_4] [i_4 - 1]) / ((-(~var_12)))));
        var_21 = (max((arr_26 [8] [i_4] [i_4] [8] [i_4] [8]), (max((arr_15 [i_4] [i_4]), -27))));
    }
    var_22 = 6547;
    var_23 = (var_4 % var_6);
    var_24 |= (!(var_7 - var_7));
    var_25 += var_1;
    #pragma endscop
}
