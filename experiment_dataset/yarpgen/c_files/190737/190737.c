/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190737
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190737 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190737
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 += ((((-((14 ? var_13 : 626967428))))) ? ((max(57787, -93))) : ((3689 ? -2824333826390284585 : -75)));
    var_20 ^= var_18;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_0] = var_16;
                var_21 = (max(var_21, (((113 ? -105 : 2)))));
                arr_6 [i_0] = var_3;
            }
        }
    }
    var_22 = (var_16 >= var_16);
    var_23 = (min(var_4, 4096));
    #pragma endscop
}
