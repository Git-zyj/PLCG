/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51359
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51359 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51359
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 += ((((min((!var_2), (-19818 + 39293)))) ? 49415 : var_14));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    var_21 = (max(var_21, (((((min(var_14, (arr_6 [i_2 + 1] [i_0 + 3])))) ? var_6 : (min((~2673), ((min(var_5, (arr_4 [i_2])))))))))));
                    var_22 = (arr_0 [i_1]);

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_23 = ((((arr_5 [i_3] [i_1] [i_2] [i_3]) / 4)));
                        arr_10 [i_2] [i_2] [i_3] = ((220 ? (min(((46195 ? (arr_3 [i_3]) : var_8)), ((max(var_5, 0))))) : (((((((arr_6 [i_0] [i_1]) || (arr_6 [i_1] [i_1])))) != var_14)))));
                        arr_11 [2] [i_1] [i_1] [i_2] [i_1] [i_1] = (arr_2 [i_3]);
                        var_24 = (min(var_24, ((((arr_4 [i_2 - 1]) <= ((2764602918 * (arr_6 [i_0 - 2] [i_0 + 3]))))))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
