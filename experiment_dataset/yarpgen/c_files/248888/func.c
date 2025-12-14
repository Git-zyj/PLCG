/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248888
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
    var_19 = ((/* implicit */int) ((unsigned char) (unsigned short)28424));
    var_20 -= ((/* implicit */unsigned short) (short)-27303);
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))));
        var_22 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)47161)) && (((/* implicit */_Bool) (short)21603))));
        /* LoopNest 2 */
        for (long long int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
                        {
                            {
                                var_23 += ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)43739)) & (((/* implicit */int) var_17))));
                                var_24 += ((/* implicit */signed char) ((((arr_10 [i_0] [i_1] [i_2] [i_4]) ? (((/* implicit */long long int) -260301645)) : (arr_2 [13LL]))) > (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [0] [i_3] [i_4])))));
                                arr_13 [i_1] = (!((_Bool)1));
                            }
                        } 
                    } 
                    var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (unsigned short)53450))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [13LL] [i_2] [(short)10] [i_2] [i_2 - 1]))) : ((~(0LL)))));
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)508)) > (148942901)));
    }
    /* LoopNest 3 */
    for (short i_5 = 0; i_5 < 19; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 19; i_6 += 1) 
        {
            for (unsigned short i_7 = 0; i_7 < 19; i_7 += 1) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 17; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_9 = 4; i_9 < 15; i_9 += 1) 
                        {
                            var_27 = ((/* implicit */short) min((((/* implicit */unsigned int) (unsigned short)45690)), (366935581U)));
                            arr_28 [i_5] [i_5] [i_8] = ((/* implicit */unsigned char) ((signed char) max((arr_10 [i_6] [i_8 + 2] [i_9 + 4] [i_8 + 2]), (arr_10 [i_7] [i_8 - 1] [i_9 - 1] [i_9]))));
                            var_28 -= ((/* implicit */unsigned short) min((arr_25 [i_8 + 2] [i_8 + 2] [(_Bool)1] [i_9] [(unsigned short)8]), (((/* implicit */unsigned long long int) arr_1 [i_8]))));
                        }
                        for (unsigned short i_10 = 0; i_10 < 19; i_10 += 2) 
                        {
                            var_29 ^= ((/* implicit */unsigned short) (signed char)28);
                            var_30 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((max((1171588021U), (((/* implicit */unsigned int) 2047)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 347929242)) && (((/* implicit */_Bool) 5759750806278303119LL)))))))) || (((/* implicit */_Bool) ((((/* implicit */long long int) -1264859884)) % (((long long int) (signed char)77)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned char i_11 = 2; i_11 < 15; i_11 += 3) 
                        {
                            var_31 ^= ((/* implicit */_Bool) min(((~(((/* implicit */int) (unsigned short)15005)))), (arr_24 [i_5] [i_5] [i_6] [i_6] [6ULL] [(unsigned char)14])));
                            var_32 = ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_9)), ((unsigned short)3072)))) ? (((/* implicit */int) ((short) var_11))) : (((/* implicit */int) ((((/* implicit */_Bool) 717419251)) || (((/* implicit */_Bool) var_14))))))) ^ (((((/* implicit */_Bool) arr_11 [i_6] [i_8] [i_8 + 1] [i_8 + 2] [i_8 - 1] [i_8 - 1] [i_11 + 3])) ? (((/* implicit */int) arr_21 [i_6] [i_8 - 1] [i_8 + 1] [i_8 + 2])) : (((/* implicit */int) arr_31 [i_8] [i_8] [i_8 + 1] [i_8 + 1] [i_8 + 1])))));
                        }
                        arr_36 [i_6] [i_7] [(signed char)3] [i_8 - 1] [i_8] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-12874))));
                    }
                    for (signed char i_12 = 2; i_12 < 18; i_12 += 1) 
                    {
                        arr_40 [i_5] [i_12] [i_7] [i_12] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned short)6144))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) / (9111080835496914899ULL)))));
                        var_33 -= ((((/* implicit */_Bool) arr_11 [i_5] [i_6] [i_7] [i_12] [i_12] [i_7] [i_6])) ? (((/* implicit */long long int) (+(arr_34 [i_5] [i_5] [i_12 + 1] [i_12 + 1] [i_12] [i_5])))) : (((long long int) max((9107706495526957512ULL), (((/* implicit */unsigned long long int) 1023U))))));
                    }
                    arr_41 [i_5] = ((/* implicit */signed char) (~((+(min((arr_27 [i_5] [i_6] [i_5] [i_6] [i_5] [i_5]), (((/* implicit */int) (unsigned short)64008))))))));
                    /* LoopSeq 3 */
                    for (long long int i_13 = 0; i_13 < 19; i_13 += 1) 
                    {
                        arr_44 [i_13] [i_6] [i_13] [(_Bool)1] = ((/* implicit */signed char) ((long long int) min((arr_42 [i_13] [i_13] [i_13]), (var_0))));
                        var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)61049))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)27059))) * (arr_17 [i_6]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_17 [i_5]) > (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_13])))))))));
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) min((((/* implicit */unsigned short) ((arr_27 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]) > (((/* implicit */int) (signed char)-111))))), (((unsigned short) arr_4 [i_6])))))));
                        arr_45 [i_13] [i_13] = ((/* implicit */unsigned int) ((int) ((((arr_27 [i_5] [i_6] [i_7] [i_13] [i_5] [i_7]) + (2147483647))) >> (((-7454445246301600183LL) + (7454445246301600203LL))))));
                        arr_46 [(short)14] [i_13] [i_13] [i_5] = ((/* implicit */long long int) ((((/* implicit */int) min((arr_10 [(_Bool)1] [i_6] [i_7] [i_13]), (arr_10 [i_5] [i_6] [i_7] [i_13])))) - (((((/* implicit */_Bool) 18446744073709551606ULL)) ? (((/* implicit */int) arr_10 [i_5] [i_6] [i_7] [i_13])) : (((/* implicit */int) arr_10 [i_5] [i_5] [i_5] [(unsigned char)19]))))));
                    }
                    for (short i_14 = 0; i_14 < 19; i_14 += 2) /* same iter space */
                    {
                        var_36 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (unsigned short)63756)), (17988877618348644799ULL)));
                        arr_49 [i_5] [(_Bool)1] = ((/* implicit */unsigned int) max((min((max((13364677566822967283ULL), (((/* implicit */unsigned long long int) (unsigned short)0)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)1585)) ? (((/* implicit */int) arr_6 [i_5] [i_5] [i_7] [i_14])) : (((/* implicit */int) var_13))))))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((_Bool) (unsigned short)20654))))))));
                        var_37 -= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) (~(arr_16 [i_5] [i_6] [i_6])))) || (((/* implicit */_Bool) (unsigned short)59557)))))));
                    }
                    for (short i_15 = 0; i_15 < 19; i_15 += 2) /* same iter space */
                    {
                        var_38 ^= ((unsigned char) ((((/* implicit */_Bool) var_4)) ? (arr_17 [i_15]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32)))));
                        arr_53 [i_5] [i_5] [i_6] [i_7] [i_15] = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) arr_33 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5])) ? (((/* implicit */int) (unsigned char)39)) : (((/* implicit */int) (short)15)))));
                        var_39 ^= ((/* implicit */_Bool) arr_48 [i_15] [i_6] [i_5]);
                    }
                }
            } 
        } 
    } 
}
