/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49039
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49039 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49039
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_6);
    var_19 = max(-15605221592681829834, (((var_17 ? 98 : 18446744073709551615))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((var_12 ? (~158) : var_2));
        var_20 = 17031720815246451183;
    }
    /* vectorizable */
    for (int i_1 = 3; i_1 < 23;i_1 += 1)
    {
        arr_7 [i_1] = ((!(arr_5 [i_1 - 2] [i_1])));
        var_21 = (((168 <= 32767) % 110));
    }
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_22 = 98;
        var_23 = (min(var_23, 255));
    }
    #pragma endscop
}
