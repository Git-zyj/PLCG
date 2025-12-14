/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (!var_1);
    var_16 ^= ((min((var_3 / var_14), (var_11 / var_0))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_17 = (max(var_17, ((((!-96) ? ((((((arr_3 [i_0] [i_1] [i_2]) ? -117 : 107))) ? (min(var_0, 10104867107995147719)) : (arr_5 [i_0] [i_1] [i_2]))) : (((((((arr_0 [i_0] [i_0]) << (8341876965714403897 - 8341876965714403886)))) ? (((arr_3 [i_2] [i_2] [i_2]) ? 845705730 : -845705735)) : (max(666534989, 15922))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 20;i_4 += 1)
                        {
                            {
                                var_18 = ((~(min((-666534995 | 4749), 10104867107995147708))));
                                var_19 = ((!(((115 ? (arr_4 [i_4 - 3]) : (-32767 - 1))))));
                            }
                        }
                    }
                    var_20 *= ((127 / (((((arr_6 [i_1]) << 1)) & -7847997712129809658))));
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 1;i_5 += 1)
                    {
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((!(127 & var_3))))));
                                var_22 -= ((((1 ? var_1 : (arr_0 [i_0] [i_6]))) << (((6204994777986588359 & -666535001) - 6204994777868491390))));
                                var_23 = (min(var_23, (arr_6 [i_1])));
                                var_24 = (min(var_24, ((~((max((arr_0 [i_0] [i_0]), (arr_0 [i_5] [i_5]))))))));
                                arr_18 [i_5] [i_1] [i_2] [i_5] [i_6] = var_2;
                            }
                        }
                    }
                    arr_19 [i_0] [i_1] [i_2] = ((-845705754 / (((~255) ? (~-845705731) : 14))));
                }
            }
        }
    }
    #pragma endscop
}
