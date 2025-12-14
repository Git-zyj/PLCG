/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190214
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190214 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190214
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (~4294967276);

        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            arr_6 [i_0] = 4294967284;
            var_13 = (max(var_13, (~6723646833662789357)));
        }
        var_14 = ((var_7 ? (arr_5 [i_0] [i_0] [i_0]) : (4050 != 0)));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_15 = (arr_8 [i_2]);
        var_16 = (((arr_8 [i_2]) & (arr_7 [i_2])));
        var_17 = (arr_8 [i_2]);
        arr_9 [i_2] = (var_11 - 176);
    }
    for (int i_3 = 1; i_3 < 21;i_3 += 1)
    {
        arr_13 [i_3 - 1] = (((((((max(var_3, var_0))) ? 683 : ((max(var_1, 202)))))) ? 209 : 9223372036854775807));
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 2; i_5 < 18;i_5 += 1)
            {
                {
                    var_18 = ((((arr_12 [i_3 - 1]) ? (arr_16 [i_3 - 1]) : (arr_16 [i_3 + 1]))) - ((((arr_17 [i_4 - 1] [i_5 + 4]) << (((arr_12 [i_3 - 1]) - 70))))));
                    var_19 &= ((((!(arr_12 [i_3 - 1]))) ? var_12 : var_0));
                }
            }
        }
        var_20 = (arr_17 [i_3] [i_3]);
        var_21 = ((((((arr_16 [i_3]) ? (max((arr_16 [i_3]), var_0)) : (arr_14 [i_3])))) != ((~(max((-9223372036854775807 - 1), 209))))));
        var_22 |= (((((var_12 ? (arr_15 [7] [i_3 + 1]) : (arr_11 [2])))) ? (arr_11 [i_3 - 1]) : (((arr_18 [17] [i_3 - 1] [i_3] [i_3 + 1]) / (arr_11 [i_3])))));
    }
    var_23 = (((((((57 ? 5795043904891889147 : -58))) || ((max(4611686017353646080, var_10))))) || var_5));
    var_24 = (max(var_24, ((((((9223372036854775807 >= 15) == (~-32742))) ? (!17183) : ((((max(3104505901501791433, 51493)) <= 3311628519))))))));
    #pragma endscop
}
