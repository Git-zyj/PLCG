/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37322
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
    var_12 *= ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) var_11))) != ((((_Bool)1) ? (var_8) : (((/* implicit */long long int) 1040187392)))))) ? (((((/* implicit */_Bool) ((short) -1040187409))) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) 1091854665756339449LL)) && (((/* implicit */_Bool) 1091854665756339469LL)))))))) : (var_4)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    var_13 -= ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)64))) == (min((((/* implicit */unsigned long long int) 520192U)), (8622677738310119485ULL))));
                    var_14 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */unsigned long long int) (+(arr_0 [i_0] [i_0])))) / (max((5114721398969599227ULL), (((/* implicit */unsigned long long int) var_5)))))));
                    arr_9 [i_0] [(_Bool)1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) ((((/* implicit */int) var_0)) - (((/* implicit */int) arr_7 [i_2] [i_1] [i_0]))))), (((((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1] [i_2]))) - (1091854665756339428LL)))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 4; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_15 [(signed char)2] [i_1] = ((/* implicit */signed char) ((arr_12 [(short)13] [(short)13] [(unsigned short)5] [(short)13] [i_3] [(signed char)9]) ? (arr_0 [i_4 - 2] [i_3]) : (((long long int) 840822128))));
                                arr_16 [i_4 + 3] = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned int) arr_12 [i_0] [i_1] [i_0] [i_0] [i_4] [(signed char)13])), (min((2607602500U), (((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_0])))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_15 ^= ((/* implicit */_Bool) ((unsigned long long int) 2607602491U));
}
