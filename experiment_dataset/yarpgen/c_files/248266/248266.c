/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (((((0 | (arr_2 [i_0] [i_0])))) | (min(3072, (((arr_1 [14]) ? 4151109895 : 71))))));
        arr_4 [i_0] = (-2472908226469844662 == 47);
        var_20 = max((((arr_1 [i_0]) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) / 208)));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    var_21 -= (((143857378 ? var_7 : (arr_7 [i_3] [i_2] [i_2]))));
                    var_22 = (min(var_22, ((((((39975 ? 2472908226469844664 : 2472908226469844654))) ? 3 : 93)))));
                    var_23 = (((-1 ? var_5 : 84)));
                    var_24 ^= ((18446744073709551612 ? 72 : 181));
                }
            }
        }

        for (int i_4 = 0; i_4 < 23;i_4 += 1) /* same iter space */
        {
            var_25 = (((arr_10 [i_1] [i_1] [i_1] [i_4]) || (((var_16 ? (arr_9 [i_1] [i_1] [i_4]) : (arr_12 [i_1]))))));
            var_26 ^= ((120 ? ((8 ? var_12 : (arr_1 [i_4]))) : (200 > 65535)));
        }
        for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
        {
            arr_17 [0] [i_1] |= ((-(!var_17)));
            var_27 |= var_12;
        }
        for (int i_6 = 0; i_6 < 23;i_6 += 1) /* same iter space */
        {
            var_28 = 1;
            arr_20 [i_6] [i_6] = ((~((var_11 ? var_2 : var_9))));
        }
        for (int i_7 = 0; i_7 < 23;i_7 += 1) /* same iter space */
        {

            for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
            {
                var_29 ^= var_11;
                arr_27 [i_8] [i_7] = (~1008979493557400350);
                var_30 = (((-2147483647 - 1) ? 75 : ((~(arr_16 [19] [i_7] [i_8])))));
            }
            for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
            {
                var_31 = 26719;
                var_32 |= (arr_12 [i_1]);
            }
            var_33 = (((arr_2 [i_1] [i_7]) % (arr_2 [i_1] [i_1])));
        }
        var_34 = (((arr_1 [i_1]) ? (arr_1 [i_1]) : (arr_1 [i_1])));
    }
    var_35 &= var_10;
    #pragma endscop
}
