/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190702
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -19182;

    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        var_11 = ((-(max((arr_2 [i_0]), 131072))));
        var_12 = (((arr_1 [i_0 + 2] [i_0 - 1]) ? (!-6541441090445857235) : var_2));
    }
    for (int i_1 = 0; i_1 < 25;i_1 += 1)
    {
        var_13 &= ((~((-21711 ? -4416354487874706811 : 3298977034))));
        var_14 = var_9;
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_15 = ((~(arr_5 [i_2])));
        var_16 = ((-31 ? (arr_0 [i_2]) : ((max(-var_2, ((-17017 ? -62 : (arr_1 [i_2] [i_2]))))))));
        var_17 = (max(127, (((~(arr_5 [i_2]))))));
        var_18 &= (max(0, 3399557503447550997));
        var_19 = (~var_8);
    }
    var_20 = (min(((((~2147483644) ? -101 : ((var_3 ? var_3 : var_8))))), var_5));

    for (int i_3 = 0; i_3 < 13;i_3 += 1)
    {
        var_21 = var_9;
        var_22 = ((!(!4294967295)));
        var_23 = (min(var_23, ((((((arr_5 [i_3]) ? (arr_2 [6]) : (arr_5 [i_3]))) << (var_4 / var_9))))));
        /* LoopNest 3 */
        for (int i_4 = 0; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 13;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 13;i_6 += 1)
                {
                    {

                        for (int i_7 = 1; i_7 < 9;i_7 += 1)
                        {
                            var_24 = (max(((((arr_18 [i_4] [i_3] [i_5] [i_5] [i_5] [i_7 + 3]) != ((0 ? 7873694398730374555 : 24885007))))), 250265316));
                            var_25 = (~-87);
                        }
                        var_26 = ((((1 ? -1 : 14907441383699339285)) == ((((!(arr_11 [i_6])))))));
                        var_27 = (((arr_17 [i_3] [i_4]) ? ((~((3876987575582751627 ? (arr_16 [i_3] [i_3] [i_6] [i_4] [i_3]) : 571505780185494858)))) : (max((((32767 ? -1073741824 : var_2))), -1069250024900858764))));
                        var_28 = (min(var_28, var_8));
                        var_29 = (min(740631564, 443244367));
                    }
                }
            }
        }
    }
    var_30 = var_6;
    #pragma endscop
}
