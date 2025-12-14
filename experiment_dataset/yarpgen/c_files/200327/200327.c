/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, ((max(((~(arr_7 [i_0] [i_1] [i_2]))), (arr_7 [i_0] [i_0] [i_0]))))));
                    var_17 = ((((((((var_13 ? (arr_3 [i_2] [i_1]) : var_12))) ? (((arr_5 [i_2]) ^ (arr_0 [i_2]))) : var_8))) ? var_1 : ((((min(var_14, (arr_4 [i_0] [i_0] [i_0])))) ? ((33554431 ? 1 : var_11)) : (((~(arr_1 [i_0]))))))));
                    var_18 &= var_1;
                    var_19 |= var_14;
                }
            }
        }
    }
    var_20 = var_3;
    #pragma endscop
}
