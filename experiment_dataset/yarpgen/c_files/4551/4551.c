/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4551
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (var_14 ? (max(var_0, ((var_10 >> (255 - 254))))) : ((min(163, (min(242, 95528254))))));
    var_17 = (min(var_17, var_11));
    var_18 = ((!((min(var_8, ((var_9 ? 9092 : 16)))))));
    var_19 = 22975;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_20 = (((!18446744073709551615) ? ((((arr_1 [i_0 + 1]) != (max(var_11, 56441))))) : ((max((arr_4 [i_0] [i_1] [i_1]), -22982)))));
                var_21 = (((var_15 + 2147483647) << (((((max(4167811504, -121)) | (4294967292 & 60))) - 4294967231))));
                var_22 = 90;
            }
        }
    }
    #pragma endscop
}
