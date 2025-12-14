/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33503
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33503 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33503
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    var_19 = ((-(arr_3 [12] [12])));
                    var_20 ^= ((((((!(-127 - 1))) ? (arr_6 [i_0]) : (11488355659412340922 * 19))) >> (var_18 - 697758762418943505)));
                    arr_8 [i_0] [i_1] [i_1] [i_1] = (min(1599295192, ((((var_1 ? 1402 : -2)) - ((min(var_1, 18384)))))));
                    var_21 += var_4;
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 24;i_3 += 1)
                {
                    var_22 = (((arr_7 [i_3] [i_1] [i_1] [6]) ? (arr_6 [i_0]) : (arr_10 [i_1] [9])));
                    var_23 = ((!(-17804 > -1)));
                }
                var_24 = (-8856639703934481308 | 231);
            }
        }
    }
    var_25 = (var_0 + var_0);
    #pragma endscop
}
