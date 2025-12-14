/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25861
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25861 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25861
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((!1) ? 0 : ((var_4 ? (~var_0) : 8182223647756762880))));
    var_15 = (min(var_15, var_4));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 *= (((((((100 ? 100 : var_11))) ? 100 : ((min((arr_2 [i_0]), (arr_1 [i_0])))))) / ((max((-101 != 5034177311242168819), -101)))));

        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            arr_6 [4] [14] [i_0] = (min(768320640461462776, (((arr_5 [i_1]) ? (35888059530608640 * 14951111325346003047) : 59443))));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    {
                        arr_12 [i_2] [i_2] [i_2] [i_3] [i_1 - 3] = 105;
                        arr_13 [i_0] [i_2] [i_2] = ((((((3445899953581434805 ? 65523 : -1)) != (~-22082)))) != var_4);
                    }
                }
            }
            var_17 -= (((min(184, (arr_4 [i_1]))) - (min((arr_10 [0]), ((((arr_3 [14]) >= 3)))))));
            arr_14 [i_0] [i_1 - 1] = (min((min(9116, (arr_8 [i_0] [i_1]))), (arr_8 [i_0] [i_0])));
        }
        var_18 ^= (((((((arr_7 [i_0] [i_0] [i_0] [i_0]) / var_5)) * 32767))) <= (((-7485 * 17886400097487676306) * (-101 - 31172))));
    }
    #pragma endscop
}
