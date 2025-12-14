/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195480
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195480 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195480
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, (((min(var_12, -4611320967691534962))))));
    var_15 = var_2;

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_16 ^= ((!(((56 ? 7460511162650492228 : -56)))));
        var_17 = ((+(((!224) + ((var_8 ? var_6 : var_8))))));
        var_18 = (min(((var_12 ? 2000238040 : 12651738179425924794)), (106 == 65530)));
    }
    for (int i_1 = 3; i_1 < 12;i_1 += 1)
    {

        for (int i_2 = 0; i_2 < 14;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 3; i_3 < 13;i_3 += 1)
            {
                var_19 = (min(var_19, (((((((8850 ? 4051728785419167314 : 6176309941264895739)) < (!108))) ? ((((max(3749546354, -56))) ? -var_8 : 1)) : 1)))));
                var_20 = (max(var_20, (((10 ? 0 : (((2889121239087930699 ? var_8 : var_10))))))));
                var_21 = 12270434132444655876;
                var_22 = (max(var_22, ((max(1, (min(((755738929 ? 18446744073709551594 : 0)), (((var_0 ? var_0 : var_3))))))))));
            }
            /* vectorizable */
            for (int i_4 = 0; i_4 < 14;i_4 += 1) /* same iter space */
            {

                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_23 = ((var_8 <= var_9) ? 1 : 7118280883140449085);
                    var_24 = 23929;
                    var_25 = -var_11;
                }
                /* LoopNest 2 */
                for (int i_6 = 3; i_6 < 13;i_6 += 1)
                {
                    for (int i_7 = 3; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_26 = ((var_7 ? (1 < 97) : (~122)));
                            arr_20 [i_1] [i_1] [i_4] [i_2] [i_7] = (((536870912 - var_2) ? (~var_7) : 1602383811));
                        }
                    }
                }
                var_27 = (30 - 154);
                var_28 -= ((213 ? 65524 : 6488761688792295005));
            }
            /* vectorizable */
            for (int i_8 = 0; i_8 < 14;i_8 += 1) /* same iter space */
            {
                var_29 = var_13;
                var_30 = var_12;
                var_31 = (~1677345035);
            }
            /* LoopNest 2 */
            for (int i_9 = 0; i_9 < 14;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    {
                        var_32 += (min(var_2, ((((((128 ? 0 : 252))) ? 1 : (var_13 & 123))))));
                        var_33 -= ((0 * (((max(123, 111))))));
                    }
                }
            }
            var_34 = (((((var_5 ? (0 - var_1) : var_4))) ? (((((var_2 ? var_10 : 2758913354))) ? (((min(1, 32763)))) : ((1 ? var_6 : var_10)))) : var_10));
        }
        for (int i_11 = 0; i_11 < 14;i_11 += 1) /* same iter space */
        {
            var_35 = ((!var_8) >= ((0 ? var_0 : 173)));
            var_36 = 1;
            var_37 = 1;
            var_38 = (max(((var_0 | (1 ^ -7))), 1));
        }
        var_39 = ((1694047028 / ((127 ? (min(286729689657551518, 1)) : (((2013265920 ? var_5 : 1034084649)))))));
        var_40 *= 1;
        var_41 *= ((((min(var_12, 252))) ? 8481497286233211825 : 4670249923816362996));

        for (int i_12 = 2; i_12 < 11;i_12 += 1)
        {
            var_42 = ((((max(1467788093, 1))) == (((4083402453 ? var_9 : ((var_11 ? var_13 : var_8)))))));
            arr_37 [i_12] [i_1] = -114;
        }
    }
    #pragma endscop
}
