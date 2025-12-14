/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22231
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_17 = ((!((!(arr_0 [i_0 - 2])))));
                        arr_10 [i_0] [i_2] = (max((~var_9), 1874091899));
                        arr_11 [i_2] [i_3] = (((arr_5 [7] [i_2]) * ((((((arr_9 [i_0] [i_1] [i_1] [i_2] [i_2 - 1] [i_2]) / 1874091899)))))));
                        var_18 = ((~(min(((max((arr_1 [i_1] [i_1]), -1874091899))), ((26 ? (arr_3 [i_3]) : 1874091889))))));
                    }
                    arr_12 [i_2] [i_2] [i_1] [i_2] = (((((-(min(-29, -1874091899))))) ? (min(((-(arr_1 [14] [i_2]))), (((var_15 & (arr_0 [i_0])))))) : var_10));
                }
            }
        }
        var_19 = (max(var_19, (((((max((arr_6 [i_0 + 1] [12] [i_0] [i_0]), 26))) ? (((-11257 > 20659) + 18446744073709551599)) : var_7)))));
    }
    var_20 = var_15;
    var_21 = ((~(((44877 > var_14) - (-7070689935815245848 & 496)))));
    #pragma endscop
}
