/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52850
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
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 4) 
        {
            {
                arr_6 [i_0] [i_1] = (~((-(((/* implicit */int) (unsigned short)65232)))));
                var_12 -= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_0]) : (arr_2 [i_1]))), (min((arr_2 [i_1]), (arr_2 [i_1])))));
                arr_7 [i_1] = ((/* implicit */signed char) ((unsigned long long int) min((arr_0 [i_1]), (arr_2 [i_0]))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 1; i_2 < 16; i_2 += 3) 
    {
        for (int i_3 = 0; i_3 < 17; i_3 += 4) 
        {
            {
                arr_14 [i_2] [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3])) ^ (((/* implicit */int) (unsigned short)65231))))) ? (((/* implicit */unsigned long long int) arr_12 [i_3] [i_2])) : (min((((/* implicit */unsigned long long int) arr_11 [i_2] [i_2] [0LL])), (arr_13 [i_2] [i_3]))))) - (((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_10 [i_2 - 1])), (arr_12 [i_3] [i_2 + 1]))))));
                arr_15 [i_2] [i_3] = ((/* implicit */unsigned long long int) (-(max((((/* implicit */long long int) min((((/* implicit */unsigned short) var_10)), (var_9)))), (((arr_11 [i_3] [i_3] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (short)32760))) : (arr_9 [i_2 + 1])))))));
                arr_16 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) (~(var_3))))) ? (((/* implicit */unsigned long long int) arr_9 [i_2])) : (max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_11 [i_2] [i_3] [i_3]))))), (((arr_11 [i_2] [i_2] [i_2 - 1]) ? (arr_13 [i_2] [i_2 + 1]) : (arr_13 [i_2] [i_3])))))));
            }
        } 
    } 
    var_13 = ((/* implicit */unsigned short) min(((~(var_5))), (((/* implicit */int) (!(((((/* implicit */long long int) var_1)) < (var_11))))))));
}
