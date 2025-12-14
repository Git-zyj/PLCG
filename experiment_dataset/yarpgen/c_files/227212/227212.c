/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227212
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227212 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227212
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                {
                    var_14 = max(((((45767 >> 1) - (-1679259044 & 127356192)))), (max(6298210772043851858, 67)));
                    arr_8 [i_0 - 1] [i_2] = ((((var_11 << (-5 + 25))) > -212844281));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_15 [i_0] [i_0] [i_2] [12] [i_0] = (2813860537 % 5679872510777847651);
                                var_15 = ((-1743520362 ? ((-2147483623 ? 721516567 : -5001078645603382475)) : ((((var_5 - var_5) ? var_0 : ((9682416945078471954 ? var_8 : 172)))))));
                            }
                        }
                    }
                    arr_16 [i_2] [i_1] [i_1] = ((var_9 < (((((1490059613 << (16626282715822663502 - 16626282715822663502))))))));
                }
            }
        }
    }
    var_16 = (((var_6 + var_6) ? (((-var_10 ? (246 - var_1) : (1364145648 < 0)))) : var_7));
    var_17 = ((((((var_4 ^ var_0) | (var_8 != var_1)))) != (!var_4)));
    #pragma endscop
}
