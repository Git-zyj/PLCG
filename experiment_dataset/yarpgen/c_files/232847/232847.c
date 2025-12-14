/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232847
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232847 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232847
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= ((((max(var_0, var_4))) ? (min((min(var_9, var_7)), (max(var_6, var_5)))) : var_0));

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (min(var_11, (((+((max((-127 - 1), 229))))))));
        arr_2 [i_0] [i_0] = (((((172 ? (arr_1 [i_0]) : 3514778286857483755))) ? ((max((!172), ((34 && (arr_1 [i_0])))))) : ((~(arr_0 [i_0])))));

        for (int i_1 = 2; i_1 < 24;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                var_12 = (max(var_12, -74));
                var_13 = (min(var_13, (((!((((arr_7 [i_1 - 1]) ? ((~(arr_0 [i_0]))) : (arr_0 [i_2])))))))));
                arr_8 [i_0] [i_1] = (((((!(arr_1 [i_0]))))) ? (var_7 >= var_5) : (((arr_5 [i_0] [i_0]) ? (arr_7 [i_0]) : (max((arr_3 [i_2]), 6237365210093277296)))));

                for (int i_3 = 1; i_3 < 21;i_3 += 1)
                {
                    arr_12 [i_3] [i_3] [i_3] [i_1] [i_3] = ((!((min(var_1, (!6237365210093277296))))));
                    arr_13 [i_1] [24] [i_2] [i_3] [i_3] |= 69;
                }
            }
            var_14 = ((-(--19)));
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_15 = ((((((max(93, 0))))) ? (((!(((arr_7 [i_0]) && (arr_15 [i_0] [13])))))) : 74));
            arr_17 [i_0] = var_2;
            arr_18 [i_0] [i_0] [i_0] = ((~(min((arr_11 [i_0] [i_4] [i_4]), (arr_11 [10] [i_4] [24])))));
        }
        var_16 = (arr_0 [i_0]);

        for (int i_5 = 0; i_5 < 25;i_5 += 1)
        {
            var_17 = (min((arr_16 [i_0] [i_5] [i_5]), (min(((((arr_10 [1] [i_5]) < (arr_0 [i_0])))), ((~(arr_4 [i_0])))))));
            arr_21 [20] [i_5] [i_0] = ((83 ? ((1 << (83 - 22))) : (min(1, (arr_1 [i_0])))));
        }
    }
    for (int i_6 = 2; i_6 < 11;i_6 += 1)
    {

        for (int i_7 = 3; i_7 < 11;i_7 += 1) /* same iter space */
        {
            var_18 = ((+(min((995443135 / 1660477004), ((min(var_1, 252)))))));
            arr_26 [i_7] = ((((max((arr_15 [i_7 - 3] [i_7 - 1]), var_3))) ? ((((min(-108, 6237365210093277296))))) : var_3));
        }
        for (int i_8 = 3; i_8 < 11;i_8 += 1) /* same iter space */
        {
            var_19 ^= ((~(max((min(var_7, (arr_1 [i_8]))), (~var_7)))));
            var_20 = ((~((min(var_4, (arr_24 [i_6 + 1]))))));
            var_21 = (max((((!((max(var_4, (arr_19 [i_8] [i_6]))))))), ((((arr_5 [i_8] [i_6]) * 96)))));
        }
        var_22 = (min((min((arr_1 [i_6 + 1]), -63)), ((min((arr_10 [i_6 - 2] [i_6]), var_6)))));
    }
    var_23 = ((-(max((min(var_1, var_9)), ((3 ? (-2147483647 - 1) : 2305843009213431808))))));
    #pragma endscop
}
