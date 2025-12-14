/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200701
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
    var_15 = ((/* implicit */unsigned short) min((var_15), (((/* implicit */unsigned short) ((unsigned int) min((((/* implicit */int) min((((/* implicit */signed char) var_13)), (var_10)))), (min((var_11), (var_11)))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 19; i_2 += 2) 
                {
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-4)) ? (((/* implicit */int) (signed char)83)) : (((/* implicit */int) (signed char)16))));
                                arr_14 [3ULL] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) max((((var_2) ? (((/* implicit */long long int) ((/* implicit */int) min((var_3), (((/* implicit */unsigned short) var_2)))))) : (max((((/* implicit */long long int) (signed char)-22)), (var_7))))), (((/* implicit */long long int) max((((unsigned short) (signed char)38)), (((/* implicit */unsigned short) (signed char)-20)))))));
                                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) (~(((long long int) 15573441031270750171ULL)))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) arr_0 [i_1]))));
            }
        } 
    } 
}
