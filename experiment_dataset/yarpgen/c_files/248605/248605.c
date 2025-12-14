/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248605
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((-(~var_16)));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = (min(61, -8788089590425426587));
        arr_4 [i_0] [i_0] = ((-2758544307177530542 ? (((arr_0 [i_0]) + ((0 ? 11404119432640230983 : 7042624641069320632)))) : (((((max(153, 11404119432640230986))) ? (0 > var_5) : var_8)))));
        var_21 = (min(var_21, (((var_5 ? (max(9223372036854775807, var_12)) : (255 ^ 133))))));
    }
    var_22 = ((var_6 ? (var_16 && var_11) : -33));
    var_23 = ((var_15 ? (min(((var_0 ? 7816091005236984303 : var_8)), (((var_15 ? -5913032138797879727 : var_2))))) : (~var_15)));
    #pragma endscop
}
