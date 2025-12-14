/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_16 -= (((+(((arr_1 [i_0] [i_1]) ? (arr_2 [4]) : (arr_0 [i_0] [3]))))));
                var_17 |= (((arr_3 [i_0] [i_0]) ? ((~((~(arr_1 [4] [i_1 + 1]))))) : ((((min(907, 979481515))) ? (arr_1 [10] [10]) : (~1)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            {
                var_18 = (arr_7 [i_2]);
                var_19 += ((!((min((min((arr_7 [2]), (arr_4 [14]))), (((!(arr_4 [14])))))))));
                var_20 += ((-(min((((arr_5 [i_2] [i_2]) ? (arr_4 [0]) : (arr_5 [1] [1]))), (arr_7 [2])))));
                arr_8 [11] [i_2] [3] = (min((arr_6 [i_2]), (min((arr_6 [i_2]), (arr_6 [i_2])))));
            }
        }
    }
    var_21 = var_11;
    var_22 = var_3;
    var_23 += var_3;
    #pragma endscop
}
