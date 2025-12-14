/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208754
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208754 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208754
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = min(3247758051263131906, ((max(var_8, (!4234933658614282261)))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 1;i_3 += 1)
                {
                    {
                        var_17 = (max(var_17, (+-9125708585321728533)));
                        var_18 = (arr_2 [i_1]);
                    }
                }
            }
        }
        arr_10 [i_0] [i_0] = ((14211810415095269354 ? (arr_5 [i_0]) : ((((min(4234933658614282244, (arr_6 [i_0] [i_0]))) < ((9321035488387823083 ? var_13 : var_9)))))));
    }
    #pragma endscop
}
