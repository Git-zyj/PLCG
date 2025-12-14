/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, var_10));

    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        arr_4 [8] [i_0] = var_4;
        var_20 = (min(var_20, ((((-var_10 ^ var_17) - (((((1 <= -13) <= (var_5 < 13))))))))));
        arr_5 [i_0] [i_0] = (max(((14 ? -var_14 : (((var_6 << (var_7 - 127)))))), ((((14733 ? (arr_0 [i_0] [i_0]) : (arr_1 [i_0])))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_21 *= ((!((var_2 >= (((arr_9 [i_0] [19] [18] [i_2]) ? -6223160964903246021 : (arr_7 [7])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_22 += var_4;
                                arr_16 [i_4] [i_2] [i_3] [i_3] [i_2] [i_2] [i_0] = max((((!(arr_10 [i_2] [i_2] [i_2] [i_3])))), var_10);
                                arr_17 [i_2] [19] [i_2] = (var_10 - ((((((6223160964903246035 ? (arr_9 [i_2] [i_4] [i_2] [i_0]) : var_10))) ? (var_17 == var_16) : var_5))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
