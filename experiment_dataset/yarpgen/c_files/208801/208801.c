/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_12 ^= max(((((arr_0 [i_0] [i_1]) * 62))), ((~(max(67, (arr_2 [i_0] [i_1]))))));
                var_13 = ((-68 ? 1824673929 : 89));
            }
        }
    }
    var_14 = (max((((var_9 * 0) >> (!var_6))), (min(-76, ((2 ? 25043 : -66))))));
    var_15 += -var_4;
    var_16 = ((var_9 ? ((((max(145, 1505066963))) ? var_0 : ((-66 ? var_9 : (-127 - 1))))) : (min(((2038743689 ? 21 : -21566)), var_2))));

    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 3; i_3 < 14;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_17 = 121;
                                arr_23 [i_2] [i_2] [10] [i_5] [i_4] = ((~((-61 ? 1 : (-127 - 1)))));
                            }
                        }
                    }
                    var_18 &= (-127 - 1);
                }
            }
        }
        var_19 = ((!((max(257263775, (arr_14 [i_2] [i_2]))))));
        arr_24 [i_2] [10] = (max(((1 ? (36 | 13158335910438623283) : 5379891351182212259)), ((min(((-3409508411866320880 ? 0 : (arr_13 [10] [i_2] [i_2]))), 240)))));
        var_20 *= ((32755 ? (arr_8 [i_2]) : ((31845 ? 21566 : -21570))));
        arr_25 [i_2] = (((arr_16 [1] [12] [1]) ? (140462610448384 / 1) : (83 >> 1)));
    }
    for (int i_7 = 0; i_7 < 15;i_7 += 1) /* same iter space */
    {
        var_21 -= ((1 ? ((max((((1 ? 255 : 3218))), ((4121256078583141923 ? (arr_20 [i_7]) : (arr_0 [i_7] [i_7])))))) : ((((13 ? 14325487995126409693 : 155)) & 8535))));
        var_22 = ((((((arr_6 [i_7] [i_7]) ? 6 : (arr_19 [i_7] [i_7])))) ? (((arr_19 [i_7] [i_7]) ? 243 : (arr_6 [i_7] [i_7]))) : ((max((arr_27 [5]), 2891560375474580028)))));

        /* vectorizable */
        for (int i_8 = 3; i_8 < 14;i_8 += 1)
        {
            var_23 = 27;
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 14;i_10 += 1)
                {
                    {
                        var_24 = 9799314159158324541;
                        var_25 = (arr_1 [i_7]);
                    }
                }
            }
        }
        var_26 &= ((-(((!(arr_6 [i_7] [i_7]))))));
    }
    /* vectorizable */
    for (int i_11 = 2; i_11 < 11;i_11 += 1)
    {
        arr_40 [i_11] = ((1280935854 % (arr_5 [i_11] [i_11 - 1])));
        arr_41 [i_11] = (((arr_20 [i_11 - 2]) ? ((0 ? 231 : 10683190250861526303)) : (((2952266732 ? (arr_8 [i_11]) : 38045)))));
    }
    #pragma endscop
}
