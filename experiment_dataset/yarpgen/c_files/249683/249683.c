/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249683
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_11 = (max(var_11, (arr_0 [i_1 - 1] [i_0])));
            var_12 = (((min(-var_9, (((151 ? 33661 : -1))))) | ((((((13 ? 1 : -1904139127))) ? 11 : ((2 / (arr_0 [i_0] [i_0]))))))));
            var_13 = (((~((var_6 / (arr_3 [i_0]))))) ^ -122);
        }
        var_14 *= ((((max(4294967295, 1))) ? var_8 : -2856982992));
    }
    for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
    {
        var_15 = ((max(1, (arr_1 [i_2]))));
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 12;i_4 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 1; i_5 < 11;i_5 += 1)
                    {
                        for (int i_6 = 1; i_6 < 9;i_6 += 1)
                        {
                            {
                                arr_17 [5] [i_2] [i_5 - 1] [11] [i_3] [i_2] [i_2] = -1965684859;
                                var_16 &= (((max(var_3, var_3))));
                            }
                        }
                    }
                    var_17 *= 1;
                    var_18 ^= ((((min((65535 & -6), ((var_3 ? 126 : 1))))) ? (((-5580132 * 0) ? ((12 ? var_8 : -11)) : (((-58 ? 18 : 290368664))))) : -3));
                    var_19 = ((!-16) % var_8);
                }
            }
        }
        var_20 = (max(var_20, (((((var_4 ? -1 : 16777215)))))));
        arr_18 [i_2] = var_5;
    }
    var_21 = ((var_3 || ((((max(5095292550149952580, 61)) * (((min(140, 0)))))))));
    #pragma endscop
}
