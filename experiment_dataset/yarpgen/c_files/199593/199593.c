/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199593
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (min((arr_1 [i_0]), ((var_7 ? (12816058315996765217 < var_12) : ((var_7 ? var_8 : var_10))))));
        arr_3 [i_0] = (max(((((max(25986, -1243446587987441267)) > var_2))), -var_8));
    }
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        arr_7 [10] = (((~(arr_5 [i_1]))));
        arr_8 [i_1] = -1243446587987441262;
    }
    for (int i_2 = 0; i_2 < 16;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 16;i_3 += 1)
        {
            arr_13 [i_2] [i_3] = arr_5 [i_2];
            arr_14 [i_2] [i_3] [i_3] = ((!(((-(~var_3))))));
        }
        arr_15 [8] = (((arr_4 [i_2]) ? ((min(var_9, 12))) : (~var_12)));
        arr_16 [i_2] [0] = (((!14) % ((96 ? 768607089567618521 : (arr_11 [i_2] [i_2] [i_2])))));
    }
    var_13 = ((var_12 ? 512 : var_2));
    var_14 = (var_0 | var_6);
    var_15 = ((((((((var_6 ? var_5 : var_9))) ? (var_11 & -5222621831734250605) : var_1))) ? ((~(var_10 | var_10))) : var_0));
    #pragma endscop
}
