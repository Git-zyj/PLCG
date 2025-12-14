/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5338
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5338 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5338
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_2;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_13 = ((((((arr_0 [i_0 - 1] [i_0 + 2]) || var_4)))) | ((var_5 % (arr_0 [i_0 - 1] [i_0 + 2]))));
        var_14 = (min(var_14, (-32250 | -28235)));
        var_15 ^= var_1;
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_16 = (min(var_16, (arr_3 [5] [5])));
        var_17 = (min(var_17, (((!(-23130 != -28235))))));
        var_18 ^= ((((max((arr_3 [i_1] [i_1]), -3537398156))) ? (((((var_9 ? (arr_3 [i_1] [i_1]) : (arr_4 [11]))) <= (arr_4 [i_1])))) : ((((arr_3 [i_1] [i_1]) < var_10)))));
        arr_5 [i_1] |= ((-(~4013200821)));
    }
    for (int i_2 = 0; i_2 < 13;i_2 += 1)
    {
        arr_8 [i_2] [i_2] |= (max(var_4, (min(4013200821, 4013200833))));
        var_19 = (((arr_6 [i_2] [i_2]) ? (!0) : (-5641 && 246)));
    }
    #pragma endscop
}
