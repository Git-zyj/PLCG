/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46601
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 -= (3771714569715633886 ? 0 : ((0 ? (-9223372036854775807 - 1) : 31)));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 23;i_0 += 1)
    {
        var_20 -= -28;
        /* LoopNest 2 */
        for (int i_1 = 3; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                {
                    var_21 = ((-11 ? (arr_0 [i_0 - 1]) : ((2711 | (arr_3 [22])))));
                    var_22 = (arr_0 [i_0]);
                    var_23 += ((0 ? 1 : (arr_1 [i_2] [i_0 + 1])));
                }
            }
        }
        var_24 ^= 40705;
        var_25 &= 4468415255281664;
    }
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        var_26 = (((arr_4 [i_3]) ? ((((arr_4 [i_3]) ? (arr_6 [i_3]) : 1))) : ((42928 ? (arr_4 [i_3]) : (arr_2 [i_3])))));

        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            arr_13 [i_3] = ((~(((((1 ? (arr_5 [i_3]) : var_10))) ? 63 : (var_17 <= 1034244439)))));
            var_27 = 51115;
        }
        for (int i_5 = 1; i_5 < 19;i_5 += 1)
        {
            var_28 = 1;
            var_29 = ((0 ? 3805007216421256590 : 26));
            var_30 = (((((var_7 ? 2827504722 : 1))) * (65505 & 9020548499307384434)));
        }
        for (int i_6 = 2; i_6 < 18;i_6 += 1) /* same iter space */
        {
            var_31 ^= (((~22) & (((var_11 <= (~-10))))));

            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_21 [i_6 - 2] [i_3] [i_6] [i_6 - 2] = ((3661557636339288445 ? 65531 : (~-71)));
                arr_22 [i_7] [i_3] [i_3] [i_3] = (14785186437370263171 - 6);
            }
            var_32 = (-9020548499307384438 ? (min((arr_11 [i_6] [17] [i_3]), (((!(arr_6 [i_3])))))) : ((29354 ? 1292665109953767248 : 6791461703811582043)));
        }
        for (int i_8 = 2; i_8 < 18;i_8 += 1) /* same iter space */
        {
            var_33 = min((arr_18 [i_3]), 1879467681);
            var_34 ^= ((((((~(-2147483647 - 1))))) ? (arr_16 [18] [1] [18]) : -4567060646555959546));
            var_35 += var_15;
        }
        arr_25 [i_3] = (((arr_2 [i_3]) | (max(1879467681, 1))));
        var_36 = 7884025311567600587;
    }
    #pragma endscop
}
