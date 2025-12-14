/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249712
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
    for (int i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) arr_3 [i_0] [(unsigned short)6]))));
        var_21 ^= ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_14)) ? (arr_1 [i_0]) : (arr_1 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) 2476311568U)) ? (((/* implicit */unsigned long long int) 1158564780U)) : (6503611021889243788ULL)));
        var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((((/* implicit */long long int) ((/* implicit */int) var_6))) * (max((arr_5 [i_1]), (((/* implicit */long long int) 995900303U)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_1] [(unsigned char)2])) : (((/* implicit */int) arr_3 [i_1] [(signed char)4])))))));
        arr_7 [i_1] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) 9597610006466819229ULL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1] [(signed char)4]))) : (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (arr_5 [i_1]) : (var_12))))), (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1])) % (((/* implicit */int) arr_0 [i_1])))))));
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) var_1))));
        var_24 = ((/* implicit */unsigned char) ((max((arr_5 [i_1]), (((/* implicit */long long int) arr_3 [i_1] [(signed char)4])))) ^ (((/* implicit */long long int) var_9))));
    }
    for (unsigned short i_2 = 1; i_2 < 10; i_2 += 4) 
    {
        arr_10 [i_2 - 1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_9 [i_2] [7ULL])) ? (((/* implicit */int) ((unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)14239)))))) : (var_18)));
        var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((((/* implicit */_Bool) ((long long int) 4830244988271861003ULL))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)28629)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-28629))) : (2388316305U)))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_3 = 0; i_3 < 12; i_3 += 2) 
        {
            var_26 = ((/* implicit */_Bool) ((arr_13 [i_2 + 2] [i_2 + 2] [i_2 + 2]) | (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)14250)) >> (((arr_9 [i_3] [(unsigned char)10]) - (4928288750649583667LL))))))));
            var_27 = ((/* implicit */unsigned char) ((((((/* implicit */int) var_10)) == (((/* implicit */int) arr_11 [i_2 + 1] [i_3])))) || (((/* implicit */_Bool) (-(1615434854U))))));
            var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -7235504617784806124LL)) ? (arr_1 [i_2 - 1]) : (arr_1 [i_2 + 1])));
            var_29 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2 - 1] [i_2 - 1] [i_2 - 1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))))) ? (((((/* implicit */_Bool) 1615434825U)) ? (((/* implicit */int) arr_8 [i_2 + 2])) : (((/* implicit */int) (signed char)-121)))) : (((/* implicit */int) (unsigned short)29008)));
        }
    }
    /* vectorizable */
    for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 3) 
        {
            for (unsigned int i_6 = 0; i_6 < 11; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    {
                        var_30 = ((/* implicit */signed char) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_8 [i_4 - 1]))));
                        arr_23 [i_4 - 1] [i_5] [i_5 - 1] [i_6] [i_7] [i_4] = arr_19 [i_4] [i_4 - 1] [i_4 - 1];
                        /* LoopSeq 1 */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_26 [i_5] [i_6] [i_4] = ((/* implicit */int) (-(((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) 367352760U)) : (18446744073709551615ULL)))));
                            arr_27 [i_4] [i_4] = ((/* implicit */_Bool) ((unsigned char) arr_9 [i_4 - 1] [i_5 - 1]));
                            arr_28 [10] [i_4] [(unsigned short)1] [i_7] [i_8] = var_3;
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_9 = 0; i_9 < 11; i_9 += 2) 
                        {
                            var_31 += var_11;
                            arr_33 [i_4] [i_5] [i_5 - 1] [i_7] [i_4] [i_6] [i_5] = var_11;
                            var_32 += ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)23624)) >> (((((((/* implicit */_Bool) (unsigned short)29008)) ? (((/* implicit */unsigned long long int) var_12)) : (arr_14 [i_4 - 1]))) - (16119997161086315459ULL)))));
                            arr_34 [i_4] [i_7] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)58360))) > (29U)));
                            arr_35 [i_4] [i_6] [8U] [i_7] [i_9] [i_5] = ((/* implicit */long long int) ((arr_14 [(_Bool)1]) >> (((arr_1 [i_4 - 1]) - (1410225786U)))));
                        }
                        arr_36 [i_4 - 1] [i_4 - 1] [i_4] [i_4] [i_4 - 1] = ((/* implicit */unsigned long long int) var_18);
                    }
                } 
            } 
        } 
        /* LoopSeq 3 */
        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) /* same iter space */
        {
            var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (var_16) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_4 - 1] [i_4] [i_4 - 1] [i_10] [i_4 - 1] [i_4 - 1])))));
            arr_40 [i_4 - 1] [i_4] = arr_17 [i_4] [i_4];
            arr_41 [i_4] = ((/* implicit */unsigned int) -302260484);
        }
        for (unsigned char i_11 = 0; i_11 < 11; i_11 += 1) /* same iter space */
        {
            arr_44 [i_4] [i_11] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_19 [i_4 - 1] [i_4 - 1] [i_11]))));
            var_34 = ((/* implicit */unsigned char) max((var_34), (((unsigned char) arr_17 [(unsigned short)8] [10LL]))));
            var_35 = ((/* implicit */unsigned char) (((_Bool)1) ? (((/* implicit */int) (unsigned char)104)) : (((/* implicit */int) (unsigned short)51288))));
        }
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
        {
            var_36 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_4 - 1] [i_4 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_4] [i_4]))) : (4294967295U)));
            var_37 = ((/* implicit */int) ((short) var_13));
        }
        arr_47 [i_4] = ((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)59320))));
    }
    var_38 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) var_3))) != (var_14)));
    var_39 = ((/* implicit */unsigned char) var_18);
}
