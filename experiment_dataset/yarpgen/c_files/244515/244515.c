/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244515
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244515 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244515
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(var_14, ((min((43 <= 331972504), (var_7 - 42))))));
    var_15 = (min(var_15, ((max(((61463 ? 1386580644273041158 : (~2013901563))), var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_16 = (((((-(arr_5 [i_0] [i_1] [i_1])))) || ((max(((((arr_1 [i_0]) <= (arr_5 [i_0] [i_0] [i_0])))), (max(53, -331972496)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_17 = 36111;
                                var_18 = (max(var_18, ((((((649032837 / -1901586962) ? (arr_7 [i_4]) : (var_6 % 3645934458))) ^ ((((4294967295 && (arr_4 [i_1] [i_1] [i_4]))))))))));
                                var_19 = (arr_5 [i_1] [11] [i_3 - 1]);
                                var_20 -= (arr_3 [i_4]);
                            }
                        }
                    }
                }
                arr_14 [i_0] = (((42 | (((-1901586950 + 2147483647) << (var_7 - 197))))) ^ ((-(min(-837751219, (arr_2 [i_0] [i_0]))))));
                arr_15 [i_0] [i_0] [i_1] = (~182);
            }
        }
    }
    var_21 = (-837751234 & -1889870795);
    #pragma endscop
}
