/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47229
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
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] [i_1] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) var_4)) * (var_8))) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
                arr_6 [(unsigned char)6] = ((/* implicit */unsigned long long int) ((unsigned short) max((((/* implicit */long long int) var_9)), (3802037359529539620LL))));
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned short) var_1);
    var_15 = ((/* implicit */long long int) 4294967295U);
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        for (unsigned short i_3 = 0; i_3 < 24; i_3 += 4) 
        {
            {
                arr_12 [i_3] = ((/* implicit */unsigned int) arr_8 [i_2]);
                arr_13 [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) max((((/* implicit */int) (unsigned short)61122)), (var_1))))) ? (((var_4) - (max((((/* implicit */unsigned int) (short)20089)), (arr_10 [i_3] [i_3] [i_2]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
    {
        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) max((2617845399U), (((/* implicit */unsigned int) (unsigned char)129))));
                var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) max((((/* implicit */short) ((unsigned char) (short)2409))), (min(((short)-20089), (((/* implicit */short) (unsigned char)255)))))))));
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)20089)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) (short)2951))))) ? (((var_12) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) (_Bool)0)), (arr_2 [i_4]))))) : (((((/* implicit */_Bool) (short)-20089)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7))))) : (((/* implicit */long long int) var_10))));
            }
        } 
    } 
}
