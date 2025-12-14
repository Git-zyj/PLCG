/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (max(var_18, var_5));

    for (int i_0 = 4; i_0 < 21;i_0 += 1)
    {
        arr_4 [i_0] [18] = (~var_16);
        arr_5 [i_0] = ((((min((arr_0 [i_0] [i_0 + 2]), (arr_2 [i_0 - 3])))) ? ((797241242 ? -284372665446482192 : (max(12626085550425232932, (arr_2 [i_0]))))) : (((~(arr_1 [i_0 - 1]))))));
        arr_6 [i_0] [i_0] = 31;
        arr_7 [22] [8] |= 797241242;
        arr_8 [i_0] = var_6;
    }
    var_19 &= -105;
    var_20 &= var_8;
    #pragma endscop
}
