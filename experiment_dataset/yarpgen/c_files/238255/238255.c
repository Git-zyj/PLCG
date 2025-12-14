/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238255
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238255 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238255
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, ((((~29828780) ? ((-841250797 ? ((var_12 ? var_11 : 1996272921)) : ((min(34191, 1909074993))))) : var_0)))));
    var_14 -= (-(((((var_12 ? var_0 : var_5))) ? 3493129915498116009 : 13293765669348931754)));
    var_15 = (max(var_15, var_0));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_16 -= 34201;
        var_17 = ((140155405 ? (arr_2 [i_0] [i_0]) : (((((112028033 ? var_12 : (arr_1 [i_0])))) ? (min((arr_2 [i_0] [i_0]), 2113929216)) : 1375287790))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_18 = ((-(arr_0 [19] [19])));
            arr_5 [i_0] = 127;
            arr_6 [i_0] = -54;
        }
        arr_7 [i_0] = 126976;
    }
    #pragma endscop
}
