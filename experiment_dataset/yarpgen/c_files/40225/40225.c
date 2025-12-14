/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40225
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40225 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40225
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 17;i_3 += 1)
                    {
                        {

                            for (int i_4 = 4; i_4 < 15;i_4 += 1)
                            {
                                var_14 *= (-629340770209438760 > -985727647);
                                var_15 = (((((((((arr_6 [i_3] [i_2]) / var_8)) == (11782 + 0))))) < ((((58 & (arr_7 [i_4 - 4] [i_2]))) % ((((arr_9 [i_0] [8] [11] [i_1]) * 64)))))));
                            }
                            for (int i_5 = 0; i_5 < 1;i_5 += 1)
                            {
                                var_16 = (((((((((arr_6 [i_0] [i_1]) && 3)))) + (((arr_3 [i_3]) - (arr_4 [i_0]))))) | (((((-11783 && -5040579772617878711) || (131071 && 2321648915517957795)))))));
                                var_17 = (((0 & -25) != (((((115 + 1158804491) == (26 + -628880743)))))));
                            }
                            var_18 *= (((((((((arr_7 [i_0] [i_1]) > 2573439720))) >> (((var_6 % var_10) - 781151399))))) >= (((-11783 - 211397320) & (2321648915517957795 % 1059819398)))));
                        }
                    }
                }
                var_19 = (max(var_19, (((((((-75 > var_13) != (var_6 && 0)))) <= (((((var_12 / (arr_4 [i_1]))) != (67092480 > 3235147885)))))))));
            }
        }
    }
    var_20 = (((((0 && var_7) || (var_1 && var_5))) || (((var_13 || 252) && (var_7 && var_9)))));
    #pragma endscop
}
