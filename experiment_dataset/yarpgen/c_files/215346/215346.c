/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215346
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215346 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215346
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((0 ? 7 : (-127 - 1)));
                    var_13 = (max(var_13, (((!(((((((arr_3 [i_0]) / var_12))) ? (var_4 - 433917615) : ((120 ? (arr_0 [4]) : var_7))))))))));
                    var_14 = (((((arr_2 [i_0] [i_1] [i_2]) ? 1228829298 : ((var_0 ? 61301 : var_11))))) ? (((!((!(arr_3 [i_0])))))) : ((-433917616 ? 120 : 57)));
                    var_15 = ((((((arr_0 [i_2 + 2]) ? (arr_5 [i_2 - 1] [i_2]) : (arr_0 [i_2 + 2])))) == ((82 ? ((((!(arr_2 [i_2 + 1] [4] [i_0]))))) : (max((arr_2 [i_0] [i_1] [i_0]), var_5))))));
                }
            }
        }
    }
    var_16 = ((((var_9 ? -19 : -80)) + -46));
    var_17 = (min(var_17, 25));
    var_18 = 15244928376274870597;
    #pragma endscop
}
