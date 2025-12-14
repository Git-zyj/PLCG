/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54765
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54765 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54765
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_17 = 1;
                    arr_7 [i_1] [i_2] = (((((!(arr_1 [10]))) || 4294967295)));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        {
                            var_18 = (max((((1 ? ((~(-127 - 1))) : -22354))), (((((9223372036854775807 ? (arr_12 [i_5]) : -22354))) ? (-2 - 1) : ((~(arr_13 [12] [i_4] [i_5])))))));
                            var_19 = 1;
                            var_20 = (min(var_20, ((((((-1 ? (((-13446 ? -70 : -13450))) : ((16126470623357177458 ? (arr_11 [i_4] [i_4] [i_5]) : (arr_11 [i_3] [i_3] [i_3])))))) && 255)))));
                            var_21 = (min(var_21, (((-var_0 ? (((-5 ? (arr_14 [i_3] [i_3] [i_3] [i_3]) : 201))) : (arr_13 [i_3] [i_4] [i_6]))))));
                        }
                    }
                }
                var_22 = ((-13450 ? (((((((var_13 >= (arr_11 [i_3] [i_3] [i_3]))))) <= (arr_12 [i_3])))) : 1929016951));
            }
        }
    }
    var_23 = (min((var_8 > var_16), (((var_14 ? 75 : var_0)))));
    var_24 = 255;
    #pragma endscop
}
