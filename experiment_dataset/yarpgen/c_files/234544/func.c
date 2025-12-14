/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234544
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
    var_14 = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)50273))));
    var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)50273)) << (0ULL))))));
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 10; i_0 += 1) 
    {
        var_16 = ((/* implicit */_Bool) (+(((((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1])) / (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))));
        var_17 &= ((/* implicit */unsigned char) (~(2187595186863817348ULL)));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            for (unsigned int i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (((-(((/* implicit */int) arr_7 [i_0 + 1])))) - (((/* implicit */int) arr_7 [i_0 + 1])))))));
                    arr_10 [i_0] [8LL] = ((/* implicit */int) ((((/* implicit */_Bool) max((arr_9 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]), (((/* implicit */long long int) var_10))))) ? (var_1) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0] [i_0 + 1])) ? (((/* implicit */int) (_Bool)1)) : ((-2147483647 - 1)))))));
                }
            } 
        } 
        var_19 = ((/* implicit */unsigned short) var_7);
    }
    var_20 = ((((((/* implicit */unsigned long long int) 3093754680U)) ^ (2187595186863817348ULL))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)15246))))));
    var_21 = ((/* implicit */signed char) max(((unsigned short)26618), (((/* implicit */unsigned short) (short)28348))));
}
