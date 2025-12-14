/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 219857917098275071;
    var_21 = (((((((max(var_11, var_9))) == var_18)))) ^ ((max(var_2, 102))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 15;i_2 += 1)
            {
                {
                    var_22 = ((~(max(((var_9 ? var_3 : var_19)), -94))));
                    arr_8 [i_1] [i_0] = (((arr_5 [i_2 - 1]) ? (((~(arr_5 [i_2 - 3])))) : var_9));
                    var_23 -= var_15;
                }
            }
        }
    }
    var_24 = 1513002952;
    #pragma endscop
}
