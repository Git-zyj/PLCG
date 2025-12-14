/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240654
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240654 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240654
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_4;
    var_14 = var_7;
    var_15 = (max(var_15, var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (((arr_1 [i_1] [i_2 + 1]) & (arr_5 [i_0] [i_2])));
                    var_17 = (min((arr_5 [i_1 + 2] [i_1]), (((arr_3 [i_1 + 2] [i_2] [i_2 - 1]) ? (arr_5 [i_1 + 2] [i_2 - 1]) : (arr_5 [i_1 + 2] [10])))));
                    var_18 = ((((((var_6 ? 0 : 59))) ? (((max(5, 61946)))) : 134217727)));
                }
            }
        }
    }
    var_19 = (min((max(-81, (min(var_11, 182)))), (((3 ? (-483574117 != 14897) : (var_7 / var_10))))));
    #pragma endscop
}
