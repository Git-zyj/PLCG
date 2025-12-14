/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33948
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
    var_20 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((unsigned long long int) var_12)) > (((/* implicit */unsigned long long int) min((-17LL), (((/* implicit */long long int) var_18))))))))) : (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (var_19))) & (((((/* implicit */unsigned long long int) 9223372036854775807LL)) + (18446744073709551603ULL)))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 2; i_0 < 20; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [i_0]))));
        var_21 = arr_1 [i_0 - 1];
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (~(-2515268672820328324LL)));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) arr_1 [i_0 - 2]))));
        var_23 += ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)144)) | (((/* implicit */int) arr_0 [i_0]))))) ? (((((/* implicit */_Bool) 16LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)0)))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)5)) ^ (((((/* implicit */_Bool) arr_6 [i_1])) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) arr_6 [i_1])))))))));
        arr_8 [i_1] = ((/* implicit */signed char) (((-(((/* implicit */int) (short)19)))) + (((((/* implicit */int) arr_4 [i_1])) + (((/* implicit */int) ((unsigned short) (_Bool)1)))))));
    }
    for (long long int i_2 = 3; i_2 < 8; i_2 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
        {
            arr_14 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)251)))))));
            var_25 ^= ((/* implicit */unsigned int) 25LL);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned short i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                arr_19 [i_2] [i_2] [10LL] [i_2] = ((/* implicit */unsigned char) arr_0 [i_3]);
                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-10272)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_2 - 3]))) : (arr_1 [i_2 + 3])))) ? (((/* implicit */int) arr_12 [i_2 - 2])) : (((/* implicit */int) (short)-9475))));
            }
        }
        var_27 = ((/* implicit */short) ((unsigned int) ((int) (-(((/* implicit */int) (_Bool)1))))));
        var_28 = ((/* implicit */int) arr_15 [i_2]);
    }
    /* LoopSeq 2 */
    for (unsigned int i_5 = 0; i_5 < 16; i_5 += 2) /* same iter space */
    {
        var_29 ^= ((/* implicit */unsigned char) max((max((max((8212591619097309475ULL), (((/* implicit */unsigned long long int) (signed char)(-127 - 1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [i_5] [i_5])) ? (arr_7 [i_5]) : (((/* implicit */int) (unsigned short)33609))))))), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_7 [i_5])) && (((/* implicit */_Bool) arr_7 [i_5])))), (((((/* implicit */_Bool) (short)-28509)) && (((/* implicit */_Bool) arr_4 [i_5])))))))));
        arr_23 [i_5] = ((/* implicit */unsigned long long int) (+(((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (signed char)-57)) + (67)))))))));
        var_30 -= ((/* implicit */unsigned char) (-(((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (unsigned char)16)) > (((/* implicit */int) (unsigned short)65535))))) > ((+(((/* implicit */int) arr_22 [i_5])))))))));
    }
    /* vectorizable */
    for (unsigned int i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
    {
        var_31 = ((/* implicit */signed char) arr_21 [i_6]);
        arr_26 [i_6] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_5 [i_6] [i_6])) ? (((/* implicit */int) arr_20 [i_6])) : (((/* implicit */int) arr_6 [i_6]))))));
        arr_27 [i_6] |= ((/* implicit */unsigned long long int) (short)-13306);
        var_32 = ((/* implicit */unsigned int) ((-10LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)14856)))));
    }
}
