/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51589
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
    var_10 = ((/* implicit */unsigned char) ((short) var_2));
    var_11 = ((unsigned long long int) ((((/* implicit */_Bool) 21U)) || (((/* implicit */_Bool) var_0))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 17; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_12 = var_3;
                    var_13 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_3 [i_0])) >= ((-(((((/* implicit */_Bool) (unsigned char)86)) ? (((/* implicit */int) (unsigned char)169)) : (((/* implicit */int) (unsigned char)86))))))));
                    var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((int) ((unsigned long long int) (short)1041)))) && (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_2])) ? (((/* implicit */int) (short)-24450)) : (((/* implicit */int) var_8)))))))))));
                }
            } 
        } 
        arr_7 [i_0] = ((/* implicit */short) max((0ULL), (((/* implicit */unsigned long long int) (-(-3026952539500794306LL))))));
        /* LoopSeq 2 */
        for (short i_3 = 0; i_3 < 21; i_3 += 2) 
        {
            var_15 = ((/* implicit */signed char) ((39U) >= (((/* implicit */unsigned int) 7))));
            arr_11 [i_0] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned int) (((~(3741288118318483194ULL))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)122)))))), (((((/* implicit */_Bool) (+(3741288118318483193ULL)))) ? (((((/* implicit */_Bool) arr_3 [i_3])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)5))))) : (((((/* implicit */_Bool) -1711361539)) ? (arr_8 [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0])))))))));
            var_16 = ((/* implicit */int) (~((((+(arr_8 [i_3]))) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))))));
        }
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 21; i_4 += 1) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) ((signed char) (-(((/* implicit */int) arr_3 [i_0]))))))));
            arr_16 [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (short)-32761)) : (((/* implicit */int) (unsigned char)137))));
            /* LoopSeq 1 */
            for (unsigned char i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                var_18 ^= ((/* implicit */long long int) ((((((/* implicit */_Bool) (unsigned short)6547)) ? (((/* implicit */int) (unsigned char)59)) : (((/* implicit */int) arr_6 [12ULL] [i_4] [2] [i_5])))) != (((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_0])))))));
                /* LoopSeq 3 */
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    arr_21 [13] [i_4] [i_4] [(signed char)2] = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_0] [i_5]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)215)))))) : (((unsigned long long int) 13744366639043078411ULL))));
                    var_19 = ((/* implicit */unsigned long long int) min((var_19), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) (-(arr_8 [i_4])))) : (arr_19 [i_0] [i_0] [(short)14] [i_0])))));
                    var_20 *= ((/* implicit */short) arr_13 [i_4]);
                    arr_22 [i_0] [(unsigned short)10] [i_4] [i_4] [i_6] &= ((/* implicit */long long int) -127774244);
                    arr_23 [i_4] [i_4] [i_5] = (+(((arr_8 [i_0]) * (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6] [i_4] [i_0]))))));
                }
                for (signed char i_7 = 0; i_7 < 21; i_7 += 4) 
                {
                    arr_27 [i_4] [i_5] [i_4] [i_4] = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) (signed char)16)) >> (((3741288118318483194ULL) - (3741288118318483174ULL)))))));
                    arr_28 [i_0] [i_4] [i_0] = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)5)) > (((/* implicit */int) var_8)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_0] [i_4] [i_5]))))) : (((7ULL) >> (((/* implicit */int) arr_4 [i_0] [i_7] [i_5]))))));
                    var_21 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_3 [i_0])))))));
                }
                for (short i_8 = 0; i_8 < 21; i_8 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_9 = 0; i_9 < 21; i_9 += 2) 
                    {
                        var_22 *= ((/* implicit */unsigned long long int) var_1);
                        arr_35 [i_0] [(unsigned char)4] [i_4] [i_4] [i_8] [i_8] = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) 1ULL)) && (((/* implicit */_Bool) var_8)))));
                        var_23 = ((/* implicit */unsigned char) arr_14 [i_5] [i_8]);
                        var_24 ^= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_2 [7])) & (((/* implicit */int) var_4))))) / (((unsigned long long int) arr_4 [i_0] [i_0] [i_0]))));
                    }
                    for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                    {
                        arr_39 [i_0] [i_4] [i_0] [i_8] [i_4] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_3 [i_10]))));
                        arr_40 [i_4] [i_4] = ((/* implicit */signed char) (short)22117);
                    }
                    var_25 -= ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (arr_0 [18]))) && (((/* implicit */_Bool) (-(((/* implicit */int) (short)-5698)))))));
                }
                var_26 &= ((/* implicit */unsigned char) (-(9007199254478848LL)));
            }
        }
    }
    /* vectorizable */
    for (unsigned int i_11 = 0; i_11 < 14; i_11 += 1) /* same iter space */
    {
        arr_44 [i_11] = ((/* implicit */short) 18446744073709551598ULL);
        arr_45 [i_11] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (arr_33 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] [i_11]) : (arr_33 [i_11] [i_11] [i_11] [14U] [i_11] [i_11] [i_11])));
        /* LoopNest 3 */
        for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 2) 
        {
            for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 4) 
            {
                for (unsigned char i_14 = 0; i_14 < 14; i_14 += 3) 
                {
                    {
                        arr_56 [i_11] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (unsigned short)58988))))));
                        var_27 -= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_13 + 1]))) + (arr_42 [i_13 + 1])));
                        var_28 = ((/* implicit */unsigned char) max((var_28), (var_1)));
                    }
                } 
            } 
        } 
        arr_57 [i_11] [i_11] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
        arr_58 [6ULL] &= ((/* implicit */long long int) ((unsigned long long int) var_0));
    }
    for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) /* same iter space */
    {
        arr_62 [i_15] = ((/* implicit */int) (~(max((arr_32 [(unsigned char)20] [(unsigned char)20] [(short)6] [i_15]), (((/* implicit */unsigned long long int) (unsigned char)46))))));
        /* LoopSeq 3 */
        /* vectorizable */
        for (short i_16 = 2; i_16 < 12; i_16 += 3) 
        {
            var_29 = ((/* implicit */int) ((((/* implicit */_Bool) var_6)) ? (arr_32 [i_15] [i_15] [i_16] [11]) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_30 [i_15] [i_16] [i_16] [i_16])))))));
            arr_65 [i_16] = ((/* implicit */unsigned long long int) (short)16283);
        }
        /* vectorizable */
        for (short i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            arr_70 [i_15] [i_15] = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_17]))));
            var_30 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) 13)) ? (((/* implicit */unsigned long long int) 0U)) : (787534403936470784ULL)));
            arr_71 [i_15] [i_15] [i_17] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)134)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)6552)))))));
            arr_72 [i_17] [i_15] [i_15] = ((/* implicit */signed char) arr_36 [i_15] [i_15] [i_15] [i_15] [i_17] [i_17]);
            arr_73 [0ULL] [i_17] [0ULL] |= (~(((/* implicit */int) arr_63 [i_17])));
        }
        for (unsigned int i_18 = 0; i_18 < 14; i_18 += 3) 
        {
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_9 [i_15] [i_15] [i_15])))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))) ? (((/* implicit */unsigned long long int) arr_13 [6ULL])) : ((~((~(18446744073709551615ULL))))))))));
            arr_78 [12] &= ((/* implicit */signed char) (-(((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (max((3940534705053665970ULL), (((/* implicit */unsigned long long int) (short)15)))) : (((/* implicit */unsigned long long int) arr_76 [(unsigned char)2] [i_18]))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_19 = 1; i_19 < 13; i_19 += 2) 
        {
            for (unsigned long long int i_20 = 2; i_20 < 13; i_20 += 3) 
            {
                {
                    arr_83 [i_20] [i_19] [i_20] = arr_12 [i_15];
                    arr_84 [i_15] [i_15] [0ULL] [i_20] &= ((/* implicit */unsigned long long int) max(((~(((int) arr_26 [i_15] [i_20] [i_20] [i_15])))), ((~(1180952695)))));
                }
            } 
        } 
    }
    var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_6))));
}
