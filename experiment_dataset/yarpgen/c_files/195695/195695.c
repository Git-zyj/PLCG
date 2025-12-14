/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195695
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (~var_7);
    var_15 = 65520;
    var_16 = 12;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            {
                var_17 = (max(var_17, (((124 ? 32 : 32767)))));
                var_18 = ((((((3568951401131828117 - -26583) ? (25993 - 30) : 32))) ? 14552265690479623360 : -7));
                arr_5 [i_0] [2] = (-7816303583935913981 != 1);
            }
        }
    }
    #pragma endscop
}
