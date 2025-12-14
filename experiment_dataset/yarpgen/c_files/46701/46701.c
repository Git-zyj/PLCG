/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46701
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_2 [i_0] = (arr_0 [i_0]);
        arr_3 [1] = ((((var_9 >> (((arr_0 [i_0]) - 2777729970))))) ? 47142 : -8362);
    }
    for (int i_1 = 3; i_1 < 21;i_1 += 1)
    {
        arr_7 [4] |= (((((arr_4 [2] [12]) + 0))) ? (max(1527292034, var_11)) : -677781529);
        arr_8 [0] = (((((max(var_9, -764216956))) ? (arr_0 [i_1 - 1]) : -12212)));
        arr_9 [i_1] [4] = ((var_13 ? (max((arr_0 [i_1]), (!65535))) : (max((var_17 / 28), ((((arr_1 [i_1 - 1]) / 77)))))));
        arr_10 [22] |= 14831638720787321940;
        arr_11 [i_1] [i_1] = ((((((1088245676 ? 3255026475 : -1)))) ? (3020922542 & var_9) : (arr_0 [i_1])));
    }
    var_18 = -1377516574;
    #pragma endscop
}
