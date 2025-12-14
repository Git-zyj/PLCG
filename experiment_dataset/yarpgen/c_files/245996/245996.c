/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_13 = ((-18679 ? 5781681033860083201 : 2549953512913608132));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = var_10;
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            {
                var_14 = ((-(max((max((arr_13 [i_4]), (arr_12 [i_3] [i_3] [i_4 + 1]))), ((-(arr_10 [i_3] [i_4 - 1])))))));
                var_15 = ((min((((var_5 ? var_11 : var_11))), (max(18014398509481984, var_8)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 21;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            {
                arr_20 [i_5] [i_5] = (((max(16380, -18014398509481986))));
                var_16 = (min(var_16, ((max(((-(arr_16 [i_5]))), ((3325800099 ? var_12 : 36044)))))));
            }
        }
    }
    var_17 = 14840788201541691477;
    #pragma endscop
}
