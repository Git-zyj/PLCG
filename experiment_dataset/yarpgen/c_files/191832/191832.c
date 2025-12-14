/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191832
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_17 = (min(var_17, (((max((arr_4 [i_0]), (((arr_5 [i_1]) ? 0 : 2588839881194826811))))))));
                    arr_7 [i_0] [i_0] [i_2] = (((((((15978 & (arr_6 [1] [i_1] [i_2] [i_2])))) ? ((9223372036854775807 ? (arr_6 [i_0] [i_1] [i_2] [i_2]) : (arr_0 [i_0] [i_0]))) : (~1))) >> (((((((arr_4 [i_0]) && 15857904192514724805)) ? (arr_5 [i_0]) : -1)) - 3966103486))));
                }
                var_18 = (((arr_0 [i_0] [i_0]) && ((max((arr_0 [i_0] [i_1]), 18446744073709551610)))));
                var_19 ^= ((((min((arr_6 [i_0] [i_0] [i_0] [i_0]), 0))) ? ((((!(((1 ? (arr_3 [0]) : (arr_3 [6])))))))) : (max(5, 18))));
            }
        }
    }
    #pragma endscop
}
