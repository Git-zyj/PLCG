/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243889
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243889 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243889
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((-(124 | -1358761913)));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [0] = ((!(108771093 || -1)));
                    var_12 = 22;
                    var_13 = ((((-95 ^ 32745) ? 17 : -64508)));
                }
            }
        }
        var_14 = ((!(((32745 ? 4107869930532310162 : 676622617)))));
        arr_7 [i_0] [i_0] = 2041651814;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        arr_12 [i_3] = (((!(((-109472802 ? 22 : 18007579249168456612))))));
        var_15 -= (((((18007579249168456603 ? 1266509129 : 439164824541095002))) || (((4433295 ? 70 : -23)))));
        var_16 -= (((-22 ? (((233 ? -108 : -1)) : 2759044441))));
    }
    var_17 -= (((+-1266509129) ? var_10 : 22));
    var_18 = var_0;
    #pragma endscop
}
