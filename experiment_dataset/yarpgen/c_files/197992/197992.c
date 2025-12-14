/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197992
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197992 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197992
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_13 == var_2);

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        var_18 = (min(((((-32767 - 1) || (arr_1 [i_0 + 1] [i_0])))), (((arr_1 [i_0 + 1] [i_0]) ? (arr_1 [i_0 + 1] [i_0]) : (arr_1 [i_0 + 1] [i_0])))));
        arr_4 [i_0] [14] = (((-(arr_2 [i_0 + 1]))));

        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            var_19 = (max(((-(arr_2 [i_0 + 1]))), var_7));
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 15;i_4 += 1)
                    {
                        {
                            var_20 = ((min((((arr_10 [i_4] [i_2] [12] [i_0]) | (arr_1 [12] [i_0]))), ((((arr_9 [i_0] [i_2] [i_0] [i_0]) < (arr_14 [i_0] [i_1] [i_1] [i_1])))))));
                            var_21 += var_0;
                            arr_15 [12] &= max((((((166 ? 25697 : var_4)) / (arr_8 [i_0] [4] [i_2] [14])))), (((arr_7 [8] [i_1] [1]) ? var_13 : (((arr_5 [1] [i_1]) ? (arr_13 [i_0] [i_0] [7] [i_1] [1] [i_3] [i_4]) : var_6)))));
                            var_22 = ((((arr_8 [i_0] [i_0] [i_0] [i_2]) ? -1 : (max((arr_10 [i_0] [i_1] [i_1] [i_3]), (arr_13 [i_0] [i_1] [i_1] [i_2] [i_3] [i_4] [i_4 + 1]))))));
                            var_23 |= ((((var_1 ? (arr_14 [0] [i_2] [i_1] [0]) : (arr_6 [10]))) != ((((arr_6 [i_4 + 1]) & (arr_6 [i_0 + 1]))))));
                        }
                    }
                }
            }
            var_24 = 15977987149362826105;
        }
    }
    var_25 = (max(var_25, 1));
    var_26 *= var_0;
    #pragma endscop
}
