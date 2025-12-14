/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201516
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
    var_19 = ((/* implicit */unsigned long long int) var_8);
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 4; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 2; i_3 < 17; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) var_9);
                                var_21 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_4)) ? ((+(5583356789360645936ULL))) : (((unsigned long long int) ((unsigned short) 2956610288U)))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) max((((((/* implicit */_Bool) -16)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (9007199254740991LL))), (((/* implicit */long long int) max((3807474636U), (((/* implicit */unsigned int) arr_7 [i_3 - 1] [i_2 - 3] [i_1] [i_0]))))))))));
                            }
                        } 
                    } 
                    arr_12 [i_0] [i_1] [i_1] [i_2 - 3] = ((/* implicit */signed char) arr_4 [i_0] [i_2]);
                }
            } 
        } 
    } 
}
