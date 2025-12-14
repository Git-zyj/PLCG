/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235631
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] &= 27803;
                arr_7 [i_1] &= ((29760 ? (((max((arr_4 [i_1 - 2] [i_1 - 3] [i_1 + 1]), -26)))) : ((-1072122814 - ((1 ? -60 : -8742940159005013473))))));
                var_19 -= 1;
                arr_8 [i_0] [i_0] [i_0] = (arr_5 [i_1]);
                arr_9 [i_0] [i_1] |= var_15;
            }
        }
    }
    var_20 = var_10;
    #pragma endscop
}
