/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44785
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
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 3; i_3 < 20; i_3 += 2) 
                    {
                        for (int i_4 = 3; i_4 < 21; i_4 += 3) 
                        {
                            {
                                var_14 = var_2;
                                var_15 ^= ((/* implicit */unsigned char) ((max((((2815000895224316120LL) ^ (2815000895224316112LL))), (((/* implicit */long long int) (signed char)11)))) << ((((~(((/* implicit */int) (signed char)-63)))) - (31)))));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */signed char) var_7);
                }
            } 
        } 
    } 
    var_17 = ((((/* implicit */long long int) ((/* implicit */int) var_1))) == (var_7));
}
