/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23575
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (long long int i_2 = 3; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 20; i_3 += 3) 
                    {
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 2) 
                        {
                            {
                                var_13 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_13 [i_1] [i_2 - 1] [i_1] [i_4 + 1] [i_4 - 2])), (var_0))))));
                                var_14 *= ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) (signed char)-34)))), ((~(arr_13 [i_0] [i_1] [i_2] [i_1] [i_1])))));
                                var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) (+((-(((((/* implicit */_Bool) 7934042151824469416LL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) : (262143LL))))))))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) (~((~(var_6))))))));
                }
            } 
        } 
    } 
    var_17 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)142)) && (((/* implicit */_Bool) -262158LL))));
}
