/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200697
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        for (long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))), (((((/* implicit */unsigned int) ((((/* implicit */int) var_4)) >> (((((/* implicit */int) (unsigned char)152)) - (146)))))) * (3630266088U)))));
                                var_13 = ((/* implicit */long long int) var_10);
                            }
                        } 
                    } 
                } 
                arr_15 [i_0] [i_1] [(unsigned char)5] = ((/* implicit */long long int) var_1);
            }
        } 
    } 
    var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2119169530U) ^ (((/* implicit */unsigned int) var_7))))) ? (-5344566102614176979LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))) ? (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_7)))) ? ((+(((/* implicit */int) var_3)))) : (-849607599))) : ((+(((/* implicit */int) var_4))))));
}
