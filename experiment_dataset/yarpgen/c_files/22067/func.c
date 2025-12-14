/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22067
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
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned char) (~(((/* implicit */int) (_Bool)0))));
        var_11 = ((/* implicit */unsigned int) var_8);
    }
    /* LoopNest 2 */
    for (short i_1 = 0; i_1 < 19; i_1 += 3) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 1) 
        {
            {
                arr_6 [4LL] [i_2] = ((/* implicit */unsigned char) arr_2 [i_1] [i_1]);
                var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)160))) >= (7183566751908796216ULL))))) != (((((/* implicit */_Bool) 0U)) ? (1635204845U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_1] [2])))))))) & (((((/* implicit */_Bool) arr_3 [i_1])) ? (((((/* implicit */int) (unsigned char)95)) << (((2163751221U) - (2163751216U))))) : (((((/* implicit */_Bool) arr_4 [i_2] [(unsigned char)7])) ? (var_9) : (((/* implicit */int) var_0)))))))))));
                var_13 = ((/* implicit */long long int) (((((_Bool)1) ? (((((/* implicit */_Bool) (unsigned char)95)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) % (((/* implicit */unsigned int) (-((-(((/* implicit */int) (unsigned char)95)))))))));
                arr_7 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)161)) ? (((/* implicit */int) var_5)) : ((+(((((/* implicit */_Bool) (signed char)120)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) arr_3 [i_2]))))))));
            }
        } 
    } 
}
