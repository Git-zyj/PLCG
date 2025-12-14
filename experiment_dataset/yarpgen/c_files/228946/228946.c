/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228946
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228946 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228946
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((11742 ? 28784 : 17822733353690181003)) << var_4)), (((((max(var_2, var_2))) ? (1 + 255) : ((min(var_4, var_11))))))));

    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = ((~(min((((arr_1 [i_0] [i_0]) ^ var_8)), (~var_11)))));
        var_14 = (min(-1, -17822733353690181003));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_15 |= ((-((var_6 ? (arr_3 [i_1]) : (arr_8 [i_0] [i_0] [i_1])))));
            var_16 = ((11678643571654890914 & (~var_8)));
            var_17 = (arr_6 [i_1] [i_1] [i_0]);
            arr_9 [i_0] [i_1] = ((~(49209 / 873933693661712919)));

            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                var_18 = (min(var_18, 10866396260263083968));
                var_19 = (min(var_19, (~var_8)));
                var_20 -= (((~(arr_10 [i_0]))));
            }
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                arr_14 [i_0 - 1] [i_3] = 12708949284821632302;

                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    arr_17 [i_0] [i_3] [i_3] [i_4] = (arr_11 [i_3] [i_0 - 1] [i_0] [i_0]);
                    var_21 |= ((-(~3087370154)));
                }
            }
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1) /* same iter space */
        {
            arr_20 [i_0 + 2] = ((~((((max((arr_19 [i_0] [i_0 + 1] [i_5]), (arr_8 [i_0] [i_0] [i_0])))) ? 1 : ((max((arr_5 [i_0]), var_5)))))));
            arr_21 [i_0] [i_5] = (((((54625 ? var_0 : (arr_2 [i_0]))) << (!14953275401901077766))));
            var_22 += ((!(((max(1, (arr_6 [i_0] [i_0] [i_0])))))));
        }
        for (int i_6 = 0; i_6 < 18;i_6 += 1) /* same iter space */
        {
            arr_24 [i_0 - 1] [i_0] = var_6;
            var_23 = (~14953275401901077766);
            var_24 = (min(var_24, (((((arr_18 [i_0 - 1] [i_0 + 2] [i_0 - 1]) ? (arr_18 [i_0 + 1] [i_0 + 2] [i_0 + 2]) : (arr_18 [i_0 - 2] [i_0 - 1] [i_0 + 2])))))));
        }
    }
    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        arr_29 [i_7] |= (((var_11 / 15018861347090202337) ? (arr_23 [i_7] [i_7] [i_7]) : ((((!((((arr_28 [i_7]) ? (arr_11 [i_7] [i_7] [i_7] [i_7]) : (arr_13 [i_7]))))))))));
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 18;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 18;i_9 += 1)
            {
                {
                    var_25 = (max((max((min((arr_28 [i_7]), var_0)), (((var_4 < (arr_27 [i_7] [i_7])))))), (3177089520420705150 * 14013882112275461553)));
                    arr_36 [i_7] [i_7] [i_7] [i_7] = var_6;
                    var_26 *= (((((((min(var_10, (arr_2 [i_7])))) ? (((var_5 ? var_9 : (arr_11 [i_7] [i_7] [i_9] [i_7])))) : 0))) ? (arr_19 [i_7] [i_8] [i_9]) : ((min(var_12, (!-30))))));
                    arr_37 [i_8] [i_8] = -var_2;
                    arr_38 [i_9] [i_8] [i_7] = (arr_23 [i_7] [i_7] [i_7]);
                }
            }
        }
        var_27 = ((((126 ? 1 : -12717)) & ((min((max(1, 63065)), 12716)))));
    }
    #pragma endscop
}
