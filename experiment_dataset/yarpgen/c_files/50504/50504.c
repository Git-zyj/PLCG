/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50504
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((min(((35980 >> (((arr_2 [i_0] [i_0] [i_0]) - 4261326596)))), ((max(111, 99)))))) ? var_8 : (arr_3 [i_1] [i_0])));
                arr_6 [i_0] = (arr_4 [19] [i_0]);
            }
        }
    }
    var_13 = var_4;
    var_14 -= (min((min((var_5 && -66986726161908068), 305217381644858827)), var_11));
    #pragma endscop
}
