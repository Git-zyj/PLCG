/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226600
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [14] = ((((48 << ((((18882 << (125 - 110))) - 618725375)))) >= ((((max(15, 15))) & ((min(15, -29)))))));
                    arr_8 [i_0] [i_0] [i_2] = (~15);
                    var_18 = (((!35491) & (((max(1298526049, -25)) & (max(27777, 0))))));
                }
            }
        }
    }
    var_19 = ((max(-4, ((5 << (32764 - 32746))))));
    var_20 = ((1 << (25582 >= 18410715276690587648)));
    var_21 = (min(((1 | (~11154794417553670754))), ((((3667783467338023547 ^ 4252695141) ^ (27777 | 261553124))))));
    #pragma endscop
}
