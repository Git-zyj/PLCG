/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21760
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
    for (unsigned int i_0 = 1; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_14 = ((/* implicit */int) ((((/* implicit */_Bool) (((~(((/* implicit */int) arr_0 [i_0])))) * (((arr_0 [6ULL]) ? (((/* implicit */int) arr_0 [(unsigned char)7])) : (((/* implicit */int) arr_0 [i_0 + 1]))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0 + 2]))))) : (max((18446744073709551615ULL), ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)53646))) : (0ULL)))))));
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0])))) & (((((/* implicit */int) arr_0 [i_0 - 1])) + (((/* implicit */int) arr_2 [i_0]))))));
        arr_4 [i_0] = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) ((_Bool) (unsigned short)1023)))));
        var_16 -= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) 18446744073709551615ULL))))), (arr_6 [(unsigned short)8])));
    }
    for (unsigned int i_2 = 1; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_11 [i_2] [i_2] = var_6;
        var_17 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (1152921504606846975ULL) : (((/* implicit */unsigned long long int) var_5))))) ? (((/* implicit */int) ((((/* implicit */_Bool) 14383498374308722614ULL)) && (((/* implicit */_Bool) arr_9 [i_2] [i_2]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [14LL] [i_2])))))))) ? (((long long int) ((((/* implicit */_Bool) arr_10 [i_2] [i_2])) ? (arr_10 [(_Bool)1] [(signed char)5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [(short)12])))))) : (((/* implicit */long long int) max((((/* implicit */int) arr_6 [(unsigned short)14])), (((((/* implicit */_Bool) arr_9 [12U] [i_2])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_5 [i_2] [i_2])))))))));
        var_18 = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_5 [i_2 - 1] [4LL]))), (((((/* implicit */_Bool) arr_5 [i_2 + 2] [i_2])) ? (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_5 [i_2 + 2] [i_2 + 2]))))));
        /* LoopNest 3 */
        for (short i_3 = 0; i_3 < 15; i_3 += 1) 
        {
            for (long long int i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_19 [(unsigned char)0] [i_4] [i_3] [i_2] [(unsigned char)0] &= ((/* implicit */long long int) max(((~(var_5))), (((/* implicit */unsigned int) ((arr_0 [i_2 - 1]) ? (((/* implicit */int) arr_2 [(unsigned short)14])) : (arr_16 [i_2] [11LL] [i_2 - 1] [i_2]))))));
                        var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_3]))))) | ((~(((((/* implicit */_Bool) (unsigned short)65535)) ? (18446744073709551613ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)70)))))))));
                        arr_20 [9LL] [i_3] [i_3] [i_4] [i_3] = ((/* implicit */unsigned int) min((((((/* implicit */int) (unsigned short)11912)) == (((/* implicit */int) ((((/* implicit */int) (signed char)3)) != (((/* implicit */int) arr_17 [i_2]))))))), ((!((!(((/* implicit */_Bool) (signed char)15))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 15; i_6 += 3) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 4) 
            {
                {
                    arr_26 [i_6] [i_7] = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((((/* implicit */int) arr_9 [i_2] [i_2])) <= (((/* implicit */int) arr_1 [i_7])))) && (((/* implicit */_Bool) var_12))))), (arr_21 [i_6])));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        for (short i_9 = 1; i_9 < 14; i_9 += 3) 
                        {
                            {
                                arr_31 [i_9] = ((/* implicit */_Bool) arr_17 [6LL]);
                                var_20 = ((/* implicit */unsigned short) max((var_20), (arr_6 [i_7])));
                                arr_32 [i_2 + 2] [i_2 + 2] [i_6] [i_2 + 2] [i_8] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_9 - 1] [(_Bool)1] [i_9 + 1] [i_9] [i_9] [i_9])) - (((/* implicit */int) arr_18 [i_9] [i_9] [i_9 + 1] [10ULL] [7U] [i_8]))))) ? (((((/* implicit */_Bool) var_12)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_9] [(signed char)6] [i_9 + 1] [i_9] [i_9] [i_9]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_9 + 1] [i_9] [i_9 + 1] [i_9 + 1] [3U] [i_9])) ? (((/* implicit */int) arr_18 [i_9 - 1] [i_8] [i_9 + 1] [i_8] [i_7] [i_7])) : (((/* implicit */int) arr_18 [i_9] [i_9] [i_9 + 1] [(unsigned short)10] [(unsigned short)10] [i_6])))))));
                                var_21 ^= ((/* implicit */unsigned short) (~((~(arr_14 [i_8] [i_9 + 1] [i_9 + 1])))));
                                arr_33 [12] [i_6] [i_7] [(unsigned short)12] [i_9] [i_9] = ((unsigned short) ((_Bool) (((_Bool)1) ? (14383498374308722614ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_7]))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [10LL] [i_2 - 1])) ? (((/* implicit */int) arr_15 [(short)0] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_15 [i_7] [i_7] [i_2 - 1]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2] [i_2 + 2])) ? (((/* implicit */int) arr_15 [i_2] [i_2 + 2] [i_2 + 2])) : (((/* implicit */int) arr_15 [i_7] [i_7] [i_2 - 1])))))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_16 [i_2] [i_2] [7U] [14U]))));
                }
            } 
        } 
    }
    for (unsigned int i_10 = 1; i_10 < 13; i_10 += 2) /* same iter space */
    {
        var_24 = ((/* implicit */unsigned int) max((var_24), (((unsigned int) (+(((/* implicit */int) arr_6 [12LL])))))));
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 15; i_11 += 3) 
        {
            for (unsigned short i_12 = 2; i_12 < 14; i_12 += 4) 
            {
                {
                    arr_43 [13LL] [i_11] [i_11] [i_10] = (i_10 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_10 + 1] [i_10])) / (((/* implicit */int) arr_34 [i_10 + 2] [i_10]))))) ? (15083532371775058389ULL) : (((arr_37 [i_10 + 2] [i_12 + 1] [i_10]) | (arr_37 [i_10 + 2] [i_12 - 1] [i_10])))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_10 + 1] [i_10])) * (((/* implicit */int) arr_34 [i_10 + 2] [i_10]))))) ? (15083532371775058389ULL) : (((arr_37 [i_10 + 2] [i_12 + 1] [i_10]) | (arr_37 [i_10 + 2] [i_12 - 1] [i_10]))))));
                    var_25 ^= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned short)11874))));
                    arr_44 [i_10] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_25 [i_10] [6LL] [i_12])) ? ((+(((/* implicit */int) ((((/* implicit */unsigned long long int) arr_8 [i_10] [i_12])) != (arr_30 [i_11] [i_12])))))) : ((((((~(((/* implicit */int) (_Bool)0)))) + (2147483647))) << (((((/* implicit */int) max((arr_9 [12] [i_12 + 1]), (((/* implicit */unsigned short) arr_17 [(unsigned short)5]))))) - (39316)))))));
                }
            } 
        } 
        var_26 += ((/* implicit */unsigned int) var_11);
    }
    /* LoopNest 3 */
    for (unsigned short i_13 = 1; i_13 < 18; i_13 += 3) 
    {
        for (long long int i_14 = 0; i_14 < 19; i_14 += 1) 
        {
            for (signed char i_15 = 0; i_15 < 19; i_15 += 2) 
            {
                {
                    var_27 ^= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 266811896)), (17293822569102704641ULL)));
                    arr_55 [i_13] [i_15] [7ULL] [3LL] = ((/* implicit */short) arr_53 [3ULL] [i_14] [i_15]);
                }
            } 
        } 
    } 
    var_28 = ((/* implicit */unsigned short) var_6);
}
