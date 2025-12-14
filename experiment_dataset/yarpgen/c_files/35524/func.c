/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35524
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35524 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35524
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
    var_14 |= ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_9 [(_Bool)1] &= ((/* implicit */_Bool) max((max(((((_Bool)1) ? (arr_5 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))), (var_4))), (((/* implicit */long long int) arr_8 [i_0] [(_Bool)1]))));
                    var_15 &= ((/* implicit */unsigned int) min(((-(((unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */int) arr_1 [i_0] [i_2])), (arr_8 [i_1] [16])))) ? (((((/* implicit */_Bool) 5264132233515897045LL)) ? (((/* implicit */long long int) arr_2 [(signed char)2])) : (arr_3 [i_2]))) : (arr_5 [i_2] [i_0] [i_2]))))));
                    var_16 += (signed char)75;
                }
            } 
        } 
        var_17 |= 2098794790;
    }
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_12 [i_3] [i_3] &= 0LL;
        var_18 *= ((/* implicit */unsigned int) max((-5264132233515897038LL), (max((((/* implicit */long long int) ((((/* implicit */int) (signed char)-77)) - (((/* implicit */int) (signed char)-77))))), (0LL)))));
        var_19 = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (signed char)75)) >> (((((/* implicit */int) (signed char)76)) - (52))))))))) << (((((((/* implicit */_Bool) min((-3673444763214781108LL), (-1LL)))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)84))) : (((long long int) (_Bool)1)))) - (75LL)))));
        arr_13 [i_3] [i_3] |= ((/* implicit */_Bool) arr_1 [i_3] [i_3]);
        var_20 += ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-78)) ? (((long long int) max((577601292U), (((/* implicit */unsigned int) arr_1 [i_3] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_3])) && ((!(((/* implicit */_Bool) -4205227064780262306LL))))))))));
    }
    var_21 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (signed char)-57)) ? (0ULL) : (var_8))))) ? (((/* implicit */int) (signed char)-29)) : ((~((((_Bool)0) ? (((/* implicit */int) var_13)) : (1020)))))));
}
