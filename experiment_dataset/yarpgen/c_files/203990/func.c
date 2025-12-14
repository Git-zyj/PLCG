/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203990
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203990 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203990
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 15; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_12 = ((/* implicit */long long int) min((var_12), (((/* implicit */long long int) arr_5 [i_0] [i_0]))));
                                var_13 = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_8)))));
            }
        } 
    } 
    var_15 = ((/* implicit */unsigned short) var_10);
    var_16 = ((/* implicit */unsigned short) min((var_16), (((/* implicit */unsigned short) var_0))));
    var_17 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-22))))) >> (((((/* implicit */int) var_11)) + (12510))))), (((/* implicit */long long int) var_5))));
}
