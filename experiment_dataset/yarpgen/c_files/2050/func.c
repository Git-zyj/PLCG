/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2050
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2050 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2050
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                var_11 = (~(var_8));
                var_12 = var_1;
                var_13 = max(((+(((2147483637) / (var_4))))), (((((/* implicit */_Bool) -839016250)) ? (-1027570486) : (-204732301))));
            }
        } 
    } 
    var_14 = ((/* implicit */int) max((var_14), (((((var_10) + (2147483647))) >> (((var_2) + (924997440)))))));
    var_15 = ((var_4) >> ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_2))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10; i_2 += 1) 
    {
        var_16 = var_10;
        /* LoopNest 2 */
        for (int i_3 = 2; i_3 < 9; i_3 += 3) 
        {
            for (int i_4 = 0; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) 
                    {
                        for (int i_6 = 3; i_6 < 9; i_6 += 3) 
                        {
                            {
                                var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) (!(((/* implicit */_Bool) ((int) 204732301))))))));
                                var_18 = ((/* implicit */int) min((var_18), (((((/* implicit */_Bool) 1306150195)) ? (204732278) : (arr_14 [i_2] [i_3 - 2] [i_4] [i_3 - 2] [i_4] [i_2])))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 10; i_7 += 2) 
                    {
                        for (int i_8 = 0; i_8 < 10; i_8 += 3) 
                        {
                            {
                                arr_23 [i_2] [i_3 - 2] [i_4] [i_2] [i_8] = ((((/* implicit */_Bool) var_1)) ? (var_2) : (((((/* implicit */_Bool) var_0)) ? (var_8) : (0))));
                                var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -2147483642)) ? (-1) : (204732299)))) ? (((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_7])) ? (-204732315) : (-204732315))) : (-1471569865)))));
                                var_20 = ((((((-535643043) + (2147483647))) >> (((1023) - (997))))) % (((arr_21 [i_2] [i_3 + 1] [i_2] [i_2]) >> (((var_5) - (1565392393))))));
                                var_21 ^= ((var_10) | (arr_21 [2] [i_3 - 1] [i_3 - 1] [i_4]));
                            }
                        } 
                    } 
                    var_22 &= (-(((var_1) << (((var_9) - (1473803526))))));
                }
            } 
        } 
    }
}
