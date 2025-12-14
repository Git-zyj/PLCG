/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39469
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_2;

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 4; i_1 < 16;i_1 += 1) /* same iter space */
        {
            var_12 = (min(var_12, (((var_5 ? -93 : ((max(85, -113))))))));
            var_13 = (((((1 ? (-114 >= var_4) : ((21 ? var_8 : 627196523))))) ? ((((min(67, var_5))))) : var_7));
            arr_5 [i_1] = ((var_5 ? var_5 : (((var_6 || (arr_3 [i_1 - 3]))))));
            arr_6 [i_0] |= ((-((-(max(var_8, 117440512))))));
            var_14 = (min(var_14, (((var_4 ? ((var_7 ? var_8 : 24441)) : (~var_6))))));
        }
        for (int i_2 = 4; i_2 < 16;i_2 += 1) /* same iter space */
        {
            var_15 = min(-var_3, (((var_10 != ((min(0, 255)))))));
            arr_11 [i_2] = var_9;
            arr_12 [i_2] = -1227987296;
            arr_13 [i_2] [i_2] = ((127 ? 24576 : (((((var_7 ? 12 : var_10))) ? var_8 : -23))));
        }
        /* vectorizable */
        for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
        {
            var_16 = (max(var_16, ((((35831 ? 44540 : var_0))))));
            var_17 ^= (arr_7 [i_0 - 2] [i_3 - 2]);
            var_18 = var_9;
            arr_16 [i_3 - 1] [i_3] [i_0] = (((arr_10 [i_3]) >> (((arr_10 [i_3]) - 91))));
        }
        arr_17 [i_0 + 1] = ((min((~1), (~18132751963221956424))));
        var_19 = (min(var_19, (((+(min(var_1, (((arr_1 [i_0] [i_0]) ? (-127 - 1) : var_10)))))))));
        var_20 = (max(var_20, var_2));
    }
    var_21 = (((((var_6 ? (var_1 - var_10) : var_4))) ? ((((~var_2) != (~var_8)))) : var_2));
    var_22 = ((var_2 ? var_10 : (((max(var_4, var_10))))));
    #pragma endscop
}
