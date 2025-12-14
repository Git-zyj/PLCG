/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_13 ^= (arr_4 [i_1]);
                                var_14 = (max(var_14, ((min(-7511555536750617981, (max((max(16228224659541074889, 13436)), var_11)))))));
                                arr_13 [i_1] = (((((((arr_10 [i_0] [i_0 + 1] [i_0] [i_0]) || var_1))) * ((-(arr_7 [i_3]))))) + (var_10 + var_8));
                            }
                        }
                    }

                    for (int i_5 = 2; i_5 < 10;i_5 += 1)
                    {
                        var_15 = -7511555536750617981;
                        var_16 = ((!(arr_10 [i_0] [i_0 + 1] [i_5 - 2] [i_5])));

                        for (int i_6 = 4; i_6 < 8;i_6 += 1) /* same iter space */
                        {
                            arr_20 [i_6] [i_2] [i_5] [i_6 + 1] = (((var_11 * 202) ? (((min((arr_7 [i_5 - 2]), (arr_7 [i_5 - 2]))))) : 7511555536750617995));
                            var_17 = -30648;
                            arr_21 [i_6] = (arr_8 [5] [i_1] [i_2] [i_0]);
                        }
                        for (int i_7 = 4; i_7 < 8;i_7 += 1) /* same iter space */
                        {
                            var_18 = var_3;
                            var_19 = (((((7511555536750617959 / 65534) * (!52))) != (arr_22 [i_0] [i_1] [i_2] [i_5] [i_7 + 2])));
                            var_20 = -787001994;
                            var_21 = (min(((((arr_12 [i_7] [7] [i_7] [2] [i_7 - 4] [i_7] [5]) <= (arr_23 [i_7 - 2] [i_7] [i_7] [i_7 - 4] [i_7 + 1])))), (arr_12 [i_7 + 3] [i_7] [i_7] [4] [i_7 + 3] [i_7] [i_7])));
                        }
                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_22 -= (((((((arr_14 [i_8] [i_8] [i_8]) & 8619398525368171802)))) && (((7511555536750618006 / (var_8 - 2147483647))))));
                            var_23 = ((min((min(46121, var_11)), (arr_10 [i_0 + 1] [i_0 + 1] [i_5 + 2] [i_5 - 2]))));
                            var_24 = ((((max((~8619398525368171802), -9039748327156695047))) ? (arr_16 [i_8] [i_0 + 1] [5] [i_2] [i_1] [i_0 + 1]) : (((arr_24 [i_0] [0] [i_0] [i_0] [i_0 + 1] [i_0] [i_0 + 1]) ^ ((-29190 ? var_1 : 2303591209400008704))))));
                        }
                        var_25 -= ((var_0 + (((!(arr_6 [i_0] [i_0] [i_0]))))));
                    }
                    for (int i_9 = 3; i_9 < 11;i_9 += 1)
                    {
                        arr_32 [i_0] [i_0] [i_9] [i_0] = (((((~(46148 ^ -7511555536750617981)))) && ((((max(var_10, (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])))) != 22266))));
                        arr_33 [i_9] [i_1] [i_2] [i_2] [i_1] = ((~(arr_7 [i_1])));
                    }
                    var_26 = (arr_14 [i_0] [i_1] [i_2]);
                }
            }
        }
    }
    var_27 = (var_9 && var_8);
    #pragma endscop
}
