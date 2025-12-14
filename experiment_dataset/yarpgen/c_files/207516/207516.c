/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (!var_0);
    var_11 *= 33554432;
    var_12 = (~var_0);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 15;i_1 += 1)
        {
            {
                arr_4 [i_0] = (((3310050453 && 118) ? (max(33546240, 3310050453)) : ((((arr_0 [i_1 - 1]) ? var_3 : (arr_0 [i_0 + 1]))))));
                arr_5 [i_1] = (~984916825);
                arr_6 [i_0] [i_1] = ((((min(-886694555, 984916825))) >= (((((arr_1 [i_0 + 1] [i_0 - 1]) >= var_9))))));
                var_13 = (((((~(arr_2 [i_0 + 1])))) ? (-78 & -3461722214376007933) : (~3)));
            }
        }
    }
    #pragma endscop
}
