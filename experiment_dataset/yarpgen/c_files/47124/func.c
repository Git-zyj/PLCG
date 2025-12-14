/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47124
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
    var_10 -= ((/* implicit */long long int) var_7);
    var_11 = ((/* implicit */unsigned int) ((var_5) << (((min((((((/* implicit */_Bool) var_6)) ? (9102897463596530120ULL) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_3)), (3138745639U)))))) - (3138745639ULL)))));
    /* LoopNest 3 */
    for (short i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    var_12 = (+(((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0])))) / (min((((/* implicit */long long int) (unsigned short)24576)), (var_5))))));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 17; i_4 += 2) 
                        {
                            {
                                var_13 = var_0;
                                var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_1)) : (9102897463596530120ULL)));
                                var_15 = ((/* implicit */unsigned char) arr_8 [i_1] [i_2] [i_3] [(_Bool)1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
