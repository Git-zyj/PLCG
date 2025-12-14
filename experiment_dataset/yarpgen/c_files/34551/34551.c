/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_7 ? (((((max(var_4, 37377))) <= ((12648060073348910432 ? var_12 : var_0))))) : -var_8));
    var_20 = (min(var_13, ((10728 ? var_7 : ((var_5 ? var_2 : var_17))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_21 += ((arr_4 [i_0] [i_0] [i_0 - 2]) ? (arr_3 [i_0] [i_0] [i_1]) : (arr_2 [i_0] [i_0]));
                arr_5 [i_0] [i_1] [i_1] = (10805153227025004688 ? (((arr_4 [i_1] [i_0 - 2] [i_0 - 2]) * (arr_2 [i_0] [i_0]))) : (arr_3 [i_0] [i_0] [i_0 - 2]));
                arr_6 [i_0 - 1] [i_0 - 1] = var_2;
            }
        }
    }
    #pragma endscop
}
