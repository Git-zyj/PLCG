/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += var_11;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_21 += (var_5 ? -var_15 : (max((arr_11 [i_4] [i_4] [i_4] [0]), (((arr_10 [i_4] [1] [i_0] [1] [i_0]) & (arr_4 [i_0] [i_4]))))));
                                var_22 = (((arr_8 [i_0] [3] [i_2] [i_3 + 1]) ? ((17035 ? 49769 : ((var_10 ? (arr_11 [i_1] [i_2] [i_3] [0]) : 65528)))) : var_6));
                                arr_12 [i_2] [i_1] [i_0] [i_3] [4] [i_1] = (((((max((arr_0 [i_0]), (arr_4 [4] [i_3]))))) ? var_15 : ((0 ? 13573106598421478637 : ((~(arr_8 [i_4] [5] [i_1] [5])))))));
                                arr_13 [i_0] [i_0] = ((-((880991620 * (!16383)))));
                            }
                        }
                    }
                    var_23 = 9;
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 7;i_6 += 1)
                        {
                            {
                                var_24 = (min(((var_1 ? 18446744073709551594 : (arr_10 [0] [i_0] [i_2] [i_0] [i_2]))), -1708268582));
                                var_25 = ((((min(var_13, (arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5] [i_5 - 1])))) ? (((arr_18 [i_5 - 1] [i_5 - 1] [i_5 - 1] [i_5] [i_5 - 1]) ? 13596397160105225291 : (arr_18 [i_5 - 1] [i_5] [i_5 - 1] [i_5 - 1] [i_5 - 1]))) : var_11));
                            }
                        }
                    }
                }
            }
        }
    }
    var_26 = (min(10503455148522285600, 16660));
    var_27 = ((((min(var_17, var_10))) ? 45024 : ((-(!var_3)))));
    #pragma endscop
}
