/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197854
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (signed char i_1 = 2; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    var_11 = ((/* implicit */long long int) ((max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)-60)), (var_1)))), (((arr_1 [i_0] [i_0]) | (18446744073709551615ULL))))) ^ (((/* implicit */unsigned long long int) (-(((arr_2 [i_0] [i_1] [i_2]) + (((/* implicit */unsigned int) 0)))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] = ((/* implicit */unsigned char) min((((/* implicit */int) (signed char)-60)), (-1806163431)));
                                arr_16 [i_0] [i_1] [i_1] [i_0] = ((/* implicit */short) var_9);
                                var_12 = ((/* implicit */_Bool) (~(((unsigned long long int) (-(((/* implicit */int) (signed char)-60)))))));
                                var_13 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (-(arr_12 [i_1] [i_3] [i_2] [i_2] [i_1] [i_1 + 1] [i_1])))) && (((/* implicit */_Bool) ((((/* implicit */int) var_3)) + (((/* implicit */int) (unsigned short)37493))))))))) - (((((/* implicit */_Bool) ((unsigned long long int) (signed char)-60))) ? (((((/* implicit */_Bool) 0ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)220))))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (_Bool)1)), (5U))))))));
                                arr_17 [i_4] [i_1] [i_0] [i_1] [i_0] = ((/* implicit */signed char) arr_10 [i_1] [i_1] [i_1] [i_1] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */unsigned int) var_4);
    var_15 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) : (var_10))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)226)), (2127291682U)))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))));
}
