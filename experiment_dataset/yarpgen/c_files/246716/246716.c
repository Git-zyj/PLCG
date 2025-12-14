/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246716
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246716 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246716
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_17 = (((((-7804446124751984771 & (9633572576577928930 && var_7)))) && (((-119 <= 62556) && ((((arr_0 [i_0]) ? 188717499 : var_8)))))));
        var_18 = var_9;
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    var_19 = (min(((min((((arr_11 [i_3] [i_3] [i_2] [i_3]) | var_6)), ((((arr_9 [i_1] [i_2]) > (arr_8 [20] [i_2] [i_3] [i_3]))))))), (arr_11 [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_2])));
                    var_20 = (max(4294967295, ((((arr_11 [i_1] [i_1 - 1] [i_3] [7]) ? var_6 : ((var_3 ? (arr_6 [i_1]) : (arr_6 [i_1]))))))));
                    var_21 = (min((var_6 % var_6), (arr_9 [i_1] [i_2])));
                }
            }
        }
        var_22 = ((((((((-92730701373316739 ? var_15 : var_16))) > (((arr_9 [i_1] [i_1]) ? var_3 : 0))))) - ((((max(var_12, 85))) ? (((118 && (-32767 - 1)))) : -var_13))));
        var_23 = ((var_12 ? (min((((var_14 ? (arr_6 [i_1]) : (arr_11 [i_1] [i_1] [i_1 + 1] [9])))), ((var_3 ? var_3 : var_1)))) : (((1 ? var_16 : ((var_11 ? var_7 : -6435754291913973043)))))));
        var_24 = ((((((arr_5 [i_1] [i_1 - 1] [i_1]) ^ -9223372036854775805))) > (max(((2971795990424480503 << (3754846214 - 3754846192))), 3754846214))));
    }
    /* LoopNest 3 */
    for (int i_4 = 0; i_4 < 25;i_4 += 1)
    {
        for (int i_5 = 4; i_5 < 23;i_5 += 1)
        {
            for (int i_6 = 3; i_6 < 24;i_6 += 1)
            {
                {
                    var_25 = 1;
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 25;i_8 += 1)
                        {
                            {
                                var_26 = (max((((arr_15 [i_5]) ? (max(2971795990424480503, 123)) : 65)), (((((26 ? 4294967295 : -1024418155))) ? ((((2979 == (arr_25 [i_4] [i_5 + 2] [i_6] [i_5 + 2] [i_5 + 2]))))) : var_1))));
                                var_27 = ((!((max((arr_16 [i_6 - 2] [i_5 + 2]), (arr_16 [i_6 - 3] [i_5 - 3]))))));
                            }
                        }
                    }
                    var_28 = 253;
                    var_29 = ((!3) ? (((-((var_16 ? 2380272895 : var_16))))) : ((-4294967270 ? ((var_0 ? var_9 : (-9223372036854775807 - 1))) : (((max(-8500, (arr_20 [i_6 - 1] [i_5] [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
