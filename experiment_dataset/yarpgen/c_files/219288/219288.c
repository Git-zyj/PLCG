/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((3360313527 ? ((((min(var_17, var_5))) + var_10)) : ((max(145, 829)))));
    var_21 = (((((min(8722808603860469839, 111)))) ? var_2 : var_6));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    arr_6 [i_0] [i_1] [i_0] = (arr_0 [i_1] [i_2]);
                    arr_7 [i_0] [i_1] [3] = (((((!(((6616 ? 6615 : -14))))))) - (arr_3 [i_1] [7]));
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 11;i_3 += 1)
                {
                    arr_12 [i_0] [i_0] [1] [10] &= 1;
                    var_22 = ((-29926 ? (0 / var_7) : (((37178 ? 3360313527 : 28386)))));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    var_23 = ((-70368744177664 ? -96 : (arr_10 [i_0])));
                    var_24 ^= (arr_3 [i_4] [i_0]);
                    arr_15 [10] [i_1] = ((15466314978948579008 >> (3360313553 - 3360313509)));
                    arr_16 [i_1] [i_1] [i_1] [i_1] = (((-2147483647 - 1) ? (arr_3 [i_0] [i_0]) : (((0 ? var_8 : 1)))));
                    arr_17 [10] [i_1] = (arr_10 [i_1]);
                }
                for (int i_5 = 0; i_5 < 11;i_5 += 1)
                {
                    var_25 = (max(var_25, (((((max(145, (arr_3 [i_0] [i_0])))) ? (min((max(var_5, 9854189213411543549)), (arr_2 [i_0] [i_1] [i_5]))) : (arr_13 [i_5]))))));
                    var_26 = ((min((arr_8 [i_0] [2] [i_5]), (arr_8 [6] [8] [i_5]))));
                    var_27 = (min(var_27, ((max((max((max(1760962136, -1)), -562949953421312)), ((max((((41818 == (arr_13 [i_1])))), ((512 << (var_16 - 1910114052)))))))))));
                    var_28 = (min(((17244608652373652472 ? 17696 : (((8760504386705718466 && (arr_14 [i_0])))))), ((((arr_10 [i_0]) && var_1)))));
                    arr_20 [i_0] = (max((((28 ? (6532 / 28045) : var_12))), (max(1202135421335899144, (arr_9 [i_5])))));
                }
                var_29 += (arr_1 [i_1] [i_1]);
                arr_21 [i_0] = 512;
            }
        }
    }
    #pragma endscop
}
