/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239959
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239959 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239959
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
    for (long long int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_20 |= ((/* implicit */unsigned char) arr_0 [i_0 + 1]);
                arr_4 [i_0] [i_0] = ((((/* implicit */_Bool) (unsigned char)59)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) 9223372036854775807LL))) ? (((/* implicit */int) (unsigned short)6548)) : ((~(((/* implicit */int) var_12))))))) : (((((/* implicit */_Bool) (short)0)) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) : (((((/* implicit */_Bool) 0U)) ? (var_2) : (((/* implicit */long long int) 4294967295U)))))));
            }
        } 
    } 
    var_21 = max(((unsigned short)6548), (((/* implicit */unsigned short) var_19)));
    /* LoopNest 2 */
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 24; i_3 += 2) 
        {
            {
                arr_11 [i_3] [i_2] = ((/* implicit */long long int) min((max((((unsigned int) 4LL)), (((/* implicit */unsigned int) max((arr_9 [(_Bool)1] [i_3]), (var_6)))))), (((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned short) var_11))))))));
                var_22 = ((/* implicit */int) min((var_22), (((int) ((((/* implicit */_Bool) ((arr_5 [i_3]) >> (((((/* implicit */int) var_12)) - (15210)))))) ? (((((/* implicit */unsigned long long int) 4LL)) & (var_15))) : (((/* implicit */unsigned long long int) (+(-13LL)))))))));
                var_23 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((int) arr_8 [i_3]))) <= (((((/* implicit */_Bool) arr_8 [i_3])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_2]))) : (arr_5 [i_3])))));
                var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(9223372036854775807LL)))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */int) (short)23399)) >> (((5197353054417958952ULL) - (5197353054417958943ULL))))))) : (((/* implicit */int) ((_Bool) min((403932314452314871LL), (((/* implicit */long long int) (_Bool)1))))))));
            }
        } 
    } 
}
