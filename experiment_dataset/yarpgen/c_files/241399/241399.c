/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241399
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241399 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241399
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = ((!(arr_4 [i_1])));
                var_18 = (max((~-617619283), var_16));
                arr_5 [0] = var_2;
                var_19 = (((((arr_2 [i_0 + 2] [i_0 + 1]) ? (arr_2 [i_1] [i_0 - 2]) : (arr_4 [i_0 - 2]))) * ((((!(!var_3)))))));
            }
        }
    }
    var_20 = (~var_0);
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            {
                var_21 = ((((((1 & 1008806316530991104) ? (arr_8 [i_2]) : (min((arr_7 [i_2] [4]), 2424918834439210072))))) ? (((-22997 & (1994716433 <= 11282003724506145223)))) : (arr_7 [i_3] [3])));
                var_22 = ((-1580315677 <= (min(617619305, -17))));
                var_23 = (min(var_23, (((!(arr_3 [i_3] [i_2]))))));
            }
        }
    }
    var_24 = (min(var_24, var_13));
    #pragma endscop
}
