/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;
    var_16 = (var_2 - 66);
    var_17 = var_7;
    var_18 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    var_19 = ((((max((arr_5 [i_0] [i_1] [i_0] [i_0]), (arr_6 [i_1] [i_1])))) ? ((((min((arr_3 [21] [15] [i_0]), -13666))) ? ((var_11 ? var_3 : (arr_6 [i_1] [i_1]))) : (((~(arr_4 [i_0] [i_0])))))) : ((min((((arr_2 [15] [i_1] [i_0]) ? (arr_1 [i_2] [i_0]) : (arr_1 [i_0] [i_1]))), ((min(-40, 60))))))));
                    arr_7 [i_1] [3] [i_1] = (((((arr_5 [i_0] [i_1] [11] [i_2]) || (((var_7 + (arr_6 [i_1] [i_1])))))) ? (((((46467 >= (arr_3 [i_0] [i_1] [i_2])))) - ((((arr_4 [19] [i_1]) || var_7))))) : (!42)));
                }
                arr_8 [i_1] = var_6;
            }
        }
    }
    #pragma endscop
}
