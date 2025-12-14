/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220969
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
    var_12 |= ((/* implicit */_Bool) var_7);
    /* LoopNest 3 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 18; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_4 [i_0 + 1])) ? (((/* implicit */int) arr_4 [i_0 - 1])) : (arr_5 [i_0 + 1] [i_1 - 1]))), (((/* implicit */int) arr_4 [i_0 - 1]))));
                    arr_9 [i_0 - 1] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (((((/* implicit */int) (signed char)11)) + (arr_3 [i_0] [i_1] [i_2]))) : (((/* implicit */int) (signed char)68)))), (((/* implicit */int) arr_7 [i_1] [i_1]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_3 = 3; i_3 < 14; i_3 += 4) 
    {
        for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_5 = 0; i_5 < 15; i_5 += 1) 
                {
                    for (unsigned short i_6 = 1; i_6 < 11; i_6 += 3) 
                    {
                        {
                            arr_18 [i_3 - 3] [i_3 - 3] [i_5] [i_3] [i_3] = var_3;
                            var_13 = ((/* implicit */int) ((min((((/* implicit */int) var_10)), (((int) 406273244U)))) < (((/* implicit */int) ((((((/* implicit */_Bool) -1471125337)) ? (406273235U) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) >= (((/* implicit */unsigned int) ((/* implicit */int) max((arr_15 [i_3] [i_4] [i_5] [i_6]), (var_3))))))))));
                        }
                    } 
                } 
                arr_19 [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_3 - 1] [i_3 - 1]))))) ? (max((((/* implicit */unsigned int) ((var_11) >= (((/* implicit */long long int) var_5))))), (((((/* implicit */_Bool) (unsigned short)56478)) ? (3888694077U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)105))))))) : (((/* implicit */unsigned int) (-(var_8))))));
                var_14 *= ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_3 [i_3 - 2] [i_3] [i_3 + 1])))) ? (((/* implicit */int) (short)16686)) : (((/* implicit */int) arr_11 [i_3] [i_3]))));
            }
        } 
    } 
}
