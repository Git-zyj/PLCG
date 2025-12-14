/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240931
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240931 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240931
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_9;
        var_18 = (min(var_18, (!6)));
        arr_3 [i_0] [i_0] = ((-(arr_0 [i_0] [10])));
        arr_4 [i_0] = 3382168907322971818;
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1)
    {
        arr_7 [i_1] = ((max(576117898, -3157616368654726242)) + (((2678282666459456888 ? 576117898 : (-32767 - 1)))));
        arr_8 [i_1] [i_1 + 1] = ((+((max((arr_0 [i_1 + 1] [i_1 + 1]), (arr_0 [i_1 + 1] [i_1 + 1]))))));

        /* vectorizable */
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_1] = (arr_0 [i_1] [i_1]);
            arr_13 [i_1] [i_1] = -3157616368654726258;
            var_19 = (max(var_19, ((((arr_9 [i_2]) && -1)))));
            var_20 = (((arr_9 [i_1]) || ((((arr_10 [i_2]) ^ (arr_1 [1]))))));
        }
        var_21 = (min(var_21, ((min((((((min(2678282666459456888, var_0))) == ((17044793529233944918 >> (182 - 163)))))), (max(17044793529233944918, (arr_9 [2]))))))));
    }
    var_22 = (max(var_22, ((+((((~3157616368654726255) <= (((1 ? 210 : 0))))))))));
    #pragma endscop
}
