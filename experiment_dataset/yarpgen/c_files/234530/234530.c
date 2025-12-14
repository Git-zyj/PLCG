/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234530
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (((min(var_14, 16903234471723082512))) ? ((((((11210 ? 7517323466518188652 : -7517323466518188652))) ? ((-7517323466518188652 ? 15969 : 8559532742480805738)) : var_9))) : ((-108 ? ((-7183608634055768798 ? 0 : 10957932250669630115)) : (8067041550487338317 / -27))));

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        arr_3 [i_0 - 3] = ((((max(7517323466518188633, 7517323466518188643))) ? 14 : -43));
        var_21 += ((+((((1902765693 >= 3948887944809918215) < ((-7517323466518188652 ? 7517323466518188647 : 103)))))));
        arr_4 [6] [1] &= (((((7517323466518188652 - (-118 - 11210)))) ? (9223372036854775807 >= -7517323466518188652) : ((4321526720984139552 ? 3462498987 : 43179))));
    }
    #pragma endscop
}
