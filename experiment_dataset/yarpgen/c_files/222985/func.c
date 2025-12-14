/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222985
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
    var_18 = ((/* implicit */unsigned long long int) ((signed char) (unsigned char)206));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 15; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1172635953U)) ? (((arr_1 [i_0]) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1172635953U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32745))))))) : ((-(((11213241566855674668ULL) & (5941902955364192241ULL)))))));
                    var_19 ^= ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_10)), ((~(18446744073709551615ULL)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)5)) ? (9223372036854775787LL) : (-9223372036854775788LL)))) : (((((/* implicit */_Bool) 1093023231840633169LL)) ? ((~(807250603382013176ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_0)), (-6311053530549293356LL)))))));
                }
            } 
        } 
    } 
    var_20 = ((/* implicit */signed char) ((var_1) % (min(((~(9223372036854775787LL))), ((-(-9223372036854775787LL)))))));
}
