/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242972
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
    for (unsigned char i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((((/* implicit */_Bool) ((unsigned long long int) (signed char)-96))) ? (((/* implicit */int) min((((/* implicit */short) arr_3 [i_1])), (arr_4 [i_0 + 1])))) : (((/* implicit */int) (short)(-32767 - 1))));
                var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (short)-7533)), (arr_0 [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1])) >= (((/* implicit */int) arr_2 [i_0 + 1] [i_0 + 2] [i_0 + 1]))))) : (max((min((781922995), (((/* implicit */int) var_5)))), (max((((/* implicit */int) arr_1 [i_1])), (var_6))))))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((int) max((((/* implicit */int) arr_4 [i_0 + 3])), (-1387897183)))) : ((-((-(((/* implicit */int) arr_3 [i_1]))))))));
                var_18 = ((/* implicit */long long int) arr_3 [i_1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
    {
        for (short i_3 = 2; i_3 < 22; i_3 += 1) 
        {
            {
                var_19 = ((/* implicit */unsigned short) min(((~(((unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((signed char) arr_9 [i_3 - 2] [i_3 - 2])))));
                var_20 = ((/* implicit */_Bool) (((-(arr_7 [i_2] [i_3 + 1]))) | ((~(min((((/* implicit */int) var_8)), (var_6)))))));
            }
        } 
    } 
}
