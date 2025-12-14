/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51473
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        var_20 = (max(var_20, (22304 / -6062084745807189770)));
        arr_2 [i_0] = (((max(-19, (var_9 * 251658240))) ^ (((max((arr_0 [i_0]), -39))))));
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 12;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_2 + 1] = (((((((~(arr_6 [4] [i_1])))) ? 1093454832 : ((43231 ? 15000 : 5005438379733105830)))) >> (((arr_4 [i_0] [i_1 - 1]) ^ (arr_4 [i_0] [i_2])))));
                    arr_10 [i_1] [i_1] [i_1] = (((((arr_4 [i_1 - 1] [i_0]) ? 4 : (max(15, (arr_8 [i_1] [i_1 - 2] [i_1] [i_1 - 2]))))) <= ((1319258521 ? (arr_0 [i_2 + 1]) : (1 == 5005438379733105818)))));
                    var_21 = (((((12 ? (arr_3 [0]) : var_10))) ? (((((!6596234373644319580) > 1)))) : ((max(8796076244992, 1)))));
                }
            }
        }
        arr_11 [i_0] = ((-(min(((-85 ? 43242 : 43316)), -251658241))));
        var_22 += ((!(-2147483647 - 1)));
    }
    var_23 = -100;
    #pragma endscop
}
