/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54242
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54242 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54242
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        var_10 ^= (((arr_2 [i_0 - 3]) ? 48 : (arr_2 [i_0 - 3])));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    var_11 += 3488;
                    var_12 &= ((-91751537 ? ((((arr_4 [i_0] [i_1 + 4]) * var_8))) : -3686941195425901111));
                }
            }
        }
    }
    var_13 = ((((min((((var_9 ? 1 : var_5))), (min(0, 11166733815375660907))))) ? var_7 : ((~(~var_6)))));
    var_14 = ((((((var_3 << (((var_7 + 131) - 12))))) ? 0 : -838086849875721078)));
    var_15 = (max(var_15, var_6));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 17;i_3 += 1)
    {
        arr_12 [i_3] = ((-3488 >= (((arr_11 [i_3] [i_3]) | 1))));

        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            var_16 = 8082179978880706913;
            var_17 = (max(var_17, ((((arr_10 [i_3]) / 82)))));
        }
        arr_17 [i_3] [i_3] &= ((arr_10 [i_3]) ? (((var_2 < (arr_15 [0])))) : (arr_13 [i_3] [i_3]));
    }
    #pragma endscop
}
