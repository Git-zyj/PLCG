/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38665
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
    var_19 -= ((/* implicit */unsigned char) ((((/* implicit */int) var_0)) <= (((/* implicit */int) var_9))));
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((unsigned long long int) ((((int) arr_1 [i_0])) >= (((/* implicit */int) arr_0 [i_0] [(_Bool)1]))))))));
        arr_2 [i_0] = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_21 -= ((/* implicit */signed char) arr_0 [(unsigned char)8] [16ULL]);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned char) var_14);
            arr_6 [i_0] [i_1] [16ULL] |= ((/* implicit */unsigned short) (+(((/* implicit */int) arr_3 [i_1] [i_0]))));
        }
        for (unsigned long long int i_2 = 4; i_2 < 16; i_2 += 1) 
        {
            var_23 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 0LL)) ? (2281112585318801616ULL) : (((/* implicit */unsigned long long int) 441114944U)))) % (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15)))))))) ? (max((((((/* implicit */_Bool) (unsigned short)65517)) ? (7505422746288054037ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [14LL]))))), (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-23023)) ? ((+(((/* implicit */int) arr_5 [10ULL])))) : (((/* implicit */int) (short)-8)))))));
            arr_9 [i_0] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1073741823)) ? (((/* implicit */unsigned long long int) ((-1073741824) + (((/* implicit */int) arr_3 [6LL] [i_2]))))) : (var_11)))) ? (1154301246540923604ULL) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_2]))) <= (491520U))))))));
        }
        for (unsigned long long int i_3 = 0; i_3 < 17; i_3 += 1) 
        {
            var_24 = ((/* implicit */signed char) ((short) (-(((/* implicit */int) arr_3 [i_3] [i_3])))));
            /* LoopSeq 1 */
            for (unsigned short i_4 = 2; i_4 < 16; i_4 += 3) 
            {
                /* LoopSeq 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopSeq 4 */
                    for (short i_6 = 0; i_6 < 17; i_6 += 1) /* same iter space */
                    {
                        arr_19 [i_0] [i_3] [i_0] [i_5] [i_6] = ((/* implicit */unsigned long long int) ((unsigned char) arr_13 [i_4] [i_4 - 1] [i_4 - 1] [i_4 - 1]));
                        arr_20 [i_0] [2] [9LL] [i_0] = ((/* implicit */_Bool) min((var_14), (((/* implicit */int) min((arr_7 [i_4 + 1] [i_4 - 2] [i_0]), (arr_7 [i_0] [i_4 - 2] [i_0]))))));
                        arr_21 [(_Bool)1] [i_0] [i_4] = ((/* implicit */_Bool) (+(((((/* implicit */long long int) ((/* implicit */int) arr_15 [i_6]))) / (arr_18 [i_4] [i_4 - 2] [i_4] [i_4 - 1] [i_4] [i_4 - 1])))));
                        var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) 1821767370)) ? (var_13) : (-6520030548099180216LL)))))) != (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1073741824)) ? (((/* implicit */int) var_9)) : (-1821767370)))) ? (((/* implicit */unsigned long long int) arr_10 [i_0] [11] [i_4])) : (var_3))))))));
                    }
                    for (short i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
                    {
                        var_26 = ((/* implicit */unsigned int) var_6);
                        var_27 = ((((/* implicit */_Bool) ((unsigned char) ((arr_24 [i_5] [i_5] [(signed char)7] [i_5] [(short)7] [i_5]) > (((/* implicit */long long int) ((/* implicit */int) arr_16 [i_0] [i_0]))))))) ? (((unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_3]))) : (arr_25 [i_4] [i_7] [i_4])))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((arr_24 [i_0] [i_3] [i_3] [i_4] [(unsigned char)3] [i_7]) >= (((/* implicit */long long int) ((/* implicit */int) arr_15 [i_0]))))))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 3) 
                    {
                        var_28 ^= ((/* implicit */unsigned long long int) (signed char)51);
                        var_29 -= ((/* implicit */unsigned long long int) arr_25 [i_8] [(unsigned short)8] [i_0]);
                        arr_28 [i_0] [i_3] [i_4 - 1] [i_0] [i_5] [i_8] [i_8] = ((/* implicit */unsigned long long int) 1821767370);
                        var_30 ^= ((/* implicit */unsigned short) max((((/* implicit */int) arr_16 [0ULL] [0ULL])), ((~(((/* implicit */int) (!(((/* implicit */_Bool) 1821767370)))))))));
                    }
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        var_31 = ((/* implicit */unsigned char) 1073741823);
                        var_32 = ((/* implicit */unsigned short) max((var_32), ((unsigned short)7042)));
                    }
                    var_33 = ((/* implicit */short) max((var_33), ((short)22057)));
                    var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (+(((unsigned int) arr_4 [i_3])))))));
                    var_35 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) arr_8 [11ULL] [i_3])))))))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_11 = 0; i_11 < 17; i_11 += 3) 
                    {
                        var_36 = ((/* implicit */unsigned char) min((var_36), (arr_33 [i_10] [i_3] [i_0])));
                        arr_37 [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) max((arr_3 [i_4 - 1] [i_4 + 1]), (((/* implicit */unsigned short) (short)21941)))))));
                        var_37 -= ((/* implicit */short) ((long long int) ((arr_1 [i_4 - 1]) ? (((/* implicit */int) arr_29 [i_10] [i_10] [i_4 - 2] [16] [i_4 - 2])) : (((/* implicit */int) arr_12 [i_4 + 1] [i_4 + 1] [i_4 + 1])))));
                        var_38 = ((/* implicit */signed char) var_10);
                    }
                    /* LoopSeq 1 */
                    for (signed char i_12 = 3; i_12 < 14; i_12 += 3) 
                    {
                        var_39 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_4 - 2] [(signed char)8])) ? ((+(arr_31 [i_4 + 1] [0LL]))) : (((((/* implicit */_Bool) var_13)) ? (arr_31 [i_4 - 2] [(_Bool)1]) : (arr_31 [i_4 + 1] [4ULL])))));
                        var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) min((((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_0])) ? (-1073741824) : (((/* implicit */int) (unsigned char)15))))) + (((long long int) -1073741824)))), (((/* implicit */long long int) min((((/* implicit */int) arr_1 [i_12])), (((((/* implicit */_Bool) arr_16 [6LL] [4LL])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))))))))))));
                        arr_41 [i_0] [i_4] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)(-32767 - 1))) ? (1073741824) : (((/* implicit */int) (short)(-32767 - 1)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (unsigned char)63)))))) : ((((_Bool)1) ? (arr_13 [i_4] [8LL] [i_4] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_4] [i_0])))))))) ? (((((/* implicit */_Bool) (-(arr_35 [16] [i_3] [i_10])))) ? (((((/* implicit */long long int) var_14)) / (arr_27 [i_0] [i_3] [i_4] [i_10] [i_3]))) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_12] [i_0] [i_4 + 1] [i_0] [i_0]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [5U])))));
                        arr_42 [i_0] [14U] [i_4] [i_4] [14U] [i_12 - 2] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((_Bool) arr_3 [i_10] [16LL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) -1342349506)))) : (((((/* implicit */_Bool) arr_33 [i_0] [i_3] [i_4 - 2])) ? (((/* implicit */unsigned long long int) -2009824462)) : (622377783030644719ULL)))))) ? (((/* implicit */int) arr_8 [i_4 - 1] [i_12 + 1])) : ((+(((/* implicit */int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) var_18)))))))));
                    }
                }
                /* LoopSeq 3 */
                for (unsigned long long int i_13 = 0; i_13 < 17; i_13 += 3) 
                {
                    var_41 = ((/* implicit */unsigned char) (-(min((arr_10 [i_0] [i_0] [i_4 + 1]), (((/* implicit */int) arr_22 [i_0] [i_0] [i_4 - 2] [i_13] [i_13] [i_13]))))));
                    arr_45 [i_3] [i_3] [i_3] [i_3] [i_0] = ((/* implicit */unsigned long long int) ((-7299108899572255744LL) % (((/* implicit */long long int) arr_25 [i_0] [(_Bool)1] [i_4 + 1]))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_14 = 0; i_14 < 17; i_14 += 1) 
                    {
                        var_42 = ((/* implicit */unsigned long long int) min((var_42), (((/* implicit */unsigned long long int) arr_46 [i_0] [i_14] [i_4] [i_13] [(unsigned short)13] [i_3] [i_0]))));
                        arr_48 [i_0] [(unsigned short)0] [i_0] [i_0] [12] [8ULL] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) ((_Bool) arr_40 [i_4] [16] [i_4] [(_Bool)0] [i_14]))) >= (((/* implicit */int) (_Bool)1))));
                        arr_49 [i_0] [i_0] [i_4] [i_13] [i_14] = ((/* implicit */int) max((arr_23 [i_0] [i_3] [i_4] [i_13] [i_4 + 1]), (min((arr_23 [i_0] [i_3] [(unsigned short)3] [i_3] [i_4 + 1]), (arr_23 [i_0] [i_0] [i_13] [10LL] [i_4 + 1])))));
                        var_43 |= ((/* implicit */unsigned short) arr_14 [(short)12] [(signed char)16]);
                    }
                }
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_44 = ((/* implicit */unsigned char) var_5);
                    var_45 = ((/* implicit */long long int) max((var_45), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_33 [i_0] [i_0] [(_Bool)1]))))) ? (arr_10 [i_4] [i_4 - 1] [i_4 - 1]) : (((/* implicit */int) arr_16 [i_0] [(unsigned short)6])))))));
                    var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [i_3]))))))))));
                }
                for (unsigned char i_16 = 2; i_16 < 16; i_16 += 1) 
                {
                    var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_33 [6U] [i_3] [i_0])) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-120))) <= (arr_31 [(_Bool)1] [(_Bool)1])))) : (((((/* implicit */_Bool) arr_51 [i_0] [i_0] [16LL] [i_0])) ? (((/* implicit */int) arr_7 [6U] [i_3] [(signed char)0])) : (((/* implicit */int) arr_54 [16ULL] [i_3] [i_3] [i_3] [i_0])))))))))));
                    var_48 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) min((15139597365700500372ULL), (((((/* implicit */_Bool) (short)21941)) ? (6288772478675282932ULL) : (((/* implicit */unsigned long long int) arr_44 [2ULL] [i_4 - 2] [i_3] [2ULL])))))))));
                }
                var_49 |= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+((((_Bool)1) ? (arr_35 [i_0] [i_3] [(_Bool)1]) : (-1073741824))))))));
                arr_56 [i_0] [i_4 - 1] [i_3] [i_0] = ((/* implicit */long long int) ((unsigned long long int) (+(((((/* implicit */_Bool) arr_7 [i_0] [i_3] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_39 [i_0] [i_3] [i_4 - 1] [i_3]))) : (499815164U))))));
            }
            var_50 = ((/* implicit */unsigned int) (!((!((_Bool)1)))));
        }
    }
}
