/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (((((-5654551772824869064 ? ((min(var_9, -25115))) : ((~(arr_0 [i_0] [i_0])))))) ? (((arr_2 [i_0]) * 0)) : ((((arr_0 [i_0] [i_0]) >= (arr_0 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = var_4;
                    arr_9 [i_1] [i_1] = ((!(((arr_8 [i_0] [i_1] [i_2]) == (arr_5 [i_2] [i_1])))));
                    arr_10 [i_1] [i_1] = ((((var_3 < ((-(arr_3 [i_1])))))));
                }
            }
        }
    }
    var_16 = 4294967284;
    #pragma endscop
}
