/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47461
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47461 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47461
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_10;
    var_14 = (((min(var_5, ((var_1 ? var_9 : 174))))) ? 1276742415658937638 : ((var_12 ? -var_6 : var_5)));
    var_15 = 4609434218613702656;
    var_16 &= (((((-var_5 ? var_8 : var_7))) ? var_3 : var_3));

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_17 = (min(((-119517968 ? (4609434218613702639 & var_9) : (-44 - 2638341151249642706))), ((((arr_0 [i_0] [i_0]) ? 1 : (arr_1 [i_0] [i_0]))))));
        arr_3 [i_0] [i_0] = ((-(((arr_1 [i_0] [i_0]) ? 1 : 119517952))));
        arr_4 [i_0] = (((((4292870144 ? -4609434218613702647 : (((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : var_1))))) ? ((((var_12 || ((min(2638341151249642706, var_0))))))) : (min((arr_0 [i_0] [10]), (arr_0 [i_0] [i_0])))));
        arr_5 [10] = 63;
    }
    for (int i_1 = 0; i_1 < 10;i_1 += 1) /* same iter space */
    {
        var_18 = ((((((~(max((arr_6 [i_1] [i_1]), (arr_7 [i_1]))))) + 2147483647)) << (1 - 1)));
        var_19 = (((((((var_6 < -937062102) || (var_4 >= -4609434218613702658))))) == (max((((!(arr_7 [i_1])))), (max(13812936360855867110, -4609434218613702679))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {
                {
                    var_20 = (max(var_20, var_0));
                    var_21 = (max(var_21, ((((arr_7 [2]) ? var_11 : ((((arr_9 [i_2]) || (arr_0 [i_3] [i_4])))))))));
                }
            }
        }
        var_22 = (min((((arr_8 [i_2]) ? (arr_8 [i_2]) : (arr_8 [i_2]))), 4609434218613702632));
        var_23 = ((-((-(arr_8 [i_2])))));
        var_24 = 33888;
    }
    #pragma endscop
}
