/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224298
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224298 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224298
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= (((min((~var_8), (min(0, var_6)))) != (!-1223708612)));
    var_17 = min((((var_13 ? var_5 : ((var_7 ? var_15 : var_1))))), (min((-1118353665 || var_6), var_10)));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [4] &= ((((max((arr_0 [18]), var_0))) ? ((var_3 ? var_0 : var_5)) : (min(-1118353665, var_11))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_10 [i_0] [12] [i_1] [i_2] &= ((-(((~284828099) ? (arr_6 [i_1 + 1] [i_1 + 1]) : (min((arr_3 [0] [14] [i_2]), var_13))))));
                    arr_11 [i_0] [i_1] [18] &= (-((1073741824 ? var_13 : 2564218244)));
                    arr_12 [i_0] = (min(((((-(arr_1 [i_0]))) - 2147483647)), (-2147483647 - 1)));
                    var_18 = (i_0 % 2 == 0) ? (((+(((arr_3 [i_0] [9] [i_0]) << (((arr_3 [i_0] [17] [i_0]) - 1792822727))))))) : (((+(((arr_3 [i_0] [9] [i_0]) << (((((arr_3 [i_0] [17] [i_0]) - 1792822727)) - 749598728)))))));
                }
            }
        }
    }
    var_19 = ((-var_8 != (~386134107)));
    #pragma endscop
}
