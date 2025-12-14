/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213160
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213160 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213160
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
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) max((var_7), (((/* implicit */unsigned long long int) arr_0 [i_0]))));
                arr_5 [(unsigned short)11] &= ((/* implicit */unsigned int) arr_3 [i_0] [i_0]);
                var_13 = ((/* implicit */_Bool) max((var_13), (((/* implicit */_Bool) max((((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), (((((/* implicit */_Bool) var_9)) ? (4294967284U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0])))))))), (((max((var_8), (arr_0 [(short)18]))) | (((/* implicit */long long int) ((((/* implicit */int) arr_3 [(unsigned char)11] [i_1])) * (((/* implicit */int) arr_3 [(signed char)9] [i_1]))))))))))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) max((var_7), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) max((var_3), (((/* implicit */short) var_5))))), (max((var_1), (((/* implicit */unsigned short) var_2)))))))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        for (unsigned char i_3 = 3; i_3 < 13; i_3 += 1) 
        {
            {
                arr_10 [i_2] [i_2] [i_3 - 3] = ((/* implicit */int) arr_6 [2U]);
                var_15 = ((/* implicit */_Bool) max((((((/* implicit */int) ((short) var_9))) - (2147483633))), (min((2147483615), (((/* implicit */int) (unsigned char)64))))));
                arr_11 [i_2] = ((((_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32767))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_2] [i_3 - 1]))) : (0ULL));
            }
        } 
    } 
}
