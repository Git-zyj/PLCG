/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42991
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((((17965783092590002459 ? 48 : 42))) / ((var_2 ? (min(var_16, var_14)) : ((min(65535, var_18))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_17));
                arr_5 [i_1] = (((((arr_4 [i_1] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_1 + 3]) : 1)) > (max((arr_4 [i_0] [i_0] [3]), -43))));
                var_22 = (max((min(691959112, (min(var_2, 50)))), (max((max(var_7, (arr_4 [i_0] [i_1 + 3] [i_1]))), (((1023 ? 1396707044 : 27156)))))));
                var_23 = (max(((max(63, -1))), (((~var_17) ? (max(62103, (arr_2 [i_0] [1]))) : -5790583762845310387))));
            }
        }
    }
    #pragma endscop
}
