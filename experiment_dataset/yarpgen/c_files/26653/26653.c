/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 &= (max((min(9223372036854775807, var_12)), (((var_4 ? ((2522632796661412885 ? var_0 : -1779916418266917725)) : (!var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_8 [i_2] [16] = (88 + var_6);
                    var_16 = (min(var_16, ((min((((~(!17794966582280878489)))), (min(var_9, 50627)))))));
                    var_17 = min(7, (arr_7 [i_0] [i_1] [i_2]));
                    var_18 = ((min(var_5, (((arr_5 [i_0] [i_1] [i_2]) >> (((arr_3 [i_0] [12] [i_2]) - 2554347626849994053)))))) - 65535);
                }
            }
        }
    }
    #pragma endscop
}
