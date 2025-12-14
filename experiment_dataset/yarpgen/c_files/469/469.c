/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_16 = var_3;
        arr_3 [i_0] [i_0] = (max(-1892726983, (max((!-1892726981), var_2))));
        arr_4 [i_0] = (((1892727011 ^ -57) | ((((-1892727012 ? var_8 : (arr_1 [13]))) ^ (~var_9)))));
        arr_5 [i_0] = ((((min(var_14, (arr_1 [i_0])))) + var_0));
        var_17 = (min(var_17, ((22 ? (((((max(var_6, var_11)))) + ((-4720084390859539310 & (arr_0 [i_0] [i_0]))))) : var_5))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            var_18 = (max((17 & 4720084390859539309), 1892727011));
            var_19 |= (!var_1);
            var_20 -= (arr_2 [i_1]);
            arr_12 [i_1] = (((((arr_1 [i_2]) & (arr_1 [i_2]))) + ((((((arr_9 [i_1] [i_2]) ? 606425157 : var_3)) > ((var_0 ? 9496 : var_6)))))));
        }
        arr_13 [i_1] = var_6;
    }
    var_21 = ((-(((((var_11 ? var_5 : 13860755855634839775))) ? var_12 : (min(22675, -1892726983))))));
    var_22 = var_5;
    #pragma endscop
}
