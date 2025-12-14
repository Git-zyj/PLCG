/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248656
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_16 = (arr_5 [i_0] [17] [i_1]);
                var_17 = (arr_3 [i_0]);
                var_18 = (arr_2 [i_0 - 1] [i_1]);
                var_19 = (((((((((arr_3 [i_0]) ? (arr_5 [i_0 - 1] [i_0] [i_1]) : 0))) ? (arr_4 [i_0] [i_1]) : (arr_5 [i_0 - 1] [i_0] [17])))) ? ((((((arr_1 [i_0]) << (((((arr_2 [i_0] [i_1]) + 915655573)) - 7))))) ? ((1 ? -1035675356 : (arr_5 [i_0] [i_1] [3]))) : (arr_3 [7]))) : 1319574947));
                arr_6 [i_1] = (((arr_2 [i_0 - 2] [i_0 - 1]) ? 1035675349 : (arr_2 [i_0 + 2] [i_0 + 2])));
            }
        }
    }
    var_20 = var_5;
    #pragma endscop
}
