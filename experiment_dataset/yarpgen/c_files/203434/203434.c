/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203434
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_13 ^= (min(((~(((arr_0 [i_1]) ? 9223372036854775807 : 121)))), (arr_3 [i_0 + 1] [i_1] [i_0 + 1])));
                var_14 = (min(var_14, (((~((106 ? -9223372036854775807 : (arr_3 [i_0 + 1] [i_1] [i_0 + 1]))))))));
                arr_5 [i_0] = (arr_0 [i_0]);
                arr_6 [i_1] |= ((((127 ^ (arr_0 [i_0 + 1]))) >> ((((arr_4 [i_0]) < (arr_1 [i_0 + 1]))))));
            }
        }
    }
    var_15 = (min(var_15, (((var_9 ? ((63 ? -1727205641740369373 : 1598343336)) : (var_8 == 1598343337))))));
    var_16 = (min(var_16, ((min((min((-81 != 1727205641740369388), var_9)), ((var_11 - (min(var_2, var_1)))))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        for (int i_3 = 2; i_3 < 19;i_3 += 1)
        {
            {
                arr_13 [i_2] [i_3 + 1] [i_3 - 2] = var_8;
                arr_14 [3] [i_3 + 1] [i_3 - 1] = (((((365940230 ? 365940230 : (arr_8 [i_2] [i_3]))))) ? (((((~(arr_7 [i_2])))) ? -4299757587876731884 : (((0 ? var_2 : var_4))))) : ((((((max((arr_11 [14] [i_3]), var_0))) || (!var_12))))));
                arr_15 [i_2] [i_2] |= ((((((arr_9 [i_3 - 1] [i_3 + 1]) ? (arr_9 [i_3 - 2] [i_3 - 2]) : (arr_9 [i_3 - 2] [i_3 - 2])))) ? -0 : ((0 ? (-1262730778 / 365940242) : (var_12 & 1539200484)))));
            }
        }
    }
    var_17 = (max((~var_0), 1262730777));
    #pragma endscop
}
