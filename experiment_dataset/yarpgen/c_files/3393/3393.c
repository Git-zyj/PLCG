/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = 21;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [3] [i_1] = (((((max(4294967275, 97)))) ? (((!(!-29587)))) : ((~(4266986376 >= 4294967295)))));
                arr_7 [i_1] = arr_1 [i_1];
                var_14 = (max(var_14, (((((~(arr_5 [2]))) < (min((arr_0 [i_0]), var_12)))))));
            }
        }
    }
    var_15 *= (min((4294967286 || 5144767), var_2));
    var_16 = 4294967275;
    #pragma endscop
}
