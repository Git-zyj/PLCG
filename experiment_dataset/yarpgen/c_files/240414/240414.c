/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((arr_0 [i_0] [i_0 - 2]) ? 9095885646888892408 : (max((3471380258 % 10310), (arr_0 [i_0 - 1] [i_0 + 1]))));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            var_19 = (arr_0 [9] [8]);
            arr_5 [i_0] = arr_0 [i_0] [i_1];
            var_20 = 22601;
            arr_6 [i_1] |= (-(max((min(193, (arr_4 [i_1]))), (min((arr_4 [i_1]), 6190)))));
            var_21 = (max(var_21, (((-(((((120 ? 56791 : 94))) ? (arr_0 [i_0] [i_1]) : -5538971168723392024)))))));
        }
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {
            var_22 = (((arr_7 [i_2 + 3]) % (((arr_7 [i_2 + 1]) ? (arr_7 [i_2 + 2]) : (arr_7 [i_2 + 3])))));
            arr_10 [i_0] [i_0] [i_0] = var_12;
            arr_11 [i_0] [i_0] = (arr_3 [i_0]);
            var_23 = ((~(max(((1349667293 ? 104 : 5011)), (arr_7 [i_0 - 3])))));
        }
        for (int i_3 = 4; i_3 < 19;i_3 += 1) /* same iter space */
        {

            for (int i_4 = 1; i_4 < 20;i_4 += 1) /* same iter space */
            {
                var_24 = (min(var_24, (((var_3 ? (max((~101), (2078308130 != 2078308130))) : ((~(((var_1 >= (arr_13 [i_3] [i_3] [i_3])))))))))));
                var_25 ^= min(17501895644541561264, ((((4782701036648852030 & 0) ? 2945300002 : var_18))));
                var_26 &= ((-(arr_3 [i_3])));
            }
            for (int i_5 = 1; i_5 < 20;i_5 += 1) /* same iter space */
            {
                var_27 = ((~(arr_7 [1])));
                arr_19 [i_0] [i_0 - 3] [1] [i_0] = ((((max((max((arr_14 [i_0] [i_0]), (arr_17 [i_0]))), (arr_13 [i_0] [i_3] [i_5 + 1])))) ? ((2379724443335114328 ? ((max((arr_8 [i_0] [i_0] [i_0]), -1737320341049085911))) : ((55699 ? (arr_12 [i_0]) : 60525)))) : (((((min((arr_7 [i_0]), (arr_16 [19] [i_3 - 2] [i_3 - 2] [i_0])))) - ((((arr_9 [i_0] [i_0] [i_5 + 1]) && (arr_1 [i_0])))))))));
            }
            var_28 |= (!((((arr_17 [i_3]) % 2945300003))));
        }
        for (int i_6 = 4; i_6 < 19;i_6 += 1) /* same iter space */
        {
            arr_23 [i_0] [i_0] = ((-(max((arr_16 [i_0 - 1] [i_0 - 3] [i_6 + 1] [i_6 + 1]), (arr_12 [i_0])))));
            var_29 -= 2150707822881124057;
        }
    }
    var_30 = (max(var_30, ((max(((min(99, (max(139, 207))))), var_3)))));
    #pragma endscop
}
