/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211283
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0 - 1] = var_9;
        arr_3 [i_0 + 1] &= -540344574;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1)
    {
        var_12 = (max(var_12, (((~(arr_6 [i_1]))))));
        arr_7 [i_1] [i_1] = ((1729634963 ? -1324754883 : 2147483647));
    }
    for (int i_2 = 2; i_2 < 13;i_2 += 1)
    {
        var_13 *= ((!((((arr_6 [i_2 + 3]) ? (arr_6 [i_2 - 2]) : (arr_6 [i_2 + 3]))))));
        var_14 = (((arr_0 [i_2 + 3]) ? -4294967289 : (max(((var_4 ? 4294967295 : (arr_8 [i_2]))), (!var_5)))));
        var_15 = 2565332327;
        var_16 = (max(var_2, ((~((min(45, (arr_6 [i_2]))))))));
        arr_11 [i_2] = (arr_6 [i_2]);
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            {
                var_17 = var_1;

                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    var_18 = (min(var_18, ((max(var_11, 255)))));
                    var_19 = (2565332327 && 2147483625);
                }
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {

                    for (int i_7 = 0; i_7 < 11;i_7 += 1) /* same iter space */
                    {
                        var_20 = var_6;
                        arr_26 [i_3] [i_3] [i_3] [i_3] [7] [i_3] = 15009158056734869345;
                        arr_27 [i_6] [i_6] [i_4] [i_3] = ((142 ? 77 : 85));
                    }
                    /* vectorizable */
                    for (int i_8 = 0; i_8 < 11;i_8 += 1) /* same iter space */
                    {
                        var_21 = 3437586016974682270;
                        var_22 = (min(var_22, (!49171754)));
                    }
                    for (int i_9 = 0; i_9 < 11;i_9 += 1) /* same iter space */
                    {
                        var_23 ^= (~var_11);

                        for (int i_10 = 2; i_10 < 9;i_10 += 1)
                        {
                            var_24 = ((((1729634969 ? 255 : ((3437586016974682271 ? 4294967295 : 22))))) ? (~var_3) : (~4294967284));
                            var_25 = (min(var_25, (!10147801183279298110)));
                            arr_35 [i_3] [3] [i_9] [i_9] [i_10] [i_4] [i_3] = ((!(arr_23 [i_10] [i_10] [i_10 - 1] [i_10 + 2] [i_10 + 1])));
                            var_26 = (((((var_5 ? -913086651 : 62))) ? ((min(53763, var_4))) : (250 ^ 14)));
                        }
                        for (int i_11 = 1; i_11 < 10;i_11 += 1)
                        {
                            arr_38 [i_4] [i_9] [i_4] [i_4] [i_4] [i_4] = 53780;
                            var_27 = (max((arr_5 [i_3] [i_9]), (min(var_11, 8))));
                            var_28 ^= (((((-((max(248, (arr_25 [i_3] [i_6] [i_9] [i_11 - 1]))))))) ? (min((min((arr_37 [i_3] [i_4] [i_6]), var_9)), ((min(var_8, 2565332336))))) : ((max((arr_6 [i_3]), (min(7916506217260732154, (arr_10 [i_4]))))))));
                            var_29 = (min((((2006564290 >= (((max(var_8, (arr_28 [i_11 - 1] [i_9] [i_6] [i_6] [i_9] [i_3])))))))), (max((((467110407 ? -17297955 : 65528))), ((15009158056734869367 - (arr_19 [i_11 - 1] [i_9] [i_6] [i_4])))))));
                        }
                        for (int i_12 = 0; i_12 < 11;i_12 += 1)
                        {
                            var_30 = 4294967295;
                            var_31 &= ((!((min((arr_10 [i_4]), (arr_21 [i_4]))))));
                        }
                        var_32 = (min(4294967277, (max((((~(arr_40 [i_9] [i_6] [i_4] [i_3] [i_3] [i_3])))), (min(14, 17890778288979185123))))));
                    }
                    arr_41 [i_3] [i_4] [i_6] [i_4] = (((arr_40 [i_6] [i_4] [i_4] [i_4] [i_4] [i_3]) <= (((var_0 > (var_1 % 7))))));
                    arr_42 [i_6] [i_4] [i_3] = ((~(~4)));
                }
                for (int i_13 = 4; i_13 < 9;i_13 += 1)
                {
                    arr_45 [i_4] [i_13] [i_13] [i_4] = (arr_19 [i_3] [i_3] [i_3] [i_3]);

                    for (int i_14 = 0; i_14 < 11;i_14 += 1)
                    {
                        arr_50 [4] [i_13] [i_13] [i_13] [i_4] = (max((max((min(11772, (arr_24 [i_3] [i_4] [i_4] [i_14]))), 4)), var_0));
                        arr_51 [i_13] = ((var_5 ? var_1 : (arr_47 [i_3] [i_4] [i_13] [i_13] [i_3])));
                        arr_52 [i_3] [i_4] [i_13] [i_4] [i_13 + 1] [i_14] = ((min(-var_6, var_2)));
                        var_33 = ((!((((0 / var_5) / ((var_3 ? (arr_28 [i_3] [i_3] [i_3] [i_3] [i_13] [i_3]) : 9223372036854775786)))))));
                    }
                }
                var_34 -= 0;
            }
        }
    }
    var_35 = max(var_4, ((var_2 ? ((411950569 ? var_0 : 37)) : (255 & 152))));
    #pragma endscop
}
