/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_1] = (min((!var_5), (max(-var_4, (((!(arr_6 [i_1] [16] [i_1 + 3] [i_2]))))))));
                    var_12 = ((((max((arr_0 [i_1 + 4]), (arr_0 [i_1 + 2])))) ? (arr_0 [i_1 - 1]) : (((arr_0 [i_1 - 1]) ? (arr_0 [i_1 + 4]) : (arr_0 [i_1 + 3])))));
                    var_13 += (arr_1 [i_0]);
                }
            }
        }
    }

    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        var_14 = ((((min((arr_10 [i_3]), -3420646280))) >= (min(((25762 ? 0 : 2664951107754097636)), (arr_10 [i_3])))));
        var_15 = (min((((!0) ? (((!(arr_9 [15])))) : (arr_9 [i_3]))), (((!(arr_9 [i_3]))))));
    }
    var_16 &= ((var_4 / (((var_3 ? (((127 >> (30132091570330088 - 30132091570330083)))) : (var_10 ^ var_0))))));
    var_17 = (31 == 0);
    #pragma endscop
}
