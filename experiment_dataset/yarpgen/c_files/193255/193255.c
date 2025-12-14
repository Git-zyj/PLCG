/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_20 = (max(((max(1016362081, 314607707))), (min((arr_2 [i_0]), (arr_2 [i_0])))));
                var_21 = (((arr_0 [i_0]) ? (!var_5) : (arr_2 [i_0])));
                var_22 = ((-314607705 ? -29 : 1));
                var_23 = 1536650026794225324;
            }
        }
    }
    var_24 -= (max(2590945213, 13642511785545920203));
    var_25 = max(6, 6650227597407801753);
    #pragma endscop
}
