/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213506
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213506 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213506
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
    var_14 = ((/* implicit */signed char) var_11);
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) min((min((max((((/* implicit */long long int) (unsigned short)26399)), (-9223372036854775781LL))), (((/* implicit */long long int) var_0)))), (((/* implicit */long long int) var_4)))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        var_16 = ((/* implicit */_Bool) min((((-5107869048473797388LL) | (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) ((((((/* implicit */int) (signed char)-108)) + (2147483647))) >> (((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 1])))))));
        var_17 *= ((/* implicit */unsigned short) 0LL);
        var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (((((((/* implicit */_Bool) (unsigned short)0)) ? (-5107869048473797388LL) : (((/* implicit */long long int) ((/* implicit */int) var_0))))) >> (((0LL) & (5LL))))))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
            {
                for (unsigned char i_4 = 0; i_4 < 18; i_4 += 1) 
                {
                    {
                        var_19 ^= ((/* implicit */long long int) max((735020834), (((/* implicit */int) (signed char)108))));
                        arr_11 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((arr_4 [i_1] [i_2 - 1] [i_3]) && (((((/* implicit */_Bool) arr_10 [i_1] [i_1] [(unsigned char)2])) || (((/* implicit */_Bool) -5107869048473797388LL))))))), (((unsigned long long int) (unsigned short)0))));
                    }
                } 
            } 
        } 
        var_20 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_12)), (var_0))))) >= (0LL)))), ((unsigned short)65535)));
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 17; i_5 += 1) 
        {
            for (long long int i_6 = 3; i_6 < 14; i_6 += 1) 
            {
                {
                    var_21 -= ((/* implicit */signed char) (_Bool)0);
                    /* LoopNest 2 */
                    for (unsigned short i_7 = 0; i_7 < 18; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            {
                                var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min(((+(((((/* implicit */_Bool) (unsigned short)4)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))), (((/* implicit */long long int) min((((/* implicit */int) var_3)), (((((/* implicit */int) (_Bool)0)) ^ (((/* implicit */int) (_Bool)1))))))))))));
                                arr_23 [i_1 + 1] [(signed char)11] [i_1 + 1] [i_1] [i_8] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) -5107869048473797388LL)) ? (((/* implicit */int) (signed char)44)) : (((/* implicit */int) (_Bool)1))))));
                                var_23 = ((/* implicit */_Bool) max((var_23), (max((arr_2 [i_5] [i_7]), (((((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) <= (var_6)))))));
                            }
                        } 
                    } 
                    var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) min((((/* implicit */int) ((_Bool) -7999574429216849852LL))), (((((/* implicit */int) arr_16 [i_1 + 1] [i_1 + 1] [i_5] [i_5 + 1])) >> (((((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_5] [i_5 - 1])) - (116))))))))));
                }
            } 
        } 
        arr_24 [i_1] = ((/* implicit */signed char) ((((((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_13 [i_1 + 1] [i_1] [i_1])))) < (((/* implicit */int) ((((/* implicit */int) arr_2 [i_1 + 1] [i_1])) >= (((/* implicit */int) (unsigned char)255))))))) && (((/* implicit */_Bool) (unsigned short)65535))));
    }
    for (_Bool i_9 = 0; i_9 < 0; i_9 += 1) /* same iter space */
    {
        var_25 = ((/* implicit */unsigned short) (+(((/* implicit */int) (_Bool)0))));
        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((2444017443661388622ULL), (arr_5 [(unsigned char)6])))) || (((((/* implicit */_Bool) arr_5 [0])) && (var_1))))))));
        arr_27 [i_9] [i_9] = ((/* implicit */unsigned char) 72057576858058752ULL);
    }
    for (signed char i_10 = 2; i_10 < 7; i_10 += 1) 
    {
        arr_32 [i_10] [i_10] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_22 [i_10 + 2] [i_10 + 2] [(unsigned short)8] [16] [(unsigned short)8]) <= (arr_22 [i_10 + 3] [(signed char)0] [8ULL] [i_10] [i_10]))))) < ((~(arr_22 [i_10 + 1] [i_10] [(_Bool)1] [i_10] [i_10]))));
        var_27 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_25 [(unsigned short)15]))))), (max((((/* implicit */unsigned int) -735020834)), (max((((/* implicit */unsigned int) arr_26 [i_10])), (arr_29 [i_10 + 1])))))));
        var_28 = ((((/* implicit */_Bool) arr_19 [8ULL] [i_10] [(_Bool)1] [i_10 - 2] [0LL])) && (((/* implicit */_Bool) ((unsigned char) arr_10 [i_10] [i_10 + 2] [i_10 + 3]))));
    }
    var_29 = ((/* implicit */unsigned short) var_13);
}
