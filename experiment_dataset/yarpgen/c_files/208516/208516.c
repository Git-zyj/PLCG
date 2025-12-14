/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208516
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    var_16 = 52701;
                    arr_9 [i_2] = ((((((max((arr_0 [i_0]), var_10))) || ((max(12827, 12834))))) ? (min((((52708 || (arr_6 [i_1])))), 3051358161638621000)) : (var_6 || 12834)));
                    arr_10 [i_0] [i_1] [i_2] [i_2] = ((-(((arr_0 [i_2]) ? 52709 : -var_9))));

                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        arr_13 [i_0] [i_2] = (max((min(((max(62, 52702))), ((var_8 ? (arr_4 [i_0] [i_1] [i_3]) : var_4)))), ((((arr_2 [i_1]) ? (arr_3 [i_2] [i_1]) : ((min(var_0, (arr_5 [i_3])))))))));
                        var_17 = (max(var_17, ((max(((1 - (arr_7 [i_1] [i_2] [i_3]))), ((+(((arr_12 [i_0] [i_1] [i_2] [2] [i_3]) ? 1 : 13852)))))))));
                    }
                    var_18 = (max(var_18, (255 | 9223372036854775807)));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 16;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 16;i_5 += 1)
            {
                {
                    arr_20 [i_4] [i_4] [i_0] [i_0] &= (max((min((-1 && 0), (min(13856, -9223372036854775801)))), 2686));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 16;i_7 += 1)
                        {
                            {
                                var_19 = (max(var_19, (((arr_25 [i_7] [i_5] [i_4] [i_0]) ? -1273205438 : ((7 * (arr_18 [i_0] [i_5] [i_0])))))));
                                arr_28 [i_5] [i_4] [i_0] = (((((43072 / (arr_19 [i_4] [i_7])))) > ((((max((arr_0 [i_5]), var_7))) ? (max(16117578006323961154, 0)) : 2452867820))));
                                arr_29 [i_0] [i_0] [i_5] [i_6] [11] = ((((min(((~(arr_11 [i_4] [i_7]))), (arr_25 [i_0] [i_0] [i_0] [i_0])))) ? (arr_24 [i_7] [i_6] [i_5] [i_4] [i_0]) : (min(((((((arr_7 [i_0] [i_4] [i_5]) + 2147483647)) >> (arr_22 [12] [12])))), (min((-9223372036854775807 - 1), 3202162715))))));
                                var_20 = (min(var_20, (((!(!65535))))));
                            }
                        }
                    }
                }
            }
        }

        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            var_21 = ((!((((arr_1 [i_8]) & 1452115375)))));
            var_22 -= ((-117 ? 2329166067385590462 : ((max((arr_27 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_21 [i_0] [i_0] [i_0] [i_0]))))));
            var_23 ^= -246;
            arr_32 [i_0] [i_8] [i_8] = ((((68 ^ (arr_0 [i_0]))) >> (((arr_19 [i_0] [i_8]) ? (arr_19 [i_8] [i_0]) : (arr_19 [i_0] [i_0])))));
        }
    }
    var_24 = (min(var_24, var_4));
    var_25 = (min(var_25, (((min(var_7, (var_2 * -13848)))))));

    for (int i_9 = 0; i_9 < 15;i_9 += 1)
    {

        /* vectorizable */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            arr_39 [8] [8] = 3;
            var_26 |= (arr_17 [i_10]);
            var_27 = (min(var_27, (!6798487619145674886)));
        }
        for (int i_11 = 0; i_11 < 15;i_11 += 1)
        {
            /* LoopNest 2 */
            for (int i_12 = 0; i_12 < 1;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 1;i_13 += 1)
                {
                    {
                        var_28 -= ((123 ? 12288 : -108));
                        var_29 = 2329166067385590461;
                    }
                }
            }
            arr_49 [i_9] [i_9] |= (+-32760);
        }
        var_30 -= (((((0 ? (arr_25 [1] [i_9] [i_9] [i_9]) : 54))) ? (~65515) : (((arr_34 [i_9]) ? (((((arr_2 [i_9]) <= 13852)))) : (max(18446744073709551613, -64))))));
        var_31 &= 3363099774;
    }
    var_32 = (max((((min(var_2, var_7)))), var_9));
    #pragma endscop
}
