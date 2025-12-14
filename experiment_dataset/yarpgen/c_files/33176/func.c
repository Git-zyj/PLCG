/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33176
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
    var_13 = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)8))));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 4 */
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 4) /* same iter space */
        {
            var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)65534)))) : ((~(var_10))))) << (((/* implicit */int) (_Bool)1)))))));
            arr_6 [i_0] = ((/* implicit */int) (unsigned short)32822);
        }
        for (unsigned char i_2 = 0; i_2 < 21; i_2 += 4) /* same iter space */
        {
            var_15 = ((/* implicit */unsigned int) 9223372036854775777LL);
            var_16 = (unsigned char)225;
        }
        /* vectorizable */
        for (unsigned char i_3 = 0; i_3 < 21; i_3 += 4) /* same iter space */
        {
            arr_13 [i_0] [(unsigned short)12] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_0 + 3] [i_0 + 3]))));
            /* LoopSeq 2 */
            for (int i_4 = 0; i_4 < 21; i_4 += 4) 
            {
                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0 + 2])) ? (((/* implicit */int) ((unsigned short) (_Bool)1))) : (((/* implicit */int) ((((/* implicit */int) var_2)) != (((/* implicit */int) arr_3 [(short)9] [i_3])))))));
                var_18 = ((unsigned char) 1432724344U);
                var_19 = ((/* implicit */long long int) ((arr_14 [i_0 + 3] [i_0 - 2] [i_0 + 3] [i_0]) < (0ULL)));
            }
            for (unsigned short i_5 = 0; i_5 < 21; i_5 += 1) 
            {
                arr_18 [i_0] = ((/* implicit */long long int) arr_12 [i_0 + 1]);
                arr_19 [i_5] [i_3] [i_0 + 3] [i_0 + 3] = ((/* implicit */signed char) arr_12 [i_0]);
            }
        }
        for (unsigned int i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) /* same iter space */
            {
                arr_24 [i_7] [i_7] [i_7] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_7 [i_6] [i_7])) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_11 [i_0]))))))), ((+(1459855339U)))));
                arr_25 [i_0] [i_6] [i_7] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)22486)) >= (((/* implicit */int) (_Bool)0))));
                arr_26 [i_0] [i_0] [i_0] [i_0 + 1] |= var_6;
            }
            for (unsigned short i_8 = 0; i_8 < 21; i_8 += 1) /* same iter space */
            {
                arr_30 [i_0] [i_0] = ((/* implicit */int) (+(((((((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1] [i_8])) || ((_Bool)1))) ? (((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)171)))))));
                arr_31 [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) ((short) (unsigned char)168))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)61205)))) : (((/* implicit */int) ((short) arr_5 [i_0]))))));
                var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) 9223372036854775792LL))));
                var_21 -= ((/* implicit */int) arr_22 [i_0] [i_6] [i_6]);
            }
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)171)) ? (arr_4 [i_0 + 3] [i_6]) : (arr_4 [i_0 - 2] [i_6])))) ? (min((-659586086586345631LL), (((/* implicit */long long int) arr_7 [i_0] [i_0])))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_11 [i_0 - 1]))))))))));
        }
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((unsigned char) 1137960344)))));
    }
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 17; i_9 += 4) 
    {
        arr_35 [i_9] = ((/* implicit */short) (unsigned char)84);
        arr_36 [i_9] [i_9] = (_Bool)1;
    }
    var_24 += ((/* implicit */int) (+((-(((((/* implicit */_Bool) var_0)) ? (var_1) : (var_6)))))));
}
