/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47205
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47205 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47205
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 1) 
    {
        for (unsigned short i_1 = 1; i_1 < 18; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    for (short i_3 = 3; i_3 < 18; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                arr_15 [i_3] = ((((/* implicit */int) (unsigned short)36040)) << (((((long long int) ((((/* implicit */_Bool) (short)-14048)) ? (2246752391U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)14047)))))) - (2246752378LL))));
                                var_11 = ((/* implicit */unsigned short) ((arr_5 [i_0] [i_1 + 1]) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_0 [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((arr_0 [i_0]) - (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_4] [i_4] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4] [i_4] [i_0 - 2]))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-14048)))));
                                var_12 = -1005178403763809010LL;
                            }
                        } 
                    } 
                } 
                var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_0 - 1])) ? ((-(((((/* implicit */_Bool) arr_8 [i_0])) ? (20ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))))))) : (20ULL)));
            }
        } 
    } 
    var_14 &= ((/* implicit */unsigned long long int) ((max((min((var_7), (var_7))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned int) var_2)) : (var_1))))) + (var_1)));
    var_15 = ((/* implicit */short) var_10);
}
