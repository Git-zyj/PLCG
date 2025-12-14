/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(((min(var_3, var_12))), (min(var_6, (min(-1, var_6))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                var_16 = (min(((11707276264281578171 ? (((!(arr_3 [i_1] [i_1] [i_1])))) : (((!(arr_2 [1])))))), (((((arr_3 [i_0] [i_1] [i_1]) ? (arr_0 [i_0]) : 18446744073709551615))))));
                var_17 = ((((var_0 < (arr_1 [i_0]))) ? (((!(arr_0 [i_0])))) : (((arr_2 [i_0]) >> (arr_2 [i_0])))));
                var_18 = (arr_0 [11]);
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_19 = (min(var_19, ((((((arr_5 [i_3] [i_2 + 1] [i_0]) == (arr_3 [i_0] [i_0] [i_0]))) ? (arr_2 [i_0]) : (11707276264281578171 / 2559073905))))));
                            var_20 = (min((min(((14853628295857718708 ? 6739467809427973444 : (arr_7 [i_0] [i_3]))), var_2)), (((4294967295 ? (!3593115777851832907) : 0)))));
                            var_21 = (min((((((arr_7 [i_0] [i_3]) ? (arr_4 [18] [i_1] [i_2]) : (arr_1 [9]))) > (((min((arr_4 [17] [i_2 - 2] [18]), (arr_0 [i_0]))))))), 0));
                            var_22 = ((((!(arr_5 [i_2 - 2] [i_2 - 1] [i_2 - 3]))) ? ((((((arr_6 [i_3] [i_3] [11] [i_2 - 3] [9] [i_0]) & (arr_6 [i_0] [15] [i_1] [i_3] [i_3] [i_1])))) ? (((arr_7 [i_0] [14]) ? (arr_7 [i_3] [i_1]) : 6205563799599648362)) : (arr_7 [i_1] [15]))) : (((((arr_7 [i_0] [i_0]) != var_10))))));
                            var_23 = ((((!(arr_4 [i_0] [i_0] [8]))) ? 14853628295857718703 : -27));
                        }
                    }
                }

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_24 |= (((!(arr_0 [i_4]))));
                    var_25 = (arr_8 [i_0] [i_0] [i_4]);
                    var_26 ^= (min((((((min((arr_4 [i_4] [i_1] [i_0]), (arr_8 [i_0] [i_1] [i_4])))) / var_12))), (min(0, 13))));
                    arr_10 [i_1] [12] = ((((min((arr_1 [i_4]), (1 > 18446744073709551615)))) ? ((11707276264281578171 ? 5599715462325564576 : 1)) : ((((((var_5 >= (arr_9 [16] [i_1] [i_4] [i_1])))) + ((min(46309, var_3))))))));
                }
            }
        }
    }
    #pragma endscop
}
