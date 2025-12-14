/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244043
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_14;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        var_18 = var_8;
        var_19 = ((((~(arr_0 [i_0 + 1]))) << (var_11 + 62)));
    }

    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_20 ^= (((((~var_9) ? var_16 : (51 & var_8))) >= ((min(var_2, (arr_4 [14] [14]))))));
        var_21 = ((196 ? -92575417 : (-972583090 / -84)));
        var_22 &= ((-92575417 ? 158991721 : 524578576335448922));
    }
    var_23 ^= var_4;
    var_24 = ((((min((var_13 & var_2), var_3))) ? (((min((961500332637670214 == 37269), -102)))) : ((-(max(var_8, 4135975582))))));
    #pragma endscop
}
