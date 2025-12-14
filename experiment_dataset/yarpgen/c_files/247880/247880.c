/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247880
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 *= (((((((var_8 ? var_14 : var_9)) == var_15))) == var_11));

    for (int i_0 = 0; i_0 < 0;i_0 += 1) /* same iter space */
    {
        var_17 *= (36464 | -2350170346530118523);
        arr_2 [i_0] [i_0] = (23177 == 4294967295);
        var_18 = (max(var_18, ((((18446744073709551615 & 65535) ? ((min((arr_0 [i_0 + 1] [i_0]), 32767))) : var_9)))));
        arr_3 [i_0] [i_0] = ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_0 [i_0] [i_0 + 1]))))));
        arr_4 [7] = ((((arr_0 [i_0 + 1] [i_0 + 1]) ? (24 < 2520405878084911925) : ((38821 ? 1 : 9223372036854775784)))) & (arr_1 [i_0 + 1]));
    }
    for (int i_1 = 0; i_1 < 0;i_1 += 1) /* same iter space */
    {
        var_19 = (((arr_5 [i_1]) - (!29071)));
        var_20 ^= (min((((max(-9223372036854775784, 18446744073709551602)) | 5672450861972992087)), ((min((min(4294967295, 65535)), (!0))))));
    }
    #pragma endscop
}
