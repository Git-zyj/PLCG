/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28603
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28603 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28603
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = ((((((arr_2 [i_0]) & (arr_2 [i_1 + 2])))) ? ((((!((max((arr_1 [i_0]), 4253876065))))))) : -var_6));
                var_13 ^= (max(var_8, ((max(var_7, ((min((arr_3 [17]), var_4))))))));
                arr_5 [i_0] [i_1] = ((-(((-(arr_0 [i_0]))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    arr_13 [i_2] [i_2] = 81;
                    var_14 -= (max(((max(-var_0, (((!(arr_0 [i_2]))))))), (((var_3 & (arr_0 [i_2]))))));
                }
            }
        }
    }
    var_15 = ((((min(81, var_4))) ? -1631854674 : (max((var_2 + var_11), (5 && var_5)))));
    var_16 = (min(((max(var_0, (max(2139367836, 7999))))), (min(var_9, (max(var_5, 24576))))));
    #pragma endscop
}
