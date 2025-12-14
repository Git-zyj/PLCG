/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38949
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -5577296165207983933;
    var_11 = var_7;
    var_12 = (min(var_12, ((((((var_1 ? -1602426625132749675 : 3720157038))) ? (min((~var_7), ((65535 ? 2147483647 : var_9)))) : var_7)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 11;i_4 += 1)
                        {
                            {
                                var_13 = var_8;
                                var_14 ^= ((!((((min(-10595, var_4))) < (min(6693889206225380074, 3720157012))))));
                                var_15 ^= ((((max((arr_10 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 3] [i_4]), 64963))) ? ((((((min(2147483648, (arr_13 [i_4] [i_1] [i_0] [i_1] [i_0])))) || var_2)))) : (((arr_3 [i_0] [i_1]) ? (((arr_11 [i_4 - 1] [13] [i_3] [i_2] [i_1] [i_0]) - 15195151513035085243)) : 4294967280))));
                                var_16 ^= (((((1 ? (arr_0 [i_1]) : (arr_0 [i_3])))) ? (14314618394033280540 || 853023450) : (!13511978889624674544)));
                                var_17 = (min(var_17, 1));
                            }
                        }
                    }
                    arr_14 [i_0] = ((max((arr_5 [i_0] [i_1] [i_2]), (3549224978 ^ var_4))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 2; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 16;i_6 += 1)
        {
            {

                for (int i_7 = 1; i_7 < 14;i_7 += 1)
                {
                    arr_24 [i_5 + 1] [i_6] = var_3;
                    var_18 = ((-(((arr_23 [i_5 - 2] [i_6 + 1] [i_7 - 1] [i_7 + 1]) ? (18946 & var_8) : (0 >= 2147483663)))));
                    var_19 &= ((((arr_19 [i_5 - 2] [i_7 + 1] [i_7]) ? (arr_19 [i_5 - 1] [i_7 + 1] [i_5 - 1]) : (arr_19 [i_5 - 2] [i_7 + 3] [i_7 + 3]))));
                }
                var_20 = (min(var_20, ((max(1, 8565893921665215342)))));
            }
        }
    }
    #pragma endscop
}
