/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243756
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243756 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243756
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
    var_19 ^= ((/* implicit */int) (signed char)-6);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_0 [i_0] [i_0])), (var_0)))) == (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) % (18446744073709551609ULL)))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            for (unsigned short i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((/* implicit */unsigned short) (signed char)84);
                    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((9223372036854775807LL), (((/* implicit */long long int) max((4294967275U), (((/* implicit */unsigned int) (short)(-32767 - 1))))))))) || (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_2])) || (((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))));
                    var_22 = ((/* implicit */signed char) 0LL);
                    var_23 = ((/* implicit */signed char) arr_2 [12LL] [i_1] [i_2]);
                }
            } 
        } 
        var_24 |= ((/* implicit */unsigned char) var_11);
    }
    /* vectorizable */
    for (unsigned int i_3 = 4; i_3 < 12; i_3 += 4) 
    {
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 13; i_4 += 2) 
        {
            for (unsigned short i_5 = 0; i_5 < 14; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) 
                {
                    {
                        var_25 *= ((/* implicit */unsigned int) (-((-(1993513811)))));
                        /* LoopSeq 1 */
                        for (unsigned int i_7 = 2; i_7 < 12; i_7 += 3) 
                        {
                            arr_20 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((arr_15 [i_3] [i_5] [i_7 + 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_5])))));
                            var_26 &= ((/* implicit */short) arr_17 [i_3]);
                            var_27 += ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)0))));
                            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) arr_10 [i_4 + 1])))))));
                        }
                        arr_21 [i_3 - 3] [i_5] [i_3 - 3] [i_3 - 3] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_5] [i_5] [i_6]))) | (arr_9 [i_3 - 1] [6]))) >= (((/* implicit */long long int) ((/* implicit */int) ((-1354868601) <= (((/* implicit */int) (signed char)(-127 - 1)))))))));
                    }
                } 
            } 
        } 
        arr_22 [i_3] = ((/* implicit */long long int) arr_14 [i_3] [(signed char)2] [i_3 - 3]);
        arr_23 [i_3 + 2] = ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)12)) << (((((/* implicit */int) (signed char)-6)) + (11)))));
        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) arr_11 [i_3 - 3])) - (4294967291U)));
    }
    /* LoopSeq 4 */
    for (unsigned int i_8 = 0; i_8 < 23; i_8 += 2) 
    {
        var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)6))))) != (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) arr_24 [i_8])) == (var_12))))) <= (((((/* implicit */_Bool) 13U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)14))) : (13U))))))));
        var_31 = ((/* implicit */unsigned char) arr_24 [i_8]);
        var_32 ^= arr_24 [i_8];
        var_33 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_24 [i_8]), (((/* implicit */unsigned int) arr_25 [i_8])))))));
        arr_26 [i_8] = min((max((((arr_24 [i_8]) * (((/* implicit */unsigned int) ((/* implicit */int) var_17))))), (arr_24 [i_8]))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-28)) / ((+(-2104234007)))))));
    }
    for (long long int i_9 = 0; i_9 < 16; i_9 += 4) 
    {
        var_34 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(max((var_8), (arr_25 [i_9])))))) ? ((((~(((/* implicit */int) (signed char)-2)))) / (((/* implicit */int) (unsigned char)96)))) : ((-(1271087582)))));
        arr_29 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) ((arr_27 [(short)13]) | (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))) ? (max((arr_24 [i_9]), (((/* implicit */unsigned int) (signed char)-10)))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_28 [i_9] [i_9]), (arr_28 [i_9] [i_9])))))));
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 16; i_10 += 1) 
        {
            var_35 = ((/* implicit */unsigned char) max(((+(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-79))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) var_14)))))) < (((((/* implicit */_Bool) var_11)) ? (arr_27 [i_10]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_9] [i_10] [i_10]))))))))));
            /* LoopNest 2 */
            for (long long int i_11 = 0; i_11 < 16; i_11 += 2) 
            {
                for (unsigned char i_12 = 1; i_12 < 13; i_12 += 3) 
                {
                    {
                        arr_39 [(short)12] [i_10] [2] [i_12 - 1] [2] = ((/* implicit */unsigned char) ((max((arr_32 [i_12 + 2]), (arr_32 [i_12 + 3]))) < (arr_32 [i_12 + 3])));
                        var_36 -= ((/* implicit */unsigned short) (~(((((/* implicit */long long int) 4294967295U)) ^ ((-(8065976430612627727LL)))))));
                        arr_40 [i_9] [(unsigned char)7] [i_11] [(unsigned char)7] = ((/* implicit */signed char) (+((+(arr_32 [i_12 + 2])))));
                    }
                } 
            } 
            var_37 ^= (+(((unsigned int) arr_28 [(signed char)12] [(unsigned short)4])));
        }
        for (unsigned char i_13 = 4; i_13 < 15; i_13 += 1) 
        {
            arr_44 [8] [8] [i_13] = ((int) (signed char)-13);
            /* LoopSeq 1 */
            for (unsigned int i_14 = 2; i_14 < 13; i_14 += 4) 
            {
                var_38 = ((/* implicit */long long int) max((var_38), (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) == (-18LL)))) << (((((/* implicit */int) arr_43 [(unsigned char)4])) - (75))))))));
                arr_47 [i_13] [i_13] [i_9] = ((/* implicit */unsigned char) var_0);
                /* LoopNest 2 */
                for (unsigned char i_15 = 1; i_15 < 15; i_15 += 2) 
                {
                    for (unsigned char i_16 = 1; i_16 < 15; i_16 += 4) 
                    {
                        {
                            var_39 = ((/* implicit */signed char) max((var_39), (((/* implicit */signed char) min((((arr_33 [i_16 - 1] [i_16 + 1]) | (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) arr_50 [(_Bool)0] [i_13 - 3] [i_9]))))))), (((/* implicit */long long int) max((((0U) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)5))))), (((arr_38 [i_9] [i_13]) ^ (arr_38 [i_9] [i_15 + 1])))))))))));
                            arr_54 [i_9] [i_9] [i_15] [i_9] [i_9] = ((/* implicit */unsigned char) min((min(((+(4294967295U))), (15U))), (((/* implicit */unsigned int) (~(arr_49 [i_14 - 1] [i_16 - 1] [i_16 - 1]))))));
                            arr_55 [i_15] [i_13] [i_13] [i_13] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_36 [i_13] [i_14 - 2] [i_14 - 2] [i_15] [i_16] [10])) || (((/* implicit */_Bool) arr_36 [i_9] [i_14 - 2] [11U] [i_16 - 1] [i_16] [i_16]))))) % ((+(((/* implicit */int) (short)-10533))))));
                            var_40 ^= ((/* implicit */unsigned char) (short)-27839);
                            arr_56 [i_15] = ((/* implicit */unsigned char) (-(((((/* implicit */unsigned long long int) -1259224738)) * (max((7887840613544689620ULL), (((/* implicit */unsigned long long int) -11LL))))))));
                        }
                    } 
                } 
            }
            var_41 = ((/* implicit */unsigned char) ((int) max((((/* implicit */unsigned int) max((var_11), (((/* implicit */int) arr_34 [i_9] [i_13]))))), (max((((/* implicit */unsigned int) (signed char)5)), (579242909U))))));
        }
    }
    for (signed char i_17 = 0; i_17 < 24; i_17 += 2) 
    {
        var_42 = ((/* implicit */unsigned int) var_10);
        var_43 = ((/* implicit */int) ((unsigned char) 13LL));
        arr_59 [i_17] [i_17] = ((/* implicit */unsigned long long int) (((((+(((/* implicit */int) arr_57 [i_17])))) - (((((/* implicit */int) arr_57 [i_17])) - (((/* implicit */int) arr_57 [i_17])))))) % (((/* implicit */int) ((unsigned char) arr_58 [i_17] [i_17])))));
        var_44 = ((/* implicit */int) min((var_44), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) ^ (4294967282U)))) && (((/* implicit */_Bool) ((((((/* implicit */int) arr_57 [i_17])) << (((((/* implicit */int) arr_58 [i_17] [i_17])) - (118))))) ^ (max((((/* implicit */int) arr_57 [i_17])), (var_8)))))))))));
    }
    for (unsigned short i_18 = 0; i_18 < 23; i_18 += 3) 
    {
        var_45 -= ((/* implicit */int) (signed char)21);
        var_46 = ((/* implicit */unsigned long long int) min((var_46), (((/* implicit */unsigned long long int) ((arr_60 [i_18] [i_18]) / (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [22]))))))));
    }
    /* LoopSeq 3 */
    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
    {
        var_47 ^= ((/* implicit */int) (!(((((/* implicit */_Bool) (short)7168)) && (((/* implicit */_Bool) (signed char)3))))));
        /* LoopSeq 1 */
        for (signed char i_20 = 1; i_20 < 12; i_20 += 3) 
        {
            var_48 = ((/* implicit */unsigned char) ((((unsigned int) arr_14 [i_20] [i_20 + 1] [i_19])) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 6U))))))));
            var_49 = ((/* implicit */long long int) ((int) ((((/* implicit */int) arr_57 [i_20])) - (((/* implicit */int) (signed char)25)))));
            var_50 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((unsigned char) var_10)))));
            var_51 = ((/* implicit */unsigned int) ((int) (((~(arr_64 [i_20]))) / (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_20 + 1] [i_19 + 1] [i_19 + 1]))))));
            arr_68 [i_20] = (~((((~(9223372036854775807LL))) & (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_19] [i_19] [i_20]))) & (arr_31 [i_19] [i_20] [i_19 + 1])))))));
        }
    }
    for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
    {
        arr_72 [i_21] = min((((int) 1983870269U)), (((/* implicit */int) (unsigned short)25843)));
        var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) max((max((9223372036854775807LL), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) max((((/* implicit */int) (signed char)84)), ((-(((/* implicit */int) (signed char)-15))))))))))));
        var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_3 [i_21] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) 1168430807U)) <= (var_15))))) : (var_12))), (((/* implicit */long long int) max((((/* implicit */unsigned int) ((-1259224735) / (((/* implicit */int) arr_0 [i_21] [i_21]))))), (var_9)))))))));
        /* LoopNest 3 */
        for (unsigned int i_22 = 0; i_22 < 10; i_22 += 1) 
        {
            for (int i_23 = 1; i_23 < 9; i_23 += 3) 
            {
                for (unsigned char i_24 = 1; i_24 < 8; i_24 += 3) 
                {
                    {
                        arr_80 [i_21] [0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((-1259224738), (((/* implicit */int) (signed char)10)))) + (-1259224738)))) ? (13U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((0U) % (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-6)))))) && (((/* implicit */_Bool) 1356504587))))))));
                        arr_81 [i_21] [4U] [i_22] [i_23 - 1] [i_22] [i_24] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-44))) - ((-(5699765652497086871LL)))));
                        var_54 = ((int) ((((/* implicit */unsigned int) ((var_11) - (((/* implicit */int) arr_51 [i_21] [i_21] [i_23]))))) ^ (arr_60 [i_23 - 1] [i_24 + 2])));
                        var_55 = ((/* implicit */long long int) max((var_55), (((/* implicit */long long int) arr_77 [(signed char)8] [(signed char)8] [i_23 - 1]))));
                    }
                } 
            } 
        } 
    }
    for (short i_25 = 4; i_25 < 17; i_25 += 3) 
    {
        arr_85 [i_25] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((var_13) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_61 [i_25 + 2] [i_25 + 1])))))) : (var_4)))) ? (arr_84 [i_25 - 2]) : (((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) (signed char)-6)), (-8451441197307586238LL))) | (((/* implicit */long long int) arr_24 [(unsigned char)14])))))));
        arr_86 [i_25] [i_25 - 1] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_58 [i_25] [i_25])) ? (((/* implicit */int) (unsigned short)27559)) : (((/* implicit */int) (signed char)6))))) : (arr_84 [i_25 - 2]))), (((/* implicit */unsigned long long int) (unsigned char)251))));
        var_56 = ((((arr_84 [i_25 + 2]) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((416756769129004582ULL) >= (((/* implicit */unsigned long long int) arr_24 [i_25])))))))) >> ((((+((-(-1259224738))))) - (1259224723))));
    }
}
