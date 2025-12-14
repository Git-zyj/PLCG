/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52051
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            var_11 = arr_1 [i_0];
            arr_5 [i_0] [i_0] [i_0 + 3] = (max((arr_2 [i_0]), (32756 || var_1)));
        }
        for (int i_2 = 0; i_2 < 15;i_2 += 1)
        {
            arr_8 [i_2] [i_2] = ((((3020933363 << (-32741 + 32748))) & ((~(arr_7 [i_0 - 1] [i_0 + 3])))));
            var_12 *= ((((((((max(-32756, 32752))) != (arr_0 [i_0 + 3]))))) > ((~(arr_7 [i_2] [i_0 + 3])))));
        }
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {

            /* vectorizable */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_13 = ((((arr_3 [i_0]) > 196)));
                arr_14 [i_0] [i_0] [i_0] [i_4] = (arr_6 [i_0] [i_4]);
                arr_15 [3] = arr_6 [i_0 + 2] [i_3];
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 14;i_6 += 1)
                    {
                        {
                            var_14 += (arr_2 [i_0]);
                            arr_20 [i_0 + 1] [i_3] [i_0 + 1] [i_3] [3] |= (((1274033933 % -83) && (arr_17 [i_6 + 1] [i_6 - 1] [i_6] [i_6 - 1] [i_6 - 1] [i_4 - 1])));
                        }
                    }
                }
                var_15 = (((((!(arr_18 [9] [9] [i_3] [i_3] [1] [i_4] [i_4])))) ^ var_2));
            }
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                arr_23 [12] [10] [0] = ((~((4020 ? -32757 : 0))));
                arr_24 [0] [5] [i_3] [i_7] = ((((max(var_8, (arr_7 [i_0 + 1] [i_0 - 1])))) > (((arr_13 [i_0 - 1]) * (arr_21 [i_0 - 1] [4] [i_0 + 3] [i_0 + 1])))));
            }
            var_16 = (arr_13 [i_0 + 2]);
            var_17 = (max(var_17, (arr_7 [i_0] [i_3])));
        }
        var_18 = (max(var_18, ((min((arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0 + 3]), ((max(-29585, ((var_5 + (arr_21 [i_0 + 1] [0] [i_0] [i_0])))))))))));
    }
    for (int i_8 = 0; i_8 < 16;i_8 += 1) /* same iter space */
    {
        var_19 ^= ((!1274033912) ? var_6 : 25338);
        arr_27 [i_8] = (arr_25 [i_8]);
    }
    for (int i_9 = 0; i_9 < 16;i_9 += 1) /* same iter space */
    {
        var_20 = (min(var_20, ((((~(arr_26 [i_9])))))));
        var_21 = (9223372036854775807 > 4020);
    }
    /* vectorizable */
    for (int i_10 = 1; i_10 < 19;i_10 += 1)
    {
        var_22 = 153;
        var_23 = (!2809712015108447787);
    }
    var_24 = var_0;
    var_25 |= ((((min((!var_2), var_8))) ? 18446744073709551610 : (((((~-6) == (~32734)))))));
    var_26 -= (11919333179190187974 * 1);
    var_27 ^= ((var_6 ? (~var_8) : 30905));
    #pragma endscop
}
