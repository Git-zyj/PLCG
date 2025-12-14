/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52470
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52470 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52470
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
    var_17 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_5)) ? (var_10) : (((int) (unsigned char)0))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        for (short i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 1; i_2 < 19; i_2 += 4) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (unsigned char)253))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_5 [i_2 - 1] [i_0 - 1]))))) : (((unsigned long long int) (_Bool)0))));
                                arr_12 [i_4] [i_3] [i_1] [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] = ((/* implicit */int) (signed char)-118);
                            }
                        } 
                    } 
                } 
                var_19 = ((/* implicit */int) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_13)), (arr_11 [i_0 - 2]))));
            }
        } 
    } 
}
