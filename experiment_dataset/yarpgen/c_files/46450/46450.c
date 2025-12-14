/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46450
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 16;i_1 += 1)
        {
            {
                var_13 = (min(var_13, ((min(((((arr_0 [i_1 + 1] [i_1 - 3]) < (((min((arr_1 [i_0]), (arr_1 [i_1])))))))), ((((max(2376715151655727285, 9393702127954237606))) ? (arr_4 [i_0]) : ((5530851690026327270 ? (arr_4 [i_0]) : var_5)))))))));
                arr_5 [i_0] [i_0] = (((var_5 ? (arr_0 [i_1 - 3] [i_1]) : (((4071765799 ? var_2 : (arr_4 [i_0])))))) | var_6);
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {
                    var_14 = (arr_7 [i_2]);
                    var_15 = (min(var_15, (((!(var_11 ^ var_12))))));
                    var_16 += (max(var_6, (((!(arr_12 [i_2] [i_3] [i_2]))))));
                }
            }
        }
    }
    #pragma endscop
}
