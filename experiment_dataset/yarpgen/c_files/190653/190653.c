/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_9 [6] [i_0] [i_1] [i_2] = ((!((min((min(3306262903, var_2)), ((((-2147483647 - 1) ? -67 : (arr_8 [i_0 - 1] [i_0] [i_0])))))))));
                    var_12 += ((var_9 <= ((288230341791973376 - (arr_3 [i_0 - 1] [i_0] [i_1])))));
                }
                var_13 = ((((!(arr_1 [i_1] [i_1]))) ? (((arr_1 [i_1] [i_1]) ? var_3 : -6006139774411007352)) : ((min(var_7, 8372224)))));
                var_14 = 6452027600287211091;
                var_15 = ((!13388) < (arr_7 [i_0 - 1] [i_0]));
                var_16 ^= (((min(((~(arr_4 [7] [7] [i_1]))), (((arr_4 [i_0 + 1] [i_0 + 1] [0]) + (arr_3 [i_0] [i_0] [i_1]))))) >= var_11));
            }
        }
    }
    var_17 = ((((min((min(var_8, 65535)), var_6))) || (!0)));
    var_18 = var_9;
    #pragma endscop
}
