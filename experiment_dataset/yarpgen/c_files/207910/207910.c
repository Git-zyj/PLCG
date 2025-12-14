/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207910
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207910 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207910
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(((799198519 <= (min(65434, var_9)))), (7340032 == var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            var_11 += (min((((!(arr_10 [i_1])))), ((7340032 ? (-9223372036854775807 - 1) : var_9))));
                            var_12 = (min((arr_1 [i_0] [i_3]), (min((!29240), (min(var_2, var_7))))));
                        }
                    }
                }
                var_13 = (max((!491637682337344080), (((((max(29240, (arr_4 [9] [i_1])))) && ((max((arr_9 [i_0] [i_0] [i_0] [i_0]), 338739378308312092))))))));
                arr_11 [i_0] [i_0] = (arr_2 [i_0] [i_0] [0]);
                var_14 ^= ((var_5 == (max((arr_9 [6] [2] [i_1] [i_1]), ((min(var_1, (arr_1 [i_0] [i_0]))))))));
            }
        }
    }
    #pragma endscop
}
