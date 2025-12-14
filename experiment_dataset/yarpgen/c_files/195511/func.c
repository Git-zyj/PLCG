/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195511
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195511 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195511
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
    /* LoopSeq 2 */
    for (unsigned short i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned int) min((var_15), (((/* implicit */unsigned int) (~(-1LL))))));
        var_16 = ((((5230836027125498262ULL) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-74)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)74))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) arr_1 [0ULL]))))))) : (((((/* implicit */_Bool) ((var_2) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (5230836027125498262ULL)))) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))) : (arr_2 [i_0 - 1]))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned short i_1 = 1; i_1 < 9; i_1 += 2) /* same iter space */
    {
        var_17 = ((/* implicit */short) ((arr_5 [i_1 + 1]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-26172)) ? (2886989773U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-74))))))));
        /* LoopSeq 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                for (unsigned int i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */unsigned int) min((var_18), (989939109U)));
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_10 [i_3] [i_4])) | (arr_6 [3ULL])))) ? (((/* implicit */int) arr_9 [(signed char)1])) : (((/* implicit */int) (_Bool)1))));
                    }
                } 
            } 
            var_20 ^= ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (signed char)16)) : (((/* implicit */int) arr_12 [i_1] [i_2] [i_1 + 1] [i_1])))));
        }
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
        {
            var_21 &= ((/* implicit */short) ((_Bool) arr_8 [i_1] [i_5]));
            arr_15 [i_1] [2U] |= ((/* implicit */unsigned short) -9);
            var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_1] [i_5])) + (((/* implicit */int) (signed char)-101))))) > (((arr_8 [i_1 + 1] [i_5]) ? (((/* implicit */unsigned int) -9)) : (arr_2 [i_1])))));
            var_23 -= ((((/* implicit */int) var_3)) == (((/* implicit */int) (_Bool)1)));
        }
    }
    /* LoopNest 2 */
    for (unsigned short i_6 = 0; i_6 < 12; i_6 += 4) 
    {
        for (unsigned short i_7 = 0; i_7 < 12; i_7 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 12; i_9 += 2) 
                    {
                        for (signed char i_10 = 3; i_10 < 9; i_10 += 2) 
                        {
                            {
                                arr_29 [2U] [i_7] [i_8] [i_8] [i_7] [i_6] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_6] [i_7] [i_8] [i_9]))));
                                var_24 -= ((/* implicit */unsigned long long int) arr_28 [i_8] [i_10] [i_10] [i_10 + 1] [i_10]);
                            }
                        } 
                    } 
                } 
                var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_7] [i_7])) ? (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -2050520585)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (_Bool)1))))), (((arr_28 [i_6] [i_6] [i_7] [i_7] [i_7]) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)74))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((var_6) != (((/* implicit */long long int) 4278190080U))))) + (((((/* implicit */int) (unsigned short)41844)) & (((/* implicit */int) arr_17 [i_6])))))))));
                /* LoopSeq 1 */
                for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                {
                    var_26 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) / (var_13)))) ? (((/* implicit */int) arr_24 [i_6] [i_6] [i_6] [i_6] [(signed char)3] [i_6])) : (((((/* implicit */_Bool) (unsigned short)8852)) ? (((/* implicit */int) arr_17 [i_6])) : (((/* implicit */int) (signed char)127))))))) ^ (max((((/* implicit */unsigned int) arr_24 [i_11] [i_11] [i_11] [i_6] [i_6] [i_6])), ((~(arr_28 [i_6] [i_7] [i_7] [i_7] [i_11 + 1])))))));
                    var_27 = ((/* implicit */_Bool) min((var_27), (((/* implicit */_Bool) max((((((/* implicit */_Bool) min((arr_24 [i_6] [(unsigned short)2] [i_7] [i_7] [i_7] [i_11]), (((/* implicit */unsigned char) arr_20 [i_6]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 2050520584)) ? (((/* implicit */int) (signed char)-50)) : (((/* implicit */int) arr_21 [i_6] [i_7] [i_7]))))) : (16777216U))), (((/* implicit */unsigned int) (signed char)-11)))))));
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 12; i_12 += 2) 
                    {
                        for (unsigned int i_13 = 1; i_13 < 11; i_13 += 1) 
                        {
                            {
                                var_28 = arr_36 [i_6] [i_6] [i_6] [1ULL] [(unsigned short)9] [i_6];
                                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)255)) ? (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */signed char) (_Bool)0)), (var_14))))) : ((-(var_12))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */int) (signed char)-17)) < (((/* implicit */int) (unsigned short)44140)))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_6]))))))))))))));
                                arr_37 [i_12] [(_Bool)1] [i_12] [i_12] [i_12] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [(unsigned char)5] [(unsigned char)5] [i_11 + 1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_36 [i_6] [i_7] [(unsigned char)11] [i_12] [i_13] [i_6]))))) ? ((-(((/* implicit */int) arr_24 [i_6] [i_7] [i_7] [i_12] [(_Bool)1] [i_12])))) : (((/* implicit */int) var_9))))) ? ((+(((((/* implicit */_Bool) arr_16 [0LL] [i_12])) ? (3702955191794045366ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6]))))))) : (arr_22 [i_12] [i_6] [i_6])));
                                var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)100)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (signed char)16)))) < (0U))))) : (max((((((/* implicit */_Bool) -1486258655)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (arr_22 [i_6] [10ULL] [(signed char)9]))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_16 [i_11] [i_12])))))))));
                                arr_38 [i_6] [i_7] = ((/* implicit */short) (_Bool)0);
                            }
                        } 
                    } 
                }
                var_31 = ((/* implicit */int) (_Bool)0);
            }
        } 
    } 
}
