/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247492
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
        {
            var_18 = var_2;
            arr_6 [i_0] [i_1] = var_14;
        }
        for (int i_2 = 0; i_2 < 11;i_2 += 1) /* same iter space */
        {
            var_19 = ((((99 ? (((max((arr_2 [i_0 - 1] [i_0]), var_1)))) : (var_0 * 4294967295))) * ((((((-99 ? -1 : var_15))) ? (((var_11 >> (72 - 49)))) : (arr_7 [i_0]))))));
            arr_11 [i_0] [i_0] [i_0] = ((((min(106, ((max((-127 - 1), (arr_0 [i_2]))))))) ? ((((!((max(62139, 0))))))) : ((1877347029 << (3791312355 - 3791312338)))));

            /* vectorizable */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                var_20 = 9247;
                var_21 = -5820974609087249231;
            }
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                arr_17 [i_2] [i_0] [i_4] = (0 == -9223372036854775788);
                var_22 = (min(((((var_10 ? var_0 : (arr_13 [i_4] [i_2] [i_0 + 1]))) * var_17)), (((((max(-2460515819451106143, 3791312355))) ? (arr_5 [i_0 - 2] [i_0 - 3]) : (arr_2 [i_0 - 1] [i_2]))))));
            }
            arr_18 [i_0 - 2] [i_0] = (((max((((39 ? var_15 : 184))), ((4294967295 << (4294967295 - 4294967286))))) >> ((((((max((arr_2 [i_2] [i_0 - 3]), 32751))) ? ((1 ? 4294967295 : var_0)) : (((255 ? 503654941 : var_17))))) - 4294967270))));
            var_23 = 17325922139242612763;
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1) /* same iter space */
        {
            var_24 = ((((var_2 ? (arr_13 [i_0] [i_0] [i_5]) : (arr_10 [i_0 - 3]))) > (((((min(0, 1))) << (((arr_13 [i_0] [i_0 - 2] [i_0]) - 85)))))));
            var_25 = (((((var_5 / (arr_0 [i_0 - 3]))) > 16988)) ? ((1 ? 1 : 9247)) : ((((((arr_21 [i_0] [i_0] [i_0]) == 14))) ^ ((min((arr_0 [i_0 + 1]), 0))))));
        }
        var_26 = (min(var_26, ((((((((arr_14 [6] [i_0] [2]) ^ 115)))) ? ((1 << (56288 - 56284))) : ((0 ? 2458878350 : (((9444 << (16988 - 16980)))))))))));
    }
    for (int i_6 = 4; i_6 < 19;i_6 += 1)
    {
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 23;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 23;i_8 += 1)
            {
                {
                    var_27 = (min(((((arr_29 [i_6 - 3] [i_6 - 1] [i_6 - 1]) > 5))), ((var_17 ? var_6 : (arr_29 [i_6 - 1] [i_6 - 2] [i_6 + 4])))));
                    var_28 = (min(var_28, ((((arr_26 [i_7]) >> (((arr_28 [i_8] [i_6 - 4] [i_8] [i_6 + 1]) - 29626)))))));
                    var_29 = (max(var_29, ((((((3 >> (var_2 - 38449)))) ? (((arr_26 [i_8]) / (arr_25 [i_6 + 2]))) : ((max((arr_26 [i_6 + 3]), (arr_25 [i_6 + 2])))))))));
                }
            }
        }
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 0; i_10 < 23;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 23;i_11 += 1)
                {
                    {
                        var_30 = (min(var_30, (max((arr_25 [i_6 - 1]), ((((arr_31 [i_6 - 2] [i_6 + 4] [i_6 - 2]) == var_6)))))));
                        arr_42 [i_9] [i_9] [i_10] = 57;
                    }
                }
            }
        }
    }
    for (int i_12 = 2; i_12 < 21;i_12 += 1)
    {
        var_31 = (min(var_31, (((((((arr_44 [i_12 + 1] [i_12 + 1]) << (4294967295 - 4294967292)))) ? ((var_13 ? (arr_43 [i_12 - 2]) : (arr_43 [i_12 + 2]))) : ((min(0, (arr_43 [i_12])))))))));
        var_32 = (arr_43 [i_12]);
    }
    var_33 = (min(4294967295, var_16));
    var_34 += var_17;
    var_35 = var_4;
    #pragma endscop
}
