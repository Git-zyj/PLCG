/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191769
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
    var_12 = ((/* implicit */unsigned long long int) min((var_12), (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)19089)) << (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) (_Bool)1))));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((max((min((((/* implicit */int) (unsigned short)46446)), (1646658925))), ((-(((/* implicit */int) arr_1 [i_0] [i_0])))))) + ((((+(((/* implicit */int) arr_0 [i_0])))) % ((+(((/* implicit */int) arr_0 [i_0]))))))));
        arr_3 [i_0] [5] |= ((/* implicit */short) (unsigned short)11768);
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 10; i_1 += 3) 
    {
        var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) arr_5 [(unsigned char)5] [i_1]))));
        var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((arr_5 [i_1] [i_1]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_5 [i_1] [i_1])))))));
        var_16 -= ((/* implicit */short) (_Bool)1);
    }
    for (long long int i_2 = 0; i_2 < 15; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] &= ((/* implicit */unsigned int) (-(((((/* implicit */int) arr_1 [i_2] [i_2])) & (((/* implicit */int) arr_8 [i_2] [i_2]))))));
        var_17 &= ((/* implicit */signed char) (unsigned char)15);
    }
    for (long long int i_3 = 0; i_3 < 15; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (-(((((/* implicit */_Bool) 140728898420736ULL)) ? (((/* implicit */unsigned long long int) -1272280714)) : (5067747351590697329ULL))))))));
        var_19 &= ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */int) arr_0 [i_3])) > (-1646658930))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned int i_4 = 0; i_4 < 15; i_4 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_5 = 0; i_5 < 15; i_5 += 1) 
            {
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_12 [i_3])))))));
                arr_18 [i_3] = ((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_3]))) <= (((((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_4]))) - (arr_13 [i_4]))));
                arr_19 [i_3] [i_4] [i_5] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_3])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_0 [i_3]))));
            }
            var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) arr_0 [i_3]))));
        }
    }
    /* LoopSeq 3 */
    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 2) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) arr_0 [i_6])), ((-(18446744073709551615ULL))))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_0 [i_6]))))))))));
        var_23 -= ((/* implicit */_Bool) (((-(((/* implicit */int) ((((/* implicit */unsigned int) -1646658917)) >= (arr_22 [(short)16])))))) * ((-(arr_21 [i_6] [i_6])))));
        arr_23 [i_6] &= ((/* implicit */unsigned char) ((arr_22 [i_6]) / (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)28425)))))));
        var_24 = ((/* implicit */unsigned long long int) max((var_24), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((-8639953689475407396LL) & (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) || (((/* implicit */_Bool) arr_21 [i_6] [i_6])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6]))))) : ((((_Bool)1) ? (arr_20 [i_6]) : (((/* implicit */int) (short)-8192))))))))))));
    }
    for (unsigned long long int i_7 = 4; i_7 < 11; i_7 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (signed char i_8 = 2; i_8 < 11; i_8 += 1) 
        {
            arr_28 [i_7] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)0)) ? (arr_27 [i_7] [i_7] [i_7]) : (((((((/* implicit */_Bool) (short)0)) ? (arr_27 [i_7] [i_7] [5]) : (((/* implicit */int) arr_1 [i_7] [i_8])))) ^ (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_7]))) > (arr_15 [i_7]))))))));
            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1)))))));
            arr_29 [i_7] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) 107448825U)), (13378996722118854279ULL)))))) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) (+(968524221)))) > (((2815389283026004269ULL) >> (((/* implicit */int) (short)2))))))) : ((-(-1646658925)))));
            var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_25 [i_7])))))));
        }
        for (unsigned int i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            var_27 = (-(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)125))) + (13265955211399393717ULL))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))))));
            var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) ((((/* implicit */int) (short)17)) >> (((((((/* implicit */int) arr_24 [i_7 - 4])) << (((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (unsigned char)230)))))) - (857))))))));
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 14; i_10 += 3) 
        {
            var_29 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_32 [i_7] [i_10])) ? (8756567688400872993ULL) : (((/* implicit */unsigned long long int) 4294967295U)))) ^ (((/* implicit */unsigned long long int) arr_11 [i_7]))));
            arr_34 [i_7] [i_7] [i_7] = (+(arr_15 [i_7 - 1]));
        }
        var_30 = ((/* implicit */unsigned int) max((var_30), (((/* implicit */unsigned int) ((((arr_16 [i_7] [(short)10] [i_7]) << (((max((((/* implicit */unsigned long long int) (unsigned char)230)), (arr_16 [i_7 - 4] [i_7 + 1] [i_7 + 1]))) - (10051520942761194272ULL))))) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_7])) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)15973)))))))))))));
    }
    for (unsigned long long int i_11 = 4; i_11 < 11; i_11 += 3) /* same iter space */
    {
        var_31 ^= ((/* implicit */unsigned long long int) min(((-(((((/* implicit */int) arr_12 [i_11])) & (533558605))))), (((/* implicit */int) arr_26 [(signed char)12]))));
        var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) ((min((((((/* implicit */int) arr_26 [(signed char)8])) / (((/* implicit */int) arr_8 [i_11] [(short)12])))), ((-(((/* implicit */int) arr_9 [i_11])))))) | (((/* implicit */int) (signed char)108)))))));
        /* LoopSeq 3 */
        for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
        {
            var_33 = ((/* implicit */unsigned char) min((var_33), (((/* implicit */unsigned char) ((((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_20 [13LL])) ? (arr_11 [i_12]) : (((/* implicit */int) arr_35 [i_11] [i_12]))))))) ^ (((((/* implicit */long long int) arr_27 [i_11] [2LL] [i_11])) + ((-(6666942343667064670LL))))))))));
            /* LoopSeq 1 */
            for (short i_13 = 1; i_13 < 13; i_13 += 3) 
            {
                arr_44 [i_12] [i_12] [i_13] = ((/* implicit */long long int) max((((arr_33 [i_11] [i_11]) - (((/* implicit */unsigned int) -1330986593)))), (((/* implicit */unsigned int) max(((-(((/* implicit */int) arr_9 [i_11])))), (arr_17 [i_11 - 4] [i_12 - 1] [i_11 - 4] [i_11]))))));
                arr_45 [(short)1] [(short)1] [i_12] [i_11] = ((/* implicit */_Bool) arr_13 [(_Bool)1]);
                var_34 = ((/* implicit */int) min((var_34), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-94)) ? (((/* implicit */int) arr_30 [10ULL])) : (((/* implicit */int) arr_9 [(short)12]))))) & (((((/* implicit */_Bool) (short)29)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (arr_31 [(_Bool)1] [i_12])))))) || (((/* implicit */_Bool) (~(((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (4491278653239551795LL)))))))))));
                var_35 ^= ((/* implicit */unsigned int) max((((/* implicit */int) arr_42 [i_11 - 3])), ((-(((/* implicit */int) arr_42 [i_11 + 2]))))));
            }
            var_36 = ((/* implicit */unsigned long long int) (-(((arr_20 [i_12 - 1]) / (arr_20 [i_12 - 1])))));
        }
        for (unsigned char i_14 = 0; i_14 < 14; i_14 += 1) 
        {
            var_37 = ((/* implicit */int) max((var_37), (((((/* implicit */int) arr_26 [(_Bool)0])) - (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)-32758)) : (((/* implicit */int) (unsigned short)26865))))) || (((/* implicit */_Bool) arr_47 [i_11] [i_14])))))))));
            var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_11 - 4] [i_14])) && (((/* implicit */_Bool) arr_35 [i_11 - 4] [2U]))))) == (((/* implicit */int) ((5180788862310157900ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_11 - 3])))))))))));
        }
        for (unsigned int i_15 = 0; i_15 < 14; i_15 += 1) 
        {
            var_39 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)56)) ? (-1646658926) : (((/* implicit */int) (signed char)-120))))) ? (((((/* implicit */_Bool) -5LL)) ? (5180788862310157900ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) : (((/* implicit */unsigned long long int) arr_13 [i_11])));
            var_40 |= ((/* implicit */short) (-((+(((/* implicit */int) (unsigned char)1))))));
            arr_50 [(signed char)10] [i_15] |= ((/* implicit */signed char) ((5180788862310157908ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_11 [i_11])) ? (((/* implicit */unsigned long long int) 3505594883U)) : (13265955211399393716ULL))) > (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32512)) ? (((/* implicit */int) (_Bool)1)) : (arr_27 [i_11 + 3] [(_Bool)1] [i_11 + 1]))))))))));
        }
        /* LoopSeq 2 */
        for (unsigned char i_16 = 0; i_16 < 14; i_16 += 3) /* same iter space */
        {
            var_41 = ((/* implicit */unsigned long long int) min((var_41), (((/* implicit */unsigned long long int) arr_40 [i_11 - 2] [i_16] [12]))));
            var_42 = ((/* implicit */unsigned char) max((var_42), (arr_25 [6])));
        }
        for (unsigned char i_17 = 0; i_17 < 14; i_17 += 3) /* same iter space */
        {
            var_43 = ((/* implicit */short) min((var_43), (((/* implicit */short) 5153596373522164486LL))));
            var_44 = ((/* implicit */int) max((var_44), (((/* implicit */int) (short)17))));
            /* LoopSeq 1 */
            for (long long int i_18 = 0; i_18 < 14; i_18 += 2) 
            {
                arr_58 [i_11] [i_17] = ((/* implicit */long long int) arr_37 [i_11 + 2]);
                arr_59 [i_11] [i_17] [i_11] [i_17] = arr_54 [i_18] [2ULL];
                var_45 = ((/* implicit */unsigned char) min((var_45), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_38 [i_11])) || (((/* implicit */_Bool) (short)32516)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_8 [i_11] [i_17])), (((((/* implicit */_Bool) -1646658902)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_25 [i_11]))) : (17859768612025464344ULL)))))))))));
            }
            var_46 = ((/* implicit */long long int) max((var_46), (((/* implicit */long long int) ((((/* implicit */_Bool) 16567092512649248229ULL)) ? (((/* implicit */int) (short)-8)) : (((/* implicit */int) arr_14 [(unsigned char)7])))))));
            var_47 &= ((/* implicit */unsigned int) arr_12 [i_11]);
        }
    }
    var_48 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)42)) ? (273354374404308437ULL) : (((8514853649749773391ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
    var_49 ^= ((/* implicit */short) var_2);
}
