/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_11 ? var_3 : var_0))) || (((((min(-14590, 0))) ? var_7 : -19)))));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_15 = arr_1 [i_0];

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_16 = ((((((~-1) ? var_4 : (32767 < 2147483647)))) ? (min((((var_9 < (arr_1 [i_0])))), (arr_0 [i_0] [i_0]))) : ((20929 & (-2147483647 - 1)))));
            arr_4 [i_0] [i_0] [i_1] = (((1 ? 4 : 845858708)) < ((((arr_2 [i_1] [i_1]) || (arr_2 [i_0] [i_1])))));
        }
    }
    #pragma endscop
}
