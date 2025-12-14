/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(-127, 1));
    var_19 = ((((max(-127, (min(var_4, var_17))))) ? var_16 : 15074155837197564491));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_20 = (max((~7444300000814998070), ((min(((var_15 | (arr_4 [i_0] [i_0] [i_1] [10]))), var_1)))));
                    arr_8 [i_2] [i_1] [i_0 - 1] &= (min((arr_5 [i_0 - 1] [i_0] [i_0 - 1] [i_2]), (min((arr_7 [i_0 - 1] [i_1] [i_1] [i_1 - 1]), ((max((arr_5 [i_0] [i_0] [15] [i_2]), -5766521658030178463)))))));
                }
            }
        }
        arr_9 [i_0 - 1] = ((max(4262078699595019392, (arr_1 [i_0 - 1] [i_0 - 1]))));
        arr_10 [i_0 - 1] = (((min(((((arr_0 [i_0 - 1]) * (arr_3 [i_0])))), (min(3826485124, 0)))) >> (((!(arr_2 [1] [i_0]))))));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_21 = ((+(max((arr_4 [i_3] [i_3] [i_3] [i_3]), (arr_7 [i_3] [i_3] [13] [i_3])))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                {
                    arr_18 [i_3] [i_3] [i_4 + 1] [i_5] = -126;
                    var_22 = (min(var_22, ((max(-97, (min((arr_2 [i_4] [i_5]), (arr_1 [i_3] [13]))))))));
                }
            }
        }
    }
    var_23 = (max(var_23, 17));
    #pragma endscop
}
