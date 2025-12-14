/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((57 ? 0 : (!1057241000419272058))) << (67 - 66)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        var_18 = ((((max((arr_1 [i_0]), (arr_1 [i_0])))) ? (((!(arr_1 [i_0])))) : var_5));
        arr_2 [i_0] [i_0] = (min((arr_0 [i_0]), ((max(-6834, (-10 == 4368504943410491818))))));
    }
    for (int i_1 = 3; i_1 < 17;i_1 += 1)
    {
        arr_5 [i_1 + 1] [i_1 + 1] = -281200098803712;
        arr_6 [2] |= ((+((((arr_4 [i_1 - 2]) > (arr_4 [i_1 - 2]))))));
    }
    #pragma endscop
}
