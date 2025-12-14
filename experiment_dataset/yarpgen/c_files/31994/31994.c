/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31994
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31994 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31994
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_8;

    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        var_12 = ((!(((var_7 ? (-73 != var_5) : (min(var_7, (arr_1 [i_0]))))))));
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 ^= ((((min((arr_8 [6] [i_1 + 3] [i_2]), (arr_8 [12] [i_1] [i_2])))) % -72));
                    var_14 &= var_7;
                    arr_9 [i_1] [i_1] [i_2] = (((((((arr_8 [i_1] [i_0 - 1] [i_1]) > var_2)))) & (var_7 - var_4)));
                    var_15 *= (max(984282092, ((65535 >> (((arr_3 [i_0 + 1]) + 1402643066))))));
                }
            }
        }

        for (int i_3 = 2; i_3 < 13;i_3 += 1)
        {
            var_16 -= -4294967295;
            var_17 = ((((-549521355 * (12118 && 0))) >> (((min((arr_10 [i_0]), (max((arr_0 [i_3] [i_0]), var_7)))) - 168))));
            arr_12 [i_0] = (max(var_6, (max(-var_4, (((arr_5 [10]) * var_8))))));
            var_18 += (!var_2);
            arr_13 [i_0] = -var_3;
        }
        for (int i_4 = 3; i_4 < 13;i_4 += 1)
        {
            arr_17 [i_4] [i_0] [i_4] = ((((((var_2 != var_5) ? var_0 : (var_0 && 72)))) ? ((~((~(arr_15 [i_0 - 1] [i_4] [i_4]))))) : ((min((((var_4 > (arr_5 [i_4])))), (min(var_5, var_9)))))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 14;i_6 += 1)
                {
                    {
                        arr_22 [i_4] [i_4] [i_4 - 2] [i_4] [i_4] = (min(((-12119 ? 3982138578 : 5516)), 0));
                        var_19 = -var_10;
                    }
                }
            }
        }
        for (int i_7 = 2; i_7 < 13;i_7 += 1)
        {
            arr_25 [i_0 + 1] [i_0] [i_0] = ((+((-(((arr_5 [i_7]) + var_1))))));
            var_20 ^= ((-609179533 != ((var_2 ? (var_10 != var_4) : (((arr_16 [i_0 - 1] [i_7]) ? var_10 : (arr_8 [i_7] [i_7] [i_7])))))));
            var_21 = (max((!4029791247659932513), ((((max(var_9, var_5))) ? (~var_0) : (arr_15 [i_0 + 1] [i_7 - 1] [i_7 - 2])))));
        }
        arr_26 [i_0] = (3110416109 - 12110);
    }
    for (int i_8 = 0; i_8 < 25;i_8 += 1)
    {
        var_22 |= (min(((var_9 << (((arr_28 [i_8]) - 1093736796)))), ((var_6 << (-1 + 12)))));
        var_23 = ((!(((!var_1) || (arr_28 [i_8])))));
        var_24 = max(var_3, (var_7 <= 17173));
        var_25 = (-var_3 < var_1);
        var_26 = -2715;
    }
    var_27 = ((((min((min(var_2, var_7)), var_5))) ? ((((((min(1712423831, var_1))) == 2013043493117667727)))) : -var_7));
    #pragma endscop
}
