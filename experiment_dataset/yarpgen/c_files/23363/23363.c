/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23363
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23363 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23363
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_19 = max((~19822), ((((max(var_0, 15336619959618463013))) ? 1695440734200642987 : 3110124114091088602)));
                            var_20 ^= (((arr_6 [i_3 + 1]) ? -19823 : (((!(var_17 < -7895))))));
                            var_21 = var_16;
                        }
                    }
                }
                var_22 = (max(var_22, (((+(max((arr_9 [i_0] [i_0] [i_1]), (((arr_12 [i_0] [i_1] [i_0] [i_0] [i_0] [i_0]) ? var_4 : (arr_6 [i_1]))))))))));
                /* LoopNest 2 */
                for (int i_4 = 2; i_4 < 17;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] [i_0] [i_4] = ((917727110 && (((arr_6 [i_4 + 2]) || (arr_6 [i_4 - 1])))));
                            var_23 = (min(var_23, (((!((((arr_2 [i_0]) + (arr_1 [i_5])))))))));
                        }
                    }
                }
                arr_19 [i_0] [i_0] [i_0] = (arr_9 [i_1] [i_0] [i_0]);
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 21;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 21;i_7 += 1)
                    {
                        {
                            var_24 |= (((arr_14 [i_0] [i_0]) ? -3110124114091088617 : (((((arr_8 [i_7] [i_6] [i_1] [i_0]) || (!-7895)))))));
                            var_25 = (((max((~44), (((arr_22 [i_0] [i_6] [i_0]) << (-1817965833 + 1817965837))))) / ((~(arr_4 [i_0] [i_1] [2])))));
                        }
                    }
                }
            }
        }
    }
    var_26 = (!var_4);
    var_27 = ((-999 > (max(var_5, var_4))));
    var_28 = var_13;
    var_29 = (((((-(!var_5)))) || ((((16751303339508908622 == var_6) << -0)))));
    #pragma endscop
}
