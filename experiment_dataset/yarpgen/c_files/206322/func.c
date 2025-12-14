/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206322
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206322 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206322
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
    for (short i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_1] [12U] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_7), (var_0))))) : (((var_11) % (((/* implicit */unsigned long long int) var_3))))))) ? (((((/* implicit */_Bool) (~(3616177568U)))) ? (((/* implicit */int) max(((unsigned char)112), (((/* implicit */unsigned char) var_9))))) : ((~(((/* implicit */int) (unsigned short)65535)))))) : ((+(((/* implicit */int) (unsigned char)144))))));
                    arr_10 [i_0] [i_0] [3U] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (max((7024512078039701933ULL), (((/* implicit */unsigned long long int) (_Bool)0))))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 1) 
                        {
                            {
                                arr_16 [i_0] [i_0] [i_0 - 1] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max(((unsigned short)29592), (min((((/* implicit */unsigned short) (signed char)-13)), ((unsigned short)65535)))))), (var_8)));
                                arr_17 [i_1] [i_0] [(signed char)23] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+((~(var_5)))))), (min((min((((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1])), (arr_13 [i_0 - 3] [i_1] [i_0] [i_1] [i_4]))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_13)))))))));
                            }
                        } 
                    } 
                    arr_18 [i_0] [(unsigned short)5] [i_0] = ((/* implicit */_Bool) var_13);
                }
            } 
        } 
    } 
    var_16 = ((/* implicit */signed char) var_11);
}
