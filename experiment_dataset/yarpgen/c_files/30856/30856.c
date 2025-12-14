/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30856
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30856 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30856
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_15 + ((~(var_1 != 1)))));
    var_20 = ((var_3 ? 1 : 0));
    var_21 *= 1;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max(36940, (36914 + 28578))) << (var_7 + 2015635454)));
        arr_3 [i_0] = ((1 == 36914) ? -1911 : (!5495));
        arr_4 [i_0] = (((min(((-(arr_1 [19]))), (((var_9 >= (arr_1 [i_0])))))) ^ ((-(arr_1 [i_0])))));
    }
    #pragma endscop
}
