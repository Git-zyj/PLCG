/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48832
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48832 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48832
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
    var_16 |= ((/* implicit */unsigned short) (-(((((((/* implicit */int) (signed char)-101)) + (2147483647))) >> (((((/* implicit */int) (short)-7563)) + (7573)))))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_17 = ((/* implicit */long long int) var_8);
        arr_3 [i_0] = ((((/* implicit */_Bool) (signed char)23)) ? (((/* implicit */int) (unsigned short)2313)) : (((/* implicit */int) (unsigned short)0)));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        var_18 = max((((/* implicit */unsigned int) arr_7 [i_1] [i_1])), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)50710))))) ? (754363814U) : (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */short) (signed char)-24)), ((short)-24642))))))));
        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)50727))) : (arr_1 [i_1]))))));
        arr_8 [i_1] [i_1] |= ((/* implicit */unsigned short) ((long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_2 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_1))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            var_20 = ((/* implicit */long long int) ((int) (short)-10276));
            var_21 -= ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) 134217727U)) ? (10810390286173212519ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)47272))))));
            arr_13 [i_1] [i_1] [i_2] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)12351)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_6 [i_1]))))) ? (arr_0 [i_2]) : (((/* implicit */long long int) (~(var_7))))));
            /* LoopSeq 4 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                arr_17 [i_1] = ((/* implicit */_Bool) arr_7 [i_1] [i_1]);
                var_22 = ((/* implicit */unsigned short) ((unsigned char) ((arr_16 [i_1] [i_1] [(signed char)8] [(signed char)8]) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)16))))));
            }
            for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
            {
                arr_21 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)14809)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))));
                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) arr_9 [6U] [i_2] [i_4]))));
            }
            for (unsigned short i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                arr_25 [i_1] [i_5] [i_5] [i_5] = ((/* implicit */signed char) arr_24 [i_1] [(signed char)8] [i_1] [i_2]);
                /* LoopSeq 3 */
                for (unsigned int i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    arr_29 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_1] [i_1] [i_1])) ? (var_10) : (arr_9 [i_6] [i_5] [i_2])));
                    arr_30 [i_1] [i_2] [i_5] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_4 [i_1])) ? (((/* implicit */int) arr_5 [i_2] [i_6])) : ((+(((/* implicit */int) (_Bool)1))))));
                }
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    arr_33 [i_1] [i_2] = ((/* implicit */unsigned short) ((int) arr_16 [i_7] [i_5] [i_2] [i_7]));
                    arr_34 [i_1] [i_7] [i_5] [i_5] &= ((/* implicit */unsigned short) -183464750);
                }
                for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                {
                    var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)120)) ? (-1425237647304398670LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58509)))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33961))) : (((((-2733814481958687850LL) + (9223372036854775807LL))) >> (((-8798179095332701414LL) + (8798179095332701420LL))))))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                    {
                        arr_40 [i_8] [i_8] [i_5] [i_8] [i_9] [i_9] |= ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */int) arr_38 [i_1] [i_9] [i_1] [i_9])) > (((/* implicit */int) (_Bool)0)))));
                        var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)35218)) ? (67108863ULL) : (9535307168338162271ULL)));
                    }
                    for (int i_10 = 0; i_10 < 11; i_10 += 4) 
                    {
                        var_26 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) arr_20 [i_1] [i_10] [i_1])))))));
                        var_27 = ((/* implicit */int) ((signed char) 18446744073709551615ULL));
                        arr_43 [i_1] [(signed char)9] [(signed char)9] [0U] [i_10] = ((/* implicit */long long int) var_6);
                        var_28 = ((/* implicit */short) ((((/* implicit */int) arr_5 [i_1] [i_2])) < (((/* implicit */int) arr_5 [i_1] [i_8]))));
                    }
                }
                var_29 += ((/* implicit */unsigned long long int) arr_6 [i_1]);
            }
            for (unsigned char i_11 = 0; i_11 < 11; i_11 += 4) 
            {
                var_30 = ((/* implicit */signed char) ((((/* implicit */int) arr_4 [i_1])) ^ (((/* implicit */int) (unsigned short)36125))));
                var_31 = ((/* implicit */int) (((_Bool)1) ? (((((/* implicit */_Bool) (signed char)-120)) ? (var_9) : (((/* implicit */unsigned long long int) arr_18 [i_1] [i_1] [i_1] [i_11])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12350)))));
            }
        }
        var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) (unsigned short)47093))));
    }
    for (short i_12 = 0; i_12 < 16; i_12 += 1) 
    {
        arr_50 [i_12] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (-1658550449) : (((/* implicit */int) var_11))))) & (var_3)))) ? (((((((/* implicit */_Bool) arr_49 [i_12])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_6))))) / (arr_1 [i_12]))) : (((/* implicit */long long int) max((3730243368U), (415534402U))))));
        var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((min((288089638663356416ULL), (11566964313620751948ULL))) ^ (((/* implicit */unsigned long long int) (~(arr_47 [i_12])))))))));
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25; i_13 += 4) 
    {
        var_34 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)2303)) ? (((/* implicit */int) (unsigned short)8154)) : (-469273744)));
        arr_53 [3LL] &= ((/* implicit */signed char) var_7);
    }
}
