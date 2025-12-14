/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197374
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
    var_11 = (((~((~(255LL))))) & (((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)53364)) | (((/* implicit */int) var_9)))) | ((~(var_0)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_12 &= arr_2 [i_0];
                var_13 = 2002582106;
                var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) -2078248226)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) -223324499))));
                var_15 += ((/* implicit */long long int) ((max((var_5), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (var_0))))) < (((/* implicit */int) var_4))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_2 = 1; i_2 < 12; i_2 += 3) 
    {
        for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
        {
            {
                arr_11 [i_2 - 1] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)245)) ? (min((((((((/* implicit */int) arr_10 [(signed char)4] [i_3] [i_3])) + (2147483647))) >> (((((/* implicit */int) arr_1 [(signed char)2])) + (58))))), (((((/* implicit */_Bool) 2078248237)) ? (-2078248226) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) max((min((((/* implicit */unsigned short) var_4)), ((unsigned short)65535))), (((/* implicit */unsigned short) arr_8 [i_2 - 1])))))));
                arr_12 [i_2] [i_2] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) (unsigned char)151))))));
            }
        } 
    } 
}
