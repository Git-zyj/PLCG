/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_4;
    var_19 = ((!((!(((var_10 ? -2544326376001201598 : 7578877399703624973)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_4 [i_0 + 3] [i_0 + 4] [i_1 + 3] = ((~((var_13 ? (arr_1 [i_0 + 1]) : var_17))));
                var_20 = ((((!7578877399703624973) ? -2544326376001201598 : var_12)));
                arr_5 [i_0 + 1] [i_0] = (((((((((arr_0 [i_1]) ? var_3 : var_11))) && (arr_1 [i_1])))) + (arr_0 [i_0])));
                var_21 *= (min((((2895695267862168592 > (((419693586 ? (arr_2 [i_0 + 3] [i_0 + 3] [i_0 + 1]) : var_9)))))), (((!(arr_2 [i_1] [i_1] [2]))))));
                var_22 += (min((((-((-(arr_2 [i_0] [i_1] [i_1])))))), ((((max(0, 3875273708))) ? var_13 : ((-1 ? 2034 : 7578877399703624973))))));
            }
        }
    }
    var_23 = var_17;
    #pragma endscop
}
