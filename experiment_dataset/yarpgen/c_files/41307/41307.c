/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41307
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_14 = (max(var_14, var_1));
                                var_15 = (max(var_15, ((min((arr_4 [7] [i_1] [i_2]), 0)))));
                                var_16 = ((!(!var_5)));
                                arr_12 [i_1 + 1] [i_1 + 1] [i_2] [i_2] [i_4] [i_1 - 1] [i_4] = (((((18446744073709551595 ? (!var_5) : 18446744073709551615))) ? (((arr_4 [i_0] [i_1 - 1] [i_1 - 1]) ? (arr_4 [14] [i_1 + 1] [14]) : 11619402120205680246)) : (min((((arr_7 [i_0] [i_0] [i_2] [i_3 - 1]) ? 7047600758494453517 : var_12)), ((-1768546219 ? 11399143315215098098 : -112))))));
                            }
                        }
                    }
                    arr_13 [i_0] [i_0] [i_0] [6] = ((((((arr_0 [i_0] [i_1 + 1]) ? (((arr_4 [7] [i_1] [i_2]) ? var_2 : 60)) : ((((arr_2 [i_0] [i_1]) && var_1)))))) ? var_6 : ((((max(18446744073709551615, (arr_0 [i_0 - 1] [3])))) ? ((var_12 ? (arr_8 [i_0] [17] [17] [17]) : 60)) : (arr_8 [i_0] [i_1] [17] [i_1])))));
                }
            }
        }
    }
    var_17 = (max(-61, (((((min(var_6, var_6)))) & (max(var_10, 96))))));
    #pragma endscop
}
