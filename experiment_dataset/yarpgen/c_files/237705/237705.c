/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237705
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237705 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237705
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_19 -= (((((var_2 ? var_15 : 72057594037862400) % var_18))));
                    var_20 = ((~((((arr_7 [i_2 + 2] [i_2] [i_2 + 1]) <= (arr_7 [i_2 + 1] [i_2] [i_2 + 2]))))));

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        arr_10 [i_2] = ((((min((arr_8 [i_2] [i_2 + 1]), (arr_3 [i_2 + 3] [i_2 - 1])))) ? 1695627907 : (arr_8 [i_2] [i_2 + 3])));
                        var_21 = (((var_12 == 27) ? (((arr_6 [i_1] [i_1] [i_2 - 1]) ? (arr_6 [i_3] [i_1] [i_2 + 3]) : var_4)) : (arr_4 [i_0] [i_0] [i_2 + 1])));
                        var_22 = (((179 > (arr_9 [i_2 - 1] [10] [i_3]))));
                        var_23 *= (((+((var_9 ? (arr_5 [i_0] [i_0] [10]) : 4816546623487944176)))));
                    }
                    for (int i_4 = 1; i_4 < 11;i_4 += 1)
                    {
                        arr_14 [i_2] [i_0] = ((((min(179, var_10))) == ((((22 != (arr_11 [i_4 - 1] [i_2] [i_4 + 2] [i_2 + 3] [i_2] [i_2])))))));
                        arr_15 [i_4 - 1] [i_2] [i_2] [i_1] [i_0] = ((+((min((arr_6 [i_0] [i_1] [i_0]), (arr_6 [i_0] [i_1] [i_2]))))));
                    }
                    var_24 = 188;
                }
            }
        }
    }
    var_25 = (max((min((!var_11), 1224382402)), ((var_12 ? 1792 : var_3))));
    #pragma endscop
}
