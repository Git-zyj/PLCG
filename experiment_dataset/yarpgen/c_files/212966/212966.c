/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212966
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_10;
    var_16 = ((0 ? (max(var_1, (((0 ? var_3 : var_8))))) : var_3));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_17 = (arr_5 [i_0 + 1] [i_0 + 1] [i_0 + 1]);

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    var_18 = (max((arr_3 [i_0] [2]), ((((arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1]) > 4776751966519679868)))));
                    var_19 = -3;
                    arr_8 [i_0 + 1] [i_0 + 1] [i_2 - 1] [i_0 + 1] = ((((783 ? -4776751966519679869 : var_3))) ? 425 : (arr_4 [i_1]));
                }
                arr_9 [i_0] [i_0] = (((((((!(arr_3 [i_0] [i_1])))))) ? (arr_0 [i_0]) : (((((-(arr_1 [i_0 - 1] [i_1])))) / (-4776751966519679869 | var_11)))));
            }
        }
    }
    #pragma endscop
}
