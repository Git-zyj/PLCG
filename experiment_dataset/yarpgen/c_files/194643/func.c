/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194643
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194643 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194643
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
    for (unsigned char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) min((min((((/* implicit */long long int) arr_8 [14] [i_0 + 2])), (((long long int) var_13)))), (((/* implicit */long long int) -2005572303)))))));
                    arr_9 [i_0] [i_0 + 3] [i_0] [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_4 [i_1] [i_2])), ((+(min((arr_2 [i_1]), (((/* implicit */long long int) (_Bool)1))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) ((unsigned long long int) min((((var_9) ? (((/* implicit */int) (signed char)-3)) : (((/* implicit */int) var_7)))), ((-(((/* implicit */int) (unsigned char)193))))))))));
    /* LoopSeq 2 */
    for (signed char i_3 = 0; i_3 < 24; i_3 += 2) 
    {
        var_16 = min((((/* implicit */long long int) (signed char)-74)), (((((/* implicit */_Bool) (~(-234853970)))) ? (((long long int) -1231954732)) : (((/* implicit */long long int) ((unsigned int) arr_12 [i_3] [i_3]))))));
        var_17 ^= ((/* implicit */long long int) (~((-(((/* implicit */int) min((((/* implicit */unsigned char) var_3)), ((unsigned char)124))))))));
        var_18 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) (-(((/* implicit */int) (signed char)22))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)11905)))))) ? (((/* implicit */long long int) ((((/* implicit */int) (signed char)77)) * (((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) arr_12 [i_3] [i_3])) ? (951267780871815620LL) : (((/* implicit */long long int) 1447881599))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 3) 
    {
        var_19 = ((/* implicit */signed char) arr_11 [i_4]);
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) arr_11 [i_4]))));
        var_21 += ((/* implicit */long long int) (-(arr_13 [i_4] [i_4])));
    }
}
