/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45439
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max(var_5, -99));
                var_11 = (max(var_11, ((((~var_8) << ((((var_10 ^ (arr_4 [i_0 - 1]))) - 3246541715)))))));

                for (int i_2 = 3; i_2 < 17;i_2 += 1)
                {
                    var_12 = -77;
                    var_13 = var_9;
                }
            }
        }
    }
    var_14 = 39245;
    var_15 = (((((-(var_2 | 109)))) || (((!30) < ((2096896 ? var_7 : 65535))))));
    var_16 = ((var_6 ? var_3 : (max(2602, 716336457))));
    var_17 = 353375578;
    #pragma endscop
}
