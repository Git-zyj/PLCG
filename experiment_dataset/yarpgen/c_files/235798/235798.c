/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235798
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235798 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235798
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((!((min((max(19, var_9)), ((((-32767 - 1) || 1))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                var_16 = ((((!(arr_1 [i_0]))) ? (min(((min(var_8, var_13))), (arr_2 [i_0] [i_1]))) : ((((1053710021055565509 ^ 1) <= (1 / 7))))));
                var_17 = (((min(((0 << (13099 - 13089))), ((2047 ? var_14 : (arr_0 [i_0] [i_0]))))) == 19));
                var_18 = 1053710021055565509;
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 21;i_3 += 1)
        {
            {
                arr_9 [i_3 + 1] [i_2] [i_2] = (((((((((arr_7 [i_2] [i_3]) & 667504583))) ? 1125899902648320 : var_14))) ? (min(-1, (arr_6 [9] [i_2]))) : (((arr_6 [0] [1]) ? ((((arr_7 [i_3 - 1] [21]) <= 9007199254740991))) : 1))));
                arr_10 [i_2] [1] = ((arr_5 [i_2]) ? ((-(((-32767 - 1) ? (arr_6 [13] [i_3]) : 1)))) : (((146 <= 3301410515) ? ((var_13 ? 1 : 0)) : (arr_1 [i_2]))));
            }
        }
    }
    #pragma endscop
}
