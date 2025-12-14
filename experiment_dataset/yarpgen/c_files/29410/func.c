/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29410
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
    var_16 = ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */unsigned short) (-(((arr_0 [i_0 + 1] [i_1 + 1]) / (arr_0 [i_0 + 1] [i_1 + 1])))));
                arr_6 [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) (~((~(((/* implicit */int) var_8))))))), (((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)26800)) & (((/* implicit */int) (signed char)127))))) ^ (2690751000U)))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_2 = 0; i_2 < 11; i_2 += 1) 
    {
        for (long long int i_3 = 1; i_3 < 7; i_3 += 3) 
        {
            for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
            {
                {
                    arr_16 [i_2] [i_3] [i_2] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) var_1)), ((~(((arr_1 [i_2] [(short)18]) << (((/* implicit */int) var_7))))))));
                    var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_2] [6LL])) || (((/* implicit */_Bool) arr_9 [i_3] [(short)6]))))) + (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (signed char)-119))))))))));
                    arr_17 [(short)6] [i_3] [i_2] [i_3] = ((((/* implicit */_Bool) ((arr_0 [i_3 + 4] [i_3 + 4]) - (arr_0 [8U] [i_3 - 1])))) ? (min((arr_0 [i_3] [i_3 - 1]), (((/* implicit */long long int) arr_13 [i_2] [i_3 + 2] [i_3 + 2])))) : (max((var_15), (((/* implicit */long long int) arr_13 [i_2] [i_3 + 4] [i_3 + 2])))));
                    arr_18 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) min((min(((unsigned short)26800), (((/* implicit */unsigned short) (signed char)127)))), (((/* implicit */unsigned short) (unsigned char)90))))) && (((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) arr_8 [i_2] [i_3 + 1]))))));
                    var_18 = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_3)), (arr_8 [i_2] [i_2])))) % ((~(arr_2 [i_3] [i_3] [i_2]))))));
                }
            } 
        } 
    } 
}
