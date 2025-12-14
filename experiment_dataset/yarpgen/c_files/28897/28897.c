/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28897
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_5;
    var_19 = (min(var_19, var_3));
    var_20 = (min(var_20, ((max(var_9, var_9)))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_21 = (((-((-11 ? 986482254 : -11)))));
        var_22 = var_0;
        arr_2 [i_0] [i_0] = var_8;
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        var_23 = arr_0 [i_1];
        var_24 = (((((arr_1 [i_1] [i_1]) ? (arr_5 [i_1]) : (var_16 & -6159217352000283374)))) ? (-83 >= -6159217352000283374) : ((2652337516633693916 ? 868610934 : var_9)));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        var_25 ^= 6130250496037217273;
        arr_9 [i_2] = (((((2652337516633693916 ? (~2506610581843416697) : var_16))) ? (((((var_16 ? 62 : -2652337516633693925))) ? (arr_3 [i_2 - 2] [i_2 - 2]) : (2506610581843416711 > -16))) : var_10));
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 10;i_4 += 1)
            {
                {
                    var_26 = (((((347241601 ? (!var_5) : ((18153943079494261453 ? -11 : 3762749582))))) ? (!-43) : var_11));
                    var_27 = (2506610581843416697 & 10477);
                    var_28 += (((13865449949090603447 != 49090) ^ (!1558338950616449681)));
                }
            }
        }
    }
    var_29 = ((!(((max(3762749591, 2652337516633693922))))));
    #pragma endscop
}
