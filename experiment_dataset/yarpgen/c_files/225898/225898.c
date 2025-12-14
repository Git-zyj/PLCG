/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225898
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] = (!-1);
        arr_4 [3] [i_0 - 1] = (-(max(((49770 ? 6792421209280749971 : 1020)), (60 > -14))));
        arr_5 [i_0 - 3] = ((((((-37 + 2147483647) >> (((~var_7) + 19))))) ? ((((~var_2) ? (min(62315193, var_6)) : ((42 ^ (arr_1 [i_0 - 4] [i_0 - 4])))))) : (((arr_2 [i_0 + 1] [i_0 - 4]) ? (arr_2 [i_0 + 2] [i_0]) : (arr_2 [i_0 + 4] [i_0 + 2])))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        var_10 = ((686921908 < (686921908 < var_0)));
        var_11 = var_0;
        arr_8 [i_1] = ((var_6 ? (arr_2 [i_1] [i_1]) : (arr_6 [i_1] [i_1])));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        var_12 = -59;
        arr_11 [i_2] = (var_5 && 0);
        var_13 = ((((-28 - (((arr_10 [i_2]) ? (arr_9 [i_2]) : 114)))) * ((((arr_9 [i_2]) && (!104))))));
    }
    var_14 = ((((-1 && (26 || 54799))) && 120));
    #pragma endscop
}
