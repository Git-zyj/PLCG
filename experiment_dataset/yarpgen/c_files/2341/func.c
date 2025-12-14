/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2341
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
    var_16 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */long long int) var_8)) + (-9223372036854775785LL)))))));
    var_17 = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -9223372036854775762LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))) ? (((((/* implicit */_Bool) 9223372036854775791LL)) ? (9223372036854775750LL) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) -9223372036854775762LL)) ? (((/* implicit */int) var_5)) : (2119201256))))))));
    var_18 = ((/* implicit */long long int) (-(max((((((/* implicit */_Bool) -1)) ? (((/* implicit */int) (unsigned short)3942)) : (((/* implicit */int) (signed char)31)))), ((-(((/* implicit */int) (unsigned short)58592))))))));
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 4) 
            {
                {
                    arr_8 [i_0 - 1] [i_1] = var_11;
                    arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] = 2115972779U;
                    arr_10 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1] = ((/* implicit */unsigned long long int) var_2);
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        for (unsigned short i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            {
                arr_16 [i_3] [i_4] = ((/* implicit */short) var_14);
                arr_17 [(_Bool)1] = ((/* implicit */unsigned long long int) ((unsigned int) (+(min((2058254086), (((/* implicit */int) (unsigned short)61593)))))));
                arr_18 [2LL] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) ((var_2) ? (9223372036854775755LL) : (((/* implicit */long long int) 842222970))))) ? (((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775739LL)) || (((/* implicit */_Bool) (unsigned char)32))))) : (((/* implicit */int) var_11)))));
            }
        } 
    } 
}
