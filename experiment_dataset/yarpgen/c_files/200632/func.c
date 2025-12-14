/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200632
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200632 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200632
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
    var_10 = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (max(((-(((/* implicit */int) var_1)))), (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)55253))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        for (unsigned short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 22; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 22; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_11 = ((/* implicit */unsigned short) min((var_11), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)55253)) & (2059334328)))) ? (((((-9109970921672558511LL) + (9223372036854775807LL))) >> (((-1000272452) + (1000272455))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) -5537001638623580737LL)))))))))));
                                arr_12 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) 1526454313))), (max((((/* implicit */int) (unsigned short)6796)), (arr_9 [i_0 - 2] [i_2] [i_3] [i_4])))));
                                var_12 = ((/* implicit */long long int) (~(((/* implicit */int) ((unsigned char) 1716067528)))));
                                arr_13 [i_0 - 4] [i_0] [i_1] [(short)10] [i_3] [i_3] [i_4] = ((/* implicit */long long int) ((short) max((((/* implicit */long long int) ((((/* implicit */long long int) 1477006358)) != (-9109970921672558511LL)))), (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)225))) ^ (-9109970921672558511LL))))));
                                arr_14 [(_Bool)1] [i_3] [i_1] [(_Bool)1] = ((/* implicit */short) max((((2059334351) != (max((-71197312), (106753787))))), ((((+(((/* implicit */int) var_0)))) < (((/* implicit */int) ((arr_9 [i_4] [0LL] [i_1] [i_0]) <= (887631594))))))));
                            }
                        } 
                    } 
                    arr_15 [i_0] [i_1] [i_2] = ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)10283))))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (4941602926391312941LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (unsigned char)133)), (var_0))))));
                }
            } 
        } 
    } 
}
