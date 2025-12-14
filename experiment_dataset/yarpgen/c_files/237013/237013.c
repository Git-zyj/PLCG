/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= ((((min(0, var_0))) ? ((~(min(var_10, 0)))) : var_9));

    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_12 = (arr_4 [i_0] [i_0] [2]);
                    arr_7 [i_1] [i_2] [i_2] = -2082991823;
                    var_13 = ((!((((arr_1 [i_0]) ? 2147483647 : (arr_1 [5]))))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        var_14 = (~((-(((arr_6 [i_0] [i_1] [14]) << (((arr_5 [i_1]) - 7282536395228508110)))))));
                        arr_11 [i_2] [2] [i_2] [i_3] = (arr_10 [i_0] [i_2]);
                        var_15 ^= (min((((arr_6 [14] [i_3] [i_2]) ? 18446744073709551615 : 0)), ((((arr_1 [i_3]) ? (!2147483647) : var_7)))));
                        var_16 = ((var_1 ? (min(var_2, (arr_4 [i_0] [i_2] [i_3]))) : ((((arr_9 [1] [i_1] [i_1] [12] [i_2] [i_3]) ? (arr_9 [i_0] [i_1] [i_1] [i_2] [i_2] [13]) : 4125530988)))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_17 = (max(var_17, -2147483647));
                        var_18 = (((var_8 != ((((arr_9 [i_0] [i_1] [i_1] [i_1] [i_2] [17]) % (arr_0 [i_0] [i_1])))))));
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_19 = (max(var_19, ((((arr_9 [i_0] [i_1] [i_2] [i_5] [i_1] [i_5]) ? (arr_9 [i_0] [2] [i_1] [i_1] [i_1] [8]) : (arr_9 [i_5] [i_5] [i_2] [i_1] [i_5] [4]))))));
                        arr_17 [i_2] [6] [i_1] [i_2] [i_5] [i_5] = (arr_6 [i_0] [i_2] [i_2]);
                        arr_18 [i_0] [i_0] [i_2] [i_0] [i_0] = (((arr_4 [i_0] [i_2] [i_5]) ? (arr_4 [i_0] [i_1] [i_2]) : (arr_4 [i_0] [i_1] [i_5])));
                    }
                }
            }
        }
        var_20 = var_2;
    }
    for (int i_6 = 0; i_6 < 22;i_6 += 1)
    {
        arr_21 [1] = (((min((arr_20 [i_6] [i_6]), (arr_20 [i_6] [i_6])))) ? (~1203041909) : (((arr_19 [i_6]) ^ (arr_20 [i_6] [i_6]))));
        var_21 |= (arr_20 [i_6] [i_6]);
    }
    #pragma endscop
}
