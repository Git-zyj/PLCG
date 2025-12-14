/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24168
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24168 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24168
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0] = arr_0 [i_0] [i_0];
        var_20 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)49138)) ? (((/* implicit */long long int) 4294967287U)) : (7634861762947844109LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (11935753022046436108ULL) : (arr_1 [(unsigned short)4] [i_0]))))));
        var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) & (arr_0 [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [i_0] [0U])) ? (((/* implicit */int) var_16)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) (_Bool)0)))) < (((/* implicit */int) (unsigned short)16398)))))));
    }
    for (short i_1 = 0; i_1 < 10; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned short i_3 = 4; i_3 < 7; i_3 += 1) 
            {
                for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_22 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)0)) ? (((((((/* implicit */unsigned long long int) 7634861762947844119LL)) | (arr_8 [i_1] [i_1] [i_4]))) % (6510991051663115507ULL))) : (((/* implicit */unsigned long long int) ((((arr_7 [i_1] [i_1]) && (((/* implicit */_Bool) var_9)))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_4])) || (((/* implicit */_Bool) arr_3 [i_3 - 2]))))) : (((/* implicit */int) ((arr_1 [i_2] [i_3]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))));
                        var_23 += ((/* implicit */unsigned char) arr_1 [i_4] [i_1]);
                        var_24 *= ((/* implicit */signed char) ((arr_12 [i_1] [i_2] [i_1] [i_4]) ? (arr_10 [i_3 + 1] [i_3] [i_3]) : (((((/* implicit */_Bool) arr_5 [i_3 - 2] [i_3 - 2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_5 [i_3 + 3] [i_3 + 3] [i_1])))));
                        arr_13 [i_1] [i_1] [(_Bool)1] [i_1] [i_2] [i_1] = ((/* implicit */_Bool) var_19);
                        arr_14 [i_1] [i_1] [i_1] [i_2] [i_2] [i_1] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 4] [i_2] [i_3 - 1])) ? (((arr_8 [i_3 + 1] [i_2] [i_3]) << (((arr_8 [i_3 + 2] [i_2] [i_3 - 1]) - (4262755108622529267ULL))))) : (((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_2] [i_2])) ? (arr_8 [i_3 - 3] [i_2] [i_3]) : (arr_8 [i_3 - 4] [i_2] [i_3 + 1])))))) : (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 4] [i_2] [i_3 - 1])) ? (((arr_8 [i_3 + 1] [i_2] [i_3]) << (((((arr_8 [i_3 + 2] [i_2] [i_3 - 1]) - (4262755108622529267ULL))) - (8818434373249464563ULL))))) : (((((/* implicit */_Bool) arr_8 [i_3 - 2] [i_2] [i_2])) ? (arr_8 [i_3 - 3] [i_2] [i_3]) : (arr_8 [i_3 - 4] [i_2] [i_3 + 1]))))));
                    }
                } 
            } 
            var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) arr_7 [i_1] [i_1]))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 3; i_5 < 9; i_5 += 3) 
        {
            for (unsigned short i_6 = 0; i_6 < 10; i_6 += 3) 
            {
                for (int i_7 = 2; i_7 < 8; i_7 += 3) 
                {
                    {
                        var_26 = ((/* implicit */short) arr_1 [i_5 - 3] [(signed char)6]);
                        var_27 = ((((/* implicit */_Bool) arr_24 [i_5])) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (7634861762947844118LL) : (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)16398)) : (600535655)))) : (((((/* implicit */_Bool) var_5)) ? (arr_15 [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) var_0)));
                    }
                } 
            } 
        } 
    }
    for (short i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
    {
        var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-8)) & (((/* implicit */int) arr_18 [i_8] [i_8] [i_8]))))) ^ (((arr_1 [i_8] [i_8]) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_8])))))))) ? (((((/* implicit */_Bool) arr_25 [i_8])) ? (((/* implicit */int) ((arr_1 [i_8] [i_8]) > (((/* implicit */unsigned long long int) var_0))))) : (((/* implicit */int) arr_18 [i_8] [i_8] [i_8])))) : (((/* implicit */int) arr_21 [8U] [i_8] [i_8]))));
        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_8])) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_8])))))) ? (((((/* implicit */_Bool) arr_24 [i_8])) ? (7634861762947844101LL) : (((/* implicit */long long int) ((/* implicit */int) arr_24 [i_8]))))) : (((/* implicit */long long int) ((/* implicit */int) ((288230307432235008LL) != (288230307432235008LL)))))));
    }
    var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-84))) ^ (7634861762947844118LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))))) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned short)49142))));
    /* LoopSeq 2 */
    for (unsigned char i_9 = 4; i_9 < 13; i_9 += 1) 
    {
        /* LoopNest 2 */
        for (short i_10 = 0; i_10 < 15; i_10 += 3) 
        {
            for (int i_11 = 0; i_11 < 15; i_11 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_31 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned short)63893)) && (((/* implicit */_Bool) (short)28672)))) ? (((arr_32 [i_9] [i_9] [i_9] [i_9 + 2]) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))) : (((arr_32 [i_9] [i_10] [10ULL] [i_12]) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)232)))))));
                        arr_36 [i_11] [i_10] |= ((/* implicit */unsigned int) ((((/* implicit */int) arr_31 [i_9 - 3] [i_9] [i_9])) * (((/* implicit */int) ((arr_28 [i_9]) < (((/* implicit */unsigned long long int) -7634861762947844102LL)))))));
                        arr_37 [i_9] [i_10] [i_11] [i_11] [i_12] = ((/* implicit */unsigned char) arr_29 [i_9]);
                        var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) var_0))));
                        var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)255)) < (((/* implicit */int) (unsigned char)8)))))));
                    }
                    for (int i_13 = 0; i_13 < 15; i_13 += 2) /* same iter space */
                    {
                        var_34 = ((/* implicit */unsigned int) max((var_34), (((arr_27 [i_9] [i_10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((arr_32 [i_9 + 1] [i_9] [i_9] [i_9]) < (4491098107764683222ULL)))))))));
                        var_35 = ((/* implicit */signed char) (unsigned char)247);
                    }
                    for (int i_14 = 0; i_14 < 15; i_14 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned char) arr_30 [i_9]);
                        var_37 = ((/* implicit */unsigned char) var_17);
                        var_38 *= ((/* implicit */unsigned char) (signed char)73);
                        arr_42 [i_9] [(_Bool)1] [i_11] [i_11] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_9 - 1] [i_9 + 1] [(_Bool)1] [i_9])) ? (arr_34 [i_9 - 4] [i_9 + 1] [i_11] [i_9]) : (arr_34 [i_9 - 4] [i_9 - 4] [i_9 - 1] [i_9])))) ? (var_5) : (((/* implicit */unsigned long long int) ((arr_29 [i_9]) - (arr_29 [i_9]))))));
                    }
                    arr_43 [i_9] [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_30 [i_9])) ? (((/* implicit */int) (unsigned char)8)) : (((/* implicit */int) (unsigned char)234))))) != (((11935753022046436108ULL) | (((/* implicit */unsigned long long int) 3583365536U))))));
                }
            } 
        } 
        arr_44 [i_9] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_39 [i_9 + 1] [i_9 + 2] [i_9] [i_9] [i_9] [i_9 + 2])) ^ (((((/* implicit */int) arr_39 [i_9 + 1] [i_9] [(signed char)6] [i_9 + 1] [i_9] [i_9])) & (((/* implicit */int) var_2))))));
    }
    for (unsigned char i_15 = 0; i_15 < 21; i_15 += 3) 
    {
        arr_49 [i_15] = ((/* implicit */_Bool) ((((/* implicit */int) arr_48 [7U] [14U])) | (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_48 [i_15] [i_15]))))) != (-7634861762947844102LL))))));
        var_39 = ((/* implicit */unsigned long long int) (unsigned char)248);
        var_40 -= ((/* implicit */unsigned char) ((2777181042U) & (3583365536U)));
        arr_50 [i_15] [i_15] = ((/* implicit */signed char) ((((/* implicit */int) arr_47 [i_15])) ^ (((/* implicit */int) arr_48 [i_15] [20ULL]))));
    }
    var_41 = var_19;
}
