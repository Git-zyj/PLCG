/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231417
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231417 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231417
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        arr_3 [i_0] [1] = var_8;

        for (int i_1 = 3; i_1 < 22;i_1 += 1)
        {
            var_18 = 35937;
            var_19 = -4071568925613752962;
        }
        for (int i_2 = 2; i_2 < 20;i_2 += 1)
        {
            arr_11 [i_0] [i_2 + 1] = ((!((min(35937, 35938)))));
            var_20 = 59;
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 10;i_3 += 1)
    {
        for (int i_4 = 3; i_4 < 10;i_4 += 1)
        {
            {
                arr_18 [i_3] = (max((max(var_11, ((((arr_6 [i_3] [i_3 + 1] [i_4]) < 15))))), (29598 ^ -1)));
                arr_19 [i_3 + 1] = (((2272336382 ? 44075 : (arr_15 [i_4 - 1] [i_3 - 3] [i_3 - 1]))));
                arr_20 [i_3 + 1] [i_3] [i_3] = (((((0 ? var_15 : var_2))) ? 1876847523 : ((((min(493389136, (arr_17 [i_3 - 2])))) ? (((arr_8 [i_3] [i_3]) ? (arr_1 [i_4]) : var_4)) : -22))));
                arr_21 [i_3] = (max(var_14, (arr_9 [i_4 - 2])));
            }
        }
    }
    var_21 = var_16;
    var_22 = var_7;
    var_23 = var_7;
    #pragma endscop
}
