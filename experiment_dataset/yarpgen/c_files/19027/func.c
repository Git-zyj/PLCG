/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19027
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19027 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19027
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
    var_18 = ((/* implicit */long long int) max((((((/* implicit */_Bool) min((18446744073709551606ULL), (((/* implicit */unsigned long long int) var_12))))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6)))) : (((var_14) ? (((/* implicit */int) (unsigned char)100)) : (((/* implicit */int) var_0)))))), (((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-18)) + (2147483647))) << (((((((/* implicit */int) var_13)) + (40))) - (29)))))) ? (((((/* implicit */int) var_12)) % (((/* implicit */int) var_7)))) : (((/* implicit */int) var_10))))));
    var_19 = ((/* implicit */signed char) max((min((((unsigned int) 458547241)), (((/* implicit */unsigned int) min((((/* implicit */signed char) var_4)), (var_9)))))), (((/* implicit */unsigned int) min((((/* implicit */signed char) ((((/* implicit */int) (unsigned char)153)) > (((/* implicit */int) (unsigned char)155))))), (var_6))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((arr_2 [i_0]), (((max((2ULL), (((/* implicit */unsigned long long int) var_11)))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_14)), (arr_0 [i_0])))))))));
        /* LoopSeq 4 */
        for (unsigned char i_1 = 1; i_1 < 10; i_1 += 3) 
        {
            arr_8 [i_1] &= max((((/* implicit */unsigned long long int) var_6)), ((+(((((/* implicit */unsigned long long int) arr_5 [i_1] [i_1 + 1] [i_0])) - (var_1))))));
            var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) arr_6 [i_0] [i_1 + 1]))));
        }
        /* vectorizable */
        for (signed char i_2 = 1; i_2 < 10; i_2 += 3) 
        {
            var_21 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [(unsigned short)3])) & (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) / (arr_1 [i_0])))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_22 *= ((/* implicit */unsigned int) ((arr_15 [i_5] [i_5] [i_5] [i_5]) <= (arr_15 [i_0] [i_2 + 1] [i_3] [i_4])));
                            arr_19 [i_2] [i_4] [i_5] = ((/* implicit */unsigned char) (((!(var_7))) ? (arr_1 [i_5]) : (((/* implicit */unsigned long long int) arr_14 [3ULL] [i_2 - 1] [i_2 - 1] [i_2]))));
                            arr_20 [i_4] [i_3] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_0] [i_0])) | (((/* implicit */int) var_0)))))));
                        }
                    } 
                } 
                var_23 = arr_6 [6U] [i_2];
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 0; i_6 < 12; i_6 += 4) 
                {
                    var_24 -= ((/* implicit */unsigned long long int) var_17);
                    arr_24 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_7 [i_2 + 2] [i_2 + 1] [i_2]) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 - 1] [i_2 + 1])) : (((/* implicit */int) var_8))));
                }
                for (unsigned short i_7 = 0; i_7 < 12; i_7 += 1) 
                {
                    arr_27 [i_0] [i_2] [i_0] [i_7] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) var_16)) == (((/* implicit */int) var_17))))));
                    arr_28 [i_2] [i_7] [i_3] [i_7] [i_0] = ((/* implicit */unsigned char) ((arr_11 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) arr_10 [i_0] [i_3] [10U]))))));
                    arr_29 [i_0] [i_7] [i_7] [i_3] [(short)0] [i_7] = ((/* implicit */unsigned long long int) var_11);
                }
            }
            for (unsigned char i_8 = 3; i_8 < 11; i_8 += 2) /* same iter space */
            {
                arr_33 [i_0] = ((/* implicit */short) arr_4 [i_2] [i_2]);
                arr_34 [i_8] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_13 [i_2 + 1] [i_2 + 2] [i_2 + 1])) | (((/* implicit */int) arr_13 [i_2] [i_2 + 1] [i_2 + 2]))));
            }
            for (unsigned char i_9 = 3; i_9 < 11; i_9 += 2) /* same iter space */
            {
                var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) ? (((unsigned long long int) arr_14 [i_0] [i_0] [2ULL] [i_9])) : (12458787771932374818ULL)));
                var_26 = ((/* implicit */_Bool) ((arr_14 [i_9] [i_9] [i_9 - 3] [i_9]) | (arr_14 [0LL] [0LL] [i_9 + 1] [7LL])));
            }
            for (unsigned char i_10 = 3; i_10 < 11; i_10 += 2) /* same iter space */
            {
                arr_39 [i_0] [i_0] [i_10] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_10] [i_10 - 2] [i_10 - 2] [i_10 - 3] [i_10] [i_10 + 1])) + (((/* implicit */int) arr_21 [(_Bool)1] [(_Bool)1] [i_10 - 1] [i_10 - 2] [i_10 - 1] [i_10 - 3]))));
                var_27 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_25 [(unsigned char)6])) : (((/* implicit */int) arr_25 [10U]))));
                /* LoopNest 2 */
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 2) 
                {
                    for (unsigned short i_12 = 3; i_12 < 11; i_12 += 2) 
                    {
                        {
                            arr_45 [i_0] [i_2] [i_10] [7U] [i_10] = ((/* implicit */unsigned long long int) 1955626944U);
                            arr_46 [(unsigned short)8] [i_2] [i_2] [i_10] [i_12] = ((((((/* implicit */_Bool) 16ULL)) || (((/* implicit */_Bool) 9223372036854775807LL)))) ? (((/* implicit */unsigned int) ((var_4) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))) : (((unsigned int) var_2)));
                        }
                    } 
                } 
            }
            arr_47 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2 + 2])) ? (arr_1 [i_2 - 1]) : (arr_11 [i_2 - 1])));
            arr_48 [i_2] [i_2] [i_0] = (!(((/* implicit */_Bool) arr_40 [i_0] [6ULL] [i_0])));
            arr_49 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_4))))) % (((var_5) << (((arr_40 [i_0] [(unsigned short)6] [i_0]) - (1046097479)))))));
        }
        /* vectorizable */
        for (long long int i_13 = 0; i_13 < 12; i_13 += 4) /* same iter space */
        {
            var_28 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_30 [i_0] [i_0])) ? (((/* implicit */int) arr_30 [i_13] [i_0])) : (((/* implicit */int) arr_30 [i_13] [i_13]))));
            arr_52 [i_13] [4LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [5U])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))))) : (arr_11 [i_0])));
        }
        for (long long int i_14 = 0; i_14 < 12; i_14 += 4) /* same iter space */
        {
            arr_55 [i_14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_38 [i_14] [i_0] [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_44 [i_14] [i_14] [i_14] [i_14] [i_0] [i_0]), (arr_22 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((/* implicit */int) arr_7 [i_0] [i_0] [10]))));
            /* LoopNest 2 */
            for (unsigned long long int i_15 = 0; i_15 < 12; i_15 += 2) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 12; i_16 += 4) 
                {
                    {
                        arr_62 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (2161727821137838080LL) : (((/* implicit */long long int) 1955626941U))))))) ? (3ULL) : ((((!(((/* implicit */_Bool) 7272328055180382955ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_56 [i_15]))) <= (arr_31 [i_0] [i_0] [i_0] [(unsigned char)0]))))) : (min((8526419479308036164ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_15] [6ULL]))))))));
                        var_29 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_26 [i_0] [i_14] [i_15]), (((/* implicit */unsigned int) (unsigned char)26))))) ? (min((((((/* implicit */int) var_16)) % (((/* implicit */int) var_16)))), ((+(((/* implicit */int) arr_56 [i_0])))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_54 [i_16] [i_16])) || (((/* implicit */_Bool) arr_0 [i_16])))))));
                    }
                } 
            } 
        }
        arr_63 [i_0] = (+(min((((arr_59 [i_0] [i_0] [i_0] [i_0]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)65))))), (arr_2 [i_0]))));
        arr_64 [i_0] = 0ULL;
        arr_65 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_60 [i_0] [i_0] [i_0] [(signed char)4])) ? (((/* implicit */int) arr_56 [i_0])) : (((/* implicit */int) arr_38 [i_0] [i_0] [i_0]))))) || (((/* implicit */_Bool) ((arr_58 [i_0] [(_Bool)1] [i_0]) << (((((/* implicit */int) arr_43 [6ULL] [i_0] [6ULL])) - (110))))))))) * (((/* implicit */int) ((max((((/* implicit */unsigned int) var_7)), (var_11))) <= (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))));
    }
    var_30 = ((/* implicit */int) ((((/* implicit */int) var_3)) == (((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)156)))))))))));
}
