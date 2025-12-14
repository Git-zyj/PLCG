/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22104
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
    for (long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 8; i_1 += 3) 
        {
            for (unsigned int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                {
                    var_18 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_12))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_2 - 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))))))) : (((((/* implicit */unsigned long long int) -7900256644574486127LL)) & (11623185788557253702ULL)))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 7900256644574486134LL)) / (10236519480979036202ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_1 + 1])) ? (1867687126) : (((/* implicit */int) (unsigned char)11))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */long long int) var_1)) : (arr_0 [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (arr_5 [i_0] [i_1 + 1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))) < (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (arr_2 [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))))));
                    var_19 += ((((((/* implicit */_Bool) ((var_11) - (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_1] [i_2])) || (((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) 8U)) <= (8442021197698403262ULL)))))) % (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (2576555202278696630LL)))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) 9223372036854775807LL)) < (arr_4 [i_2])))) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) > (7900256644574486123LL)))))));
                }
            } 
        } 
    } 
    var_20 -= ((/* implicit */unsigned int) ((((((/* implicit */int) ((((/* implicit */int) var_10)) <= (((/* implicit */int) (unsigned short)65535))))) >> (((0ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))))) - (((((((((/* implicit */_Bool) var_17)) ? (var_1) : (((/* implicit */int) var_12)))) + (2147483647))) >> (((((((/* implicit */_Bool) var_15)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)244))))) - (1554133281U)))))));
}
