/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_0] [i_0] = (max((2147483647 <= 1023), (1391255194 <= -2432617267953610218)));

                for (int i_2 = 2; i_2 < 16;i_2 += 1)
                {
                    arr_10 [i_0] [i_1 - 2] [i_2 + 1] [i_2 - 1] = ((((min(1391255194, 73))) - 26));
                    arr_11 [i_0] [i_1 - 2] [i_0] [i_0] |= (((max((!1), (!63))) ? (((!(3085986513 && 230)))) : ((((1391255180 && 2147483647) && 26)))));
                    arr_12 [i_2] = 2147483647;
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    arr_15 [i_0] [i_1] [i_3] = ((~(2147483647 <= 0)));
                    arr_16 [i_1 - 1] [i_1] [i_1] [i_1] &= (((-7185667708299920617 & 18446744073709551614) == (((max(10903596029225643737, 127)) - (22 + -23524)))));
                }
                arr_17 [2] [i_1] = (max((min(13728589660012485082, (32767 == 245))), (((-7185667708299920623 == (!243))))));
            }
        }
    }
    var_12 = ((~(((!(243 == 255))))));
    #pragma endscop
}
