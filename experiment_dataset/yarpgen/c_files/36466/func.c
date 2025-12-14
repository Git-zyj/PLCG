/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36466
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36466 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36466
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
    var_17 = ((/* implicit */unsigned char) var_3);
    var_18 = ((/* implicit */int) min((var_16), (((/* implicit */long long int) var_10))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                var_19 = ((/* implicit */_Bool) ((unsigned short) (+(((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))));
                arr_5 [i_0] [(unsigned short)6] [i_0] = ((/* implicit */int) (+(((min((((/* implicit */long long int) var_14)), (var_8))) / (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned char)246)) : (((/* implicit */int) (signed char)80)))))))));
                arr_6 [i_0] [i_0] = ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)23)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_2)) : (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)252)))))) != ((-(((((/* implicit */_Bool) 32640)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)65535)))))));
                var_20 ^= ((/* implicit */unsigned short) (!((_Bool)1)));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 14; i_2 += 1) 
    {
        for (signed char i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            {
                arr_13 [i_3] = ((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_12 [i_2 + 3]))))));
                var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_9 [i_3])) : (((/* implicit */int) (signed char)-9))));
                arr_14 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((1048575U), (((/* implicit */unsigned int) (signed char)127))))) ? ((((_Bool)1) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)-116)))) : (((/* implicit */int) ((signed char) arr_9 [i_3])))))) ? (((((/* implicit */_Bool) (~(((/* implicit */int) arr_8 [i_3]))))) ? (min((((/* implicit */long long int) (unsigned char)253)), (var_6))) : (((/* implicit */long long int) (~(((/* implicit */int) (signed char)(-127 - 1)))))))) : (((((arr_11 [i_2] [i_2] [1LL]) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_2] [i_2] [i_3]))))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) (short)9960)) - (9929))))))))));
            }
        } 
    } 
}
