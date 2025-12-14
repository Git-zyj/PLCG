/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 *= ((!(~var_17)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 14;i_1 += 1)
        {
            {
                var_19 ^= (-((var_6 ^ ((27121 ? (arr_2 [i_1] [i_1]) : (arr_1 [i_0]))))));
                var_20 += ((((((((27127 ? (arr_1 [i_1]) : var_12))) ? (((arr_5 [i_0] [14]) ? 27121 : 1805430136)) : ((var_2 ? var_10 : -27717))))) ? (max((arr_2 [i_1] [i_1]), (arr_3 [i_1 - 2] [i_1]))) : (max(var_3, ((var_12 / (arr_0 [i_0] [i_1 - 2])))))));
                var_21 |= (((((((arr_4 [7] [8]) || var_6)) && (((arr_4 [i_0] [i_1 - 1]) || var_4)))) ? var_2 : (arr_0 [i_1 - 1] [2])));
                var_22 = max(((-(((arr_5 [i_1] [i_0]) ? var_8 : var_2)))), ((((arr_1 [i_0]) || ((max(var_3, var_17)))))));
            }
        }
    }
    var_23 = (max(var_23, ((((!-17122) ? ((((((-14810 + 2147483647) << (((-27111 + 27112) - 1))))) ? var_5 : var_17)) : ((-10121 ? (27111 == 2147483647) : -18251)))))));
    var_24 = var_10;
    #pragma endscop
}
