/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21664
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21664 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21664
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (((-798857006 + 2147483647) >> 1));
    var_14 -= 1607119669611842411;

    for (int i_0 = 0; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_15 = var_10;
        var_16 = (min(var_16, ((((((18446744073709551615 ? var_0 : var_12))) && ((min(var_1, (arr_1 [i_0])))))))));
        var_17 = (min(var_17, (arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
    {
        var_18 *= (((((101 ? (arr_0 [i_1]) : (244812097 != var_3)))) && (((((max((arr_3 [i_1]), (arr_1 [i_1])))) ? (~var_11) : (max(-3596, 4294967286)))))));
        arr_5 [18] = min(var_12, (((min((arr_0 [i_1]), (arr_2 [i_1]))))));
        arr_6 [i_1] [i_1] = ((-(((arr_4 [i_1]) ? (2147483642 / -3585) : ((1 ? 1 : (arr_1 [i_1])))))));
        arr_7 [i_1] = 114;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_19 *= ((var_10 ? var_4 : ((((arr_3 [i_2]) ? (~237) : 72)))));
        var_20 = 20;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        var_21 = (max(var_21, (((((((arr_9 [17]) ^ 244812097))) || ((((2147483642 ? 1 : var_12)))))))));
        arr_13 [i_3] [i_3] = (((arr_10 [i_3] [i_3]) < var_3));
        var_22 ^= (((((((max(var_5, var_9))) ? ((-(arr_11 [i_3]))) : ((1 ? -1658629159 : 234))))) ? (min(1, var_7)) : ((max(-244812076, ((-(arr_0 [i_3]))))))));
        arr_14 [i_3] [i_3] = ((65524 * (((!(((-1 ? 2200830156573647489 : (arr_1 [i_3])))))))));
    }
    #pragma endscop
}
