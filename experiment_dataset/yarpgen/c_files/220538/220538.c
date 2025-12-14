/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_9;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_21 = var_1;
                    arr_7 [3] [i_0] [i_1] [i_2] = (((((((var_9 ? var_5 : var_12)) >> (var_16 - 58893)))) < (min((((8086980244671712870 ? (arr_0 [0]) : (arr_5 [i_0] [i_1] [i_2])))), (max(var_10, (arr_6 [8] [i_1])))))));
                    var_22 = ((+((-7266105116038235357 ? (arr_4 [i_0]) : 3))));
                    var_23 = (arr_0 [i_0]);
                }
            }
        }
    }
    var_24 = (min(var_24, var_13));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_25 = (((arr_3 [i_3] [4] [i_4]) ? var_1 : (3509066254 & 1311472821541857225)));
                var_26 = ((((3719575573691983864 ? var_3 : ((9916 ? 1311472821541857225 : var_18)))) < (((+(((arr_6 [i_3] [6]) ? (arr_10 [i_3] [i_4] [i_4]) : (arr_10 [i_3] [7] [i_3]))))))));
                var_27 = (max((((((var_16 ? 2914448333 : var_1))) | (1311472821541857231 & var_16))), (((+(min((arr_4 [i_4]), 3234442984)))))));
                var_28 = -9917;
            }
        }
    }
    #pragma endscop
}
