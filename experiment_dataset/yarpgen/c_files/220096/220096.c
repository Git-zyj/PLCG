/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220096
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220096 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220096
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {

            for (int i_2 = 0; i_2 < 20;i_2 += 1) /* same iter space */
            {
                arr_10 [i_0] [i_1] = arr_1 [i_0];
                var_17 += (((((min(9825833665059346285, 18446744073709551615)) | (arr_1 [i_0 - 2]))) == ((0 ? var_11 : 0))));
                arr_11 [i_0 - 3] [i_1] [i_2] = ((((((arr_1 [i_0 - 2]) ? (arr_5 [i_1] [i_2] [i_2]) : (arr_1 [i_0 - 3])))) ? (((arr_1 [i_0 - 3]) ? (arr_0 [i_0 + 2]) : (arr_5 [i_1] [i_2] [i_2]))) : (arr_0 [i_0 + 3])));
                var_18 = ((~(((var_8 && (((15709557097213139183 ^ (arr_7 [i_0 - 2] [i_1] [i_2])))))))));
            }
            for (int i_3 = 0; i_3 < 20;i_3 += 1) /* same iter space */
            {
                var_19 = (min(var_19, 9893540684054366417));
                var_20 = var_9;
                var_21 = ((~(((var_12 != (arr_0 [i_0 + 2]))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 20;i_4 += 1) /* same iter space */
            {
                arr_16 [i_1] [i_1] [i_0] [i_1] = ((var_3 ? var_4 : (arr_3 [i_1])));
                var_22 = (1 ? (((arr_15 [i_1]) ? var_1 : (arr_8 [i_0] [i_1] [i_1]))) : (arr_9 [i_4] [i_1] [i_0 + 4]));
            }
            var_23 = (((((~(~144115188073758720)))) ? ((6726117172404803109 ? (0 != 2865925966707093524) : (((var_5 == (arr_6 [i_0] [i_1] [i_0])))))) : var_16));
            var_24 = (18446744073709551605 ? ((((arr_12 [i_1] [i_0 + 1] [i_0]) ? 14162606475966496132 : 1))) : 144115188073758720);
        }
        for (int i_5 = 0; i_5 < 1;i_5 += 1) /* same iter space */
        {
            arr_21 [i_0] = -17905495294999065600;
            arr_22 [i_0 + 2] [i_5] = 1;
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1) /* same iter space */
        {
            var_25 = ((((var_12 / (arr_12 [i_0] [i_0 - 2] [i_0 - 1])))) ? (((((var_13 ? 6497869923515981183 : var_13))) ? (max(var_13, var_0)) : -6490264455436218609)) : (max((arr_23 [i_0 + 1]), (arr_23 [i_0 + 1]))));
            arr_27 [i_0] [i_0] [i_6] = (var_6 ? ((((arr_17 [i_0 + 4] [i_0 + 3]) / 1))) : ((0 - (arr_1 [i_0 - 1]))));
            var_26 = 7823641639877170569;
            /* LoopNest 2 */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 1;i_8 += 1)
                {
                    {
                        arr_33 [i_7] [i_6] [i_7] = 1;
                        arr_34 [i_7] [i_7] = 0;
                    }
                }
            }
        }
        arr_35 [3] [i_0 + 3] = 1;
        var_27 = (((var_9 ? (arr_28 [i_0 + 2]) : (arr_4 [i_0] [i_0 - 1]))));
    }
    var_28 = (min(0, 1));
    var_29 = min((max(var_3, (var_5 || 1))), var_16);
    var_30 = var_3;
    #pragma endscop
}
