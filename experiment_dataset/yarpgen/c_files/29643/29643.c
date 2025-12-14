/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29643
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = var_0;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 -= ((-((149 ? 0 : 69))));

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            arr_8 [i_0] [i_0] = ((var_6 ? 16128 : 4294967295));
            arr_9 [i_0] = 109;
            var_12 |= ((var_3 ? 4294967292 : (-32767 - 1)));
            var_13 = ((~(~-56)));
            arr_10 [i_0] = ((var_3 ? (-127 - 1) : (2164787433 * -23)));
        }
        var_14 = (min(var_14, (((~var_2) ? var_6 : -var_7))));
        var_15 = 2130179869;
    }
    var_16 = (min(var_16, ((min(((max(16, 1))), (((((max(576390383559245824, 940832697066087674))) ? ((max(var_5, var_1))) : var_8))))))));
    var_17 = var_5;
    #pragma endscop
}
