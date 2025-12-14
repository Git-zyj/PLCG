/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216947
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(((((var_3 || 1) >= 1))), ((((max(1, 65518))) + 1))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_14 = ((-(((max(1, var_0)) / ((-(arr_2 [i_1])))))));
                var_15 ^= (15098 ^ 1);

                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    var_16 = (((min((1974402932 % 36143), 1)) * ((((!((max(11836, var_0)))))))));
                    var_17 = (min((max(1, (~-3763603677878322996))), 3819));
                }
                for (int i_3 = 1; i_3 < 12;i_3 += 1)
                {
                    var_18 = ((+((+(max((arr_0 [i_3]), 247))))));
                    var_19 = (1053 >= 16);
                    var_20 = (max(var_20, 0));
                }
                /* vectorizable */
                for (int i_4 = 0; i_4 < 13;i_4 += 1)
                {
                    var_21 = (~((((arr_2 [i_1]) || var_9))));
                    var_22 *= ((-(var_6 | var_10)));
                    var_23 = (((~1963391506) | -762683317));
                }
                for (int i_5 = 2; i_5 < 11;i_5 += 1)
                {
                    var_24 = (max(var_24, (((((min((1 % var_7), (4190009748 ^ var_2)))) || (((((!(arr_12 [i_0] [i_1] [i_5])))) != (((!(arr_10 [i_5] [i_1] [i_5 + 2])))))))))));
                    var_25 = (13908925636203274946 || 456073406);
                }
            }
        }
    }
    var_26 = ((((((var_4 || 1) >= (var_7 & var_1)))) == (((!(~var_3))))));
    var_27 = (((!var_10) / ((~((((-2147483647 - 1) == var_6)))))));
    #pragma endscop
}
