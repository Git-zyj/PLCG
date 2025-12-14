/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212669
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212669 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212669
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_1] [i_1] [i_3] [i_4] = (min(((+((130 ? (arr_8 [i_3] [19] [i_2] [i_2]) : (arr_3 [i_3] [i_4]))))), (arr_7 [i_0] [23] [i_2] [9] [i_4])));
                                var_14 = var_0;
                                var_15 *= (arr_1 [i_4]);
                            }
                        }
                    }
                    arr_13 [i_1] [i_2] [i_1] [i_1] = (arr_3 [i_0] [i_1]);
                }
            }
        }
    }

    for (int i_5 = 1; i_5 < 1;i_5 += 1)
    {
        arr_16 [i_5] = (((min((min(var_8, var_0)), (((1 ? 1 : 223))))) - ((((((~(arr_6 [i_5] [i_5] [i_5] [8])))) ? (min(8927, 2160935524)) : (min(1, 423442756)))))));
        arr_17 [i_5] = (max((((arr_5 [i_5] [i_5] [i_5] [i_5]) + (arr_2 [i_5] [3]))), (((var_0 + 15624775471430104415) - var_13))));
        var_16 = 113273486164873075;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_21 [i_6] = (max(((((((1073741823 ? var_6 : var_13))) == (arr_9 [i_6] [i_6] [i_6] [i_6])))), ((4028633311261923857 ? 2160935525 : 4294967295))));
        arr_22 [i_6] = arr_10 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6];
        var_17 *= ((!(((((((arr_18 [i_6]) ? (arr_0 [i_6]) : (arr_3 [i_6] [i_6])))) ? (max((arr_18 [i_6]), 35046933135360)) : (((var_7 ? var_5 : (arr_18 [14])))))))));
    }
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        var_18 = (((((((1 >> (((arr_2 [i_7] [i_7]) - 8491093816897293646)))) << (((((arr_7 [i_7] [i_7] [i_7] [i_7] [i_7]) ? 2160935512 : 4341835067476569204)) - 2160935504))))) ? (((((arr_2 [i_7] [i_7]) << (var_4 - 14526621350904449491))) << (((~var_6) + 23)))) : (((((((arr_4 [i_7] [i_7] [i_7] [i_7]) << (((arr_3 [i_7] [i_7]) - 19429))))) ? (~var_9) : ((7280691823686401239 ? var_2 : (arr_18 [i_7]))))))));
        var_19 *= ((((((arr_1 [i_7]) ? (arr_5 [i_7] [i_7] [i_7] [i_7]) : var_2))) ? (min(14104909006232982428, 104)) : var_4));
    }
    /* vectorizable */
    for (int i_8 = 0; i_8 < 22;i_8 += 1)
    {
        arr_28 [i_8] = ((5253457560538596141 <= ((var_1 ? var_1 : (arr_6 [i_8] [12] [i_8] [12])))));
        arr_29 [i_8] = var_5;
        var_20 = ((~((var_0 ? (arr_10 [i_8] [i_8] [1] [13] [i_8] [22]) : 9666555664392946579))));
    }
    var_21 = var_1;
    var_22 = (((min((1 || var_11), var_7)) ? ((max(var_0, (!1)))) : ((((9659691639093627450 ? 18446744073709551591 : var_13)) - var_4))));
    #pragma endscop
}
