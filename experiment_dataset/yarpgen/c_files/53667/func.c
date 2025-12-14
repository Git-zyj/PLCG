/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53667
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53667 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53667
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
    for (unsigned char i_0 = 1; i_0 < 17; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned char i_2 = 2; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_8 [(signed char)6] &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned char) (signed char)13)), ((unsigned char)252)));
                    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) -402792333)) ? (((arr_0 [i_0 + 1] [i_2 + 3]) ? (((/* implicit */int) arr_0 [i_0 - 1] [i_2 + 2])) : (((/* implicit */int) arr_0 [i_0 - 1] [i_2 - 2])))) : (((/* implicit */int) (signed char)4))));
                    var_14 = ((/* implicit */short) 402792317);
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_15 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_4 - 1] [i_1] [i_2] [i_1] [i_4 - 1]))) | (((((/* implicit */_Bool) -6288948752602219012LL)) ? (3318791959U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_8))))) : (((arr_14 [i_0] [i_0] [i_0] [i_0] [(unsigned short)2]) ? (((/* implicit */unsigned long long int) arr_4 [i_0 - 1])) : (8755356884811460191ULL)))));
                                var_16 &= ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)0)), (var_1)))) ? (((/* implicit */long long int) var_5)) : (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-35))))) ? (((/* implicit */long long int) 905278913U)) : (((-3569036210071219417LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)4))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((2172080172U) & (((/* implicit */unsigned int) ((-402792335) & (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))))))))));
}
