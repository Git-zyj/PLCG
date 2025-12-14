/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248614
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248614 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248614
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] = 7;
                arr_5 [i_0] = ((1233930388 <= 4294967295) ? ((3288246050 ? (var_0 + -1233930395) : (arr_3 [i_0] [i_0] [i_1]))) : ((((arr_1 [i_0]) ? 1233930410 : ((((arr_0 [i_1]) == (arr_3 [i_0] [18] [9]))))))));
            }
        }
    }
    var_16 = 2938783822;
    #pragma endscop
}
