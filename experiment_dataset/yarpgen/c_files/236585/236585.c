/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236585
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 ^= (min((((!51887) ? ((max(2734510885, 1560456411))) : (max(var_0, var_3)))), (var_14 != 1083118788)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                var_19 ^= (1253427404404676268 <= 2734510894);
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 11;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_20 = (arr_8 [i_3]);
                                var_21 ^= (arr_8 [i_3 - 1]);
                                var_22 = 2996980822;
                                arr_15 [i_4] [6] [i_4] [i_4] [i_4] [i_4] [i_4] = (((var_17 <= (arr_6 [i_3 - 2] [i_1]))) ? (((2734510888 ? (arr_6 [i_3 - 1] [i_1]) : (arr_6 [i_3 - 2] [i_1])))) : (min((arr_6 [i_3 - 1] [6]), var_0)));
                                arr_16 [i_0] [i_1] [i_2] [i_1] [i_4] = 71;
                            }
                        }
                    }
                }
                var_23 = (min(var_23, (((((71 ? -71 : var_0))) ? (!72) : (((-2965320181953940916 != (arr_7 [i_0]))))))));
                var_24 = (max(var_24, (((((((((min(0, var_4)))) == (1026307018128526571 & 1560456411)))) ^ ((+((var_7 ? (arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [4]) : 1)))))))));
                var_25 = (((((var_16 ? var_0 : (((1560456407 ? (arr_10 [i_0] [i_0] [i_0] [i_1]) : 0)))))) ? (((71 ? (arr_7 [2]) : (arr_9 [i_0] [i_1] [i_1])))) : var_6));
            }
        }
    }
    var_26 = ((((!((max(var_14, var_12))))) ? ((((max(var_8, var_1))) ? (((max(var_15, 1)))) : var_2)) : 2965320181953940916));
    #pragma endscop
}
