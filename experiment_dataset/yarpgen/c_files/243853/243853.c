/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243853
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243853 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243853
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        arr_2 [i_0] = ((((max((min(2910126980213100117, 4)), (((var_2 ? var_6 : 2134981507)))))) ? ((((min(2159985788, 1615994654))) ? ((var_7 ? 2134981497 : 4)) : 4)) : (max((max(var_14, var_5)), (((var_3 ? var_13 : 287948901175001088)))))));
        arr_3 [i_0] = (((15186776499777182858 ? (2827454739 ^ var_10) : (((3732777244 ? var_8 : var_15))))));
        var_16 = (((~17) > (((((3259967573932368758 ? 1 : 1721619045))) ? (max(4936574592731099656, var_0)) : -116))));
    }
    var_17 = (min(((1615994654 ? ((-18312 ? var_0 : var_4)) : ((var_4 ? 4 : var_8)))), 2801005908));
    #pragma endscop
}
