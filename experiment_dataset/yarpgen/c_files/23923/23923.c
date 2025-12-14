/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_6;
    var_12 = -var_9;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                arr_6 [i_1] = (((max((arr_4 [i_1]), var_8)) >= ((max(((var_1 ? var_9 : 66)), (max(var_6, (arr_3 [i_0 - 2] [i_1]))))))));
                var_13 *= (((var_5 + 1206781503) - ((min(var_3, 167)))));
                arr_7 [i_1] = (((4042887666 ? 1206781515 : 255)));
                arr_8 [i_1] [i_1] = (((((-1206781516 ? -19 : 78))) ? -720817673 : 252079630));
            }
        }
    }
    var_14 &= var_7;
    var_15 = var_9;
    #pragma endscop
}
