/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234884
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234884 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234884
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_1 ? (((var_15 <= ((var_13 ? var_0 : var_9))))) : (min(((21 ? var_5 : var_4)), var_8))));
    var_17 = (max(var_6, var_13));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_18 &= (min((((~(arr_0 [i_0])))), (((arr_1 [i_0]) ? 1 : (arr_1 [i_0])))));
        arr_3 [i_0] = (((max(1, (((var_1 >= (arr_1 [i_0])))))) - 1));
        var_19 = (min(var_19, (((!((((max(6481954740611095353, (-127 - 1))) << (var_13 - 244488431)))))))));
        var_20 = (((arr_1 [i_0]) ? ((((arr_1 [i_0]) ? ((~(arr_1 [i_0]))) : 36637))) : ((243 ? (~3065256897765420096) : ((((arr_0 [i_0]) ? var_9 : var_3)))))));
    }
    var_21 = var_2;

    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = (arr_4 [i_1]);
        arr_7 [i_1] [i_1] = (((((~(arr_5 [i_1] [i_1])))) ? (max((max((arr_4 [i_1]), var_11)), (max(1, (arr_5 [i_1] [i_1]))))) : ((16551394425178954179 ? (arr_4 [i_1]) : (arr_4 [i_1])))));
        arr_8 [i_1] [i_1] = (min((max((arr_4 [i_1]), ((max(29137, 1))))), (~15)));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
    {
        var_22 = (min(var_22, (((0 ? (((arr_9 [i_2] [i_2]) ? (arr_11 [i_2]) : ((var_14 * (arr_10 [i_2]))))) : (((((2375517257 >> (21947 - 21935)))) ? 1 : (3205716935 > 18040406145051681155))))))));
        arr_12 [i_2] = ((-((-8445516336011142881 ? 1 : (arr_11 [i_2])))));
        arr_13 [i_2] = (((min((arr_9 [i_2] [i_2]), (arr_10 [7]))) ? ((max((max((arr_11 [i_2]), (arr_10 [i_2]))), (arr_11 [i_2])))) : (max(((max((arr_10 [i_2]), var_4))), (((arr_10 [1]) >> (arr_11 [i_2])))))));
        var_23 = 0;
    }
    for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
    {
        arr_16 [i_3] = ((134217727 - (max(16539111721837007129, 2527239915373038325))));
        var_24 *= (((((max(243, (arr_9 [i_3] [i_3])))) > (arr_10 [15]))));

        for (int i_4 = 0; i_4 < 22;i_4 += 1)
        {
            arr_20 [i_3] [i_3] = ((((max((arr_15 [i_3]), (arr_15 [i_3])))) ? 247 : 18446744073709551600));
            var_25 = (((((-5382392040255323372 ? (min(var_13, (arr_14 [i_3]))) : (arr_14 [i_4])))) ? var_3 : ((+(((arr_10 [6]) ? 9223372036854775804 : 26866))))));
            arr_21 [i_3] = -12869;
            arr_22 [i_3] = ((var_2 ? -0 : (arr_19 [i_3] [i_4])));
        }
    }
    #pragma endscop
}
