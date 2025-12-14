/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228841
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 != ((min((var_12 || var_5), var_0)))));
    var_16 = var_10;
    var_17 |= var_13;
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [9] [9] [i_0 + 3] = (arr_2 [i_0 - 4] [i_0 + 4]);
                arr_7 [i_0 - 1] = ((((((arr_0 [i_0 - 2]) ? 20907 : var_5))) ? var_2 : ((((max(var_6, 62))) ? (((var_7 - (arr_0 [i_1])))) : var_8))));
                arr_8 [i_1] [i_1] [i_0] = ((~(arr_2 [i_0 + 2] [i_0 + 2])));
            }
        }
    }
    #pragma endscop
}
