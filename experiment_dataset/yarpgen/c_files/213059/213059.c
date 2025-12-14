/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213059
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213059 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213059
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((6274214883161723939 > -var_7) > ((((-6274214883161723940 >= var_10) != (!var_3))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_4] = ((-6274214883161723937 * (((arr_1 [i_2 + 2]) ? (arr_1 [i_2 + 1]) : (arr_1 [i_2 - 1])))));
                                arr_17 [5] [i_2] [9] [i_2] &= (arr_6 [i_2]);
                            }
                        }
                    }
                    var_14 |= ((~(arr_3 [i_0])));
                    arr_18 [i_2] [i_1] |= (arr_4 [i_0] [i_1 + 1] [i_2]);
                    arr_19 [i_1 - 1] [i_2] = (max((((4294967295 >= 0) ? ((4294967295 ? 0 : 12543538581417345868)) : ((((arr_15 [i_0] [i_0] [i_1] [i_2] [i_2]) / (arr_5 [13] [4] [i_2 + 1])))))), ((min(var_11, (((arr_8 [i_0] [i_1] [i_2 + 2]) % var_1)))))));
                    arr_20 [i_0] [i_0] = ((((((6274214883161723944 ? -6274214883161723934 : 6274214883161723946)) * (8086 != 6274214883161723946))) != 222498819));
                }
            }
        }
    }
    var_15 = (min(var_8, 0));
    var_16 &= (18446744073709551609 * 17536194526358287197);
    #pragma endscop
}
