/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41704
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
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        arr_2 [(signed char)12] [(signed char)12] &= ((/* implicit */short) 4095LL);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned char) (_Bool)1)))));
                    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 7903324245258890174ULL))));
                }
            } 
        } 
        var_12 = ((/* implicit */unsigned long long int) (((((_Bool)1) || (((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (signed char)72))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79))) : ((+(((((/* implicit */_Bool) 1ULL)) ? (2746760002U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-79)))))))));
    }
    var_13 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 14457190143801879430ULL)) ? (((/* implicit */int) (signed char)-79)) : (((/* implicit */int) var_9))))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)72))) : (max((((/* implicit */long long int) var_8)), (9223372036854775807LL)))))) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)14)))));
}
