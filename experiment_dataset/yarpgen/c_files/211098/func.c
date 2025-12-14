/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211098
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211098 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211098
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
    var_16 = ((/* implicit */short) (-(((/* implicit */int) (signed char)2))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2147483640)) ? (((/* implicit */int) (signed char)-90)) : (((/* implicit */int) ((signed char) (_Bool)1))))))));
            var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((arr_1 [i_0] [i_1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))))));
        }
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (signed char)65)) : (((/* implicit */int) var_8)))));
        var_20 ^= ((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_6)) - (155))))) + ((~(((/* implicit */int) (signed char)72)))));
    }
    var_21 = ((/* implicit */unsigned char) 14669288392304185802ULL);
}
