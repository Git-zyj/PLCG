/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240508
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240508 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240508
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    var_20 = ((2578215062 ? (arr_7 [i_1 - 1] [i_0 + 2] [i_0 + 1]) : ((max(60, 12377)))));
                    arr_9 [i_1 + 1] [i_1 + 1] [i_2] = (((6476786688334952798 >= -60) - (((arr_7 [5] [i_0] [i_2]) ^ (arr_8 [i_2] [i_2] [i_2])))));
                    var_21 = (arr_0 [i_0 - 2] [i_0 - 2]);
                }
                var_22 = (1539569183 | 32752);
            }
        }
    }
    var_23 = (((11719327779743790526 != 70) ? (!var_11) : ((var_2 + (var_16 & -965600938)))));
    var_24 *= -18;
    var_25 = ((1 ? 32743 : 230));
    #pragma endscop
}
