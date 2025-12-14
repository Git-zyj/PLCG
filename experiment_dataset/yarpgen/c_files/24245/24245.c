/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24245
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24245 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24245
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                var_10 &= ((((0 ? -98 : 17157098787930302596))) ? ((510 ? 4630605769608674354 : 16777215)) : ((1086140890 ? 9223372036854775804 : 210)));
                arr_4 [i_0] [i_0] [16] &= 139831780;
            }
        }
    }
    var_11 = -85;
    var_12 = (((((var_9 ? var_2 : (((3214102805934291168 ? 127 : 57)))))) ? -98 : -1163548326));
    var_13 *= ((-5906463860302035080 ? 98 : ((var_9 ? 2 : var_6))));
    #pragma endscop
}
