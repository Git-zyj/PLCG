/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33232
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33232 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33232
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_10 = (min((((((4197447931174032516 << (-65 + 126)))) ? ((min(var_2, (arr_7 [i_0] [i_0])))) : -8060131281007105593)), (((((max((arr_5 [i_1]), (arr_6 [i_0] [i_0])))) <= (arr_5 [i_0]))))));
                arr_8 [i_0] [i_1] = (max((((var_7 * 683648997) << (((max(var_5, (arr_7 [i_0] [i_1]))) - 4001348287)))), ((((arr_2 [i_0]) >= (((arr_5 [i_0]) / var_3)))))));
            }
        }
    }
    var_11 = (((((-((min(-65, var_2)))))) ? ((((((var_5 ? var_2 : -2096109074))) == (min(3402552793360752634, var_2))))) : var_1));
    var_12 += (min(5878126265905684410, 139));
    /* LoopNest 3 */
    for (int i_2 = 2; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    var_13 = (((arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2]) << (((!((max((arr_14 [i_2 - 2] [i_3] [9] [0]), (arr_9 [i_2])))))))));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {
                        var_14 = (min((((arr_11 [i_2]) + (((arr_9 [0]) - (arr_19 [i_5] [i_4 + 2] [i_3] [i_3] [i_2]))))), (arr_13 [i_2] [i_2])));
                        var_15 = (min(((+((((arr_10 [i_2]) >= (arr_9 [i_4])))))), (((arr_14 [i_2] [i_2 - 2] [i_4] [i_4 - 1]) * (arr_14 [i_2] [i_2 + 1] [i_4 + 1] [i_4 - 1])))));
                        var_16 = (((((-(arr_14 [i_5] [i_4] [i_3] [i_2]))))) ? ((((min(0, 737037455))) + -7727871314958721636)) : ((((arr_11 [i_2 - 1]) + (arr_11 [i_2 - 2])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
