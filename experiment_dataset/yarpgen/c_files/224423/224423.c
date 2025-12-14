/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224423
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224423 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224423
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            arr_6 [i_0] [i_1] = ((var_14 ? (arr_3 [i_1]) : (arr_3 [i_1])));
            arr_7 [i_0] [i_1] = arr_0 [i_1];
        }
        var_17 -= (arr_3 [i_0]);
    }
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = (arr_8 [i_2]);
        arr_11 [i_2] = max((arr_8 [i_2]), ((min(((907926912333883160 ? 2106593565 : 24)), (((var_6 > (arr_8 [1]))))))));
        var_18 = (max((((((-3171 ? 27048 : 192))) ? ((((128 >= (arr_8 [i_2]))))) : ((var_13 ? (arr_9 [i_2]) : var_12)))), ((min((min((arr_8 [i_2]), var_10)), (arr_8 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 23;i_4 += 1)
            {
                {
                    var_19 -= (min(128, (max(9, -133))));

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_20 = (arr_17 [i_4 - 1] [i_4] [i_4 + 1]);
                        arr_20 [i_2] [i_2] [i_2] [i_4] [i_5] = (~(max(var_7, ((var_15 ? var_4 : (arr_19 [4] [i_3] [17] [i_5]))))));
                    }
                    var_21 += 23;
                }
            }
        }
    }
    var_22 = var_9;
    var_23 = ((-28981 ? ((((max(119, 55649))) * ((9 ? var_2 : 218)))) : 101));
    #pragma endscop
}
