/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202600
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202600 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202600
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_19 = ((/* implicit */short) (_Bool)1);
                    arr_10 [(unsigned short)21] [i_2] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (1558688885406638002LL)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)73))))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned char)0)) && (((/* implicit */_Bool) arr_2 [i_0] [i_2])))) ? (((/* implicit */int) arr_1 [(unsigned char)3])) : (((/* implicit */int) max((((/* implicit */unsigned char) var_13)), (arr_3 [i_0] [i_0] [i_2])))))))));
                }
            } 
        } 
    } 
    var_20 ^= ((/* implicit */unsigned long long int) 950050547);
    var_21 = ((/* implicit */_Bool) (unsigned short)47278);
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 1; i_3 < 18; i_3 += 1) 
    {
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) -5789664625589953151LL))));
        arr_14 [i_3] = ((/* implicit */int) ((var_5) > (((/* implicit */long long int) (-(((/* implicit */int) ((3901871750514188248ULL) > (((/* implicit */unsigned long long int) arr_13 [i_3] [i_3]))))))))));
        var_23 = ((/* implicit */int) min((var_23), (((int) arr_8 [i_3 + 1] [17] [i_3]))));
        var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) (+(((long long int) 5789664625589953150LL)))))));
        var_25 = (((((+(-2385341526614663759LL))) - (((/* implicit */long long int) arr_5 [i_3 + 1])))) + (((/* implicit */long long int) min((((unsigned int) 1558688885406638002LL)), (((/* implicit */unsigned int) ((unsigned short) (unsigned char)0)))))));
    }
    for (short i_4 = 0; i_4 < 13; i_4 += 1) 
    {
        /* LoopSeq 4 */
        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_6 = 0; i_6 < 13; i_6 += 1) 
            {
                for (unsigned short i_7 = 1; i_7 < 12; i_7 += 4) 
                {
                    {
                        arr_25 [i_5] [i_6] [i_7] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_16)))) : (((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) -1081236088)) : (18214703021979847071ULL)))))));
                        var_26 *= ((/* implicit */int) ((((/* implicit */_Bool) arr_4 [i_6])) && (((/* implicit */_Bool) min((arr_20 [i_4]), (((/* implicit */short) arr_2 [i_4] [i_4])))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (long long int i_8 = 0; i_8 < 13; i_8 += 1) 
            {
                var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) max((((int) (unsigned char)255)), (((((/* implicit */int) arr_28 [i_4] [i_4] [i_5])) | (((/* implicit */int) arr_28 [i_4] [i_4] [10LL]))))))) - (max((((((-8337396068629571045LL) + (9223372036854775807LL))) << (((/* implicit */int) var_13)))), (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)123)) && (((/* implicit */_Bool) arr_24 [(_Bool)1] [i_5] [i_5] [i_5] [i_5]))))))))))));
                var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) (signed char)-39)) : (595367005))))));
            }
            for (int i_9 = 0; i_9 < 13; i_9 += 4) 
            {
                arr_31 [i_4] [i_4] = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (short i_10 = 0; i_10 < 13; i_10 += 1) 
                {
                    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */short) var_4);
                            var_30 = ((/* implicit */_Bool) var_10);
                            var_31 = ((/* implicit */int) ((var_5) ^ (((/* implicit */long long int) max((arr_34 [i_4] [i_5] [i_9] [i_10] [i_11]), (arr_34 [i_4] [i_5] [10] [i_10] [6ULL]))))));
                        }
                    } 
                } 
            }
            for (int i_12 = 2; i_12 < 12; i_12 += 1) 
            {
                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (-5789664625589953150LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                var_33 = ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)74)))))));
            }
        }
        for (unsigned short i_13 = 0; i_13 < 13; i_13 += 4) /* same iter space */
        {
            var_34 = ((/* implicit */int) arr_15 [i_4]);
            var_35 = ((/* implicit */_Bool) max((var_35), (((/* implicit */_Bool) (~(arr_36 [5U] [i_4] [i_13] [(unsigned char)3] [i_13] [i_13]))))));
            var_36 = (+(((/* implicit */int) ((((/* implicit */unsigned long long int) 2017612633061982208LL)) >= ((-(10266929210292926162ULL)))))));
            var_37 += ((/* implicit */_Bool) ((unsigned int) 2176251002U));
        }
        /* vectorizable */
        for (unsigned short i_14 = 0; i_14 < 13; i_14 += 4) /* same iter space */
        {
            arr_44 [i_14] [i_14] [i_14] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(var_15))))));
            arr_45 [i_4] [i_14] [i_4] = (-(((/* implicit */int) var_2)));
        }
        for (int i_15 = 3; i_15 < 9; i_15 += 4) 
        {
            var_38 += ((((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */unsigned int) (-2147483647 - 1))) >= (747573249U))))))) + (max((arr_26 [i_4] [i_4] [i_4] [(short)3]), (((/* implicit */long long int) ((2085141169U) / (((/* implicit */unsigned int) ((/* implicit */int) arr_42 [i_4] [i_4] [12U])))))))));
            var_39 = ((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */int) (signed char)-16)) > (((/* implicit */int) (short)18504))))), (max((((/* implicit */int) var_1)), (arr_7 [(signed char)12])))));
            var_40 += ((/* implicit */long long int) min((((((/* implicit */_Bool) (short)23953)) ? (((arr_38 [i_4] [11U] [i_15 + 1]) ? (((/* implicit */int) var_7)) : ((-2147483647 - 1)))) : (((/* implicit */int) arr_28 [i_4] [i_15 + 4] [(short)2])))), (((/* implicit */int) arr_49 [i_4]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_16 = 2; i_16 < 12; i_16 += 4) 
        {
            var_41 = ((/* implicit */unsigned short) (signed char)127);
            var_42 = ((/* implicit */unsigned char) (((-(var_16))) >> ((((+(((/* implicit */int) var_0)))) - (55720)))));
            var_43 = ((/* implicit */_Bool) (~(-245493818)));
        }
        /* LoopNest 2 */
        for (unsigned char i_17 = 0; i_17 < 13; i_17 += 4) 
        {
            for (unsigned char i_18 = 3; i_18 < 10; i_18 += 4) 
            {
                {
                    var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) min((((/* implicit */unsigned long long int) var_13)), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), ((_Bool)1))))) & (arr_52 [i_4] [i_4] [i_4]))))))));
                    var_45 = min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [i_18] [i_18 - 3] [i_18 + 3] [i_18 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_4] [i_18]))) : (((arr_38 [i_4] [i_17] [i_4]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_37 [i_4] [i_17] [i_18 - 3] [i_18])))))), ((((_Bool)1) ? (-5789664625589953167LL) : (((/* implicit */long long int) 2176251002U)))));
                }
            } 
        } 
        var_46 = 224029966;
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        var_47 = ((/* implicit */int) ((((/* implicit */_Bool) arr_43 [i_19] [i_19])) ? (arr_56 [i_19]) : (max((arr_56 [i_19]), (2176251002U)))));
        var_48 = ((/* implicit */int) (~(min((((/* implicit */long long int) var_9)), (((long long int) 2176251002U))))));
        var_49 = ((/* implicit */_Bool) (~(max((((/* implicit */int) (_Bool)1)), (max((arr_57 [i_19] [(unsigned short)9]), (((/* implicit */int) (short)-16384))))))));
    }
}
