/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226429
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)106)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (558446353793941504ULL)));
                var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)101)) ? (((/* implicit */int) arr_2 [i_0] [i_1])) : (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1])) ? (((/* implicit */int) (short)-32749)) : (((/* implicit */int) (unsigned short)49738))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49736))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) arr_2 [i_0] [(signed char)9])) : (((/* implicit */int) (signed char)61))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_4 [i_0] [i_0] [i_1])))) : (((((/* implicit */_Bool) (unsigned short)49738)) ? (11024506646174521770ULL) : (((/* implicit */unsigned long long int) arr_3 [i_0]))))))));
                var_19 = ((/* implicit */short) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1] [i_1]))) - (-8542612772656828802LL))));
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-12175))) >= (5730159729020511140ULL)))) : (min((-1479552386), (((/* implicit */int) var_0)))))));
}
