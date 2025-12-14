/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (--9619772890233997927);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = ((-139 ? var_15 : 57));
                var_18 &= 105;
                var_19 = (max(var_19, var_15));
                var_20 = (~var_4);
            }
        }
    }
    #pragma endscop
}
