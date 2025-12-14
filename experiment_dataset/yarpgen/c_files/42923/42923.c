/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42923
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {
                {
                    var_19 -= -32757;
                    var_20 = (32767 > -6660131269114821626);
                    var_21 += ((-11 ? (max((arr_6 [i_0] [i_0 + 2] [i_0] [3]), (min(1125899906842623, 4064)))) : ((((max(4074, (arr_5 [i_0] [i_1] [13])))) ? (min(-2616710612587622320, 18445618173802708992)) : (((-(arr_3 [i_0]))))))));
                }
            }
        }
    }
    var_22 = ((((min(((var_16 ? 1255388760541279946 : 3811044942)), ((((-31 + 2147483647) >> (18445618173802708993 - 18445618173802708968))))))) ? (((!((min(0, -32766)))))) : 31679));
    var_23 = var_4;
    #pragma endscop
}
