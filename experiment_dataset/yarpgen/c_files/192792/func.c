/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192792
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192792 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192792
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
    var_10 = ((/* implicit */int) var_0);
    /* LoopNest 3 */
    for (short i_0 = 2; i_0 < 15; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 17; i_2 += 1) 
            {
                {
                    var_11 = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) var_7)) : (-1)))), (((unsigned long long int) arr_0 [i_0] [i_2])))))));
                    var_12 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0 - 2])))))));
                    arr_10 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) (-(var_9)));
                    var_13 = ((/* implicit */unsigned int) max((((arr_3 [i_0 + 2]) ? (((/* implicit */int) arr_3 [i_0 + 1])) : (((/* implicit */int) (signed char)28)))), (var_4)));
                    arr_11 [i_0] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) min((max((((((/* implicit */int) (unsigned short)33041)) + (((/* implicit */int) var_3)))), (((var_8) / (((/* implicit */int) arr_0 [i_1] [i_2])))))), ((+(((/* implicit */int) (short)-3472))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_3 = 1; i_3 < 19; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
        {
            for (unsigned int i_5 = 0; i_5 < 20; i_5 += 1) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) ((max((((/* implicit */long long int) arr_12 [i_3] [i_3 + 1])), (var_0))) & (((/* implicit */long long int) var_5))));
                    var_15 -= ((/* implicit */_Bool) min((((/* implicit */int) (signed char)-119)), (((((/* implicit */_Bool) 16760832U)) ? (((/* implicit */int) (short)25109)) : (((/* implicit */int) (unsigned short)32494))))));
                    arr_19 [i_5] [i_4] [i_5] = ((arr_14 [i_4]) | (((/* implicit */int) arr_18 [i_3] [i_4] [i_5])));
                    arr_20 [i_5] [i_4] [i_5] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned short)58361)) ? (((/* implicit */int) arr_17 [i_3] [i_5] [i_3 + 1] [i_3 - 1])) : (arr_14 [i_3])))));
                }
            } 
        } 
    } 
    var_16 += ((/* implicit */int) ((unsigned short) (~((~(var_9))))));
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        for (signed char i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            {
                var_17 ^= ((/* implicit */int) (+(((((/* implicit */unsigned long long int) (~(16760832U)))) & (min((var_9), (((/* implicit */unsigned long long int) (short)-1193))))))));
                var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) > (var_8))))));
            }
        } 
    } 
}
