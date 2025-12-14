/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_14 = 0;
                var_15 = ((((arr_0 [i_1] [i_0]) && (arr_4 [i_1]))));
            }
        }
    }
    var_16 -= ((((((524287 | var_6) ? ((var_1 ? var_3 : 2400342107)) : var_11))) ? 3051276111 : (((((!var_10) != (var_5 ^ var_9)))))));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            {
                var_17 = (min(var_17, ((((((((4294967279 ? (arr_5 [i_2] [i_2]) : 18014398509481983))) ? ((((arr_10 [i_2] [i_3] [i_3]) && (arr_5 [i_2] [i_2])))) : (((!(arr_3 [i_2] [i_2] [i_2])))))) * 64)))));
                var_18 = (((38 <= (((arr_9 [i_2] [i_3] [i_3]) ? (arr_3 [i_2] [i_2] [i_2]) : var_3)))));
                var_19 = ((((max((arr_1 [i_2]), (arr_1 [i_2])))) - (arr_1 [i_3])));
            }
        }
    }
    #pragma endscop
}
