/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, var_9));

    /* vectorizable */
    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_3 [10] |= (arr_2 [i_0 - 1]);
        arr_4 [i_0] [i_0] = (!var_7);
        var_12 = (arr_1 [i_0]);
    }
    for (int i_1 = 4; i_1 < 24;i_1 += 1)
    {
        var_13 ^= (((arr_5 [8]) ? ((((arr_6 [i_1 + 1]) ? -19881 : 32054))) : (min(16050539799587961787, var_0))));

        /* vectorizable */
        for (int i_2 = 1; i_2 < 23;i_2 += 1) /* same iter space */
        {
            var_14 = (min(var_14, ((((7338702131945069171 ^ -19881) ? (arr_6 [i_1 - 4]) : var_2)))));

            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                var_15 = ((var_2 ? (((var_4 + (arr_10 [i_3] [i_2 + 1] [i_1])))) : var_9));
                arr_11 [4] [6] [i_3] &= (((~-19888) ? (!576460752303423487) : ((var_7 ? var_8 : -19883))));
            }
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_14 [i_1] [i_2 - 1] [i_2 - 1] [i_1] = (~var_6);
                arr_15 [i_1] [i_1] [i_4] = (((arr_12 [i_2] [i_2] [i_2 + 1]) ? var_10 : 32054));
            }
            arr_16 [i_1] = 3;
            var_16 = (((27270 ? 573184347 : 17429250925190407971)));
        }
        for (int i_5 = 1; i_5 < 23;i_5 += 1) /* same iter space */
        {
            var_17 |= (max(((min(-32765, 1))), (arr_18 [i_5])));
            var_18 = (max(var_18, (arr_9 [i_5] [i_5] [i_1])));
            var_19 = (((((((3132416514862764049 ? var_8 : var_1))) || (((var_8 ? (arr_9 [i_5 - 1] [i_5 - 1] [i_5]) : var_9))))) ? ((((!-32766) || ((min(90, -19881)))))) : 1));
            var_20 = (((((12832704832135423213 ? (arr_12 [i_1 - 4] [i_5 + 2] [i_1 - 2]) : ((var_6 ? var_9 : (arr_8 [i_1])))))) ? var_3 : 18));
        }

        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            var_21 = var_8;
            var_22 = ((!((max(((var_9 ? 27181 : var_0)), (-2147483645 && 1))))));
        }
        for (int i_7 = 2; i_7 < 22;i_7 += 1)
        {

            for (int i_8 = 2; i_8 < 21;i_8 += 1)
            {

                for (int i_9 = 3; i_9 < 24;i_9 += 1)
                {

                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        var_23 ^= (arr_17 [22]);
                        var_24 *= ((((((((arr_13 [i_7] [i_7] [i_1] [i_7]) ? -9223372036854775802 : (arr_13 [8] [i_8] [i_9] [8]))) + ((min(1814645535, var_0)))))) ? var_0 : (((((var_10 ? var_0 : 2877605488))) ^ var_10))));
                        var_25 = (max((((((var_7 & (arr_6 [1])))) ? (arr_24 [i_9 - 2] [i_9 - 2]) : (arr_30 [i_10] [i_8] [i_7]))), (!var_7)));
                    }
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        var_26 = (arr_32 [i_8 + 4] [i_1] [i_1 - 4]);
                        arr_37 [i_1] [0] [i_1] [i_1] [i_11] = ((!(arr_5 [i_1])));
                        var_27 = (((!16530325232000920682) ? (~0) : -32054));
                    }
                    arr_38 [i_1] [i_8] [i_7 + 1] [i_1] = var_10;
                }
                for (int i_12 = 1; i_12 < 23;i_12 += 1)
                {
                    arr_41 [22] [22] |= var_5;
                    arr_42 [i_7] [i_1] = (((arr_27 [i_1] [i_7 + 3] [i_8 - 2]) ? (((arr_27 [i_1] [i_1] [i_1]) ? (arr_27 [i_7 - 1] [i_8 - 2] [6]) : (arr_27 [4] [i_8 + 1] [i_8 + 1]))) : ((-3559 ? (arr_27 [i_12 - 1] [i_8 + 2] [i_7]) : (arr_27 [i_1] [i_7 + 1] [i_7])))));
                }
                arr_43 [i_8] [i_1] [i_8] [i_8 + 4] = ((19618 >> ((var_5 >> (((max(var_10, var_10)) + 5308529497514961884))))));
                var_28 = (max(var_28, ((max((arr_8 [10]), (arr_32 [i_8 + 1] [1] [i_7 - 2]))))));
                arr_44 [i_1] = ((-30086 ? (((((1 ? -890701464 : 1491997354))) ? (arr_22 [i_1 - 3] [i_1 - 4] [i_1]) : 6626098038015780042)) : (((min(13925, -32766))))));
            }
            var_29 = var_8;
            var_30 = min((max((((~(arr_39 [i_1] [i_7] [i_1] [i_7])))), ((1144813083 ? var_2 : 1)))), (max(var_7, (~var_2))));
            arr_45 [i_1] [i_1] [i_1] = 10906534565105508203;
        }
    }
    #pragma endscop
}
