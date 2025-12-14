/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229460
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max(((min(32765, (83 || -113)))), ((~((9223372036854775807 ? 32 : 74))))));

    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 = ((-((32 ? 31428 : 118))));
        var_21 = ((min(-32758, ((-32741 ? 9989650946161529162 : -2940498838381158866)))));
        var_22 = (max(var_22, ((~((min(-2940498838381158895, 0)))))));
        var_23 -= ((((!((max(-1, -31428))))) ? 32756 : ((max((max(-1, 32765)), (17 && 5300424021557911097))))));
        var_24 = ((-(+-2767531096206442731)));
    }
    var_25 = ((-((((min(15275, 33))) ? 31428 : (!-1)))));
    #pragma endscop
}
