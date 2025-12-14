/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= var_4;
    var_13 -= var_10;
    var_14 = ((var_10 ? (!var_3) : (!var_8)));
    var_15 = var_6;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {
                arr_6 [i_0] [7] [7] &= (((((4150370922793345346 ? var_6 : ((11630882053146933815 ? 1 : 1))))) ? var_9 : (((((var_11 ? var_11 : var_10))) ? (~var_10) : var_3))));
                arr_7 [i_0] [i_1 + 2] [i_0] = (((0 ? 162 : 11630882053146933830)));
                arr_8 [i_0] [2] [i_1] = (-6815862020562617801 / var_5);
            }
        }
    }
    #pragma endscop
}
