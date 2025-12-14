/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246024
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
    var_13 = ((/* implicit */unsigned int) var_2);
    var_14 = ((/* implicit */_Bool) max((max((((((/* implicit */_Bool) var_7)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (max((var_8), (var_8))))), (((/* implicit */long long int) ((int) 12U)))));
    /* LoopNest 3 */
    for (signed char i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 4; i_1 < 10; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                        {
                            {
                                arr_14 [i_3] = ((/* implicit */unsigned char) min((0ULL), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24001))) : (-5899895846791220265LL))) << (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-59))) > (5899895846791220251LL)))))))));
                                var_15 = ((/* implicit */unsigned int) (!(arr_13 [i_0] [(_Bool)1] [(signed char)8] [i_0] [i_4] [i_0] [i_2])));
                            }
                        } 
                    } 
                    var_16 = ((/* implicit */unsigned short) (((+(((((/* implicit */_Bool) arr_7 [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (short)11021)))))) << (((/* implicit */int) arr_13 [i_0] [i_0 - 2] [i_1 - 4] [i_1 - 1] [i_1 - 3] [i_1] [i_1 - 3]))));
                }
            } 
        } 
    } 
}
