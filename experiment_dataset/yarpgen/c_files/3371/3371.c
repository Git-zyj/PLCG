/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3371
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3371 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3371
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_20 = ((-8 ? ((616015045 ? 654748767 : ((244 ? var_2 : 32767)))) : -115));
        arr_3 [i_0] [i_0] = (min(9732427949308368864, 1));
        var_21 = (((((min(65535, 1143123087) >= 4218861511)))));
    }
    var_22 &= var_0;
    #pragma endscop
}
