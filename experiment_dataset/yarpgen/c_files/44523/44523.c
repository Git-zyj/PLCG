/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(((min(0, (18446744073709551615 < 2306962594)))), 1023));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] [i_0] = ((((((arr_3 [i_1 + 1] [i_1 + 3]) < (arr_3 [i_1 + 4] [i_1 + 4])))) | ((((arr_1 [i_0]) >= (arr_3 [i_2] [i_0]))))));

                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] = 569574292;
                        arr_11 [i_3 + 1] [i_2] [i_0] [i_1] [i_0] = (min(((((arr_3 [i_0] [i_1 + 3]) ? var_4 : (~-18063)))), ((((((arr_2 [i_0]) * (arr_0 [i_0])))) ? (arr_8 [i_0]) : var_3))));
                    }
                    for (int i_4 = 0; i_4 < 13;i_4 += 1)
                    {
                        arr_15 [i_4] [i_1] [i_2] [i_4] = ((((min((arr_6 [0] [i_1 + 1] [i_4]), (~176))) + 2147483647)) << (((((((2 ? -122 : 64518))) ? 1 : ((var_1 >> (((arr_3 [i_1] [i_1]) + 154)))))) - 1)));
                        arr_16 [i_0] [i_0] [i_1] [i_0] [3] [i_4] = ((((min((arr_13 [i_1 + 3] [i_1 + 2] [i_4]), (arr_5 [i_0] [i_1 + 4] [i_4] [8])))) ? (min((arr_5 [i_0] [i_1 + 2] [i_1 + 3] [i_2]), 3725393002)) : (395689270 != 118)));
                        arr_17 [i_0] = (max(1, 3899278025));
                        arr_18 [i_0] [i_0] [i_2] [i_4] [i_4] = (min((max(569574292, ((min((-127 - 1), (arr_13 [2] [i_1] [1])))))), -32753));
                    }
                    arr_19 [i_0] [i_0] [9] [i_0] = ((((~(min(112, 8338686145033481330))))) ? ((((29129 > (((451115920 / (arr_3 [i_0] [i_0])))))))) : (((arr_9 [i_1] [i_1] [i_1] [i_1 + 1] [i_1 + 1] [i_1]) + (-127 - 1))));
                }
            }
        }
    }
    #pragma endscop
}
