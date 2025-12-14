/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197665
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (max(262143, ((((6603017796709452287 ? 6800621438734606538 : var_9))))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        arr_3 [i_0 - 1] = (min((arr_0 [i_0 + 2] [i_0 + 2]), var_6));
        arr_4 [i_0 + 2] = min((((!(arr_2 [i_0 + 3])))), (((!(((11646122634974945092 ? -25643434 : 6800621438734606513)))))));
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_7 [i_1] = ((min((((-(arr_2 [i_1])))), var_2)));
        var_21 = max((arr_6 [i_1]), (((!(!11646122634974945085)))));
        arr_8 [i_1] = ((((min((((arr_2 [i_1]) ? 255 : 11646122634974945107)), 6800621438734606505))) ? ((((arr_5 [i_1]) ? (arr_5 [i_1]) : 206))) : (min((arr_2 [i_1]), (((arr_6 [i_1]) ? var_18 : 11646122634974945107))))));
    }
    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        var_22 ^= ((((min(var_7, var_19))) / var_9));
        var_23 = (max(var_23, (((((max(((var_19 ? var_14 : var_12)), 732323736))) ? (((min(var_3, 38)))) : ((var_13 ? (arr_6 [i_2]) : 1732180741)))))));
    }
    #pragma endscop
}
