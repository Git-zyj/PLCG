/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198915
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198915 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198915
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= ((((min(((1 ? 92 : var_1)), (!var_13)))) ? ((-90 ? 1 : 255)) : ((-324379181 ? ((1 ? -92 : 3968)) : 75))));

    for (int i_0 = 2; i_0 < 24;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 24;i_3 += 1)
                {
                    {
                        arr_10 [i_1] [1] [i_1] [i_1] = ((((min((arr_9 [i_0] [1]), (((arr_8 [5]) ? (arr_4 [i_2] [14] [i_0]) : 0))))) ? ((max((((arr_3 [4] [i_1]) ? 0 : 246)), (((26606 ? 19 : 246)))))) : (((-64 * 22) / (-9223372036854775807 - 1)))));
                        var_20 -= (max((((-124 ^ (arr_4 [i_1 + 1] [i_3 + 1] [i_0 - 2])))), (min((max(1, (-9223372036854775807 - 1))), var_3))));
                        var_21 &= (arr_1 [i_0]);
                        arr_11 [i_1] = (((1377101322938790343 ? ((-1 ? 248 : var_5)) : ((4 - (arr_6 [7] [i_2]))))) * (((arr_0 [i_1]) ? ((min((arr_1 [i_0 - 2]), var_12))) : (arr_1 [i_0]))));
                    }
                }
            }
        }

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_22 = (((((~(arr_6 [i_0] [i_4]))) >> ((((max((arr_2 [i_0] [23]), (arr_1 [5])))) - 65519)))));
            arr_14 [11] [i_0] = ((min(18446744073709551599, 9)));
            var_23 = var_14;
        }
        arr_15 [0] [1] = ((((((((arr_5 [9] [9] [20] [5]) | (arr_5 [i_0] [i_0] [i_0] [1])))) + 9223372036854775807)) >> (((max(((225 ? (-2147483647 - 1) : var_15)), ((min(-125, 255))))) - 87))));
    }
    #pragma endscop
}
