/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] = ((-368485517869822418 != (((((min(var_8, var_9))) ? (((!(arr_6 [i_0] [i_1] [i_1])))) : ((min(0, (arr_5 [i_0] [i_0] [i_0])))))))));
                var_17 = (min(var_17, ((min(var_9, (((9 > -210988382766442768) ? -210988382766442768 : 210988382766442764)))))));
            }
        }
    }
    var_18 = ((((var_2 ? 1326184227495230548 : (-9223372036854775807 - 1)))) ? ((min((min(-21094, -424110214)), ((var_5 ? var_3 : var_7))))) : -21);
    var_19 = (max(var_19, ((((((((((var_1 + 2147483647) >> (var_10 + 83))) == ((123 << (((-3 + 31) - 28)))))))) > var_14)))));
    /* LoopNest 3 */
    for (int i_2 = 3; i_2 < 17;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 21;i_4 += 1)
            {
                {
                    var_20 = ((((min(-18, -210988382766442775))) ? (((!(var_13 + -30286)))) : (-127 - 1)));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 17;i_6 += 1)
                        {
                            {
                                var_21 = 210988382766442772;
                                arr_21 [i_5] [i_6] [i_4] [i_5] [i_2] [i_2] [i_4] = ((((~(max(210988382766442767, var_4)))) + ((((17757 < (arr_17 [i_2] [i_2] [i_6 + 3] [i_5] [i_2 - 3])))))));
                                arr_22 [i_3] [i_3] [i_4] [i_5] [i_6] [i_2] [i_4] = ((126 ? ((((((-424110214 & (arr_18 [i_3] [i_5] [i_6])))) != 5538438478673361286))) : (((!210988382766442790) - (var_6 > var_0)))));
                            }
                        }
                    }
                    arr_23 [i_2] [i_2] = (arr_14 [i_2] [i_2] [i_3] [i_4] [i_4] [i_4]);
                    arr_24 [i_2] [i_2] = var_1;
                }
            }
        }
    }
    #pragma endscop
}
