/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22297
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22297 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22297
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_2 ? var_8 : var_2));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_16 = (min(var_16, ((((max(2525048913, 29823)) + (max((arr_0 [i_0 - 1]), 122880)))))));
        var_17 = (min(0, 2742920489001525618));
        var_18 -= (arr_1 [i_0]);
        arr_4 [i_0 - 3] [i_0 - 3] = (arr_3 [i_0 - 2]);
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {
        var_19 = ((((((-124 + 2147483647) << (29823 - 29823)))) ^ 4294844401));
        var_20 = (((max(-82, 4294844430))));

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_21 = (min(var_21, ((max((max((122899 % var_3), (arr_6 [i_1 + 1]))), ((((arr_8 [i_1] [i_1 + 1]) >= var_9))))))));
            arr_9 [i_2] = ((((min((arr_1 [i_1 + 1]), var_0))) ? (min((arr_1 [i_1 + 2]), (arr_1 [i_1 + 1]))) : ((-7035661827215691853 ? (arr_1 [i_1 - 1]) : (arr_1 [i_1 - 1])))));
            var_22 = (max(var_22, ((((((max(var_8, var_11)))) <= 0)))));
        }
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                {
                    var_23 += (min((((arr_13 [1]) && (arr_13 [i_1 + 2]))), (30720 && 122884)));
                    arr_15 [i_3] [i_3] [i_3] = (max((max((arr_14 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 2]), var_13)), ((+(((arr_0 [i_1 + 2]) ? var_2 : 4276999817))))));
                    var_24 += (((arr_11 [i_1 + 2]) / ((-15 ? 18 : (-9223372036854775807 - 1)))));
                }
            }
        }
    }
    var_25 = max(var_4, 0);
    #pragma endscop
}
