/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239100
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239100 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239100
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = max((var_11 <= 2097152), (((((var_0 ? 9 : var_7))) ? 1391375177 : 2147483647)));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_20 += ((4247054614118553106 ? -3 : 18346267746334945885));
            var_21 = (max(var_21, (((var_5 - (-8678018611576445135 % -1087458939))))));
        }
        for (int i_2 = 0; i_2 < 21;i_2 += 1)
        {
            arr_6 [i_0] [i_2] [i_0] = (((1784764058 <= (arr_0 [i_0] [i_2]))) ? (((arr_5 [i_0] [i_2]) ? -1784764074 : (arr_2 [i_0] [i_0] [i_0]))) : 8191);
            var_22 = ((-(arr_0 [i_0] [i_2])));
            var_23 = -1216825547;
            arr_7 [i_2] = (arr_5 [i_0] [i_0]);
        }
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            arr_10 [i_3] = (((arr_2 [i_0] [i_3] [i_3]) / (arr_3 [i_0] [i_3])));
            var_24 += ((var_12 ? (arr_5 [i_0] [i_3]) : ((((arr_0 [i_3] [i_0]) && -1784764064)))));
        }
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                arr_16 [i_5] = (((arr_14 [i_4] [i_5]) - (arr_14 [i_0] [i_5])));
                var_25 = (arr_11 [i_0] [i_0]);
                arr_17 [i_0] [i_0] [i_0] [i_5] = (arr_15 [i_0] [i_0] [i_0]);
            }
            for (int i_6 = 2; i_6 < 18;i_6 += 1)
            {
                arr_20 [i_0] [i_4] [i_6] = (((arr_18 [10] [i_4] [14] [i_0]) && (arr_3 [i_0] [i_4])));
                var_26 = (max(var_26, ((((arr_15 [i_0] [i_6 - 1] [i_6 + 3]) ? 65527 : (((arr_12 [i_0] [i_4] [0]) - -1784764064)))))));
            }
            /* LoopNest 3 */
            for (int i_7 = 0; i_7 < 21;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 19;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        {
                            var_27 = (max(var_27, (((~(arr_18 [18] [i_4] [18] [i_4]))))));
                            arr_27 [i_4] [i_7] |= (arr_4 [i_0] [i_4]);
                            var_28 = -1784764062;
                            var_29 = (((511 ? 17067 : (arr_11 [i_0] [1]))));
                            var_30 = (arr_8 [i_9]);
                        }
                    }
                }
            }
            var_31 = ((((!(arr_9 [i_0] [i_0]))) || (4294967295 || var_10)));
        }
        arr_28 [i_0] = ((~(arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
        var_32 = (((arr_15 [i_0] [i_0] [i_0]) ? 4294967295 : (((arr_19 [i_0] [i_0] [i_0]) / (arr_13 [i_0] [i_0])))));

        for (int i_10 = 1; i_10 < 19;i_10 += 1)
        {
            arr_32 [i_0] = (((arr_30 [i_10 + 1] [i_10] [i_10 - 1]) ? (arr_30 [i_10 - 1] [i_10] [i_10 - 1]) : (arr_30 [i_10 + 1] [i_10 + 1] [i_10 - 1])));
            var_33 *= ((6030 <= (arr_23 [i_0] [i_0] [i_10 + 2] [i_0] [16] [i_0])));
            var_34 = (var_17 ? (~3) : var_17);
            var_35 = (max(var_35, (((((14872038285545164113 << (-7562439752263573600 + 7562439752263573633)))) ? var_12 : (arr_21 [i_0] [i_0] [i_10] [i_10 + 2])))));
            var_36 = var_14;
        }
    }
    #pragma endscop
}
