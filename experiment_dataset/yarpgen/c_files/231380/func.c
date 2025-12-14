/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231380
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231380 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231380
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
    var_13 = ((/* implicit */_Bool) (unsigned short)46658);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 3; i_1 < 18; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */signed char) (~(((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)18878))) * (var_2)))));
            arr_5 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1 - 3])) ? (18339273027209980412ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) (unsigned short)46658)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-32))) : (var_1)))));
        }
        for (unsigned short i_2 = 3; i_2 < 18; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)210))))), (((((/* implicit */_Bool) (unsigned short)18878)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2]))) : (arr_1 [i_0]))))) ^ (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (signed char)97)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned short)46658)))) & (((((/* implicit */_Bool) (signed char)-123)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) (signed char)122)))))))))));
            arr_9 [3ULL] [i_0] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-121)) ? (((/* implicit */int) ((_Bool) ((var_9) ? (((/* implicit */int) (signed char)96)) : (((/* implicit */int) var_11)))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (arr_2 [i_0] [2ULL])))))))));
            arr_10 [i_0] [i_2] [i_2 - 2] = (-(((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)0)), (12914592316799176607ULL)))) ? (min((12914592316799176607ULL), (((/* implicit */unsigned long long int) (signed char)-123)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)94)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)121))))))));
        }
        /* vectorizable */
        for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
        {
            arr_14 [i_0] [(unsigned char)7] [i_3] = ((/* implicit */unsigned char) (-(2962299002805599966LL)));
            var_16 = ((/* implicit */unsigned long long int) (!(var_0)));
            arr_15 [i_3] = ((/* implicit */unsigned short) (unsigned char)32);
        }
        arr_16 [i_0] [(unsigned short)2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((6418832879139495808ULL), (((/* implicit */unsigned long long int) (short)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)65535)) * (((/* implicit */int) (_Bool)0)))))))) ? (-3593258223237496624LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)46657)))));
    }
    /* vectorizable */
    for (unsigned short i_4 = 0; i_4 < 11; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                    {
                        arr_26 [0ULL] [0ULL] [(signed char)10] [i_7] |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)68)) ? (arr_8 [20ULL] [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))));
                        arr_27 [i_5] [(unsigned short)4] [(unsigned char)8] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)11688))))) ? (var_3) : (arr_8 [i_6] [18ULL])));
                        /* LoopSeq 1 */
                        for (int i_8 = 4; i_8 < 10; i_8 += 2) 
                        {
                            var_17 = (!(((/* implicit */_Bool) ((unsigned long long int) var_1))));
                            arr_32 [i_8] [(signed char)6] [i_8 - 3] &= ((/* implicit */unsigned char) ((long long int) (-(((/* implicit */int) (unsigned short)46658)))));
                        }
                    }
                    arr_33 [i_4] [i_5] [i_6] [i_5] = ((/* implicit */unsigned short) var_6);
                }
            } 
        } 
        arr_34 [i_4] [i_4] = ((/* implicit */_Bool) (unsigned char)24);
    }
}
