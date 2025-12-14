/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247531
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247531 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247531
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
    var_13 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)18)) ? (((/* implicit */int) (unsigned short)13673)) : (((/* implicit */int) (signed char)18))));
    var_14 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -2)), (16990583414526463408ULL)));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (long long int i_1 = 4; i_1 < 20; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_2] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)4] [18] [18])) ? (min((12497880301360843949ULL), (((/* implicit */unsigned long long int) (short)16368)))) : (((/* implicit */unsigned long long int) (+(-3785867713547585790LL))))))) ? ((+(((((/* implicit */_Bool) (unsigned short)6368)) ? (14960520654041893691ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6343))))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_7 [(signed char)22] [3ULL] [3ULL] [(signed char)22])) ? (((/* implicit */int) var_0)) : (var_5))) % (var_11))))));
                    arr_10 [(short)14] [19U] [3LL] [i_2] = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) ? (((/* implicit */unsigned long long int) -1LL)) : (var_12)))) ? (arr_6 [(short)12] [i_1] [9]) : (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) var_7))));
                    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)156)) ? (8695419026706054888ULL) : (((/* implicit */unsigned long long int) 2307478118U))));
                }
            } 
        } 
    } 
    var_16 |= ((/* implicit */short) min(((unsigned short)39611), (((/* implicit */unsigned short) (short)496))));
}
