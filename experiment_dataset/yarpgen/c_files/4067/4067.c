/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = min(((((var_5 || var_9) || ((min(-7528525252719003599, var_8)))))), var_0);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                var_15 = (min(var_15, (arr_0 [i_1 - 2] [i_0 + 1])));
                var_16 = ((7528525252719003598 ? (!-7528525252719003599) : (((arr_3 [i_0 - 2]) ? (((var_2 || (arr_3 [i_0 - 1])))) : ((125 << (((-7528525252719003605 + 7528525252719003631) - 15))))))));
                arr_5 [i_0 - 1] = ((((min((arr_4 [i_0] [i_1 - 3]), (min((arr_1 [i_0 + 2]), var_12))))) - 53673));
                var_17 = (arr_0 [1] [i_1]);
            }
        }
    }
    var_18 -= var_4;
    var_19 -= (86 < ((min(0, var_0))));
    #pragma endscop
}
