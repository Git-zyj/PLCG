/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221048
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221048 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221048
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
    for (int i_0 = 4; i_0 < 16; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 19; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 19; i_3 += 1) 
                {
                    {
                        var_14 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((6189337563175743486LL), (((/* implicit */long long int) var_13)))))));
                        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)1792))) == (6189337563175743483LL))))) ? (((/* implicit */long long int) (-(3686491721U)))) : (max((((/* implicit */long long int) 3686491743U)), (var_5))))))));
                        var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 6189337563175743486LL))));
                        var_17 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned char) -6189337563175743484LL)))));
                    }
                } 
            } 
        } 
        var_18 *= ((/* implicit */unsigned short) max((((1910648368U) % (195608089U))), (((/* implicit */unsigned int) ((var_11) ? (((/* implicit */int) (unsigned char)70)) : (((/* implicit */int) (unsigned char)243)))))));
    }
    var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((var_11) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)73))))))))));
}
