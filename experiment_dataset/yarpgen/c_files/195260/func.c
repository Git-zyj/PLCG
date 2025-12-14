/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195260
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
    var_16 = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_4))))))) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)9)))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        for (unsigned char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 1; i_2 < 21; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */long long int) (~(max((((unsigned long long int) var_3)), (11300492991504365673ULL)))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_2 + 2] [i_2])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_2 + 1] [i_1 + 1])) : (((/* implicit */int) arr_3 [i_1 - 2] [i_2 - 1] [i_1 - 2]))))) ? (((((/* implicit */_Bool) arr_3 [i_1 - 1] [i_2 + 3] [i_2 + 3])) ? (((/* implicit */int) arr_3 [i_1 + 1] [i_2 - 1] [i_2])) : (((/* implicit */int) arr_3 [i_1 + 1] [i_2 + 2] [i_2])))) : (((((/* implicit */_Bool) arr_3 [i_1 + 2] [i_2 + 3] [(short)2])) ? (((/* implicit */int) (unsigned short)57899)) : (((/* implicit */int) arr_3 [i_1 + 3] [i_2 + 3] [i_2]))))));
                    arr_10 [i_0] [i_0] = (+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) var_14)) : (var_10)))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_0]))) & (var_11))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 2; i_3 < 15; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 3; i_4 < 14; i_4 += 2) 
        {
            {
                arr_16 [i_3] [i_4] [i_3] = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_7 [i_3] [i_3] [i_3])), (arr_6 [i_4] [i_4] [i_3]))), (((/* implicit */unsigned int) arr_4 [i_4 - 3] [i_3] [(unsigned char)11]))));
                var_18 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((min((-2815837079870201639LL), (-8728717298401083465LL))), (((/* implicit */long long int) (unsigned short)33095))))), ((+((~(var_0)))))));
                arr_17 [7ULL] [i_4] = ((/* implicit */short) arr_8 [17U] [i_4]);
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) max((744662782783123355ULL), (((/* implicit */unsigned long long int) var_8))))) && (((/* implicit */_Bool) (+(var_9)))))))));
}
