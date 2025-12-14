/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203038
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203038 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203038
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_12;
    var_17 = (((((-1905935478 ? -1217874588 : -1455356020925648086))) ? ((min(var_5, var_4))) : var_13));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_18 = ((((min((max((arr_4 [i_0] [i_1]), (arr_0 [i_0 + 3] [i_0]))), ((min(3830646332, 3964)))))) ? (((0 * 0) ? (min((arr_4 [i_0] [i_0 - 3]), -69)) : (arr_1 [i_1 + 2]))) : (arr_1 [i_1 - 2])));
                var_19 &= (max(315301997, (max((max((arr_1 [i_0 - 1]), (arr_1 [i_0]))), (16596 > 4527441192299507430)))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            {
                arr_10 [i_2] = max((max((arr_5 [i_2 + 3] [i_2]), (arr_6 [i_3] [i_2]))), (arr_7 [i_2]));
                arr_11 [i_2] [i_2] = ((max((0 > 1815), (arr_6 [i_2] [i_3]))));
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
