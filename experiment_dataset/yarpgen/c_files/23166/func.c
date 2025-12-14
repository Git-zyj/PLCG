/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23166
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23166 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23166
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned char i_2 = 1; i_2 < 11; i_2 += 3) 
                {
                    var_18 |= ((/* implicit */unsigned char) (~(2149224825449510117LL)));
                    arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(short)8])) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) (signed char)7))))) ? (arr_6 [i_1] [i_2 - 1]) : (((((/* implicit */_Bool) 909403724)) ? (((/* implicit */int) (unsigned char)31)) : (((/* implicit */int) (signed char)7))))))) ? (((/* implicit */int) var_10)) : (min(((+(((/* implicit */int) (short)14647)))), (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_1] [i_1])) || (((/* implicit */_Bool) arr_5 [i_1] [i_0] [i_0] [i_2])))))))));
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_1] = ((/* implicit */signed char) ((unsigned char) arr_9 [i_1 + 1] [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_2 - 1]));
                        arr_11 [i_0] [i_1 + 1] [i_1] [i_2] [i_3] = ((/* implicit */signed char) 18446744073709551615ULL);
                    }
                    for (unsigned char i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        arr_14 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */short) ((arr_6 [i_1] [i_1]) >= (((((/* implicit */_Bool) arr_6 [i_1] [i_1 + 1])) ? (arr_6 [i_1] [9ULL]) : (arr_6 [i_1] [i_1])))));
                        arr_15 [i_0] [i_0] [i_2] [i_1] [i_1] = (i_1 % 2 == zero) ? (((/* implicit */_Bool) (+(max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)60)) >> (((arr_12 [i_0] [i_0] [i_1] [i_0]) - (281218772)))))))))) : (((/* implicit */_Bool) (+(max((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) (unsigned char)60)) >> (((((arr_12 [i_0] [i_0] [i_1] [i_0]) - (281218772))) - (1668370118))))))))));
                        arr_16 [i_0] [i_0] [i_2] [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) (signed char)56);
                    }
                    /* vectorizable */
                    for (unsigned short i_5 = 1; i_5 < 11; i_5 += 1) 
                    {
                        var_19 += ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)101)) / (((/* implicit */int) (short)14647))));
                        arr_20 [i_1] [i_1] [i_2 + 1] [i_5] = ((/* implicit */signed char) ((((/* implicit */int) arr_13 [i_1] [i_1 + 1])) + (((/* implicit */int) (signed char)2))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_23 [i_1] [i_1] [i_2] [i_6] = ((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_1] [(_Bool)1] [i_1] [(_Bool)1] [i_6])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_1] [i_2 - 1] [i_1] [i_0]))) : (arr_3 [i_0] [i_1] [i_0]))))), (((((/* implicit */_Bool) arr_17 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 - 1])) ? (arr_17 [i_1 + 1] [i_1 + 1] [i_2 + 1] [i_2 - 1]) : (arr_17 [i_1 + 1] [i_1 + 1] [i_2 - 1] [i_2 - 1])))));
                        arr_24 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((_Bool) arr_8 [i_1 + 1] [i_1] [i_1 + 1] [i_2 - 1] [i_1]))), ((~(arr_2 [i_1])))));
                        var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_6] [i_1 + 1] [i_2] [i_6] [i_0] [i_2])))))))))))));
                        var_21 = ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_22 [i_1 + 1] [i_1 + 1] [i_1 + 1] [i_1] [i_1] [i_2 - 1])), ((+(arr_3 [(unsigned char)9] [i_1] [i_1])))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) | (arr_2 [i_1]))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) var_1)), (var_2))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((_Bool)1))))) ^ ((((_Bool)1) ? (arr_3 [i_0] [i_1] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [(_Bool)1] [(unsigned short)7] [i_6] [(unsigned char)11] [i_1])))))))));
                    }
                    var_22 *= ((((/* implicit */_Bool) -2149224825449510117LL)) && (((/* implicit */_Bool) ((0ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)2)))))));
                }
                for (int i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_23 = ((/* implicit */_Bool) 3454814711547696867LL);
                    var_24 = ((/* implicit */unsigned char) max((var_24), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_7])) ? (((/* implicit */int) ((unsigned char) arr_13 [i_0] [i_1]))) : (((((/* implicit */_Bool) arr_6 [i_7] [i_1])) ? (arr_17 [i_1 + 1] [i_1 + 1] [i_7] [i_1 + 1]) : (((/* implicit */int) ((((/* implicit */int) (signed char)0)) == (arr_27 [i_7] [6] [i_7])))))))))));
                }
                /* LoopNest 3 */
                for (signed char i_8 = 0; i_8 < 12; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 9; i_9 += 1) 
                    {
                        for (long long int i_10 = 2; i_10 < 9; i_10 += 3) 
                        {
                            {
                                arr_37 [i_0] [i_1] [i_1] [i_10] = ((/* implicit */unsigned char) min((arr_8 [i_1] [i_10 - 1] [i_10 + 3] [(_Bool)1] [i_1]), (min((arr_8 [i_1] [(_Bool)1] [i_10] [i_9] [i_1]), (arr_8 [i_1] [i_10] [i_10 - 1] [i_9 + 2] [i_1])))));
                                var_25 = ((/* implicit */_Bool) min((((unsigned int) ((((/* implicit */_Bool) 642045153)) && (((/* implicit */_Bool) 264241152U))))), (((/* implicit */unsigned int) (_Bool)1))));
                                var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) arr_4 [i_1]))))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((unsigned char)109), (((/* implicit */unsigned char) (_Bool)1)))))) : (((((((/* implicit */_Bool) var_8)) || ((_Bool)1))) ? (((3639004873388463468LL) >> (((/* implicit */int) var_17)))) : (((/* implicit */long long int) (+(var_14))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_27 ^= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) var_12)) ? (((var_16) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)82))) : (9245799047146068451ULL))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_13)), (-1341432445))))))));
    var_28 = ((/* implicit */unsigned char) var_7);
    var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_0)) != (((/* implicit */int) (unsigned char)3))));
    /* LoopNest 3 */
    for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 2) 
    {
        for (unsigned char i_12 = 0; i_12 < 14; i_12 += 3) 
        {
            for (unsigned int i_13 = 0; i_13 < 14; i_13 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned short) (+((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [i_11] [i_12] [i_13] [i_13])))))))));
                    arr_48 [i_11 + 1] [i_11 + 1] [i_13] [i_11 + 1] = ((/* implicit */unsigned char) (+(18446744073709551615ULL)));
                    var_31 ^= ((/* implicit */unsigned long long int) -2149224825449510111LL);
                }
            } 
        } 
    } 
}
