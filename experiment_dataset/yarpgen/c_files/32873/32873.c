/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_15 ? ((var_2 ? var_8 : ((var_6 ? var_14 : var_1)))) : (max((min(var_1, var_8)), ((min(var_0, 51828)))))));
    var_17 = (max((((!(((29960 ? 8903411579615674437 : var_2)))))), (((max(-29960, 1723101862330412300)) << (9595238603429586228 - 9595238603429586220)))));
    var_18 = (min(((((29960 ? 0 : var_11)))), 6114101604626600297));

    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        var_19 ^= (((((+(max((arr_0 [i_0 + 1] [i_0]), 12824))))) ? 29945 : -29960));
        arr_3 [1] = ((max(-29961, (((arr_1 [i_0 - 2] [i_0 - 3]) * (arr_1 [11] [i_0]))))));
        arr_4 [i_0] = (max(32767, (min((max(var_15, 8851505470279965387)), -110))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        var_20 *= (min(5640539129873048721, 15638));
                        var_21 = var_5;
                        var_22 = ((~((((max((arr_13 [i_1]), 32762))) - ((6375021197283901997 ? -29968 : 18422))))));
                    }
                }
            }
        }
    }
    var_23 += var_10;
    #pragma endscop
}
