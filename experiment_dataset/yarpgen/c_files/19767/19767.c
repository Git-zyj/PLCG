/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19767
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19767 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19767
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (min((~var_1), var_1));
    var_13 = ((-(((!(((var_11 ? var_9 : var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 15;i_3 += 1)
                    {
                        var_14 = (max((arr_11 [i_0] [i_1] [i_1] [i_0]), (arr_11 [i_0] [9] [i_2] [i_3])));
                        arr_12 [i_1] [i_3] = ((!(((~(!var_8))))));
                        arr_13 [i_0] [i_0] [5] [i_3 + 3] = (arr_8 [3] [i_1] [i_1]);
                    }
                    for (int i_4 = 0; i_4 < 18;i_4 += 1)
                    {
                        arr_17 [i_2] = (min((arr_4 [i_0] [i_1]), 8990));
                        var_15 = 3998110074086623179;
                        arr_18 [i_0] [i_0] [i_0] [i_2] [i_0] [11] = 5764435107052874223;
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((((((((4 ? 4294967282 : (arr_2 [i_0] [i_4])))) ? (((max(-90, (arr_0 [i_0]))))) : (arr_15 [i_4] [i_2] [i_2] [i_1] [i_0] [1])))) ? (arr_0 [i_2]) : ((min((max(23156, -22925)), (arr_9 [i_1] [i_1] [i_2]))))));
                    }
                    var_16 += (arr_7 [i_0]);
                }
            }
        }
    }
    #pragma endscop
}
