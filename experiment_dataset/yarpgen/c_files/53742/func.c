/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53742
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53742 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53742
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) (~(min((((/* implicit */int) arr_1 [i_0] [i_2])), (-1))))))));
                    var_16 = ((/* implicit */long long int) min((var_16), (min((((/* implicit */long long int) ((signed char) min((arr_0 [i_2]), (((/* implicit */unsigned int) var_5)))))), (min((((/* implicit */long long int) var_13)), (((((/* implicit */_Bool) 210619501)) ? (4566053180138336175LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))))));
                }
            } 
        } 
        var_17 = arr_4 [i_0];
        var_18 = ((/* implicit */int) ((signed char) max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (var_1) : (var_1)))))));
        arr_10 [i_0] = ((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(_Bool)1]))) % (var_7))));
    }
    /* LoopNest 2 */
    for (signed char i_3 = 0; i_3 < 17; i_3 += 3) 
    {
        for (int i_4 = 0; i_4 < 17; i_4 += 3) 
        {
            {
                arr_18 [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) ((var_2) & (((/* implicit */int) (unsigned short)65535))))))) : (((max((arr_0 [i_3]), (((/* implicit */unsigned int) (signed char)-117)))) << (((((/* implicit */int) max(((unsigned short)12), (((/* implicit */unsigned short) arr_8 [i_3] [i_4]))))) - (65497)))))));
                var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((_Bool) var_10)))));
                var_20 = ((/* implicit */signed char) var_13);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned long long int) ((var_11) ? (((var_13) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((((/* implicit */_Bool) 841188422)) || (((/* implicit */_Bool) var_5))))))) : (var_9)));
    var_22 ^= ((/* implicit */int) var_1);
}
