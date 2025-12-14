/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240602
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
    var_10 = ((/* implicit */unsigned short) ((var_8) <= (((unsigned int) min((((/* implicit */signed char) var_4)), (var_3))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 3; i_2 < 7; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 10; i_4 += 1) 
                        {
                            {
                                var_11 ^= ((/* implicit */signed char) (~((-(((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [8LL] [i_0] [i_0]))))));
                                arr_13 [i_0] [i_0] [i_0] [i_2] [(short)6] = ((/* implicit */short) (+((~(max((((/* implicit */unsigned int) (signed char)-35)), (var_8)))))));
                            }
                        } 
                    } 
                } 
                arr_14 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */_Bool) var_1)) && ((_Bool)0))))))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_5 [i_0] [i_1] [i_0]))))));
            }
        } 
    } 
    var_12 = ((/* implicit */long long int) var_5);
}
