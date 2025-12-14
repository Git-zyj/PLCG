/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                var_12 = (~2327821781);
                arr_5 [i_0] [i_0] [0] = -12298639883920884170;
                var_13 = (((((~(arr_0 [i_0])))) ? 0 : (arr_2 [i_0] [i_0] [i_0])));
                var_14 = (min(var_14, (((12925 ? (max((arr_1 [i_0]), 8)) : ((((arr_4 [i_0] [i_0] [i_1 - 1]) ? (arr_4 [i_1 - 1] [i_1 - 1] [i_1 - 1]) : (arr_4 [i_1] [i_0] [i_1 - 1])))))))));
            }
        }
    }
    var_15 = (max(((~(max(-12901, var_4)))), var_11));
    var_16 = (((min(-12934, -23267))));
    var_17 = (var_4 == -32692458389345625);
    #pragma endscop
}
