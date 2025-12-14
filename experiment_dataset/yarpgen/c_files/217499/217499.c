/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217499
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217499 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217499
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (54 & ((21 ? 7705581993302209139 : (~var_3))));
    var_13 |= (var_11 ? var_1 : (((4309 - 1) ? var_3 : var_4)));
    var_14 = (((!738046310517349799) ? ((var_1 - ((min(-32433, var_1))))) : -1068911053));
    var_15 = (min(var_0, 82));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_16 = (min(((((arr_0 [i_0 - 1]) != (arr_0 [i_0 - 1])))), (arr_5 [i_0] [i_1] [i_2])));
                    arr_8 [i_0] [i_0] = ((!(((1 ? (arr_4 [i_0 - 1] [i_0 - 1]) : 738046310517349788)))));
                    var_17 = (min(53, (1695759412 && 1313024365)));
                    var_18 *= ((~(((((0 ? 738046310517349799 : 6710)) == 25)))));
                }
            }
        }
    }
    #pragma endscop
}
