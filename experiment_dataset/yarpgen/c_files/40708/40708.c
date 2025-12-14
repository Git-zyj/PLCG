/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_17 += (((arr_1 [i_0]) >> (((((arr_1 [i_0]) ? (arr_0 [i_0] [i_0]) : 2147483647)) - 9428391465162370338))));
        var_18 += (((var_2 ? var_0 : 7022109321821696472)));
        arr_2 [i_0] = ((149 ? 10681092788766533746 : ((((arr_0 [i_0] [i_0]) ? 842114786 : 112)))));
    }
    for (int i_1 = 1; i_1 < 14;i_1 += 1)
    {
        var_19 = 1;
        arr_5 [i_1 + 3] [i_1 + 2] = 2144068867;
        arr_6 [i_1 + 2] |= var_14;
    }
    var_20 = ((((min((~var_4), ((var_3 ? var_9 : var_3))))) ? (~160140357) : (min((min(var_1, var_16)), ((max(var_5, (-32767 - 1))))))));
    var_21 = ((((max(((var_13 ? var_2 : 3324690016)), (4070289264 - var_13)))) ? var_0 : ((max(-32754, var_11)))));
    #pragma endscop
}
