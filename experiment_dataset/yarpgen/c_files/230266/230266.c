/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_7;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_19 = ((4 <= (((arr_1 [i_1] [i_1]) % 6039))));
                arr_7 [i_0 + 1] [i_1] = (((!31) <= var_0));
                var_20 = ((255 ? (((1246850125 ? 3927187668 : (arr_2 [i_0 + 2])))) : (min(228, var_13))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 12;i_2 += 1)
    {
        arr_11 [i_2] [i_2] = (((((min((arr_8 [i_2]), var_1)))) ? ((((arr_10 [i_2]) || 228))) : (((arr_10 [i_2]) ? (min(var_3, (arr_10 [i_2]))) : ((((arr_10 [i_2]) < 4294967265)))))));
        var_21 = ((((((max(var_5, var_16)))) < (min(60306, 4294967264)))));
    }
    for (int i_3 = 0; i_3 < 0;i_3 += 1)
    {
        var_22 = (((((var_5 != (min(var_14, 1))))) << (((((arr_13 [i_3] [i_3 + 1]) ? (max(var_14, 0)) : 2869352235)) - 1635861669))));
        arr_14 [i_3] = ((~(((arr_13 [i_3] [i_3]) - ((1 ? 32767 : 5230))))));
        arr_15 [i_3] = ((var_13 ? ((max((max(var_14, var_4)), (min(209, (arr_12 [i_3])))))) : (min(var_2, (max(-4137638462973290491, -32763))))));
    }
    for (int i_4 = 2; i_4 < 18;i_4 += 1)
    {
        var_23 = ((~(~469762048)));
        var_24 = -1;
        var_25 = min(504, (min(9223372036854775807, var_8)));
        arr_18 [i_4] = arr_16 [i_4];
    }
    #pragma endscop
}
