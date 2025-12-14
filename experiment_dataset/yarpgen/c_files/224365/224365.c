/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_0] [0] [7] = (((max((!188), (min(631889856722355315, var_4)))) * (arr_0 [i_0])));
                arr_5 [i_0] = (((((((min((arr_1 [i_0] [i_1]), -23874))) ? ((var_1 ? -1991844769 : var_9)) : (arr_0 [i_1])))) * (((arr_1 [i_0] [i_0]) ? ((-27622 ? (arr_2 [0] [i_1] [i_0]) : (arr_3 [i_0] [i_0] [i_1]))) : (arr_3 [8] [i_1] [i_1])))));
                var_12 = (max((max((arr_2 [i_0] [i_0] [i_0]), ((var_7 ? (arr_1 [i_0] [i_0]) : 23874)))), ((((((arr_2 [i_0] [i_0] [i_1]) ? 119 : 6304623769681519812)) & (((min(61, var_5)))))))));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_8 [i_0] [i_1] [i_0] = (((arr_3 [i_1] [0] [i_1]) & (((89 ^ 5) | (min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [1] [i_1] [i_2])))))));
                    var_13 = (min(var_13, (((!(((((var_1 ? (arr_7 [i_0] [i_0] [i_2]) : var_4))) && (!11))))))));
                    arr_9 [i_0] [i_1] [i_0] [6] = var_9;
                    var_14 = (min(var_14, var_4));
                }
            }
        }
    }
    var_15 = (min(var_15, (var_9 && var_1)));
    #pragma endscop
}
