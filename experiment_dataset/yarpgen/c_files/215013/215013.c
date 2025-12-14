/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = var_7;
                var_11 *= (max(18446744073709551614, ((((max(128, 1))) || 0))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = ((((max(5593, (var_7 / 186)))) ? var_6 : ((((((arr_3 [i_1] [i_1]) ? (arr_0 [i_0] [i_0]) : 18039572735945447362))) ? var_2 : (2037134777 + 10589393885838627926)))));
                            arr_11 [i_0] [i_1] = (max(((((((arr_8 [i_1 + 1] [i_1] [i_3 - 1]) ? (arr_9 [i_2] [i_2] [i_2] [i_3 + 2] [i_2]) : -6410))) ? (((!(arr_0 [i_0] [i_0])))) : 139)), (((arr_6 [i_1] [i_3 + 1]) ? (arr_1 [i_1 + 1] [i_3 - 1]) : (arr_6 [i_1] [i_3 + 2])))));
                            arr_12 [i_1] = ((0 < ((((arr_1 [i_1 + 1] [i_3 + 4]) ? (arr_7 [i_1 + 1]) : (arr_7 [i_1 + 1]))))));
                            var_13 = (max(var_13, (((1 ? ((22786 << ((((max((arr_6 [0] [i_1 + 1]), var_7))) - 4793)))) : ((-1 ? 14828 : (((arr_2 [10]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_1 [i_2] [i_2]))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
