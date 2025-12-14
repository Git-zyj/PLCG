/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194749
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194749 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194749
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((var_10 ? var_0 : ((((var_2 ? -3463754833852630986 : -110)) / (min(4294967284, var_1))))));
    var_12 = (((((~var_5) - 17482106459125053157))) ? var_4 : var_3);

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_3 [i_0] [17] |= ((min((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0]))));
        var_13 = min((max(var_8, var_9)), ((((arr_1 [i_0] [i_0]) ? (arr_0 [i_0]) : (((arr_2 [i_0] [i_0]) / (arr_1 [i_0] [i_0])))))));
    }
    #pragma endscop
}
