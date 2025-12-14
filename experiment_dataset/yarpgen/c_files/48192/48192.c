/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48192
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48192 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48192
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        var_19 = (max(var_19, 201));
        arr_2 [i_0] = (min(2300987410, -4360420576971627451));
        arr_3 [i_0] = ((~((min(60151, 41)))));
        arr_4 [i_0] = var_17;
    }
    for (int i_1 = 0; i_1 < 22;i_1 += 1)
    {
        arr_8 [i_1] = (max(((((var_11 ? 14336 : -59)) * (arr_6 [i_1]))), (1 || 3980386751)));
        var_20 |= (((arr_7 [12]) ? -93 : (((((min(0, (arr_6 [i_1])))) || (((var_10 ? 93 : -93))))))));
        arr_9 [i_1] [i_1] = (((!3) || 1));
        var_21 = ((((((min(92, 3335247987))) ? (((10478461924437369038 ? 218 : 57))) : 7)) + 4));
    }
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {

        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            arr_16 [i_2] = (((1 < 16383) ? ((min(93, (min(119, -68))))) : (!2260325009)));
            var_22 = 11126615571380283803;
            var_23 &= (var_9 > 1);
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
        {
            var_24 = ((((1 ? (arr_17 [i_4] [i_2] [i_2]) : 49152)) & 1));
            var_25 = (max(var_25, (arr_10 [i_2])));
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {
                var_26 = (max(var_26, ((max((min(1, -6190999314680940651)), (min(4794355733364580591, 0)))))));
                var_27 = (var_8 ^ ((min(36606, 4360420576971627429))));
            }
            for (int i_7 = 0; i_7 < 18;i_7 += 1)
            {
                arr_25 [i_2] [i_2] [i_2] = (((arr_22 [i_2] [i_2] [i_7] [i_7]) && ((!(((var_4 ? 1 : 58566)))))));
                var_28 = (min((((-342607962 ? 18 : 0))), (-101 + 16892408914667541206)));
                var_29 = (arr_7 [i_7]);
            }
            for (int i_8 = 0; i_8 < 18;i_8 += 1) /* same iter space */
            {
                var_30 = (min(var_30, (arr_27 [10] [i_5] [i_8])));
                var_31 = var_15;
            }
            for (int i_9 = 0; i_9 < 18;i_9 += 1) /* same iter space */
            {
                var_32 = (min(var_15, (((65535 ? 0 : 0)))));
                var_33 &= (max((51 != 255), var_16));

                for (int i_10 = 0; i_10 < 18;i_10 += 1) /* same iter space */
                {
                    var_34 = ((-(-8014396944266143302 * 1)));
                    arr_34 [i_2] [17] [17] [i_2] [i_2] [i_2] = 0;
                    arr_35 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = (!1);
                    var_35 = (-4646 + -0);
                }
                for (int i_11 = 0; i_11 < 18;i_11 += 1) /* same iter space */
                {
                    var_36 &= ((31725 ? 2643741312361345836 : 1073741824));
                    arr_38 [i_9] = (max((min(1, 2998529302482658677)), 234));
                }
                arr_39 [i_2] [i_2] [i_2] = 4294967295;
            }
            var_37 = (((min(342607987, (arr_12 [7] [i_5])))));
        }
        var_38 = (((!1) && ((min(-36644773333554878, 31)))));
        var_39 *= (((((41019 | 1) + 0))) ? ((((-1776074852 ? var_6 : var_7)) - 1)) : ((min(342607989, 180))));
        var_40 = (max(var_40, 36644773333554877));
        var_41 ^= 0;
    }
    for (int i_12 = 0; i_12 < 10;i_12 += 1)
    {
        /* LoopNest 2 */
        for (int i_13 = 1; i_13 < 8;i_13 += 1)
        {
            for (int i_14 = 0; i_14 < 10;i_14 += 1)
            {
                {
                    var_42 = 1;
                    var_43 = ((-var_7 / ((((114688 ? (arr_21 [i_12] [i_14]) : 23022)) * 2692350066604197293))));
                    arr_48 [i_12] [i_12] [8] = -var_0;
                }
            }
        }
        var_44 = (min(65527, -261137716));
    }
    var_45 &= var_2;
    var_46 = min(1, 0);
    #pragma endscop
}
