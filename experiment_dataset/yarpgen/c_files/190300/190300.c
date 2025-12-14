/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        arr_12 [i_0] [i_3] [14] [i_3] = var_7;
                        arr_13 [i_0 - 2] = (-1381157393 != 65535);
                    }
                    for (int i_4 = 0; i_4 < 15;i_4 += 1)
                    {
                        arr_16 [i_0 - 1] [i_1] [5] [5] = (+-4294967295);
                        arr_17 [i_0] [i_0] [i_0 - 3] [i_0] = var_7;
                        arr_18 [i_2] [4] = 4294967295;
                        arr_19 [i_0] [i_1] [i_0] [4] [i_1] = 1;
                        var_11 = (max(var_11, (((-(9910390419012042136 >= 4294967294))))));
                    }
                    var_12 = (min(var_12, var_4));
                    var_13 = 4294967294;
                    var_14 = 29108;
                    arr_20 [i_0 - 3] [i_1] = ((((((((arr_10 [i_0] [i_0] [i_0 - 3] [i_0]) == var_0)) ? (arr_8 [i_0] [i_1] [i_2] [i_1]) : (arr_0 [i_0 + 1])))) ? (((6 & (arr_3 [i_0 - 1] [i_1])))) : var_0));
                }
            }
        }
    }
    var_15 = var_7;
    #pragma endscop
}
