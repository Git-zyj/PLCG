/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194276
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194276 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194276
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (var_3 / -var_0);
    var_11 |= (!var_6);
    var_12 = (((((!var_9) ? var_5 : var_4)) != var_2));
    var_13 -= ((min(-var_0, (var_4 + var_3))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_14 -= ((~(((((~(arr_1 [i_0])))) ? ((~(arr_1 [i_0]))) : (arr_6 [14] [i_1])))));
                    var_15 |= ((-((((((arr_0 [5]) ? (arr_3 [i_0]) : (arr_0 [i_0])))) ? (arr_0 [i_1]) : (max(16809097771380067403, -1))))));
                    var_16 = (((((144 ? ((0 ? -2147483641 : 3094606702800429405)) : (arr_2 [i_2] [i_1] [i_2])))) ? (arr_1 [i_0]) : (arr_6 [i_0] [14])));
                    arr_7 [i_0] [i_0] [i_0] [i_0] = ((((!(arr_1 [i_1]))) ? (min((((!(arr_0 [i_2])))), (((arr_5 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_1]))))) : ((((arr_2 [i_0] [i_0] [i_0]) && (arr_2 [i_0] [i_1] [i_2]))))));
                    var_17 += (((((((((arr_4 [15]) ? (arr_4 [i_1]) : (arr_1 [i_0])))) ? (min((arr_1 [i_2]), (arr_6 [i_1] [i_1]))) : (((arr_1 [i_1]) | (arr_5 [i_1] [i_1] [i_1])))))) ? ((~(arr_3 [i_1]))) : ((max((arr_0 [i_0]), (arr_0 [i_0]))))));
                }
            }
        }
    }
    #pragma endscop
}
