/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44831
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44831 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44831
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 8;i_1 += 1)
        {
            {

                for (int i_2 = 2; i_2 < 7;i_2 += 1)
                {
                    arr_9 [i_1] [i_1] [i_0] [i_1] = (max(((min((((44 <= (arr_2 [i_0])))), (((arr_0 [i_2 - 2]) ? -15534 : (arr_8 [i_0] [i_1] [i_2])))))), (((var_2 <= var_9) ? (((((arr_8 [i_0] [i_0] [i_0]) >= 15534)))) : var_0))));
                    var_20 *= (max(64, -15541));

                    /* vectorizable */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        arr_13 [i_3] [i_3] [i_1 + 1] [i_3] [i_0] &= 15534;
                        var_21 *= (((var_5 * var_11) * ((1692693791 ? (arr_5 [i_0]) : (arr_11 [i_0] [i_0] [i_2])))));
                        var_22 = (max(var_22, ((((((arr_1 [i_0]) % (arr_7 [i_3] [i_0] [i_0] [i_0]))) != ((((arr_5 [i_3]) ? var_0 : (arr_8 [1] [i_1 - 3] [i_1 + 1])))))))));
                        var_23 *= (((((!(arr_1 [i_3])))) << (((~-2557) - 2539))));
                    }
                }
                for (int i_4 = 0; i_4 < 10;i_4 += 1) /* same iter space */
                {
                    var_24 = ((((((((arr_11 [0] [i_1 - 3] [i_1 + 2]) / 2583))) ? (min(-15534, var_7)) : (((2556 ? (arr_14 [i_0] [i_1 - 3] [i_0] [i_0]) : var_4))))) <= (((((-(arr_0 [i_0])))) ? (max(var_12, -14023)) : ((min(150, (arr_1 [i_0]))))))));
                    var_25 += (((((min(-2561, 14909)))) <= (480 == 12927807837876311368)));
                    var_26 -= ((((min((!555679012), ((789802847 ? 4294967286 : var_9))))) ? ((((min(31374, (arr_14 [i_0] [i_0] [i_1 - 2] [i_4])))) ? ((var_6 | (arr_10 [i_0] [i_4] [i_1] [i_0]))) : (~var_7))) : ((min((~var_4), -15537)))));
                    arr_17 [i_0] [i_1] = ((max(((13836827858824379278 * (arr_8 [i_0] [i_0] [i_0]))), (~15537))) << (((max(((var_6 << (((arr_10 [i_0] [i_1 - 1] [i_1] [i_4]) - 75627592)))), (((!(arr_5 [i_1])))))) - 10853237110905241578)));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_27 -= (((((arr_19 [i_0]) ? 2542 : 31377)) == (!var_4)));
                    arr_22 [i_0] [i_0] &= (1171901465 <= 15533);
                }
                var_28 -= 1692693791;
            }
        }
    }
    var_29 = ((((((var_6 ? 15402417090605379482 : 58)) / ((max(var_0, 156))))) << ((((~(max(0, 3123065851)))) - 1171901437))));
    var_30 = ((~(max((var_0 & 13129947085522223494), ((max(4250442953, 150)))))));
    #pragma endscop
}
