/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199774
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = -122;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_15 = (max(var_15, (((+((42720 ? (~var_12) : var_7)))))));
        var_16 = (min(var_16, ((min(-5665290784638569597, 15)))));
        var_17 = (((((-(((var_10 >= (arr_2 [i_0] [i_0]))))))) <= (min((arr_1 [i_0]), 2934680856494208332))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 23;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    {
                        var_18 = ((!(arr_1 [i_4])));
                        var_19 = (arr_4 [i_1]);
                    }
                }
            }
        }
        arr_14 [i_1] = 3204726268621623298;
        arr_15 [i_1] = (((((1 ? (arr_11 [i_1] [i_1] [i_1]) : (arr_11 [i_1] [i_1] [i_1])))) && (((arr_11 [i_1] [i_1] [i_1]) && var_3))));
    }
    var_20 = var_1;
    #pragma endscop
}
