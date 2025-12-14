/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] [i_0] = (arr_4 [i_0] [i_1]);

                for (int i_2 = 0; i_2 < 15;i_2 += 1)
                {
                    arr_8 [i_1] = 0;
                    var_10 = (min(var_10, ((max(((-(((!(arr_2 [i_0])))))), ((((max(0, (arr_2 [i_1])))) ? 386300271 : (25198 ^ 127))))))));
                }
                for (int i_3 = 0; i_3 < 15;i_3 += 1)
                {
                    var_11 = (min(var_11, (((((((arr_7 [i_0 + 2] [i_0 + 2] [i_1 - 2] [i_1]) ? (arr_0 [i_0] [i_1 - 2]) : var_0))) ? (arr_6 [i_0] [i_0] [i_1] [i_3]) : (max((((-(arr_2 [i_0])))), -571957152676052992)))))));
                    arr_11 [i_1] [i_1 - 2] = ((((max(571957152676052992, var_8))) ? ((-(min(var_9, 1227232864924120501)))) : (((-((0 ? var_5 : var_7)))))));
                    var_12 *= (max((((!(!25198)))), (((arr_10 [i_0] [i_0] [1] [i_0]) ? (arr_7 [i_0] [i_0] [i_3] [i_1 - 1]) : (-1 && var_4)))));
                    var_13 &= 0;
                    arr_12 [i_1] = ((-(arr_3 [i_1 + 1] [i_3])));
                }
            }
        }
    }
    var_14 = (max(1712917414, var_9));
    #pragma endscop
}
