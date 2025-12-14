/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195275
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] = 0;

                for (int i_2 = 3; i_2 < 6;i_2 += 1)
                {
                    arr_8 [i_1] [i_1] [i_1] [0] = ((((!(!var_13))) ? ((((((var_1 ? 8 : 89))) ? 167 : (max((arr_7 [i_1]), -86))))) : var_7));
                    arr_9 [i_0] [i_1] [i_1] = ((((((min(var_1, 4234686554)) >> (var_17 && -9049094947136296014)))) ? ((max(-4782770430395555834, -4782770430395555830))) : ((-4782770430395555848 ? ((var_7 ? var_17 : var_0)) : (((1 ? var_8 : 1)))))));
                    arr_10 [i_1] [i_1] [i_1] = ((var_10 ? ((-var_1 ? (((arr_1 [i_0]) ? var_12 : var_6)) : ((min(571020373, 167))))) : (((-var_10 ? (arr_7 [i_1]) : 161)))));
                }
                arr_11 [i_0] [i_0] = max((((var_8 ? (((117440512 ? 904356411 : var_6))) : (~2612641889)))), (max((var_9 ^ 147), ((var_5 ? (arr_0 [i_0]) : 1)))));
                arr_12 [i_0] [i_0] &= -1346336214595151271;
                arr_13 [i_0] [i_1] [i_1] = (min((min(2612641889, (!7))), ((((((1 ? var_5 : var_15))) ? ((min(140, 161))) : (((var_10 || (arr_0 [4])))))))));
            }
        }
    }
    var_19 = (min((((16696492773618683803 & 12716283951325471313) / -7377664604020162679)), ((max(var_16, (1 < var_7))))));
    #pragma endscop
}
