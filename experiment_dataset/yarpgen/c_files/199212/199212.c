/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -5691097949363864072;
    var_18 = 9101599008854446138;
    var_19 = (min(((((var_14 || var_3) ? (max(var_16, var_5)) : var_5))), (min(((min(var_0, var_8))), -9101599008854446138))));
    var_20 = ((-((var_2 ? (var_15 == 44539) : 18341368929505603202))));

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = (((4652 ? (arr_0 [i_0 - 1] [i_0 - 1]) : 35435)));
        arr_5 [i_0] = ((-14738 ? ((35447 ? -4709722307872282739 : -307256421)) : 25813));
        var_21 = (min((arr_3 [i_0] [i_0]), ((min((((arr_2 [i_0]) | (arr_0 [7] [i_0 - 1]))), 29746)))));
    }
    for (int i_1 = 0; i_1 < 20;i_1 += 1)
    {
        arr_8 [i_1] [5] = (max(var_11, 65520));
        arr_9 [i_1] = ((((min((max(2510332960513126612, var_8)), 33893))) ? ((max((arr_7 [i_1]), -90))) : (((arr_6 [i_1]) ? 48594 : var_5))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 22;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 22;i_4 += 1)
            {
                {
                    var_22 = (max((((var_16 ? 35435 : (((arr_13 [i_4] [i_4]) | 35435))))), var_1));
                    arr_18 [i_2] [i_3] [i_2] = (max((((arr_16 [i_2] [i_3] [i_4] [i_4]) ? var_13 : (arr_12 [i_2] [i_2] [i_2]))), (min(var_12, (arr_10 [i_3])))));
                    var_23 = ((-1 < ((((arr_17 [i_3] [i_3] [i_3] [i_2]) || (((214 ? 2047 : (arr_12 [i_2] [i_2] [i_2])))))))));
                    arr_19 [i_4] = (min((7307333803236800644 > -1968081522), 3422638236));
                }
            }
        }
        arr_20 [i_2] [6] = var_11;

        for (int i_5 = 0; i_5 < 1;i_5 += 1)
        {
            arr_23 [i_2] = (min(((((((var_1 ? var_15 : 32757))) % ((0 ? var_11 : -23781))))), (min(((2134610936 ? 1978077718794203066 : (arr_15 [i_2] [i_5] [i_2]))), (var_6 * var_16)))));
            var_24 = (((min(((53 % (arr_12 [i_2] [i_2] [i_5]))), ((min(var_0, var_1))))) != ((((114 + 186) + (((arr_21 [21]) * 3192931962)))))));
            var_25 = ((((((((-13723 ? (arr_15 [i_2] [i_2] [i_2]) : var_3))) ? ((var_8 ? 1 : var_5)) : ((var_11 ? var_15 : var_14))))) ? (((22101 || var_13) * (arr_13 [i_2] [i_5]))) : ((((var_15 ? 2257 : var_15)) & (90 != var_11)))));
            var_26 = ((((var_2 == (arr_17 [i_2] [i_2] [0] [i_2]))) ? (((arr_21 [i_2]) ? 15434803277234016459 : var_3)) : (((~(arr_17 [i_2] [i_2] [i_2] [i_2]))))));
        }
    }
    #pragma endscop
}
