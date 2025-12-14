/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209706
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        arr_2 [i_0] = ((+((var_1 ? var_8 : ((1 << (((arr_1 [i_0]) + 6819955461857526012))))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            var_11 = 20021;
            arr_7 [i_0] [i_1] [i_1] = (((((9586388930522597233 >= (arr_0 [1])))) == (arr_3 [i_1])));
        }
        for (int i_2 = 0; i_2 < 10;i_2 += 1)
        {
            var_12 |= (max((!1897913091), (max(var_5, (min(-4248872, (arr_4 [i_0] [i_0])))))));
            arr_10 [i_0] = ((((-((min(var_7, var_9))))) | (~var_9)));
            var_13 = (max(var_13, ((((!var_3) >= -4248872)))));
        }
    }
    for (int i_3 = 0; i_3 < 10;i_3 += 1)
    {
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {
                {
                    var_14 = (min((((var_4 != (arr_15 [i_3])))), (arr_15 [i_4])));
                    var_15 -= ((((min((var_8 | var_3), ((min(var_0, 1731653755)))))) ? -var_6 : (((!((min((arr_1 [i_3]), (arr_12 [0])))))))));
                    var_16 = (max(var_16, (((109 ? 8388607 : 6651685171064937350)))));
                }
            }
        }
        var_17 = (((min(var_7, 1731653755) >> (var_10 - 7761))));
    }
    for (int i_6 = 0; i_6 < 11;i_6 += 1)
    {

        /* vectorizable */
        for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
        {
            var_18 = ((((arr_21 [i_7]) && -827814359)));
            /* LoopNest 3 */
            for (int i_8 = 0; i_8 < 11;i_8 += 1)
            {
                for (int i_9 = 0; i_9 < 11;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 11;i_10 += 1)
                    {
                        {
                            arr_31 [i_10] [i_7] [i_8] [i_7] [i_6] = ((var_10 * ((827814359 ? (arr_21 [i_6]) : var_10))));
                            var_19 = (max(var_19, 65510));
                            arr_32 [i_7] [i_10] [i_7] [i_7] [i_10] = -4248871;
                            var_20 = (min(var_20, var_2));
                        }
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 1;i_11 += 1) /* same iter space */
        {
            var_21 *= 4344;
            var_22 += var_8;
            var_23 = (min(var_23, var_2));
        }
        arr_35 [i_6] = ((-(12909469189084801673 | 25213)));
        var_24 &= (max(-6651685171064937337, -690019915));
    }
    for (int i_12 = 0; i_12 < 23;i_12 += 1)
    {
        var_25 = ((+((((~var_1) != (var_4 - 4294967283))))));
        var_26 = (min(var_26, (((((!(((18446744073709551588 ? var_8 : (arr_37 [15] [i_12])))))) ? ((((-9200438700869067992 && -1) || (arr_36 [i_12])))) : ((((((44030 ? var_0 : var_5))) || (var_7 || var_5)))))))));
    }
    /* LoopNest 2 */
    for (int i_13 = 1; i_13 < 10;i_13 += 1)
    {
        for (int i_14 = 0; i_14 < 11;i_14 += 1)
        {
            {
                var_27 = (((((var_3 | (((min(var_9, var_10))))))) ? 6651685171064937376 : (arr_26 [i_13 - 1] [i_14] [0] [i_13] [1])));
                var_28 = -827814384;
                /* LoopNest 2 */
                for (int i_15 = 0; i_15 < 11;i_15 += 1)
                {
                    for (int i_16 = 0; i_16 < 11;i_16 += 1)
                    {
                        {
                            arr_48 [i_16] [i_15] [i_15] [i_13 - 1] = (var_0 * ((~(min(var_8, var_6)))));
                            var_29 = var_9;
                            var_30 ^= (max((((-9200438700869067986 ? (((var_10 | (arr_36 [i_13])))) : (~var_1)))), ((var_1 ? var_5 : (var_1 && 32767)))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
