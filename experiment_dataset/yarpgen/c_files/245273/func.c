/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245273
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
    var_19 = ((/* implicit */unsigned int) ((signed char) var_2));
    var_20 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)53109))));
    var_21 *= ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned int) ((signed char) (+(((/* implicit */int) (short)-1))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_22 = ((/* implicit */int) (+(((((/* implicit */_Bool) 3720580231862280105ULL)) ? (var_8) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535)))))));
        /* LoopNest 3 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 16; i_2 += 2) 
            {
                for (int i_3 = 2; i_3 < 18; i_3 += 2) 
                {
                    {
                        arr_9 [(signed char)14] [15] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) min((((long long int) ((((/* implicit */_Bool) arr_0 [(unsigned short)10])) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))), (((/* implicit */long long int) min((((((/* implicit */_Bool) 61490564U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)53129)))), (((/* implicit */int) ((var_9) || (((/* implicit */_Bool) (signed char)-15))))))))));
                        var_23 ^= ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 32767U)))) : ((-(3720580231862280100ULL))))))));
                        var_24 = ((/* implicit */unsigned char) 3720580231862280119ULL);
                        var_25 |= ((/* implicit */short) arr_0 [i_1]);
                    }
                } 
            } 
        } 
    }
}
