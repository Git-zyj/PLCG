/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((((min(6144, ((var_2 ? 30899 : var_13))))) - ((var_7 ? var_3 : var_7)))))));
    var_15 = (min(var_15, (((~(var_2 | 0))))));
    var_16 = var_8;
    var_17 = (min(var_17, ((max((16384 != 29419), var_12)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_0] [i_2] = ((+((((arr_4 [i_0] [17]) <= (arr_4 [i_1] [i_2]))))));
                    arr_8 [i_1] [i_1] [i_1] |= ((((min((~49162), 18))) + (((((var_6 ? 268434944 : 185))) ? (var_1 - var_6) : 49158))));
                    arr_9 [16] [i_0] [i_0] = (((0 ? (((var_5 ? 13 : 1871735466)) : 3327280353))));
                    arr_10 [i_0] [i_1] [i_0] |= var_10;

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_18 |= (arr_11 [i_2] [i_2] [i_2] [6] [i_3] [i_1]);
                        var_19 = ((!(max((arr_11 [i_0] [i_0] [16] [i_3] [16] [i_0]), (arr_11 [1] [i_0] [i_1] [18] [i_2] [19])))));
                    }
                }
            }
        }
    }
    #pragma endscop
}
