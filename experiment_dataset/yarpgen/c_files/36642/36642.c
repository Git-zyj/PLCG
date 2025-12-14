/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((~var_4) - (max((1522062430 & var_6), ((min(var_1, var_5)))))));
    var_12 = 25855;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_13 = var_4;
                    var_14 = ((((((arr_7 [i_2] [i_2] [i_2]) <= (max(1485371612308305674, 2644311733))))) >> (min((((~(arr_5 [i_0] [i_0] [i_2] [i_2])))), (min(0, 262140))))));
                    var_15 = (((~((9223372036854775807 ? var_5 : (arr_4 [i_2]))))));
                    arr_8 [i_0] [i_0] [i_2] = (arr_6 [i_2]);
                }
            }
        }
    }
    var_16 = -7404974746946931253;
    #pragma endscop
}
