/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43468
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43468 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43468
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_11 ^= (max(((12434484775447623737 * ((((arr_0 [i_0]) + var_0))))), (arr_3 [7] [i_0])));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            arr_8 [i_0] [8] = var_3;
            var_12 = (40518 - 15);
        }
        arr_9 [i_0] = (min((((12434484775447623737 ? var_3 : (arr_6 [i_0] [i_0] [i_0])))), (var_1 - var_1)));
    }
    var_13 = (min(var_13, (((((((min(var_1, 6012259298261927878))) ? (min(6012259298261927870, 4655485565041470433)) : var_7)) | 52026)))));
    var_14 = ((6012259298261927881 ? (var_8 == var_4) : var_0));
    #pragma endscop
}
