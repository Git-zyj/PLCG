/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45309
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_10;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((((-25816 ? var_18 : -86))))));
                arr_6 [i_0] &= (((min(-var_7, (!var_11)))) ? (((!((min(var_0, var_6)))))) : 0);
                arr_7 [i_1] [i_0] = ((-((max(1531327698, 12)))));
                var_21 = ((-1401608589 ? 1 : 10968435693889306333));
                var_22 = ((((((var_0 ^ 1) ^ (!511)))) ? ((min((65535 > 2139329292856774504), ((0 ? var_6 : 2090100133))))) : ((~((55 ? 12288 : 36028797018963968))))));
            }
        }
    }
    var_23 = ((((min(87, (var_2 * 3961397988)))) ? ((~(min(-1760041879485016224, 1)))) : ((((var_5 >= (var_16 && var_9)))))));
    #pragma endscop
}
