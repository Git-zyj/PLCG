/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218407
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218407 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218407
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
    var_12 -= ((/* implicit */unsigned int) var_6);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((((((/* implicit */_Bool) 761074455U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_11)))), ((-(((/* implicit */int) (unsigned char)170))))))) & (((((/* implicit */_Bool) 373745911U)) ? (3533892841U) : (761074455U)))));
                arr_4 [i_1] [i_1] [i_1] = ((/* implicit */short) 307643869);
                arr_5 [i_1] = ((short) (_Bool)0);
                arr_6 [i_1] = ((/* implicit */_Bool) max((((unsigned long long int) (((_Bool)1) ? (3771840599246028257ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)105)))))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_11)) || ((_Bool)1)))), (((unsigned int) 394167085)))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) (_Bool)1);
        arr_10 [i_2] = ((/* implicit */unsigned short) ((unsigned char) arr_8 [i_2]));
    }
}
