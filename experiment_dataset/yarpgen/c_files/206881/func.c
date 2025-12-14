/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206881
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
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                {
                    arr_11 [i_0 - 1] [i_1] [i_2] [i_2] = ((/* implicit */long long int) 14445442522362434846ULL);
                    arr_12 [(short)1] [i_1] [i_1] = ((/* implicit */int) (_Bool)1);
                    var_20 = ((((/* implicit */_Bool) 178526888U)) ? (178526888U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (short i_3 = 0; i_3 < 11; i_3 += 1) 
    {
        for (short i_4 = 0; i_4 < 11; i_4 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 4; i_5 < 10; i_5 += 4) 
                {
                    var_21 = ((/* implicit */unsigned int) ((min((((/* implicit */int) var_10)), ((+(((/* implicit */int) (_Bool)1)))))) != (((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_9) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))))) != (((/* implicit */unsigned long long int) 335895313)))))));
                    var_22 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((arr_0 [i_3]), (14445442522362434846ULL)))) ? ((+(var_12))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)141)), ((unsigned short)741))))))) | (((((/* implicit */_Bool) arr_16 [i_3] [i_5 - 2] [i_3])) ? (((-6626157302955867733LL) | (((/* implicit */long long int) ((/* implicit */int) (short)10595))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)75)) << (((((/* implicit */int) var_14)) - (52))))))))));
                    var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((_Bool) (((((_Bool)1) ? (((/* implicit */int) (signed char)-24)) : (((/* implicit */int) (_Bool)1)))) * (((((/* implicit */int) (signed char)34)) / (((/* implicit */int) var_14))))))))));
                }
                var_24 = ((/* implicit */short) max((2147483647), (((/* implicit */int) (signed char)-86))));
            }
        } 
    } 
}
