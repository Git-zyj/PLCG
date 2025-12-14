/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208002
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208002 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208002
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (!var_4);
    var_15 = ((((!((min(-150963240520144504, 150963240520144503))))) ? (((max(var_2, var_12)))) : (max(-32, ((max(-35, 2147483631)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_16 = (max(var_16, ((min(((((arr_9 [i_0] [i_1]) <= var_5))), (max(31, (((arr_10 [i_0] [i_1] [i_2] [i_3] [i_2] [i_1]) ? (arr_9 [i_0] [i_1]) : (arr_1 [i_0] [i_1]))))))))));
                            arr_11 [i_0] [i_1] = (((2827456410599468710 - 2827456410599468697) ? (((arr_10 [i_1] [i_2 - 2] [i_2 - 4] [i_2 - 3] [i_2] [i_2]) ? -1749684698 : (arr_10 [i_1] [i_2 + 1] [i_2] [i_2 - 2] [i_2] [i_3]))) : 0));
                        }
                    }
                }
                arr_12 [i_0] [i_1] = -2827456410599468681;
                var_17 = (max((!38), (min(1, 10623149284895466857))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    var_18 = (((max((max(150963240520144503, (-9223372036854775807 - 1))), (~1749684697))) << ((-(var_10 / 18446744073709551615)))));
                    /* LoopNest 2 */
                    for (int i_5 = 3; i_5 < 9;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 10;i_6 += 1)
                        {
                            {
                                var_19 = (((0 % -282659340) ? 1084286803 : var_5));
                                var_20 = var_4;
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
