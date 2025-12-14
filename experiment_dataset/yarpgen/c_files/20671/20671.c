/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20671
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((!((((min(4502885913085599582, var_17)) << (((var_19 >> var_3) - 1656733360924863117)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_4 [i_0] [10] = (min((4502885913085599582 != 13943858160623952026), ((min(13943858160623952044, (arr_0 [i_0]))))));
                var_21 = (3414278105 / 27384);
                var_22 = (((var_1 <= 4502885913085599596) ? (min((!32054), (arr_2 [i_1] [i_1 - 1] [i_0]))) : ((((3414278095 < 48) | 0)))));
            }
        }
    }
    var_23 = ((min((~12), (1534103614 - var_7))));
    var_24 = var_7;
    #pragma endscop
}
