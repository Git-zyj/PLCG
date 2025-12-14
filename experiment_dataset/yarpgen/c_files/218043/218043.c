/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (i_0 % 2 == zero) ? ((((((-(max(var_0, 6))))) ? (((arr_0 [i_0]) << (((max((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) - 16697709093742961681)))) : (~1)))) : ((((((-(max(var_0, 6))))) ? (((arr_0 [i_0]) << (((((max((arr_2 [i_0] [i_0]), (arr_1 [i_0] [i_0]))) - 16697709093742961681)) - 8141356132335869757)))) : (~1))));
                var_14 = (var_9 ? ((~(~12833390487385509250))) : (min((arr_1 [i_0] [i_0]), 10694140271541467879)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            {
                var_15 = ((((((arr_8 [i_2 + 3] [i_3]) ? (((arr_9 [18] [i_3] [i_3]) ? (arr_5 [i_2]) : (arr_5 [i_2]))) : ((1 ? 5 : var_9))))) ? (min((((1 ? (arr_10 [11]) : 241))), (~var_9))) : (arr_8 [i_3] [i_2 + 2])));
                arr_11 [12] [i_3] [i_2] = min((((((2135582015024411513 ? (arr_5 [i_2]) : (arr_6 [i_3])))) ? (arr_10 [i_3]) : (((arr_7 [i_2]) ? 6009128424424422573 : (arr_6 [17]))))), (((arr_8 [i_3] [i_2]) ? (min(18446744073709551610, (arr_6 [5]))) : (~6009128424424422573))));
                var_16 = (min(var_16, ((min((arr_8 [i_2] [i_2]), (((arr_8 [i_2 + 2] [i_2 + 3]) ? (((var_1 ? (arr_9 [i_3] [20] [i_2]) : 1))) : (arr_8 [i_2 + 2] [i_2 - 2]))))))));
            }
        }
    }
    #pragma endscop
}
