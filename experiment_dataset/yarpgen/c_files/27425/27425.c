/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27425
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = -22987;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_18 = ((((var_11 ? (arr_7 [i_1]) : 0)) << ((((var_16 * (arr_7 [i_1]))) - 136294228))));
                arr_8 [i_0] [i_0] &= (+((53058365 ? (arr_1 [i_0]) : (arr_6 [i_1] [i_1]))));
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 10;i_4 += 1)
                        {
                            {
                                arr_19 [i_2] [i_3] [0] [i_2] [i_2] [i_1] [i_2] = (max(-1959730989597810099, var_2));
                                var_19 ^= var_7;
                                var_20 ^= var_16;
                                var_21 = 3621476635;
                            }
                        }
                    }
                }
                var_22 += 32749;

                for (int i_5 = 3; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 13;i_6 += 1)
                    {
                        for (int i_7 = 2; i_7 < 12;i_7 += 1)
                        {
                            {
                                var_23 = (-3864109360510724192 | -32739);
                                arr_28 [i_5] [i_1] [i_1] [i_1] [i_1] = 576320014815068160;
                                var_24 = var_15;
                                arr_29 [i_0] [9] [i_5] [9] [i_6] = var_6;
                            }
                        }
                    }
                    arr_30 [i_5] [i_5] [i_5 - 2] = (((((!(arr_7 [i_5 + 2]))))) & ((~(2019086414 * 4293918720))));
                    /* LoopNest 2 */
                    for (int i_8 = 2; i_8 < 10;i_8 += 1)
                    {
                        for (int i_9 = 1; i_9 < 11;i_9 += 1)
                        {
                            {
                                arr_36 [i_0] [i_1] [i_5] [i_8 + 2] [i_8 + 2] = (((-27 < 32744) ^ ((((arr_16 [i_9 - 1] [i_5 + 1] [i_8 + 1] [i_5 + 1] [i_5]) && (arr_3 [i_5 + 1]))))));
                                arr_37 [3] [3] [i_5] [i_8 + 3] [i_5] [i_5] = (750181588133268475 && -26482);
                            }
                        }
                    }
                }
                for (int i_10 = 3; i_10 < 10;i_10 += 1) /* same iter space */
                {
                    var_25 = (max(var_25, (((((max(-29026, (arr_32 [i_0] [i_10 + 1] [i_0] [i_10] [i_10])))) ? (var_12 % 3864109360510724186) : (((var_9 % (((arr_35 [i_1] [i_0] [i_10 + 3] [i_0] [i_1]) - (arr_16 [i_0] [i_0] [i_0] [i_0] [i_0])))))))))));
                    var_26 = var_8;
                }
                for (int i_11 = 1; i_11 < 10;i_11 += 1)
                {
                    arr_43 [i_1] &= ((((arr_34 [i_11 - 1] [i_11 - 1] [i_11 + 2] [i_11 - 1] [i_11 + 3] [i_11 + 1] [i_11 + 2]) % (arr_34 [i_11 - 1] [i_11 + 1] [i_11 + 1] [i_11 + 3] [i_11 + 2] [i_11 + 1] [i_11 - 1]))) << (((((arr_34 [i_11 + 2] [i_11 - 1] [i_11 + 1] [i_11 + 3] [i_11 + 1] [i_11 + 3] [i_11 - 1]) * (arr_34 [i_11 + 1] [i_11 + 2] [i_11 + 3] [i_11 + 3] [i_11 + 2] [i_11 + 2] [i_11 + 1]))) - 1498775823)));
                    arr_44 [i_11] [0] = ((+(((arr_33 [i_11]) - 3363637712678424402))));
                    var_27 -= ((((-32765 / (arr_6 [i_11 + 2] [i_11 + 2])))) ? (((max(var_16, var_7)) - var_1)) : (((3864109360510724184 ? 4294967295 : 4294967290))));
                }
            }
        }
    }
    var_28 = -32733;
    #pragma endscop
}
