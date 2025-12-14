/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (var_5 ? ((var_0 ? ((3 ? -3336036315385644759 : (-9223372036854775807 - 1))) : 2613642332835182724)) : (min(var_2, (var_7 + 4209194678307646245))));
    var_13 = ((2613642332835182721 ? -5466203155910011587 : 214));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0] = 2613642332835182722;
        var_14 = (((((arr_0 [i_0 - 1]) ? var_10 : 0)) + var_0));
        var_15 = ((-(arr_0 [i_0])));
    }
    #pragma endscop
}
