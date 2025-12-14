/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (13437413402420112703 >= var_2);

    for (int i_0 = 4; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_16 = (min(var_16, var_8));
        var_17 = var_1;
        var_18 = (min(var_18, (min(((((((-6910786610345503435 ? var_0 : var_5))) ? -71 : -112))), ((((((arr_1 [i_0 + 2]) ? var_10 : (arr_1 [i_0])))) ? (min(16, (arr_1 [i_0]))) : (arr_1 [i_0 - 1])))))));
    }
    for (int i_1 = 4; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_19 = ((((~(~var_8))) >> ((((-9223372036854775804 ? 7557137308811083911 : (((-14 ? 12 : 45808))))) - 7557137308811083880))));
        var_20 = ((!((((arr_2 [i_1 + 2] [i_1]) ? 234 : (arr_1 [i_1]))))));
    }
    for (int i_2 = 4; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_21 *= 1;
        var_22 = ((((max(3, ((max((arr_6 [i_2 - 1]), var_10)))))) && -539634805));
        arr_7 [i_2] = ((((arr_0 [i_2] [i_2]) & ((max(var_9, var_3))))));
        var_23 = (min(var_11, (min((arr_2 [i_2 - 2] [i_2]), (max(1, 9822721882158617416))))));
        arr_8 [i_2] = (((3 ? var_3 : (arr_3 [i_2 + 2]))));
    }
    #pragma endscop
}
