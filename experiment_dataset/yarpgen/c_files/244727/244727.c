/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244727
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244727 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244727
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((var_0 ? (min(-18295, var_0)) : (var_5 / 14647))) * ((var_5 * (var_0 / var_5)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_11 -= (var_1 ? (((534445956 ? 1787671943 : -109503831))) : (min((~0), var_2)));
                                var_12 -= (((((var_6 / var_4) + (min(var_5, var_5)))) >= ((var_3 ? (min(1536, var_7)) : ((((-2147483647 - 1) ? var_8 : var_4)))))));
                                var_13 = ((((var_2 >= (151593705 < 1552))) ? var_7 : (max((max(var_7, 16777215)), (var_8 + var_9)))));
                                arr_16 [i_4 - 1] [i_2] [12] [i_2] [i_2] [i_0] = ((((((var_2 / 106) ? var_6 : var_3))) ? (!var_9) : ((((max(var_5, 51578))) ? var_3 : var_6))));
                            }
                        }
                    }
                    arr_17 [i_2] = min(((836039602 << (2159541962 - 2159541946))), (var_1 | 20));
                    var_14 = min((((((var_4 ? var_7 : var_2))) ? ((var_9 ? var_7 : 4143373592)) : var_2)), ((281474975662080 ? 0 : (max(18446744073709551612, 51601)))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 24;i_6 += 1)
                        {
                            {
                                var_15 = (max(-1471600559, 1290438553));
                                var_16 = (var_4 <= 174818355760140726);
                                var_17 = ((var_3 ? (min(-1021729949, var_6)) : 4376897433650300287));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_7 = 1; i_7 < 23;i_7 += 1)
                    {
                        for (int i_8 = 4; i_8 < 20;i_8 += 1)
                        {
                            {
                                arr_30 [i_2] = (min((min(var_3, (max(-2147483624, var_2)))), (~16744448)));
                                var_18 = ((var_3 ? -1009169767 : 13124230188463601116));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
