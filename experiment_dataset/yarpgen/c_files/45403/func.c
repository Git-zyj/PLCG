/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45403
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
    for (unsigned int i_0 = 1; i_0 < 16; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0 + 3] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_2)) >= (((/* implicit */int) var_6)))))) / (((((/* implicit */_Bool) 8323072U)) ? (8323060U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65512)))))));
        var_13 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_10))) ? (var_4) : (((/* implicit */int) (signed char)7))));
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0 + 2])) % (((/* implicit */int) arr_0 [i_0 + 2]))));
    }
    for (unsigned int i_1 = 1; i_1 < 16; i_1 += 4) /* same iter space */
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 2) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        var_14 ^= ((/* implicit */unsigned int) 1023);
                        var_15 = ((/* implicit */int) var_6);
                        arr_14 [i_1 + 2] [18U] [i_2] [18U] [i_4] &= ((/* implicit */unsigned char) (+(((/* implicit */int) arr_10 [i_1] [i_1] [i_3] [i_3] [i_4]))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)9] [i_1 - 1])) ? (arr_8 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_1] [(short)15] [13ULL] [13ULL])))))) ? (((((/* implicit */int) (unsigned char)232)) >> (((((/* implicit */int) (signed char)(-127 - 1))) + (136))))) : ((~(((/* implicit */int) var_1))))))) + ((~(63U))))))));
    }
    var_17 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) var_0)))) || (((((/* implicit */int) ((((/* implicit */_Bool) 0ULL)) || (((/* implicit */_Bool) (unsigned char)0))))) < (((((/* implicit */int) (unsigned short)65512)) >> (((var_8) - (13008631259975382954ULL)))))))));
}
