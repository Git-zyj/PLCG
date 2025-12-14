/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33203
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33203 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33203
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((((max(var_3, var_10)) * var_1)) * (min((var_3 / -4146796523586216328), var_10))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 ^= (((arr_4 [i_2] [i_2]) != 0));
                    var_13 = (((min(((var_6 ? (arr_1 [i_0] [i_0]) : 9213)), ((((arr_2 [6]) <= (arr_5 [i_1] [i_0])))))) | (arr_4 [i_0] [i_0])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 20;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [3] [i_2] [0] [i_4] = ((((min((arr_6 [14] [i_0]), 56335))) != ((max((arr_6 [i_0] [i_0]), (arr_6 [6] [i_0]))))));
                                arr_14 [i_0] [i_0] = (max((arr_0 [i_0]), ((min((arr_11 [i_0] [13] [i_2]), (arr_11 [i_0] [1] [i_4]))))));
                            }
                        }
                    }
                    var_14 = (((max((arr_12 [5] [12]), (arr_12 [i_0] [i_1])))) ? (((!(arr_12 [4] [i_1])))) : (max((arr_12 [i_0] [i_1]), 56335)));
                    var_15 *= ((~((max(9208, (arr_1 [i_2] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
