/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40534
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40534 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40534
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (((((var_5 && 9) || (((var_7 ? var_0 : 0))))) || ((!(((var_4 ? 11 : var_8)))))));
    var_11 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 8;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 ^= 250;
                    arr_9 [i_1] = var_9;
                    arr_10 [i_1] [i_1] = ((((min(((var_5 >> (((arr_0 [i_2]) - 39938)))), (((var_5 ? 246 : 4)))))) ? (((var_1 || ((max(var_1, var_3)))))) : ((((max((arr_5 [i_2] [i_1]), (arr_5 [8] [i_1]))) == var_5)))));
                    var_13 = ((+((110 ? (arr_2 [i_1 + 2] [i_1 + 2]) : (arr_2 [i_1 + 1] [i_1 - 1])))));
                    arr_11 [i_1] [i_1] = (((((arr_0 [i_1]) * (max((arr_5 [i_1] [i_1]), var_8)))) - (((((min(var_4, 24))) ? (~31237) : ((min(-26, 11))))))));
                }
            }
        }
    }
    #pragma endscop
}
