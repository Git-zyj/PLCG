/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 ^= (((((min(8935141660703064064, 3310857100)) ? (arr_5 [i_0] [i_1]) : (arr_2 [i_1] [i_1] [i_0])))));
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_11 ^= (max((((arr_2 [i_0] [6] [i_2]) ? 4195641711205573865 : 149)), (((62 ? 4080 : 193)))));
                            arr_11 [i_3] [i_3] [i_2] [i_3] [i_3] [i_2] = ((((max(4080, (min(var_7, 4251313840))))) ? (((((7476407840322903007 ? (arr_1 [i_2]) : 2251799780130816))) ? (arr_3 [i_1] [i_2]) : 1152921504606846976)) : (arr_1 [8])));
                            var_12 = (max(var_12, (((((max((arr_2 [i_0] [i_1] [i_2 + 3]), (max((arr_7 [i_0]), 0))))) + 9511602413006487551)))));
                        }
                    }
                }
                var_13 = 2251799780130829;
                var_14 ^= ((((-((3079858211787068152 ? (arr_6 [i_0] [i_0]) : var_8)))) * (((-((3079858211787068152 + (arr_10 [i_0] [i_0] [i_1] [i_1] [i_1]))))))));
                arr_12 [i_0] [i_0] [19] |= (min((arr_0 [i_1]), 14921125192616742615));
            }
        }
    }
    var_15 = ((var_9 ? (-1775649327 < var_0) : var_4));
    #pragma endscop
}
