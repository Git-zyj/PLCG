/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213009
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= (max(var_2, var_8));
    var_11 |= (~(((((var_6 ? 17 : var_3)) >= ((-27399 ? -467535137 : 3))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_12 = ((~(min(65529, ((2558975535 ? (arr_1 [i_0]) : 50332))))));
                var_13 = ((((var_8 ? (~249) : (arr_4 [i_0]))) + (max((arr_2 [i_0]), (arr_2 [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 21;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_14 = 15207;
                    var_15 -= ((((((arr_12 [i_2 + 1] [i_4] [i_2 + 1]) && -var_0))) & (((((-40 != (arr_8 [20] [17])))) >> (((((arr_5 [i_2]) / 1809824862)) + 2473714235))))));
                    var_16 = (min(var_16, ((max((!50332), (arr_5 [i_4]))))));
                    var_17 = (((arr_5 [i_2]) ? (arr_7 [i_3] [i_3] [i_3]) : (((~((-(arr_5 [i_4]))))))));
                }
            }
        }
    }
    #pragma endscop
}
