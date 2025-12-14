/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53081
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53081 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53081
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min((((799356517 ? 2147483647 : 2211156758))), (min((((19731 ? -97 : 1455337467))), (max(-17916, -9103859076290439826))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_11 = (17936 ? (arr_2 [i_1]) : 2129);
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_12 = (max(var_12, (((max((((7714 ? var_6 : var_5))), ((2767362885 ? 2839629812 : 16359))))))));
                            arr_10 [i_0] [i_1] [i_1] = -2147483647;
                            var_13 += (min((max(((67 ? (arr_5 [6] [i_3] [i_2] [i_1]) : 2043052666)), (min(170328967518640981, 116)))), ((var_7 ? ((-2147483624 ? (arr_3 [i_3]) : (arr_7 [i_0] [i_0]))) : 465050238508422561))));
                            var_14 = ((~((((120 ? -7727976461152167552 : (arr_3 [i_0])))))));
                        }
                    }
                }
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 21;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            var_15 = (((-1532803562 > 4294967289) ? (arr_15 [i_1 - 1]) : (max(2147483647, (arr_15 [i_1 - 2])))));

                            for (int i_6 = 0; i_6 < 21;i_6 += 1)
                            {
                                var_16 -= (min((4408447894199362840 * 536805376), (((31 ? 3974775830 : 30887)))));
                                arr_19 [i_5] [i_0] [i_1] = (max((max(255, 19)), (10231 + 131071)));
                            }
                            /* vectorizable */
                            for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                            {
                                var_17 = 92;
                                var_18 ^= var_7;
                                arr_22 [i_0] [i_1] [i_0] = ((var_3 ? (arr_21 [i_7] [i_5] [i_4] [i_1 + 2] [i_0]) : (arr_21 [i_0] [i_1] [i_4] [i_5] [i_7])));
                            }
                            for (int i_8 = 0; i_8 < 21;i_8 += 1) /* same iter space */
                            {
                                arr_25 [i_4] [i_1] = (min((((-7886 / 15503) ? (min(9991, var_4)) : ((((arr_7 [i_1] [i_8]) ? 43815 : var_6))))), ((((((-1335291414 ? var_8 : -1))) && (arr_18 [i_4] [i_4] [i_4] [i_4]))))));
                                arr_26 [i_0] [i_1] [i_4] [i_5] |= 12384905303291998189;
                            }
                            arr_27 [i_1] [i_1] [i_4] [i_5] = ((!5687) + (max((arr_9 [i_1] [i_1 + 2]), (arr_7 [i_1] [i_1 + 1]))));
                            var_19 = (min((min((((-216620658 / (arr_11 [i_1] [7] [i_5])))), (max(4503599618981888, 21720)))), (21719 & 4294950912)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
