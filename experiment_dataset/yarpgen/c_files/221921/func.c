/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221921
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221921 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221921
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
    var_11 = ((/* implicit */signed char) 0U);
    var_12 |= ((/* implicit */signed char) var_0);
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_13 ^= ((/* implicit */long long int) (signed char)-22);
        var_14 = arr_1 [i_0];
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        var_15 ^= (~(min((((/* implicit */unsigned int) max((((/* implicit */unsigned short) (short)10396)), ((unsigned short)63719)))), (4294967284U))));
        var_16 = ((/* implicit */unsigned int) ((signed char) ((int) var_6)));
    }
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned short) arr_10 [i_2] [i_2]);
        var_18 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned char) arr_0 [2U])), (arr_9 [i_2])))))));
        var_19 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (arr_7 [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-22)))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_4 [i_2])))), (((((/* implicit */_Bool) min(((unsigned short)32767), (((/* implicit */unsigned short) (unsigned char)208))))) ? (((/* implicit */int) (unsigned char)208)) : (((/* implicit */int) (unsigned short)32768))))));
        /* LoopSeq 3 */
        for (int i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_20 = ((/* implicit */_Bool) 4294967295U);
            var_21 = ((/* implicit */int) var_1);
        }
        /* vectorizable */
        for (unsigned char i_4 = 0; i_4 < 10; i_4 += 4) 
        {
            /* LoopSeq 3 */
            for (unsigned int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                var_22 = ((/* implicit */signed char) ((_Bool) arr_5 [i_2] [i_5]));
                var_23 = (((+(var_10))) << (((/* implicit */int) ((arr_16 [i_2] [i_4] [i_5] [i_5]) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                var_24 &= ((/* implicit */_Bool) ((long long int) var_3));
                var_25 |= (signed char)47;
                var_26 = ((/* implicit */signed char) (((_Bool)1) ? (2820997069U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)10394)))));
            }
            for (unsigned long long int i_6 = 1; i_6 < 8; i_6 += 3) 
            {
                var_27 = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned char)115))));
                var_28 = ((/* implicit */_Bool) var_8);
            }
            for (unsigned int i_7 = 3; i_7 < 9; i_7 += 2) 
            {
                arr_24 [i_2] [i_4] [i_7] = ((/* implicit */unsigned int) arr_23 [i_2] [i_4] [i_7]);
                var_29 = ((/* implicit */unsigned int) 5312122428246936305ULL);
                arr_25 [(_Bool)1] [i_4] [(_Bool)1] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_7] [i_4] [(signed char)1])) ? (((((/* implicit */_Bool) (signed char)-108)) ? (var_10) : (((/* implicit */long long int) 0U)))) : (((var_10) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))))));
                var_30 = ((/* implicit */unsigned int) min((var_30), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_15 [i_4] [i_7 + 1] [i_7 + 1])))))));
            }
            var_31 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_4]))))))));
            var_32 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((845702243U) ^ (3199938194U))) : (((((/* implicit */_Bool) arr_0 [0U])) ? (arr_12 [i_2] [(_Bool)1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))));
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 10; i_8 += 4) 
            {
                var_33 = ((/* implicit */unsigned int) var_2);
                var_34 = ((/* implicit */unsigned int) (_Bool)1);
                var_35 = ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)250)) >> ((((~(arr_6 [i_2]))) - (2534684285U)))));
            }
        }
        /* vectorizable */
        for (unsigned int i_9 = 0; i_9 < 10; i_9 += 2) 
        {
            arr_32 [3U] [i_2] [i_9] = ((/* implicit */long long int) -1040001590);
            /* LoopSeq 4 */
            for (signed char i_10 = 0; i_10 < 10; i_10 += 2) 
            {
                var_36 = ((/* implicit */unsigned char) (+(var_10)));
                var_37 *= ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_2] [i_2] [(unsigned short)4] [(unsigned short)4]))) == (var_6))))) / (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6)))));
                var_38 = ((/* implicit */unsigned short) var_6);
            }
            for (int i_11 = 0; i_11 < 10; i_11 += 3) 
            {
                var_39 = ((/* implicit */unsigned short) (_Bool)1);
                var_40 = ((/* implicit */int) arr_37 [i_2]);
                arr_39 [i_2] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -3250464487192828854LL)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) || (((/* implicit */_Bool) var_1))))))));
                var_41 ^= ((/* implicit */unsigned char) 3803175235U);
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_42 = (~((~(var_0))));
                var_43 = ((/* implicit */short) ((((/* implicit */int) var_9)) >> (((/* implicit */int) ((signed char) var_9)))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
            {
                var_44 = arr_3 [i_9];
                var_45 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_28 [i_2] [i_9] [i_13])) / ((+(((/* implicit */int) (_Bool)1))))));
            }
            arr_46 [i_2] [i_2] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2] [i_2] [(unsigned short)9] [i_9])) ? (arr_16 [i_2] [i_2] [i_9] [i_9]) : (arr_16 [i_2] [i_2] [i_9] [i_9])));
            var_46 = ((/* implicit */long long int) ((signed char) (~(72057594037927935LL))));
        }
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
    {
        var_47 &= ((/* implicit */unsigned short) (signed char)115);
        /* LoopSeq 1 */
        for (int i_15 = 0; i_15 < 14; i_15 += 4) 
        {
            arr_53 [i_14] [i_15] [i_14] = ((/* implicit */short) max((min((max((var_10), (((/* implicit */long long int) var_3)))), (((/* implicit */long long int) 4077528251U)))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) >> (((32505856U) - (32505830U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (unsigned char)140)))) : (var_6))))));
            var_48 = ((/* implicit */int) max((507904U), (0U)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_16 = 0; i_16 < 14; i_16 += 3) 
        {
            var_49 = ((/* implicit */long long int) arr_51 [i_14]);
            arr_56 [i_14] [i_14] = ((/* implicit */unsigned char) arr_50 [i_14]);
        }
        var_50 &= ((/* implicit */unsigned char) var_8);
    }
}
