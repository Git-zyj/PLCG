/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33130
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33130 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33130
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = 46272;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            arr_6 [i_0] [22] [i_0] = ((-(~-var_2)));
            arr_7 [i_0] = (arr_3 [i_0] [i_1]);
        }
        var_16 &= ((!((!(arr_3 [i_0] [i_0])))));
    }
    var_17 = ((((-var_11 ? (!57995) : (!var_13))) | (min(var_8, ((var_2 ? var_2 : 5509))))));
    #pragma endscop
}
