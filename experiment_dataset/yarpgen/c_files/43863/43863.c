/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43863
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43863 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43863
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 3; i_2 < 9;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_20 = (((((((-4231735400473722586 ? 0 : 12380879091974419706)) + var_9))) ? -1746230510 : (min(((59168 ? 684379789 : 12380879091974419692)), 16777215))));
                                arr_12 [i_1] = (((!30637) * (-2147483647 - 1)));
                                arr_13 [i_4] [i_3] [i_2] [11] [i_0] = (-11251 - 6373);
                            }
                        }
                    }
                }
                var_21 = ((((min(247, 648885297))) <= ((max(24, 1)))));
            }
        }
    }
    var_22 -= (((((var_18 ? var_9 : (-2059371571 / var_4)))) ? ((((((0 ? 13835058055282163712 : 648885279))) ? ((3822427694 ? 255 : (-2147483647 - 1))) : ((min(511, 9)))))) : ((1 ? (4611686018427387900 / var_19) : -24475))));
    #pragma endscop
}
