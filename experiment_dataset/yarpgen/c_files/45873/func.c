/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45873
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
    var_15 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)40))))) | (((/* implicit */unsigned int) ((var_13) ^ (((/* implicit */int) (signed char)31)))))))) ? ((~(((var_3) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) (signed char)30))))))) : (((/* implicit */long long int) ((/* implicit */int) var_2))));
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 2; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 15; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (short)30724)) ? (min((arr_0 [i_3]), (((/* implicit */unsigned int) (unsigned short)22080)))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)0))))));
                                var_17 = 1137293248;
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))), (((arr_1 [i_0]) & (arr_1 [i_0])))));
                    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) 3759695277U)) <= (min((max((2962652419915951827LL), (((/* implicit */long long int) var_10)))), (((/* implicit */long long int) 1172757374U))))));
                }
            } 
        } 
    } 
}
