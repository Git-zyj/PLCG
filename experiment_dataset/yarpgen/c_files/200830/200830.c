/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200830
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_10;

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (((max((arr_0 [i_0]), ((((-4 + 2147483647) >> (32767 - 32738)))))) >= ((((((arr_1 [i_0] [i_0]) ? -12 : 38543)))))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 13;i_2 += 1)
            {
                {
                    var_15 = (((((arr_3 [i_2 - 2]) || 1)) ? (((arr_5 [i_2 + 1] [i_2 - 2]) ? (arr_6 [i_0] [i_2 - 1] [i_2] [i_2 - 2]) : var_2)) : ((max((arr_5 [i_2 + 1] [i_2 + 1]), (arr_6 [i_0] [i_2 - 1] [i_2 - 2] [i_2 + 1]))))));
                    var_16 = 1486997531;
                    var_17 = ((((min(38549, 922148153)) == (!1))));
                    var_18 = (max((~var_4), (38543 + 26989)));
                }
            }
        }

        for (int i_3 = 0; i_3 < 14;i_3 += 1) /* same iter space */
        {
            var_19 = var_6;
            var_20 = (((((arr_5 [i_3] [i_0]) ? var_7 : ((~(arr_7 [i_3]))))) & (3 || -2659812515996020826)));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_21 = (max(1, 27));
            var_22 = (((((-40 ? (((min(var_13, (arr_12 [i_0] [i_0]))))) : (((arr_4 [i_0] [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : 8645))))) && ((!(arr_11 [i_0])))));
            arr_13 [i_0] = ((!((((arr_7 [i_0]) & (arr_7 [i_0]))))));
        }
        var_23 = (max(var_23, (((+(((arr_10 [i_0] [i_0] [i_0]) ? (arr_8 [i_0] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_0]))))))));
    }
    #pragma endscop
}
