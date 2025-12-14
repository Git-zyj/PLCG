/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245999
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 ^= var_7;

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            var_12 ^= (((((arr_2 [i_0] [i_1] [i_0]) * -68))));
            var_13 ^= -109;
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_0] [i_0] [i_2] [i_3] = ((arr_5 [i_0] [i_1] [i_0] [i_3]) >= ((-7872984686157516980 & (-109 & 127))));
                        var_14 -= (((((-1688556166440274829 ? ((var_3 ? (arr_4 [i_1] [i_2]) : var_8)) : (((125 ? (arr_7 [i_1] [i_3]) : var_7)))))) ? ((((194 ? var_0 : -109)))) : (~101)));
                    }
                }
            }
        }
        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            arr_16 [i_0] [16] [i_0] = (((((-1 - 1) + ((1 ? var_8 : 3)))) & -7966698395791998302));
            var_15 = var_5;
        }
        var_16 -= (((min(var_0, (arr_7 [i_0] [i_0]))) ? 59 : (((arr_8 [12]) ? (arr_4 [i_0] [i_0]) : (arr_4 [i_0] [i_0])))));
        var_17 = ((-102 ? 0 : -9223372036854775800));
    }
    for (int i_5 = 0; i_5 < 20;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 20;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                {
                    arr_25 [i_5] [i_5] [i_5] [i_5] = (((((arr_1 [i_6]) ? 1 : (arr_1 [i_7]))) - (min((arr_8 [i_7]), ((56 ? 1 : 1))))));
                    var_18 = (max(var_18, (((-1 ? 10824071637638657915 : ((((!(3327708989 > 1))))))))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 17;i_8 += 1)
                    {
                        for (int i_9 = 0; i_9 < 1;i_9 += 1)
                        {
                            {
                                var_19 = 27565;
                                var_20 = (1898918702 ? (((((((0 ? 3658621779029875843 : 4062678239924460274))) || (((212 ? (arr_27 [i_9] [i_8] [i_7] [8] [i_8] [i_5]) : (arr_2 [i_5] [i_8] [20])))))))) : (((166 ? 1 : 27544))));
                            }
                        }
                    }
                    arr_32 [i_5] = ((((((arr_3 [i_5] [i_6]) ? 27544 : ((max((arr_3 [i_5] [i_6]), (arr_30 [i_7] [i_7] [i_7] [i_7] [i_6] [i_5] [5]))))))) ? (arr_23 [i_5] [i_5] [i_7] [i_6]) : ((((((arr_13 [i_5]) != var_3)) ? (((var_5 && (arr_7 [i_5] [i_7])))) : (arr_13 [i_6]))))));
                }
            }
        }
        arr_33 [i_5] = (((min((((arr_18 [i_5]) * (arr_15 [i_5] [i_5]))), (arr_3 [i_5] [i_5]))) >= var_9));
        var_21 = (((((((((arr_19 [i_5]) / -1))) ? (arr_17 [i_5] [i_5]) : 1))) ? (((((((arr_24 [i_5] [i_5] [i_5]) ? (arr_23 [i_5] [i_5] [i_5] [i_5]) : 4064))) ? (arr_22 [i_5] [i_5] [i_5] [i_5]) : (arr_7 [i_5] [i_5])))) : -2664109763019263665));
    }
    #pragma endscop
}
