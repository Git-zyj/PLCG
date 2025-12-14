/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5009
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1317068903176130333LL)) ? (((/* implicit */unsigned long long int) 833025970U)) : (18446744073709551615ULL)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)9))));
        var_18 *= ((/* implicit */unsigned short) arr_2 [i_0]);
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((unsigned long long int) -1668201230)))));
        var_20 = ((/* implicit */short) ((((/* implicit */_Bool) (~(26ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_1 [i_1 - 1])) / (arr_2 [i_1 - 1])))) : (max((((/* implicit */unsigned long long int) arr_2 [i_1 - 1])), (arr_0 [i_1 - 1] [i_1 - 1])))));
    }
    /* LoopNest 3 */
    for (unsigned int i_2 = 1; i_2 < 8; i_2 += 1) 
    {
        for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
        {
            for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        var_21 ^= ((((/* implicit */_Bool) arr_16 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_3]))) : (arr_2 [i_4 + 1]));
                        var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)104)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_4 + 1] [i_2 + 1])))));
                        arr_19 [i_4] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_2 + 3])) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned char)113)))) : (((/* implicit */int) (_Bool)1))));
                        var_23 = ((/* implicit */signed char) 3400256808U);
                    }
                    var_24 = ((/* implicit */unsigned long long int) (~((+(((/* implicit */int) arr_10 [(_Bool)1]))))));
                    arr_20 [i_2] [i_4] = ((/* implicit */unsigned int) (signed char)2);
                }
            } 
        } 
    } 
}
