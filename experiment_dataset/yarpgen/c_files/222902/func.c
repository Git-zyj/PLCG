/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222902
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222902 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222902
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
    var_18 = ((/* implicit */short) ((((/* implicit */int) var_12)) + (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (1867759040U)))))))));
    var_19 ^= ((/* implicit */int) (_Bool)1);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned short) (signed char)42)), (var_14)));
                var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned short)65408)) : (((/* implicit */int) arr_1 [i_0] [i_1]))))) : (max((((/* implicit */unsigned int) var_6)), (var_0))))))));
                var_22 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)241)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)4263))) : (((((/* implicit */_Bool) (signed char)-42)) ? (268163244U) : (((/* implicit */unsigned int) var_13))))));
                var_23 = ((/* implicit */int) var_11);
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 4) 
        {
            {
                var_24 = ((short) (unsigned short)41211);
                arr_11 [i_2] [i_2] = ((/* implicit */unsigned char) var_9);
            }
        } 
    } 
}
