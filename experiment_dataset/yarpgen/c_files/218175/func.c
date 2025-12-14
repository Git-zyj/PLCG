/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218175
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
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 3; i_1 < 10; i_1 += 2) 
        {
            {
                arr_5 [i_0] [i_1] [i_1 + 1] = ((/* implicit */unsigned char) (~((~(((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0 + 3])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))))));
                var_15 *= ((/* implicit */short) (+((((+(((/* implicit */int) var_5)))) - (min((arr_2 [i_1]), (((/* implicit */int) var_11))))))));
                var_16 = ((/* implicit */long long int) arr_0 [11U] [i_0]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_2 = 3; i_2 < 11; i_2 += 1) 
    {
        for (unsigned short i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            {
                arr_11 [i_2] [i_3] [i_3] = ((unsigned short) min((((unsigned long long int) var_3)), (((/* implicit */unsigned long long int) (-(var_9))))));
                var_17 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? ((-(((/* implicit */int) (unsigned char)142)))) : (min((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_7 [(_Bool)1])) : (((/* implicit */int) arr_7 [i_3])))), ((-(((/* implicit */int) arr_10 [i_2] [i_3] [4LL]))))))));
                arr_12 [i_2 - 3] = ((/* implicit */_Bool) min((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)255)))), (1551683638)));
                var_18 = ((/* implicit */_Bool) arr_6 [i_3]);
            }
        } 
    } 
}
