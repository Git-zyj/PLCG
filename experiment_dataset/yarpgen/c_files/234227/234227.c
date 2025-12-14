/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234227
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234227 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234227
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (arr_0 [i_0] [i_0]);
                var_11 = (-9223372036854775807 - 1);
                var_12 = ((((max((arr_1 [15] [i_1]), (((arr_0 [12] [i_0]) ? -716969230292232198 : (arr_0 [i_0] [i_0])))))) ? -42 : (arr_3 [i_1] [i_1] [i_0])));
                var_13 += ((-((~(arr_2 [16] [i_1] [16])))));
                var_14 = (max(var_14, (((~(((6533728940574289432 & 9223372036854775807) >> (((((min((-9223372036854775807 - 1), var_3)) - -9223372036854775778)) + 49)))))))));
            }
        }
    }
    var_15 = (var_8 ? 4294967295 : (min(9223372036854775807, 147)));
    #pragma endscop
}
