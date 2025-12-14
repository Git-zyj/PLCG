/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22781
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22781 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22781
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((var_8 + (min((~var_11), var_5))));

    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        arr_2 [i_0] = ((~(+-192)));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_20 = (max(var_20, ((((min(2884136751587589370, ((47689 ? -8657058006084555014 : 5)))) | var_11)))));
            var_21 = (~((-(arr_0 [i_0 - 1]))));
            var_22 += var_3;
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_23 = 255;
            var_24 = (-(max(var_12, var_11)));
            var_25 = (min(var_25, (((((var_7 ? (arr_6 [i_0 + 1] [i_0 + 1] [i_0 + 1]) : (arr_6 [i_0 + 1] [i_2] [i_2]))) ^ (((!(!var_4)))))))));
            arr_7 [i_0] [i_0] = ((((min((arr_0 [i_0 + 1]), (arr_1 [i_0 + 1] [i_2])))) ? (min(var_17, (-6457121326756849298 < var_12))) : (((~var_9) ? var_0 : (((var_3 ? var_18 : 10872)))))));
        }
    }
    var_26 = (max(var_26, ((min(var_6, (min(var_8, ((min(var_13, var_6))))))))));
    var_27 += (((((((3532637445468398861 ? var_7 : var_1)) > 41378))) > var_18));
    #pragma endscop
}
