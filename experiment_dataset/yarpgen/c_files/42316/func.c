/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42316
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42316 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42316
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
    var_10 += ((/* implicit */unsigned long long int) (~((-(6)))));
    var_11 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (signed char)-1)), ((+(max((((/* implicit */unsigned long long int) var_5)), (var_4)))))));
    /* LoopSeq 3 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) /* same iter space */
    {
        var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)220))) + (1U))), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (short)(-32767 - 1))))), ((-(((/* implicit */int) var_7))))))))))));
        var_13 ^= ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)212))) : (((((/* implicit */_Bool) 132567445)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (133955584U))))));
        var_14 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) ((unsigned short) (_Bool)1))), (var_2)))) ? (((((/* implicit */_Bool) 402653184U)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)112))));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) min((var_7), (((/* implicit */short) var_6))))) ? (((3347793067731200318ULL) << (((((/* implicit */int) var_0)) - (38718))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)219)) << (((((/* implicit */int) var_8)) - (64))))))))));
        var_16 = ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned short)65526)))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (3147942483U) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)-22238))))) : ((-(var_9)))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15; i_3 += 2) 
        {
            for (long long int i_4 = 1; i_4 < 14; i_4 += 2) 
            {
                for (long long int i_5 = 3; i_5 < 13; i_5 += 4) 
                {
                    {
                        arr_15 [i_4] [i_4] [i_4 + 1] [i_4] [i_4] [i_4] = ((/* implicit */unsigned short) (-(2513107740953997190ULL)));
                        var_18 = ((/* implicit */unsigned char) (-(((/* implicit */int) (unsigned short)59148))));
                    }
                } 
            } 
        } 
    }
    var_19 = ((/* implicit */signed char) var_3);
}
