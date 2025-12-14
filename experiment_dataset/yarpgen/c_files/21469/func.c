/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21469
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 8; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 1; i_1 < 9; i_1 += 2) 
        {
            var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_1])) >> (((/* implicit */int) (_Bool)0))))) : (((unsigned long long int) arr_3 [i_1] [i_0] [i_0]))));
            var_12 = ((/* implicit */short) ((((/* implicit */_Bool) 1411141898)) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (var_10) : (((/* implicit */unsigned int) 1411141898)))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -2955889617000751755LL))))))));
        }
        var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 4] [i_0 + 3] [i_0 + 3])) ? (1840836763U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58598)))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_9))))) : (((((/* implicit */_Bool) 15050696655268809730ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_0])))));
        var_14 &= ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) 1411141898)))))));
    }
    /* vectorizable */
    for (long long int i_2 = 0; i_2 < 17; i_2 += 3) 
    {
        var_15 &= ((/* implicit */int) ((((/* implicit */unsigned long long int) -902774846)) <= (((((/* implicit */_Bool) 2718089339U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (3396047418440741888ULL)))));
        var_16 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) 8658230659292172223LL)) ? (902774854) : (-1))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (signed char)16))))) ? (((((/* implicit */_Bool) (unsigned short)6937)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_2]))) : (12292286124200460177ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */long long int) -902774854)) != (35184372088831LL)))))));
        var_18 = ((((/* implicit */_Bool) 9123264962229442030LL)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) arr_6 [i_2])));
        arr_7 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-6))))) : (((((/* implicit */int) (unsigned char)241)) ^ (((/* implicit */int) arr_4 [i_2]))))));
    }
    var_19 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 5254293960796813836LL)) ? (17592186044415ULL) : (((/* implicit */unsigned long long int) -902774869))))))) ? (min((((/* implicit */unsigned int) min((var_5), (((/* implicit */short) (signed char)-17))))), (var_1))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)18)) : (((/* implicit */int) (unsigned char)240)))))))));
}
