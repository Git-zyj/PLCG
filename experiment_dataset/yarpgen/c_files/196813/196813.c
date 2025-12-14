/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196813
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196813 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196813
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((-1 * (!var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_11 = ((((!(arr_3 [i_1 + 1] [i_1 + 1] [i_0]))) ? (min((arr_3 [i_2] [3] [i_0]), var_6)) : (arr_1 [i_0])));
                    arr_9 [i_2] [i_2] [i_2 + 1] [i_2 + 1] = (((((var_0 ^ (arr_0 [i_0] [0])))) ? (((arr_2 [i_2]) ? var_0 : 2772590998)) : ((max((arr_0 [i_1 - 1] [i_1 - 1]), (((arr_0 [i_2 - 1] [8]) ? (arr_5 [i_0]) : var_6)))))));
                    var_12 = (((min(var_6, var_2))) ? ((((-249443509 != 119) != (((-249443509 != (arr_0 [0] [0]))))))) : ((-249443489 ? 249443489 : -26)));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 18;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                var_13 *= ((((~(~15))) * ((((arr_7 [i_2 + 1] [i_4] [i_4] [i_1 + 1]) * (112 * var_6))))));
                                var_14 = 4294967295;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
