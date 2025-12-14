/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 11;
    var_19 = (var_5 != var_13);
    var_20 += var_8;
    var_21 = (max(var_21, var_16));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_22 -= ((!((((arr_5 [i_0 + 1] [i_0 + 1]) >> (-5077394735388470907 + 5077394735388470915))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            var_23 = ((var_5 > (min((arr_1 [i_0 + 1] [i_0 + 1]), (min(2016, (arr_10 [i_2] [i_1] [i_2] [i_2] [1] [i_2])))))));
                            arr_11 [0] [i_1] [i_2] [i_3] [i_3] = (arr_7 [i_1]);
                        }
                    }
                }
                var_24 = (((arr_10 [5] [i_1] [i_0 + 1] [i_0 + 1] [i_0] [i_0 + 1]) ? ((-(arr_10 [i_0] [i_1] [i_0 + 1] [i_0 + 1] [3] [i_0 + 1]))) : ((~(arr_10 [i_0] [i_1] [i_0 + 1] [i_0 + 1] [6] [i_0 + 1])))));
                var_25 = (max((((!3811493302) / (arr_1 [i_0 + 1] [i_1]))), ((((1533482443 ? 511 : 1634953701))))));
                arr_12 [i_1] [2] = (((min((((677577797 ? var_12 : var_6))), 414432161)) < (((min((arr_2 [1] [i_0 + 1]), (arr_2 [i_0] [i_0 + 1])))))));
            }
        }
    }
    #pragma endscop
}
