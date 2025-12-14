/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196314
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            {
                arr_4 [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_1 [i_1]))))), (((((/* implicit */_Bool) (signed char)31)) ? (11073050710645575619ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20941)))))));
                arr_5 [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) (+(2370353102U)))), (((((/* implicit */long long int) (-(((/* implicit */int) var_8))))) + (((((/* implicit */_Bool) 16896369705257189828ULL)) ? (-6356646274742781891LL) : (6356646274742781878LL)))))));
            }
        } 
    } 
    var_12 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(6356646274742781894LL)))) ? (max((max((36028794871480320LL), (((/* implicit */long long int) (unsigned short)65535)))), (((/* implicit */long long int) (+(((/* implicit */int) var_8))))))) : (max((-6356646274742781883LL), (2929702156171710485LL)))));
    /* LoopNest 2 */
    for (short i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        for (unsigned short i_3 = 3; i_3 < 7; i_3 += 2) 
        {
            {
                var_13 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) max((-6356646274742781891LL), (((/* implicit */long long int) var_1)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)51))))) : (5142136330520672862ULL)));
                var_14 = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_0))))));
                arr_12 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((/* implicit */int) arr_2 [i_2]))))) / (max((((/* implicit */long long int) (unsigned char)133)), (1206072406395433519LL)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned int) (((_Bool)0) ? (6356646274742781878LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)55)))));
}
