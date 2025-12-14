/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248685
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248685 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248685
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = ((((/* implicit */int) (signed char)69)) ^ (max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0])))));
        arr_3 [i_0] = ((/* implicit */short) 639214012);
        arr_4 [i_0] [i_0] = (+(((/* implicit */int) (signed char)69)));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) /* same iter space */
    {
        var_16 -= ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_5 [i_1] [i_1]) + (18446744073709551609ULL)))) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((((/* implicit */int) arr_0 [i_1])) - (((/* implicit */int) arr_0 [i_1]))))));
        var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) arr_0 [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_0 [i_1])) != (((/* implicit */int) arr_0 [i_1]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [i_1]))))))))));
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 21; i_2 += 2) 
        {
            var_18 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((var_12) % (((/* implicit */unsigned long long int) ((/* implicit */int) (short)30466))))) >> (((((/* implicit */int) (unsigned char)240)) & (((/* implicit */int) (unsigned char)16))))))) || (((/* implicit */_Bool) (-(max((((/* implicit */long long int) (_Bool)0)), (9223372036854775792LL))))))));
            arr_11 [i_2] [(signed char)11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((_Bool) 5986640640402979701ULL))) > (((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_2])) && (((/* implicit */_Bool) arr_7 [i_2])))))));
        }
        /* vectorizable */
        for (unsigned int i_3 = 2; i_3 < 20; i_3 += 1) 
        {
            arr_16 [i_1] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_7 [i_3 + 1])) || (((/* implicit */_Bool) 4294967295U))));
            arr_17 [i_1] [i_1] [(signed char)8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_13 [i_3 - 2] [i_3] [i_3 - 1]))));
            arr_18 [i_1] [i_1] [i_1] = ((((/* implicit */int) arr_10 [i_3 - 1] [i_3 - 2] [i_3 + 1])) + (((/* implicit */int) arr_10 [i_3 - 2] [i_3 - 2] [i_3 + 1])));
        }
    }
    for (unsigned long long int i_4 = 0; i_4 < 21; i_4 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) arr_0 [i_4]);
        var_20 = ((/* implicit */unsigned char) (+(((arr_9 [i_4] [i_4] [i_4]) ? (((/* implicit */int) arr_15 [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_15 [i_4] [i_4] [i_4]))))));
        arr_22 [i_4] = ((/* implicit */unsigned char) ((18446744073709551615ULL) != (((/* implicit */unsigned long long int) (~(((arr_13 [i_4] [i_4] [i_4]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32967)))))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_25 [i_5])) | (((/* implicit */int) arr_25 [i_5])))) ^ (((((/* implicit */int) arr_10 [i_5] [i_5] [(signed char)5])) - (((/* implicit */int) (_Bool)1))))));
        var_22 |= ((/* implicit */unsigned long long int) arr_13 [i_5] [i_5] [i_5]);
    }
    var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((var_1) - (14330229336321769491ULL)))));
}
