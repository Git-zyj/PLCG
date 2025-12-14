/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(524224, -1));
    var_11 -= 20;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 11;i_2 += 1)
                {
                    arr_7 [i_0] = (((!var_5) ? (67108863 > var_9) : -242));
                    arr_8 [i_1 + 2] [i_1 + 2] [i_0] = (((min((arr_3 [i_0] [i_0] [i_0]), (((var_1 ? (arr_6 [i_1]) : (arr_4 [i_0] [i_1 + 2]))))))) ? (((((((arr_6 [i_1]) * var_8))) ? (arr_6 [i_0]) : (arr_5 [i_2 - 2] [i_0] [i_2] [i_0 + 1])))) : (((((arr_2 [i_0]) < (arr_3 [i_0] [i_0] [i_2]))) ? (((((arr_3 [i_0] [i_0] [i_0]) <= (arr_5 [i_0] [i_0] [i_1] [i_2]))))) : (~var_2))));
                    arr_9 [i_0] [i_1 - 2] [i_0] = var_9;
                }
                var_12 = var_9;
            }
        }
    }
    var_13 = var_4;

    for (int i_3 = 0; i_3 < 18;i_3 += 1)
    {
        var_14 = (min(var_14, ((min(140737488322560, (arr_10 [i_3] [i_3]))))));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 16;i_5 += 1)
            {
                {
                    var_15 = var_7;
                    arr_20 [i_3] [i_4] = ((!((!(((var_3 & (arr_14 [i_5] [i_4] [i_3]))))))));
                }
            }
        }
    }
    #pragma endscop
}
