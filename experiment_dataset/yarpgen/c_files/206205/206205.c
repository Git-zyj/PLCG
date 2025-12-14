/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206205
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_18 = (max(var_18, var_14));
                    var_19 ^= ((((max(var_1, (max((arr_1 [i_1 - 3]), var_13))))) || ((min(((~(arr_6 [i_0] [i_0] [i_0]))), (((-17777 ? 0 : 1))))))));
                    var_20 = ((!((min(24921, (min(var_3, 6599)))))));
                }
            }
        }
    }
    var_21 = -17777;

    for (int i_3 = 0; i_3 < 1;i_3 += 1)
    {

        for (int i_4 = 1; i_4 < 23;i_4 += 1)
        {
            arr_14 [i_3] = (max(((max((!var_9), var_10))), var_3));
            arr_15 [i_3] = (max(58945, 8));
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    {

                        for (int i_7 = 4; i_7 < 23;i_7 += 1)
                        {
                            arr_23 [15] [i_3] [i_5 + 2] [i_6] [i_7] = (arr_11 [i_3] [i_3] [7]);
                            arr_24 [i_3] = (max(((var_6 ? (max(var_17, (arr_17 [1] [i_4 - 1] [i_4 - 1] [i_3]))) : -6060476953257893660)), ((((min(0, 4)))))));
                        }
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 23;i_8 += 1)
                        {
                            arr_27 [i_3] [i_3] [i_5] [i_3] [i_4 - 1] = ((var_15 > (arr_11 [i_4] [i_4 + 1] [i_4 + 1])));
                            arr_28 [i_3] = (arr_16 [i_3] [i_4 + 2] [i_3]);
                            var_22 = -10742;
                            arr_29 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((-var_12 ? var_4 : -var_1));
                        }
                        arr_30 [i_3] = (((6599 ^ 1) ? ((((24242 && 58945) || (((var_10 ? var_13 : (arr_25 [i_3] [i_4] [i_4] [i_3] [i_6]))))))) : -1));
                        var_23 = ((((~(min(var_10, 1))))) ? var_11 : (min((max(var_14, var_4)), (((229 ? 193 : 1297338669))))));
                        arr_31 [i_3] [i_6] = ((!((max((arr_18 [i_4 + 2] [i_4 + 2]), (min(-4952019557507675667, var_3)))))));
                    }
                }
            }
            var_24 = (((max((max(var_16, -3677888205705586373)), ((var_1 ? var_1 : var_13)))) < ((min(65528, ((0 ? 58936 : 26724)))))));

            for (int i_9 = 0; i_9 < 1;i_9 += 1)
            {
                arr_34 [i_3] [i_3] [i_3] [i_3] = (((~1) - var_9));

                /* vectorizable */
                for (int i_10 = 0; i_10 < 25;i_10 += 1) /* same iter space */
                {
                    var_25 = (var_14 | var_4);
                    arr_37 [i_3] [i_3] [i_3] [i_10] [14] [i_3] |= (((var_0 ? 1597 : var_1)) >> (-1 + 31));
                }
                for (int i_11 = 0; i_11 < 25;i_11 += 1) /* same iter space */
                {
                    var_26 = (max(var_26, ((~(min(var_17, (((-(arr_19 [i_3] [i_3] [i_9] [i_11]))))))))));
                    var_27 = ((~(min((((252 ? 16777216 : 1205328233))), 232))));

                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_28 = (min(var_28, ((-(arr_33 [i_3] [i_4 + 2] [i_4 + 1] [5])))));
                        var_29 = (max(var_29, ((var_11 < ((-17777 ? (arr_32 [i_3] [i_11] [i_9] [i_11]) : 17776))))));
                    }
                    for (int i_13 = 0; i_13 < 25;i_13 += 1)
                    {
                        arr_45 [i_9] [i_3] [i_9] [i_9] [i_9] [i_3] = ((((-((var_15 ? var_6 : var_17))))) ? ((((var_3 || 17776) ? -17777 : ((244 ? 0 : 58936))))) : (arr_33 [i_4] [i_9] [i_4] [i_13]));
                        var_30 &= -8;
                    }
                    /* vectorizable */
                    for (int i_14 = 2; i_14 < 23;i_14 += 1)
                    {
                        arr_48 [i_3] [i_3] [i_9] [i_3] [i_3] = -23476;
                        var_31 = 9;
                        arr_49 [i_3] [i_3] [i_3] [i_3] [i_11] [i_3] [i_3] |= 2147483647;
                    }
                    var_32 ^= ((~(max((arr_13 [i_9] [i_9] [i_9]), -53066))));
                }
                arr_50 [i_3] = (min(var_5, 1));
                arr_51 [i_3] [i_3] = 17;
                var_33 = (max(((((arr_18 [1] [i_4 + 1]) ? (arr_18 [i_3] [i_3]) : (arr_18 [i_3] [i_3])))), (min(var_11, 1958682662122075023))));
            }
        }
        arr_52 [i_3] = ((((max(var_15, ((var_13 ? (arr_16 [i_3] [1] [i_3]) : 56))))) ? -14444981834640071797 : -var_5));
        var_34 ^= var_3;
        var_35 = ((((min(((min(var_2, (arr_9 [i_3])))), (arr_13 [i_3] [i_3] [i_3])))) ? (min(-61, var_5)) : 211));
        arr_53 [i_3] = (((max((min((arr_44 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]), -1)), 0))) >= ((14444981834640071806 << (-1 + 25))));
    }
    for (int i_15 = 0; i_15 < 1;i_15 += 1)
    {
        var_36 = ((!(((-((248 ? 31691 : (arr_19 [i_15] [i_15] [i_15] [i_15]))))))));
        arr_56 [i_15] = ((((max((((4537 != (arr_55 [i_15])))), 234))) >= -var_6));
    }
    for (int i_16 = 2; i_16 < 24;i_16 += 1)
    {
        arr_60 [i_16] [i_16] = max((((var_10 && (((arr_17 [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_16 + 1]) >= var_9))))), (arr_26 [i_16 + 1] [22] [10] [i_16 + 1] [i_16]));
        arr_61 [24] |= (arr_19 [i_16] [i_16 - 1] [i_16] [i_16 - 1]);
        arr_62 [i_16] = ((-(max((arr_33 [i_16 + 1] [i_16 + 1] [0] [i_16 - 1]), var_16))));
    }
    var_37 |= (max(var_0, ((~((var_14 ? var_10 : var_3))))));
    #pragma endscop
}
