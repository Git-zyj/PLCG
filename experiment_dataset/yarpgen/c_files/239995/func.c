/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239995
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239995 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239995
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
    var_11 = ((/* implicit */unsigned int) var_5);
    var_12 += ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 2; i_0 < 21; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) min((4294967295U), (((/* implicit */unsigned int) ((short) 11318231756390711680ULL))))))));
        var_14 *= ((/* implicit */signed char) min((((unsigned long long int) ((((/* implicit */_Bool) 1048512U)) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0)))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) -1958360339)) ? (((/* implicit */unsigned long long int) arr_0 [(short)23] [(short)23])) : (3505865163789423037ULL))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((2796717014U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-9919))))))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 4; i_2 < 23; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_15 = ((/* implicit */int) (((+(min((1498250281U), (((/* implicit */unsigned int) var_9)))))) - (134217216U)));
                        var_16 *= ((/* implicit */short) 2796717014U);
                    }
                } 
            } 
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-9925)) ? (((unsigned int) (signed char)115)) : (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 8159818797149335027LL)) ? (((/* implicit */int) (short)9907)) : (((/* implicit */int) arr_2 [23U] [i_0])))))))));
            var_18 += ((/* implicit */int) ((min((((unsigned int) 9693563834998176183ULL)), (2796717014U))) >> (((unsigned int) ((unsigned int) var_3)))));
        }
    }
}
