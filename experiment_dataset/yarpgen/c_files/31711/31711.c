/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31711
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31711 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31711
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((~(max((var_3 / -6202829995130607703), var_9))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_12 = ((~((+((min((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_2 [i_0] = (max((min(-40, (arr_0 [i_0]))), (((((8216840891501813645 ? var_5 : 10))) ? (((-40 ? 8216840891501813642 : 3704781712))) : ((8402 | (arr_0 [6])))))));
    }
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_13 += ((((max(17913102918010951831, 112))) ? -1 : -21));
        var_14 = 8421;
        arr_6 [i_1] = var_5;
        var_15 = (min(var_15, (((!((((arr_1 [i_1]) / 45))))))));
    }
    #pragma endscop
}
