/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233075
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233075 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233075
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (-var_4 - var_1);

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        arr_3 [i_0] [i_0] = ((((-2132587494 ? (((-45 ? 218 : (arr_2 [i_0] [i_0])))) : (((arr_1 [i_0] [i_0]) * 13726913512528681264))))) ? (((1080863910568919040 > ((max(228341602, (arr_2 [i_0] [i_0]))))))) : -11682);
        var_12 &= ((-201076085 ? ((-23 ? 1 : 58863)) : 1223051614));
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                {
                    var_13 += (((((arr_0 [i_1 + 2]) ? 1452633040 : (arr_0 [i_1 + 2]))) >> ((((1 ? (arr_2 [i_1 - 1] [i_1 + 2]) : (arr_2 [i_1 - 1] [i_1 - 1]))) - 42168))));
                    arr_10 [i_0] [i_0] [i_2] = (arr_1 [i_0] [i_0]);
                    var_14 |= ((-(((((max(40740, var_2)))) + 4294967275))));
                    var_15 = (max(var_15, -4806033760104535));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 24;i_4 += 1)
                        {
                            {
                                var_16 = (((~var_9) - (arr_14 [i_1 + 1] [i_3] [i_2] [i_3] [i_4] [i_0] [i_4])));
                                arr_15 [i_3] [i_1 + 3] [i_1] [i_1] [i_1] = ((3650728693 < (!-1790747826)));
                                arr_16 [i_2] &= (((((var_3 / (arr_5 [i_0] [i_0] [i_0])))) ? (-3015417794677652433 / 1104490921) : (arr_5 [i_4] [i_1 + 3] [i_1 + 3])));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
