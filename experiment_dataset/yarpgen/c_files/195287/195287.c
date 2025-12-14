/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 16;i_2 += 1)
            {
                {
                    var_20 += (min((((var_19 || ((min(1425426465, 32767)))))), var_2));
                    arr_8 [i_1] [i_1] [i_1] = (((max((var_5 & var_8), (min(var_11, 8820821067239146)))) == (((((((arr_1 [7]) << (((arr_1 [14]) - 11725502354767610835))))) ? var_14 : (arr_7 [i_0] [i_1] [15]))))));
                }
            }
        }
    }
    var_21 = var_13;
    #pragma endscop
}
