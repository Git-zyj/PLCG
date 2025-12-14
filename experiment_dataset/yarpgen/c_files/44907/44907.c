/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44907
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44907 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44907
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_11 = (+(max((arr_0 [i_0 - 1] [i_0 - 1]), (arr_1 [i_0 - 2]))));
        var_12 &= (min(var_2, (max(((var_7 - (arr_0 [i_0 + 1] [i_0 + 1]))), (arr_0 [i_0 - 2] [i_0 - 1])))));
        var_13 *= min((((59668 ? var_5 : (arr_0 [i_0 - 2] [i_0 + 1])))), -8983);
    }
    for (int i_1 = 2; i_1 < 11;i_1 += 1) /* same iter space */
    {
        arr_4 [i_1] = (arr_2 [i_1 - 2]);
        var_14 = ((-((-7732770021854596713 ? 8388607 : var_10))));
    }
    var_15 = (min((max(var_10, 4286578708)), ((-((0 ? 8388589 : 4286578689))))));
    #pragma endscop
}
