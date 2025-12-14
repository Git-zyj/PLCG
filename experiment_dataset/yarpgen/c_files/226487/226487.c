/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226487
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226487 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226487
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -93;
    var_14 = (min(var_14, ((min(2305843009213693952, ((((((max(31893, 91)))) ^ var_5))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [i_2] [i_0] [i_0] = ((31461 ? 1967358332 : 0));
                    var_15 *= (max(((!((max(var_4, 31893))))), (((((arr_0 [i_0] [i_1]) != 61)) || (!593099156)))));
                    var_16 = (max((max(var_6, (arr_2 [i_2 - 1] [i_2 + 1]))), 31899));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 19;i_4 += 1)
                        {
                            {
                                var_17 = min(135, 3701868115);
                                var_18 = ((((max(4443988218125299440, (arr_5 [i_2] [i_4 + 1] [i_2])))) ? (~92) : (arr_14 [i_4] [i_2] [i_2] [i_2 + 2])));
                                arr_15 [i_2] [i_3] [i_2] [i_1] [i_2] = -608447771;
                                var_19 = var_4;
                            }
                        }
                    }
                }
                arr_16 [i_1] [i_1] = ((!(!99)));
                var_20 -= ((!((min((max((arr_0 [i_0] [i_1]), var_11)), ((4239373581635667744 ? 31893 : (arr_13 [i_1] [i_0] [i_1]))))))));
            }
        }
    }
    var_21 = ((((~(max(17627201994342643128, var_1)))) << (((((~753953801) ? (((133 ? 92 : var_5))) : var_12)) - 74))));
    #pragma endscop
}
