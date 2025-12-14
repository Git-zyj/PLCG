/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225496
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225496 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225496
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
    var_11 = ((/* implicit */int) max((var_11), (((/* implicit */int) ((unsigned char) (signed char)-74)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */int) ((arr_2 [i_0]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        arr_4 [i_0] [i_0 + 1] = ((/* implicit */long long int) (+(arr_2 [i_0])));
        var_12 |= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)39)) / (((/* implicit */int) (unsigned char)99))));
        arr_5 [i_0] = var_9;
    }
    /* vectorizable */
    for (unsigned int i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_13 -= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (unsigned short)63488))))));
        /* LoopSeq 1 */
        for (unsigned int i_2 = 0; i_2 < 12; i_2 += 3) 
        {
            var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (+((-9223372036854775807LL - 1LL)))))));
            arr_11 [i_1] = ((/* implicit */signed char) ((((var_7) + (2147483647))) >> (((var_0) - (10314370689392368552ULL)))));
            /* LoopNest 2 */
            for (unsigned short i_3 = 1; i_3 < 11; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                {
                    {
                        arr_18 [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_14 [i_3 - 1] [i_2] [i_3 + 1] [i_1]))));
                        var_15 = ((((/* implicit */_Bool) -1388474544)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-2))));
                    }
                } 
            } 
        }
    }
}
