/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4198
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 18;i_2 += 1)
            {
                {
                    var_14 = (max(var_14, (((var_2 + (-26837 - 80))))));

                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        var_15 &= (arr_10 [i_0] [17] [17] [i_0]);
                        var_16 -= ((((((((var_9 ? (arr_0 [1]) : 871567376))) ? ((((arr_7 [i_0] [i_0] [i_3] [i_3]) ? 10097 : var_2))) : 10096203046188491491))) ? (((!(((arr_1 [i_0]) != 4))))) : (((((17529235669174151098 ? 84 : 17532)) < 6129526175811551903)))));
                    }
                    for (int i_4 = 0; i_4 < 22;i_4 += 1)
                    {
                        var_17 = (max(var_17, ((((((arr_0 [i_2]) >= var_9)) ? ((5963973054740707035 - (arr_0 [i_0]))) : var_3)))));
                        var_18 = ((((((arr_3 [i_2] [i_4]) + (arr_6 [i_0] [i_1 - 1] [i_1 + 1] [i_2 + 3])))) <= (62914560 - 0)));
                        var_19 = (max(var_19, (((((((arr_5 [i_0] [i_2 + 1] [i_2 + 1]) ? (arr_14 [i_0] [i_1 + 1] [i_2 + 3] [14] [i_1]) : (arr_0 [i_2])))) ? (((((((arr_0 [i_1]) ? var_9 : var_11))) >= (arr_0 [i_0])))) : (((!(arr_4 [i_0] [i_2 + 4] [i_4])))))))));
                        var_20 = (max(var_20, ((((arr_12 [i_0] [12] [i_2 + 4] [i_2 + 4] [i_4]) ? ((8796093022192 ? 1 : 65535)) : 1)))));
                    }
                }
            }
        }
    }
    var_21 &= var_10;
    #pragma endscop
}
