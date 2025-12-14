/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191362
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191362 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191362
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 |= var_4;
    var_19 = 4294967295;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = var_14;
        arr_3 [i_0] = (2145386496 ? 0 : 0);
        arr_4 [i_0] = (-45345304 / -1508943969);
        arr_5 [i_0] [i_0] = max(((2147483647 ? 228 : 201)), (arr_0 [i_0]));
        arr_6 [i_0] = var_2;
    }
    #pragma endscop
}
