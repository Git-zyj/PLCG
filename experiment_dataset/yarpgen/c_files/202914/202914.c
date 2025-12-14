/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 19;i_2 += 1)
            {
                {
                    var_12 += (min(0, (-1 * 0)));
                    var_13 = (arr_8 [i_2] [3]);
                    var_14 = ((~((var_9 ? (((-(arr_0 [i_0])))) : (arr_7 [2] [i_1] [2])))));
                    var_15 = -17;
                }
            }
        }
    }
    var_16 = var_2;
    var_17 = (min(var_17, var_3));
    #pragma endscop
}
