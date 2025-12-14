/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((((var_5 - var_10) >> (var_13 - 13333608263814919657)))) && ((((min(var_1, var_12))) && var_17))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (max((arr_0 [i_0]), (((!(arr_1 [i_0]))))));
                var_21 = var_9;
                var_22 = ((!((((~(arr_1 [i_0]))) == (((arr_0 [i_0]) / 1189680621944366577))))));
                var_23 = (min(var_23, ((~((2745194468243711213 ? 32196 : 1046528))))));
                arr_4 [i_1] [i_1] = ((((46222 ^ (arr_3 [i_1] [i_1])))) ? -31629 : 1046528);
            }
        }
    }
    var_24 = (!var_16);

    for (int i_2 = 0; i_2 < 21;i_2 += 1) /* same iter space */
    {
        var_25 = var_17;
        var_26 = (((min((max((arr_0 [i_2]), var_6)), (var_9 > var_3))) - ((((((((arr_2 [i_2] [i_2]) <= var_11))) > (((!(arr_6 [i_2] [i_2]))))))))));
    }
    for (int i_3 = 0; i_3 < 21;i_3 += 1) /* same iter space */
    {
        var_27 = ((var_8 ? (arr_7 [i_3]) : (((arr_6 [i_3] [i_3]) ? 11296 : (var_11 / 16087114109466896114)))));
        var_28 = ((!((((!8284286861700421208) ? (arr_5 [i_3]) : (min((arr_0 [i_3]), var_9)))))));
        arr_9 [i_3] [i_3] = (2429570284 && 1189680621944366553);
        var_29 = var_7;
        var_30 = ((max(((((arr_6 [i_3] [i_3]) ? var_2 : var_10))), ((41098 ? (arr_1 [i_3]) : (arr_0 [i_3]))))));
    }
    #pragma endscop
}
