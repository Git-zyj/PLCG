/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {
                    var_20 = (-(arr_1 [i_0] [5]));
                    var_21 = -6590932463036898800;
                }
            }
        }
        var_22 = (max(var_22, var_6));
        var_23 += (((((!(arr_3 [i_0])))) != (((arr_2 [i_0] [i_0]) ? (arr_5 [i_0] [i_0] [i_0] [i_0]) : 69))));
    }
    for (int i_3 = 0; i_3 < 24;i_3 += 1) /* same iter space */
    {
        var_24 = (max(var_24, 1));
        arr_10 [i_3] = (((~1) | (((arr_6 [20]) * (((!(arr_2 [i_3] [i_3]))))))));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1) /* same iter space */
    {
        arr_13 [1] [1] |= (((max(var_8, 207))));
        arr_14 [i_4] = (((((-(arr_0 [i_4])))) != (arr_11 [i_4])));
    }
    for (int i_5 = 0; i_5 < 24;i_5 += 1) /* same iter space */
    {
        arr_17 [6] = ((((~(max(var_11, 5673509442804771817)))) | (((~(arr_8 [i_5]))))));
        var_25 = (max(var_25, (!9223372036854775807)));
        var_26 = (((27 & 31889) > 830530795));
    }
    var_27 = (((max(var_6, var_11))));
    var_28 = (min(var_28, 781959207));
    var_29 ^= ((var_9 ? (max(24985, 4294967295)) : ((((-var_8 || (((-119 ? var_5 : 16860177630324315714)))))))));
    #pragma endscop
}
