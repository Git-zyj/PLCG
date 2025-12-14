/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215016
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_16;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_21 = (min(var_21, (((!((max((arr_3 [i_1 + 1]), (arr_5 [i_1 - 1] [i_1 - 1] [i_1])))))))));
                    var_22 = (min(var_22, ((min(((((arr_4 [i_1] [4] [i_1 - 2]) ? 1201331310 : (arr_4 [i_0] [i_1] [i_1 - 1])))), (max(((((arr_2 [i_1] [i_2]) != (arr_4 [i_0] [i_1] [i_2])))), (max((arr_1 [i_2]), (arr_0 [i_2]))))))))));
                    var_23 = (min(((~(arr_5 [i_0] [i_1 - 1] [i_1 - 1]))), (((arr_5 [i_1] [i_1 - 2] [i_1 - 1]) >> (((arr_5 [i_1] [i_1 - 2] [i_1 - 1]) - 1322501632))))));
                    arr_7 [3] [i_1] [i_2] [i_2] = ((+((((max((arr_3 [i_1 + 1]), (arr_5 [i_0] [i_0] [i_0])))) ? 896 : -87721948))));
                }
            }
        }
    }
    #pragma endscop
}
