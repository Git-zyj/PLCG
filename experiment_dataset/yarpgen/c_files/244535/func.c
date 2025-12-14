/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244535
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244535 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244535
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
    var_17 = ((/* implicit */unsigned long long int) (-(((((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) != (18446744073709551615ULL))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) min((var_6), (((/* implicit */unsigned short) var_14)))))))));
    var_18 += ((/* implicit */long long int) min((min((((/* implicit */int) (!(var_13)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_6)))))), (((/* implicit */int) (unsigned char)150))));
    var_19 = ((/* implicit */_Bool) ((long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [(unsigned char)10]) : (((/* implicit */unsigned long long int) 1295272877)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_14))))));
        var_21 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))) / (arr_1 [i_0] [i_0])));
    }
    for (signed char i_1 = 0; i_1 < 12; i_1 += 4) 
    {
        var_22 = ((/* implicit */unsigned int) var_13);
        var_23 *= ((/* implicit */unsigned short) ((signed char) ((unsigned char) max((((/* implicit */unsigned short) arr_3 [i_1])), ((unsigned short)42107)))));
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 9; i_2 += 3) 
        {
            var_24 -= ((/* implicit */_Bool) min((((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (arr_4 [i_1] [4] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))))), (((/* implicit */unsigned int) min((((int) (unsigned char)6)), (((int) arr_2 [i_1])))))));
            arr_7 [(unsigned short)8] [(_Bool)1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14))));
            /* LoopSeq 1 */
            for (int i_3 = 0; i_3 < 12; i_3 += 2) 
            {
                var_25 = ((/* implicit */int) max((var_25), (((((/* implicit */int) ((unsigned short) arr_4 [i_2 + 1] [i_2 + 2] [i_2 + 1]))) ^ (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_9 [i_2 + 2] [i_2 + 1]))))))));
                var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)132)) < (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)16384)))))) ? (max((((/* implicit */int) max((arr_2 [i_1]), (((/* implicit */unsigned short) (unsigned char)6))))), (((((/* implicit */int) (signed char)(-127 - 1))) / (((/* implicit */int) (unsigned char)112)))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)(-127 - 1))), (3180607654493144353ULL)))) ? (((/* implicit */int) max((var_12), (((/* implicit */unsigned short) (unsigned char)105))))) : ((-(((/* implicit */int) (signed char)-1)))))))))));
            }
            var_27 = ((/* implicit */unsigned long long int) var_6);
            var_28 = ((/* implicit */int) var_6);
        }
        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned int) (((-(((/* implicit */int) ((((/* implicit */_Bool) arr_11 [5ULL])) || (((/* implicit */_Bool) (signed char)1))))))) % (((/* implicit */int) min(((short)20925), (((/* implicit */short) (signed char)-104)))))));
            var_29 -= ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */int) arr_3 [i_1])), (((((/* implicit */int) arr_9 [i_1] [i_1])) % (arr_11 [i_4]))))));
            /* LoopNest 2 */
            for (unsigned short i_5 = 0; i_5 < 12; i_5 += 1) 
            {
                for (int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
                        {
                            arr_20 [(_Bool)1] [i_4] [i_5] [i_6] [(_Bool)1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_7] [i_6] [(short)4] [i_1] [i_1])) ? (536870911ULL) : (((/* implicit */unsigned long long int) arr_16 [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) var_9))));
                        }
                        var_31 = ((/* implicit */unsigned short) var_14);
                        var_32 -= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15872))) - (arr_6 [i_1])))) && (((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_6]))));
                    }
                } 
            } 
            var_33 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((unsigned short) (signed char)103))) ? (((((/* implicit */_Bool) (signed char)-36)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)45))) : (-5379759748916678043LL))) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)28672), (var_4)))))))));
            var_34 = ((((/* implicit */int) var_4)) / (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1])) && (((/* implicit */_Bool) arr_5 [(unsigned short)10] [(signed char)0]))))));
        }
        /* vectorizable */
        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
        {
            var_35 = ((/* implicit */int) max((var_35), (((int) ((int) var_10)))));
            /* LoopNest 2 */
            for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
                {
                    {
                        arr_29 [i_10] [i_9] [i_9] [(unsigned short)10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)119)) ? (((((/* implicit */_Bool) arr_14 [i_10] [i_9] [i_8])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned char)143)))) : (((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) < (((/* implicit */int) arr_22 [i_8])))))));
                        var_36 -= (unsigned short)21255;
                        var_37 *= ((/* implicit */signed char) (-((-(((/* implicit */int) var_2))))));
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 12; i_11 += 2) 
        {
            for (long long int i_12 = 1; i_12 < 11; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 2) 
                    {
                        for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
                        {
                            {
                                arr_41 [(signed char)11] [i_12] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) min((((/* implicit */unsigned short) ((unsigned char) (unsigned short)26325))), (min((((/* implicit */unsigned short) (_Bool)1)), (var_0))))))));
                                arr_42 [i_1] [9LL] [i_1] [(unsigned char)9] [(unsigned char)9] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
                                var_38 = ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)(-127 - 1))) ^ (((((/* implicit */int) (unsigned char)148)) ^ (1525644522)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((short)-20926), (((/* implicit */short) (unsigned char)8)))))) : (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_36 [i_14] [i_12 - 1] [i_12 - 1] [i_1])), (var_8))))) / (((long long int) (short)-20939)))));
                                arr_43 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (short)20939))) ? (((/* implicit */int) (unsigned short)28678)) : (((/* implicit */int) (signed char)-126))));
                                arr_44 [i_14] [i_1] [i_11] [i_1] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)250))));
                            }
                        } 
                    } 
                    var_39 = ((/* implicit */signed char) (unsigned char)150);
                }
            } 
        } 
    }
}
