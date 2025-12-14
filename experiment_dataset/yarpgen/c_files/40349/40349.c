/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40349
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40349 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40349
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_18 = ((-((min((arr_0 [i_0]), (arr_0 [i_0]))))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_4 [i_1] = min((arr_1 [i_0] [i_1]), (((((arr_2 [i_1]) ? (arr_1 [1] [i_1]) : (arr_0 [i_1]))))));
            var_19 ^= (max((arr_1 [i_1] [i_0]), ((11358282758852829329 + ((min(0, 131071)))))));
            var_20 = ((min(1378824704, (arr_3 [i_0] [i_0]))));
            var_21 = (min((~var_11), -32764));
        }
        arr_5 [18] = ((((-105 || (arr_1 [i_0] [1])))));
        var_22 = (max((((-(max(2668602679, 148))))), (arr_1 [i_0] [i_0])));
    }
    var_23 = var_7;
    var_24 ^= (var_2 && var_11);
    var_25 += var_1;
    var_26 = ((3047275848 ? 14458458175915078164 : 1653737011));
    #pragma endscop
}
