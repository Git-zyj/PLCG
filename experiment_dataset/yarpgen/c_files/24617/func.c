/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24617
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_13 |= ((/* implicit */signed char) ((((/* implicit */int) ((unsigned short) (_Bool)1))) >> (((min((max((arr_0 [i_0] [i_1]), (((/* implicit */unsigned int) (signed char)127)))), (((arr_1 [i_1] [i_0]) * (var_2))))) - (18394819U)))));
                arr_4 [(short)3] = ((/* implicit */int) ((unsigned int) arr_2 [i_1]));
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_0] [i_1] [i_0]);
            }
        } 
    } 
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 13; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 13; i_3 += 3) 
        {
            for (unsigned char i_4 = 0; i_4 < 13; i_4 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) max((var_14), (min((arr_2 [i_2]), (arr_0 [i_3] [i_3])))));
                    var_15 -= ((/* implicit */unsigned char) (((~(((/* implicit */int) arr_10 [12])))) != (((/* implicit */int) (unsigned char)1))));
                    arr_16 [i_3] [i_3] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)127)) & (((/* implicit */int) arr_14 [i_2] [i_3] [i_3] [i_4]))))), (max((((/* implicit */unsigned int) arr_14 [i_2] [i_3] [i_2] [i_2])), (arr_2 [i_2])))));
                    arr_17 [i_3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned char) ((var_3) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                }
            } 
        } 
    } 
}
