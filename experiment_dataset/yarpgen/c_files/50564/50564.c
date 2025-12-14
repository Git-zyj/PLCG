/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50564
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50564 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50564
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_7 [i_0] = ((((!(arr_4 [i_0]))) ? (((!(64018 && 14632)))) : (arr_6 [i_0] [i_1])));
                arr_8 [i_0] = (!var_2);
                arr_9 [i_0] [i_0] [i_0] = 2083011484;
                arr_10 [i_0] = ((((((arr_2 [i_0]) ? (arr_4 [i_0]) : (arr_2 [i_0])))) ? (min((((arr_5 [i_1] [i_0] [i_0]) >> (var_15 - 9932751087654322248))), ((~(arr_5 [i_0] [i_1 + 1] [i_1]))))) : var_16));
                var_18 = (~(((arr_4 [i_0]) ^ -983)));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 19;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            {
                var_19 = ((~(((arr_16 [i_3]) ? (arr_12 [i_2]) : (max(-54, 2083011484))))));
                var_20 = ((!var_15) ? -1 : (((((arr_13 [i_2] [i_3]) / var_11)))));
            }
        }
    }
    var_21 = (~-7798);
    #pragma endscop
}
