/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_19 - (((min(1, -1))))));

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        arr_2 [1] = var_1;
        arr_3 [i_0] [i_0] = -2;
        arr_4 [i_0] = ((((min(-1, (min(var_6, (arr_1 [i_0])))))) && ((max(0, -12)))));
        arr_5 [i_0] = ((((~(max(777686234, var_6)))) > ((max((max(0, 1)), (arr_0 [i_0 - 1] [i_0]))))));
        arr_6 [i_0] |= (arr_0 [i_0] [i_0]);
    }
    var_21 = (0 ? ((var_5 ? ((16417432171065012564 ? var_9 : var_4)) : ((max(-38, var_1))))) : (max((max(var_18, var_1)), (var_18 | var_19))));
    var_22 = var_4;
    #pragma endscop
}
