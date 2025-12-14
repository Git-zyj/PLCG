/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19058
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
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_14)) ^ ((~(((((/* implicit */int) var_11)) ^ (((/* implicit */int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((arr_2 [i_0] [i_0]), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (signed char)-1))))) ? (((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)6)))) - (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_1 [i_0]))))) : (((long long int) arr_0 [i_0] [i_0]))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) 18446744073709551615ULL);
                    arr_11 [22LL] [i_0] [i_0] [14LL] = ((/* implicit */long long int) ((((/* implicit */int) max((max((((/* implicit */unsigned char) (signed char)-23)), ((unsigned char)255))), (((/* implicit */unsigned char) ((signed char) var_11)))))) == (((/* implicit */int) (signed char)1))));
                }
            } 
        } 
    }
}
