/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += ((0 ? var_5 : ((max((!3670822124320648155), (65532 > 32767))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_12 = 65510;
                var_13 = (((!1487097663) < ((((0 ? 5170 : -2992))))));
                arr_5 [i_1] = (max((238 || 1), (max((arr_1 [i_1 + 1] [i_1 + 1]), 263230655))));
            }
        }
    }
    var_14 += ((((((((max(230, 18446744073709551615))) || ((max(var_1, 230))))))) & (max((104 ^ var_7), (~65514)))));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_9 [i_2] = max(((max(var_10, ((var_7 ? (-32767 - 1) : -92))))), ((~(max(1827405487, 17)))));
        arr_10 [i_2] [i_2] = 8936830510563328;
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = var_2;
        arr_14 [i_3] = -9223372036854775784;

        for (int i_4 = 1; i_4 < 15;i_4 += 1)
        {
            var_15 = (min(var_15, (((66 + (arr_7 [i_4 + 1]))))));
            var_16 = -1859092568;
            var_17 = 193;
        }
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            arr_21 [i_3] [i_5] = (-20708 < var_3);
            var_18 += 1963929942836013398;
            var_19 = ((65535 ? var_2 : 8));
        }
        for (int i_6 = 0; i_6 < 16;i_6 += 1)
        {
            arr_24 [i_3] [12] = (262143 != var_0);
            var_20 += -var_8;
            var_21 = (((((var_0 ? var_4 : -9223372036854775785))) ? (arr_19 [i_6] [i_6]) : 1));
            var_22 += 480934612;
        }
        for (int i_7 = 1; i_7 < 15;i_7 += 1)
        {
            var_23 = (65532 * var_0);
            var_24 += 287948901175001088;
        }
    }
    #pragma endscop
}
