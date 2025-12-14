/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216565
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) - (var_5)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 8; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            {
                var_13 = ((/* implicit */unsigned char) ((((int) (unsigned char)179)) * (((/* implicit */int) arr_3 [i_1]))));
                var_14 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_5 [(unsigned char)8])) ? ((~(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) & (var_10))))) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)114)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (signed char i_2 = 1; i_2 < 19; i_2 += 4) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_3 = 2; i_3 < 21; i_3 += 3) 
        {
            arr_11 [i_2] = ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_9 [i_2])) ? (((/* implicit */int) arr_10 [i_2] [i_2] [i_2])) : (((/* implicit */int) (_Bool)0)))) / ((~(var_2)))))));
            arr_12 [i_2] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_8 [i_2 + 1])) ? (arr_8 [i_2 + 3]) : (arr_8 [i_2 + 3]))), (((((/* implicit */_Bool) var_4)) ? (var_7) : (arr_8 [i_2 - 1])))));
            var_15 = ((/* implicit */int) ((short) max((((/* implicit */unsigned int) ((unsigned char) arr_7 [i_2]))), ((~(arr_8 [i_3]))))));
            /* LoopSeq 2 */
            for (short i_4 = 0; i_4 < 22; i_4 += 3) 
            {
                var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) arr_14 [i_2 + 1] [(unsigned char)6] [i_4])), (arr_8 [i_4]))) < (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2 - 1]))))))) + (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_8 [i_3])))) : (((((/* implicit */_Bool) (short)-15619)) ? (-7815339870947627027LL) : (((/* implicit */long long int) -391334450)))))))))));
                /* LoopSeq 4 */
                for (unsigned int i_5 = 4; i_5 < 20; i_5 += 4) 
                {
                    var_17 *= ((/* implicit */_Bool) (~(var_4)));
                    var_18 |= ((/* implicit */unsigned char) 11571725030376929107ULL);
                    var_19 = ((/* implicit */short) min((var_19), (((/* implicit */short) ((unsigned int) (unsigned char)80)))));
                }
                for (unsigned short i_6 = 1; i_6 < 18; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) ((unsigned char) arr_16 [i_2 - 1] [i_3 - 2]));
                        var_21 = ((/* implicit */short) arr_7 [i_2]);
                        var_22 = ((/* implicit */signed char) (~(((/* implicit */int) (short)0))));
                        var_23 *= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 2305834213120671744LL))));
                        arr_23 [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_9))));
                    }
                    arr_24 [i_2] [i_3 - 2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_8)), (arr_8 [i_4])))) ? (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (short)-1)))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_13 [i_6 + 3])))))))), ((~(((((/* implicit */_Bool) -957869938)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16380))) : (var_4)))))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    var_24 = ((/* implicit */unsigned char) arr_10 [i_2] [i_4] [(short)6]);
                    arr_27 [i_2] = ((/* implicit */unsigned int) ((unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) arr_20 [i_2] [i_2] [i_4] [i_8]))))), (min((((/* implicit */unsigned int) arr_18 [i_2] [i_2] [1] [i_2] [i_2] [i_2])), (arr_8 [i_4]))))));
                    var_25 = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)130))) % (min((arr_22 [i_8] [i_4] [(short)0] [i_2]), (((/* implicit */unsigned long long int) var_6)))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)120)))));
                    var_26 -= ((/* implicit */short) ((long long int) min((((/* implicit */short) (signed char)96)), (max((arr_17 [i_2] [i_3 - 1] [i_3 - 2] [i_4] [i_4]), (((/* implicit */short) arr_7 [(_Bool)1])))))));
                }
                for (long long int i_9 = 4; i_9 < 21; i_9 += 4) 
                {
                    var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (unsigned short)39455))));
                    var_28 |= ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) (_Bool)1)), (arr_25 [i_9])))) ? (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)32256)) >> (((var_2) - (143329388)))))) : (arr_15 [i_2 + 1] [i_2 + 1] [i_2 + 1] [i_2 + 1])))), (((13875441975268347614ULL) | (((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) >> (((((/* implicit */int) arr_17 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2 - 1])) + (1342))))))))));
                    arr_30 [i_2] [i_2] [i_2] [i_4] [i_9] = 14627348333307745918ULL;
                    var_29 = ((/* implicit */short) var_5);
                    arr_31 [i_9] [i_9] [i_9] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)12040))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((var_11) + (((/* implicit */int) arr_19 [i_2 + 2] [i_2 + 2] [i_4] [i_9 - 1]))))) ? (((/* implicit */int) max((((/* implicit */short) (unsigned char)179)), ((short)2615)))) : ((-(((/* implicit */int) arr_10 [8ULL] [i_3] [i_3]))))))) : (var_10)));
                }
                var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) min((((/* implicit */short) (unsigned char)179)), (var_6)))) : (((/* implicit */int) arr_9 [i_2]))))) ? (min((((long long int) 36028796951855104ULL)), (((/* implicit */long long int) var_7)))) : (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_2] [i_2] [i_2] [(unsigned short)2] [i_2] [i_2])))));
                var_31 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) (unsigned char)116)), (617112764U)));
            }
            for (unsigned long long int i_10 = 2; i_10 < 20; i_10 += 1) 
            {
                arr_36 [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) 11632314343634100075ULL)) && (((/* implicit */_Bool) var_2)))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) ((((/* implicit */_Bool) arr_17 [i_2] [i_2] [i_2] [i_2] [i_2 + 3])) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_28 [i_3] [i_3] [i_2] [i_3] [i_3]) : (arr_33 [i_2 + 2] [i_3 - 2] [i_2 + 2])))))))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((((/* implicit */int) (unsigned short)42749)) + (((/* implicit */int) (short)-2616)))), (((/* implicit */int) arr_25 [i_3 - 1]))))) ? (((((((/* implicit */_Bool) 10U)) ? (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_2] [i_3] [i_2] [i_2] [(unsigned char)0]))) : (-7815339870947627027LL))) | (((/* implicit */long long int) (-(((/* implicit */int) arr_25 [i_3]))))))) : (((/* implicit */long long int) ((/* implicit */int) max(((short)-7377), (var_6)))))));
            }
        }
        for (signed char i_11 = 2; i_11 < 21; i_11 += 1) 
        {
            var_33 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_2] [18])) ? (182159189) : (min((var_11), (((/* implicit */int) arr_25 [i_11]))))))), (((((/* implicit */_Bool) (unsigned short)42749)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_2] [i_11] [i_11 + 1] [i_11] [(unsigned char)12] [i_11]))) : (max((arr_33 [i_11 + 1] [i_11 + 1] [i_11 + 1]), (((/* implicit */unsigned long long int) var_2))))))));
            var_34 *= ((/* implicit */unsigned long long int) ((unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */int) (short)7380)))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) var_9)))))));
            var_35 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) (_Bool)1)))) + (arr_29 [i_2])))));
        }
        for (long long int i_12 = 1; i_12 < 19; i_12 += 4) 
        {
            var_36 = ((/* implicit */short) 18446744073709551615ULL);
            arr_43 [i_2] = ((/* implicit */unsigned int) var_1);
            arr_44 [i_2] [i_2 + 3] [i_2 + 1] = ((/* implicit */_Bool) min((((/* implicit */int) ((short) (unsigned short)7389))), (((((/* implicit */_Bool) var_8)) ? (var_2) : (((/* implicit */int) (unsigned short)20810))))));
        }
        var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) arr_39 [(unsigned short)16]))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 21; i_13 += 3) 
        {
            for (short i_14 = 3; i_14 < 19; i_14 += 4) 
            {
                {
                    arr_52 [i_2] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)42749))));
                    var_38 ^= ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)227))) - (arr_49 [(unsigned char)20])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : (((/* implicit */int) min((arr_32 [i_14] [i_13 - 1] [(unsigned char)21] [(unsigned char)21]), (((/* implicit */unsigned short) var_8))))))), (var_2)));
                }
            } 
        } 
        var_39 = ((/* implicit */short) 1740361651);
        /* LoopNest 2 */
        for (unsigned long long int i_15 = 0; i_15 < 22; i_15 += 1) 
        {
            for (long long int i_16 = 1; i_16 < 21; i_16 += 3) 
            {
                {
                    var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) max((((/* implicit */int) ((unsigned short) arr_40 [i_2] [i_2]))), ((~(84969666))))))));
                    arr_58 [i_2] [i_15] [i_2] = ((/* implicit */long long int) min((arr_35 [i_16 - 1] [i_16 + 1] [i_2 + 2] [i_2]), (((/* implicit */unsigned long long int) max((var_11), (((/* implicit */int) ((arr_15 [i_16] [i_2] [i_15] [i_2]) < (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2])))))))))));
                    arr_59 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)0))))) * (max((arr_33 [i_16] [i_2] [i_2]), (((/* implicit */unsigned long long int) (short)19960)))))))));
                    var_41 *= ((/* implicit */short) min((((((/* implicit */_Bool) arr_8 [i_2])) ? (((((/* implicit */_Bool) arr_35 [i_2] [11ULL] [11ULL] [11ULL])) ? (((/* implicit */int) arr_16 [i_15] [i_16 + 1])) : (((/* implicit */int) arr_40 [i_2 + 1] [i_2 + 2])))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (var_3)))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_25 [i_16 - 1])) : (((/* implicit */int) arr_48 [i_16] [i_15] [i_2]))))) || (((((/* implicit */_Bool) arr_14 [i_2] [0ULL] [i_16])) && (((/* implicit */_Bool) arr_37 [16ULL])))))))));
                }
            } 
        } 
    }
    for (signed char i_17 = 1; i_17 < 19; i_17 += 4) /* same iter space */
    {
        var_42 |= ((/* implicit */int) min(((~(((((/* implicit */unsigned int) ((/* implicit */int) var_1))) ^ (var_7))))), (((/* implicit */unsigned int) max((max(((unsigned short)26439), (((/* implicit */unsigned short) arr_61 [i_17 - 1])))), (min((arr_40 [i_17 + 1] [i_17]), (var_1))))))));
        arr_63 [i_17] [(unsigned char)14] = ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_46 [18U] [i_17 + 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1] [i_17 + 1]))) : ((-(((var_4) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))))));
    }
    for (signed char i_18 = 1; i_18 < 19; i_18 += 4) /* same iter space */
    {
        var_43 ^= (-((((!(((/* implicit */_Bool) arr_28 [i_18] [i_18 + 2] [0U] [i_18] [i_18 + 2])))) ? (max((((/* implicit */int) var_1)), (127))) : (((/* implicit */int) ((unsigned short) arr_38 [(unsigned char)6] [(unsigned char)6] [(unsigned char)6]))))));
        arr_67 [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32243)) ? (((/* implicit */int) (signed char)10)) : (((/* implicit */int) (unsigned short)15063))));
    }
    var_44 = ((/* implicit */unsigned long long int) ((unsigned char) var_5));
}
