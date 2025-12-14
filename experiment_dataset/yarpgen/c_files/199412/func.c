/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199412
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199412 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199412
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
    var_17 = ((/* implicit */long long int) var_2);
    var_18 += ((/* implicit */unsigned int) ((((((/* implicit */_Bool) max((var_2), ((unsigned short)7918)))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) min((((/* implicit */short) var_14)), ((short)-13757)))))) >> (((min((((/* implicit */unsigned long long int) -468694619075891996LL)), (max((((/* implicit */unsigned long long int) var_13)), (17494428826241213839ULL))))) - (17494428826241213839ULL)))));
    var_19 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) min(((unsigned short)21085), (((/* implicit */unsigned short) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-20)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)22))))) : (min((var_4), (((/* implicit */unsigned long long int) var_2)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) 4294967278U)))))))));
    var_20 = ((/* implicit */signed char) var_15);
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        var_21 = ((/* implicit */short) var_6);
        var_22 *= ((/* implicit */short) ((arr_0 [i_0 + 1]) % (((/* implicit */int) var_5))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_1 [(_Bool)1] [(unsigned short)21])))) % (((/* implicit */int) (signed char)127)))))));
    }
    for (short i_1 = 4; i_1 < 19; i_1 += 1) 
    {
        arr_5 [i_1] = ((/* implicit */signed char) ((((long long int) var_9)) < (((/* implicit */long long int) max((arr_2 [i_1]), (arr_2 [i_1]))))));
        /* LoopSeq 1 */
        for (unsigned short i_2 = 0; i_2 < 22; i_2 += 3) 
        {
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
            {
                var_24 ^= ((/* implicit */_Bool) min(((((!(arr_3 [i_1]))) ? (((/* implicit */unsigned long long int) ((arr_3 [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) (short)-9978))) : (var_9)))) : (((var_11) % (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((unsigned int) ((1151083127756188740LL) / (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_3])))))))));
                var_25 = ((/* implicit */signed char) min((var_25), ((signed char)-85)));
                var_26 = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_13 [i_3] [6] [i_1] &= ((/* implicit */unsigned int) min((arr_2 [i_3]), (((/* implicit */int) var_5))));
            }
            /* vectorizable */
            for (short i_4 = 1; i_4 < 19; i_4 += 1) /* same iter space */
            {
                var_27 = ((/* implicit */unsigned long long int) arr_12 [i_1] [i_2] [i_1]);
                arr_17 [i_1] = ((/* implicit */signed char) ((unsigned char) 2305843008676823040ULL));
                var_28 |= ((/* implicit */_Bool) arr_9 [i_4] [i_2] [i_1]);
            }
            for (short i_5 = 1; i_5 < 19; i_5 += 1) /* same iter space */
            {
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 19; i_6 += 4) 
                {
                    for (unsigned char i_7 = 1; i_7 < 21; i_7 += 4) 
                    {
                        {
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_7] = ((/* implicit */signed char) ((arr_11 [i_1] [i_1]) ? (((/* implicit */int) (signed char)54)) : (((/* implicit */int) max((((/* implicit */unsigned short) arr_25 [i_1] [i_2] [i_5] [i_6 + 2] [i_7])), ((unsigned short)60838))))));
                            arr_27 [i_1] [i_2] [i_5 + 3] [i_6 - 1] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_7 [i_7 + 1] [i_5 + 3])) : (arr_2 [i_1]))))));
                        }
                    } 
                } 
                var_29 = ((/* implicit */unsigned char) ((long long int) var_3));
            }
            /* LoopSeq 1 */
            for (int i_8 = 0; i_8 < 22; i_8 += 2) 
            {
                arr_30 [i_1] [i_2] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) min(((unsigned short)43798), (((/* implicit */unsigned short) arr_3 [i_1 - 2])))))) >= (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1 - 2]))) & (var_8)))));
                arr_31 [i_1] [i_1] = ((/* implicit */int) max((((/* implicit */unsigned int) ((((0ULL) > (((/* implicit */unsigned long long int) var_3)))) ? (((/* implicit */int) arr_10 [i_1 - 4] [i_2] [i_8] [i_1 - 3])) : ((((_Bool)1) ? (((/* implicit */int) arr_21 [i_1] [i_1])) : (((/* implicit */int) (signed char)0))))))), (((((566667972U) | (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_1]))))) & (max((var_1), (((/* implicit */unsigned int) (unsigned char)222))))))));
                /* LoopNest 2 */
                for (short i_9 = 4; i_9 < 20; i_9 += 3) 
                {
                    for (unsigned char i_10 = 1; i_10 < 21; i_10 += 2) 
                    {
                        {
                            arr_36 [i_1] [i_2] [0] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_1] [i_1 - 1] [i_1])) ? (((((unsigned long long int) 7405352232548839103LL)) + (((/* implicit */unsigned long long int) arr_20 [i_1] [i_9 + 1] [i_9] [i_10 + 1] [i_10 - 1])))) : (((/* implicit */unsigned long long int) ((70368739983360LL) + (var_3))))));
                            var_30 = ((/* implicit */short) max((((/* implicit */unsigned int) arr_21 [i_8] [i_1])), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-1)) + (2147483647))) >> (((1725821941U) - (1725821923U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)10))) : (((unsigned int) arr_2 [i_1]))))));
                        }
                    } 
                } 
                var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((16876453181551184052ULL) * (18446744073709551611ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)1)), (arr_8 [i_1] [i_1 - 2] [i_1]))))) : (min((((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_2] [i_8] [i_1 - 1] [i_2] [i_8] [i_8])) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) -1183476798)), (var_15))))))));
            }
            var_32 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_21 [(unsigned short)8] [i_1])) | (arr_12 [(unsigned short)8] [i_2] [i_1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_1 [i_2] [(_Bool)1])) : (((/* implicit */int) arr_21 [i_1] [i_1]))))) : (((unsigned long long int) var_7)))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_8) * (18446744073709551601ULL)))) ? (((/* implicit */int) arr_11 [i_1 + 3] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_2] [i_2] [i_2] [i_1 + 1] [i_1 + 1] [i_1 - 1]))))))))));
        }
        arr_37 [i_1] = ((signed char) max((((unsigned short) arr_10 [i_1] [i_1] [i_1] [i_1])), (((/* implicit */unsigned short) arr_29 [i_1]))));
        arr_38 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) arr_35 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1 + 1]))))), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_16 [i_1] [i_1] [i_1])))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) min((var_7), (arr_9 [(signed char)14] [i_1] [i_1 + 3])))) : (min((((/* implicit */int) (unsigned short)65535)), (824600943)))))) : (((((/* implicit */_Bool) min((var_4), (((/* implicit */unsigned long long int) var_3))))) ? (((var_8) * (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)32767)))))))));
        var_33 = ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)1)), (min((arr_9 [i_1 + 2] [i_1 - 2] [i_1 + 2]), (arr_9 [i_1 + 1] [i_1 + 3] [i_1 + 2])))));
    }
}
