/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225126
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225126 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225126
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 &= (arr_6 [i_0] [i_0] [i_0] [i_0]);
                    arr_8 [i_2] = ((-(((!(arr_1 [i_0]))))));
                    var_13 = (max(var_13, ((((-(arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                }
            }
        }
    }
    var_14 = ((min(var_3, var_0)));
    var_15 = (min((!var_7), (max(var_6, var_5))));
    var_16 = ((-((-((max(var_0, var_8)))))));
    var_17 = (min(var_4, ((~(min(var_10, var_5))))));
    #pragma endscop
}
