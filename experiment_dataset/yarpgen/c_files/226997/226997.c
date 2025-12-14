/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226997
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_12 &= ((!((((arr_6 [i_4] [i_4] [i_3] [i_1 - 2]) ? (arr_6 [i_4] [i_4 - 1] [i_4] [i_1 - 2]) : var_7)))));
                                var_13 = ((((!(arr_9 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 1] [i_4] [i_4 + 1] [i_4]))) ? ((min((min(var_11, -81)), 2276))) : (((!(27359 <= -12494))))));
                                var_14 = -83;
                            }
                        }
                    }
                    arr_10 [1] = (~-97);
                }
            }
        }
    }
    var_15 += (min(var_7, ((-220 / (var_1 && 14742128896392476778)))));
    var_16 = (((6946636179939714588 ? 241 : 3704615177317074838)));
    var_17 = var_11;
    /* LoopNest 3 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 1; i_7 < 23;i_7 += 1)
            {
                {
                    arr_19 [i_5] [i_5] [i_5] |= 146;
                    var_18 -= ((4850930950034239752 ? ((((((arr_12 [i_6]) / var_10))) ? 11259176281407118442 : ((3704615177317074838 ? 11177322420910823199 : (arr_13 [i_5] [i_6] [22]))))) : ((((7299722500331503619 != 887218686) ? (((~(arr_11 [23] [i_6])))) : ((222 ? var_8 : 2185578958)))))));
                    var_19 = ((((((((arr_12 [i_6]) ? var_11 : 32706))) || 57777)) ? ((max(-24898, 215))) : (((!(((arr_11 [i_7] [i_5]) == 5227919614478597941)))))));
                    arr_20 [i_5] [i_6] = ((!(((-(-9651 != 106))))));
                }
            }
        }
    }
    #pragma endscop
}
