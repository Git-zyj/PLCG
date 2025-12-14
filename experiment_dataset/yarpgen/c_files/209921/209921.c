/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209921
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (var_3 ^ var_2);
    var_11 = (min(var_11, (((!(!var_0))))));
    var_12 = (max(var_12, (((+((((!var_0) >= var_0))))))));
    var_13 = (max(var_7, ((((3792276768 ? 1 : var_7)) >> (((var_4 % var_6) - 3836452967))))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (((min(var_7, (((~(arr_2 [i_0])))))) & ((((((((arr_2 [i_0]) ? var_0 : (arr_2 [i_0])))) && 2239007318))))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                arr_7 [i_2] [i_0] [i_0] [i_0] = (arr_5 [i_0] [i_1]);
                var_15 = ((-4539141690467079989 ? (arr_3 [i_2]) : (arr_3 [i_0])));
                arr_8 [i_1] [i_1] [i_0] [i_1] = var_5;
                arr_9 [i_0] [i_2] [i_2] = var_8;
            }
            arr_10 [i_0] [i_0] [i_1] = (((arr_1 [i_0]) >> ((((max(315451798, 1))) - 315451773))));
        }
        arr_11 [i_0] [i_0] = (max(65535, 40267));
    }
    #pragma endscop
}
