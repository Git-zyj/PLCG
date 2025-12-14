/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34768
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34768 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34768
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((128 ? (min(-36257, (!23358))) : ((max(53415, 12120)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = (-(((576460752303423487 != (~var_2)))));
        arr_4 [6] [i_0] = (((min(270582939648, ((min(29296, 53415))))) >= (((max((!3039439813), 41042))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        arr_7 [i_1] &= (12120 != 36243);
        arr_8 [i_1] [i_1] = ((41035 ? -576460752303423503 : 3713299193395648151));
    }
    #pragma endscop
}
