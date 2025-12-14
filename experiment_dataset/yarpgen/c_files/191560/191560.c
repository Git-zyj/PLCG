/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (~var_18);
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    var_21 -= (((((~1065353216) ? 0 : (arr_7 [i_0 + 3])))) ? ((((!61781) | (!1205469904766761740)))) : (((arr_6 [i_0] [i_0 + 3] [i_2 + 3]) / (~16867266964612695074))));
                    arr_10 [i_1] [i_1] [i_2 + 3] [i_2 + 3] = 814407667;
                    arr_11 [i_0] = ((~((((-1037 ? -1065353206 : (arr_6 [i_0] [i_0] [18]))) / (~245)))));
                }
            }
        }
    }
    var_22 = (max(var_22, ((min(var_12, (((!(((1205469904766761758 ? 1 : var_12)))))))))));
    var_23 = (max(var_23, (((3561795260437754041 > ((-var_17 ? 3 : ((max(-1516250972, var_10))))))))));
    #pragma endscop
}
