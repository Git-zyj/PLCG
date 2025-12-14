/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22401
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        var_12 = (((arr_1 [i_0] [i_0]) <= (-13 + 122)));
        var_13 *= ((((((!(((0 ? (arr_0 [i_0] [i_0]) : 2147483630))))))) > (((!-13) ? (arr_0 [i_0] [i_0]) : (((arr_0 [i_0] [i_0]) ? 8628832028570212110 : (arr_0 [i_0] [i_0])))))));
        var_14 = -18;
        var_15 = arr_1 [i_0] [i_0];
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_16 = ((arr_3 [i_1] [i_1 + 2]) - (arr_3 [i_1] [i_1 - 1]));

        for (int i_2 = 0; i_2 < 17;i_2 += 1)
        {
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 17;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 13;i_4 += 1)
                {
                    {
                        var_17 = 17;
                        var_18 = (max(var_18, (((max((arr_4 [i_3] [i_3] [i_4]), (arr_3 [i_3] [i_1 + 1])))))));
                    }
                }
            }
            var_19 = ((-var_2 ? (((min(122, 0)))) : (arr_8 [i_1] [i_2] [i_2])));
            var_20 = ((!((((arr_2 [i_1 + 1] [i_1 + 1]) ? (((min(239, 138)))) : (arr_2 [i_1] [i_2]))))));
        }
        var_21 = ((+((((((arr_3 [i_1] [i_1 - 1]) / (arr_3 [i_1] [i_1 + 1])))) ? -8857220068308059839 : (((-(arr_8 [i_1] [i_1 + 1] [i_1 + 2]))))))));
        var_22 = var_6;
    }
    var_23 = var_6;
    var_24 = ((!((min(var_3, (((-8 ? var_4 : -1082123203))))))));
    #pragma endscop
}
