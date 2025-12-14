/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232565
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((((1 ? -12 : ((14753 ? 37 : (-32767 - 1))))) < ((max((14729335843727609612 <= -38), var_3)))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                {
                    var_12 = (min(var_12, ((((((((min(1824061197, -3568648484071364691))) ^ (0 ^ 6813500970606969578)))) ? 12582 : 472051633)))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 22;i_4 += 1)
                        {
                            {
                                var_13 = (min(var_13, (((!(-9223372036854775807 - 1))))));
                                var_14 = (max(var_14, (min((((8 || (((5 ? 298894923 : 0)))))), (max(((221 ? -6249461238788638589 : 3822915662)), -32750))))));
                                arr_11 [i_1] = (((min((3717408229981942003 >= 3822915656), (2139095040 & 0))) - -63290));
                                var_15 = (max(var_15, ((((((3822915663 >> (472051651 - 472051626)))) == (((((((min((-127 - 1), 7310)))) != (0 * -32474))))))))));
                                arr_12 [i_4] [i_1] [i_2 + 1] [i_1] [i_1] [i_0] = 64326;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
