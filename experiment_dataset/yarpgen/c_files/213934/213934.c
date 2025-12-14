/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = (((((1 < (arr_1 [i_0]))) ? ((11641409288038562841 ? 1 : 4379404275867156705)) : (-2147483647 - 1))) <= ((-((var_4 ? 14067339797842394895 : 1)))));
        var_14 |= 15901647674931266154;
        var_15 ^= 1;
        var_16 = (((min((arr_1 [i_0]), var_10)) | ((((!(((var_11 >> (220 - 192))))))))));
        var_17 = (min(var_17, (((-(!6329725183491320515))))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {
        var_18 = (max(var_18, (!var_12)));

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_6 [i_1] [i_2] [19] = ((var_12 ? (~0) : (var_3 && var_0)));
            var_19 = (min(var_19, 1));
            var_20 -= (arr_1 [i_1]);
            var_21 += (11585 ^ var_1);
            arr_7 [i_1] = ((-(arr_0 [i_1])));
        }
        var_22 &= -var_8;
        arr_8 [i_1] [i_1] = ((arr_1 [16]) ? 43780549121130027 : (!var_10));
    }
    var_23 = (~((4379404275867156679 ? 6329725183491320498 : 1)));
    #pragma endscop
}
