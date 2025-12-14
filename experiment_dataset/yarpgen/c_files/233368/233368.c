/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_0;

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_4 [i_0] = 19367;
        arr_5 [i_0] = ((((((9223372036854775807 && 30702) ? 32766 : ((-32766 ? -2147483644 : -19361))))) ? ((((44 ? 0 : 1)) << ((((-32766 ? 32766 : 32766)) - 32744)))) : ((30186 * ((68 ? 4495 : -575206606))))));
        arr_6 [i_0] [7] = (((-5202904541289550623 + 9223372036854775807) << ((((-30702 ? 4157615506 : -30709)) - 4157615506))));
    }
    #pragma endscop
}
