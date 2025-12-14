/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (51 && ((max((max(8561266719006295695, 896)), (var_4 * var_7)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    var_12 = ((-1945297584 ? 31 : (arr_5 [i_2 + 1] [i_2] [i_2 + 1] [i_2])));
                    var_13 = (((((65522 ? 1 : (arr_6 [i_2])))) > 6546917727790615671));
                    arr_7 [i_1] [i_1] [i_2 - 2] = 11998987978434772103;
                }
                var_14 = (((((~(arr_0 [i_0])))) ? ((-(arr_0 [i_0]))) : ((~(arr_0 [i_0])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 1; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 12;i_4 += 1)
        {
            {
                var_15 = (((max(700240772, (arr_10 [i_4] [i_4]))) <= (((2147221504 ? (((arr_3 [i_4]) / var_4)) : ((var_10 ? (arr_11 [i_4] [i_4] [i_4]) : 13)))))));
                var_16 = (((((arr_0 [i_3 - 1]) > (arr_6 [i_3]))) ? 1 : (min((arr_3 [i_4]), (arr_1 [i_4])))));
                var_17 = ((11899826345918935945 * (min(((var_0 * (arr_12 [i_3 + 1] [i_3 + 1]))), (((arr_1 [i_3]) ? 16977249868580330596 : (arr_9 [i_3] [i_4])))))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 12;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 12;i_6 += 1)
                    {
                        {
                            var_18 = 1490978552838986358;
                            arr_18 [i_3] [i_4] [i_3] = (~1490978552838986351);
                        }
                    }
                }
                var_19 = (min(11899826345918935953, (((!((max(2147483647, (arr_15 [i_4] [i_4] [i_4] [i_4])))))))));
            }
        }
    }
    #pragma endscop
}
