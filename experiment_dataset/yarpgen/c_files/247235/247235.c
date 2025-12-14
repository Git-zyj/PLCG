/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247235
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247235 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247235
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= var_1;
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] = (max(((+((var_7 ? (-32767 - 1) : var_3)))), (var_2 + var_10)));

                    for (int i_3 = 2; i_3 < 12;i_3 += 1)
                    {
                        arr_10 [i_0] [i_1] [i_1] [i_0] [i_2] [i_3 - 1] = var_10;
                        var_17 = max((~var_4), ((((arr_3 [i_2 + 1] [i_0 - 2] [i_0]) ^ 31))));
                        var_18 = (max(var_18, (((max((max(9207128697878824224, var_13)), 3292679289))))));
                        var_19 = (min((min(0, ((var_1 ? var_6 : var_0)))), (arr_8 [i_0 - 2] [i_0 - 3] [i_2 + 3] [i_2 - 1])));
                    }
                    for (int i_4 = 4; i_4 < 13;i_4 += 1)
                    {
                        var_20 = (min(var_20, ((min((((arr_0 [i_0 - 1]) ? (arr_4 [i_4 - 2] [i_1] [i_4 - 1]) : 4294967274)), var_15)))));
                        arr_13 [i_1] [i_4] = ((((-96 ? (min(var_9, -2102903224592484817)) : ((min(var_2, var_15))))) == (max((min(var_0, var_11)), ((max(var_8, 1)))))));
                        var_21 = (((((var_11 % (var_7 % var_13)))) ? (arr_9 [i_0] [i_0] [i_0 - 1] [i_0 + 1]) : ((((arr_9 [12] [i_1] [i_2 + 2] [i_0 - 1]) != 65535)))));
                    }
                    var_22 ^= (((((((var_8 ? var_14 : (arr_1 [i_1] [i_2 + 3]))) * ((6418759422753573279 ? 40521 : var_9))))) % (max(var_4, (((~(arr_0 [i_1]))))))));
                }
            }
        }
    }
    var_23 = (min(var_23, ((((max(var_10, (max(1623198118, var_14)))) ^ (((17634037637865380096 > var_3) ? ((var_9 ? var_8 : var_14)) : (((var_3 ? var_8 : var_0))))))))));
    #pragma endscop
}
