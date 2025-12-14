/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(((var_13 / ((min(var_5, var_8))))), ((max((var_3 <= 1), (max(var_11, var_2)))))));
    var_21 = var_9;
    var_22 = (max(var_22, ((min((max((var_4 / var_4), var_19)), 49)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                arr_4 [13] [i_1] [i_1] = (arr_1 [i_1]);
                var_23 = ((((max(var_17, (arr_2 [3] [3] [3])) != (var_1 == 1)))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 1; i_2 < 10;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 13;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 1;i_4 += 1)
            {
                {
                    var_24 = (((((-(((var_9 + 2147483647) >> (var_13 - 17804047417285470965)))))) ? 60193 : var_4));
                    var_25 = 4499940919511126964;
                }
            }
        }
    }
    #pragma endscop
}
