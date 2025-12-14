/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220121
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
    var_10 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (short)23527)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (unsigned char)16))))))) ? (((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))) : (min((((((/* implicit */_Bool) (signed char)-64)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_6))))), (((/* implicit */long long int) ((int) (unsigned char)240)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_11 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) 72659623)) - (arr_1 [i_0]))) % ((~(arr_1 [i_0])))));
        var_12 = ((/* implicit */unsigned int) arr_2 [i_0]);
    }
    for (int i_1 = 4; i_1 < 16; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_3 [i_1 - 3]);
        /* LoopNest 3 */
        for (int i_2 = 4; i_2 < 16; i_2 += 1) 
        {
            for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
            {
                for (signed char i_4 = 1; i_4 < 16; i_4 += 2) 
                {
                    {
                        arr_17 [i_1] [2ULL] |= ((/* implicit */unsigned long long int) (-((-(((((/* implicit */int) (unsigned char)221)) + (((/* implicit */int) (unsigned short)13757))))))));
                        var_13 = ((/* implicit */long long int) (-((+(((((/* implicit */int) (unsigned char)221)) - (((/* implicit */int) arr_14 [i_1] [i_2] [10LL] [i_2]))))))));
                        var_14 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)17394))))))), (((((/* implicit */_Bool) (+(11100472014355708880ULL)))) ? (((/* implicit */unsigned long long int) min((arr_16 [i_1]), (((/* implicit */unsigned int) (_Bool)1))))) : ((-(18446744073709551615ULL)))))));
                        arr_18 [i_1 - 1] [i_2] [i_2] [5LL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((arr_6 [i_4 + 1] [i_1 + 2]), (arr_6 [i_4 - 1] [i_1 - 1])))) & ((~(arr_1 [i_4 - 1])))));
                        var_15 = ((/* implicit */short) ((int) (+(((((/* implicit */int) (signed char)0)) - (((/* implicit */int) arr_15 [i_2] [i_2] [i_2])))))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_22 [i_5] = ((/* implicit */_Bool) ((short) ((min((((/* implicit */int) (unsigned short)35704)), (79318748))) == (((((/* implicit */int) arr_19 [i_5])) & (((/* implicit */int) (_Bool)0)))))));
        /* LoopSeq 2 */
        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 20; i_8 += 3) 
                {
                    {
                        arr_31 [i_5] [i_6] [i_7] [18LL] = ((/* implicit */unsigned char) min(((+((-(((/* implicit */int) (unsigned short)65533)))))), ((+(((/* implicit */int) arr_21 [i_7]))))));
                        arr_32 [i_6] [(_Bool)0] [i_7] [i_6] [i_6] = min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [i_8] [i_6]))))), (((((/* implicit */_Bool) (+(1778514496)))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) (signed char)115)), (5922976316782697349LL)))) : ((-(arr_1 [(short)13]))))));
                    }
                } 
            } 
            arr_33 [i_6] = ((/* implicit */signed char) min((((/* implicit */short) max((arr_27 [i_6] [i_5] [i_5]), (arr_27 [i_5] [i_6] [i_6])))), (((short) arr_27 [19ULL] [i_6] [i_6]))));
            arr_34 [i_6] = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (_Bool)1)), (((((/* implicit */int) arr_24 [i_5] [i_6] [i_6])) - (((/* implicit */int) arr_30 [i_5] [i_5])))))), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_27 [i_5] [i_5] [(signed char)5])) << (((2079070302) - (2079070297)))))) && (((/* implicit */_Bool) min((arr_0 [i_6]), (((/* implicit */long long int) arr_2 [i_5]))))))))));
            var_16 *= ((short) ((((((/* implicit */int) arr_19 [i_6])) % (((/* implicit */int) (signed char)-38)))) > (((((/* implicit */int) arr_29 [i_6] [i_6] [i_5] [i_5])) / (((/* implicit */int) (_Bool)1))))));
        }
        for (int i_9 = 0; i_9 < 20; i_9 += 3) 
        {
            var_17 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_21 [i_9])) - (((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_5])) && (((/* implicit */_Bool) arr_26 [i_9]))))))) > (((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) arr_35 [i_5] [i_5]))) + (arr_25 [i_9]))) > (max((6604270545370499531LL), (((/* implicit */long long int) arr_23 [i_5])))))))));
            /* LoopNest 2 */
            for (signed char i_10 = 0; i_10 < 20; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 4) 
                {
                    {
                        arr_41 [i_9] [i_11] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_21 [i_11]))));
                        arr_42 [i_5] [(unsigned short)4] [i_11] |= ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)42))) >= (-8511098793557398410LL)))), (((((/* implicit */_Bool) (unsigned char)255)) ? (arr_20 [i_9]) : (((/* implicit */int) (unsigned short)29)))))))));
                        var_18 = ((/* implicit */int) arr_0 [i_5]);
                        arr_43 [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_40 [i_5] [i_9] [i_9] [i_10] [18LL]), (arr_40 [i_5] [i_9] [i_9] [i_10] [i_11])))) && (((/* implicit */_Bool) (+(arr_1 [i_5]))))));
                        arr_44 [i_9] [i_9] [i_9] [i_11] [i_11] [i_11] = ((/* implicit */int) min((-3088435733982584515LL), (((/* implicit */long long int) max((arr_36 [i_9]), (((/* implicit */int) max((arr_27 [(unsigned char)14] [(unsigned char)14] [(unsigned char)14]), (((/* implicit */unsigned char) (signed char)-37))))))))));
                    }
                } 
            } 
            var_19 = ((/* implicit */short) min((((/* implicit */int) ((unsigned short) arr_25 [i_9]))), (((arr_36 [i_9]) / (((((/* implicit */_Bool) arr_29 [i_9] [i_9] [i_9] [i_9])) ? (((/* implicit */int) (short)23627)) : (arr_36 [i_9])))))));
            arr_45 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) (-((~(((((/* implicit */int) (signed char)121)) * (((/* implicit */int) arr_21 [i_5]))))))));
        }
        arr_46 [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)65505)) || (((/* implicit */_Bool) arr_2 [i_5]))))), (arr_35 [i_5] [i_5]))))));
    }
    /* vectorizable */
    for (unsigned int i_12 = 3; i_12 < 10; i_12 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_13 = 0; i_13 < 12; i_13 += 1) 
        {
            arr_51 [i_13] [i_13] [i_13] = ((/* implicit */short) (-((+(((/* implicit */int) arr_14 [i_12 - 3] [i_13] [i_13] [i_13]))))));
            arr_52 [i_12] [i_12] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) ((arr_25 [i_13]) < (-4806298771465209077LL))))) | (((((/* implicit */_Bool) -4096)) ? (((/* implicit */long long int) arr_50 [(unsigned short)9])) : (9223372036854775807LL)))));
        }
        for (short i_14 = 0; i_14 < 12; i_14 += 3) 
        {
            var_20 = ((signed char) ((((/* implicit */int) arr_10 [i_12 + 1] [i_12] [i_12])) >> (((((/* implicit */int) arr_39 [i_12] [i_14])) + (147)))));
            arr_55 [i_12] [i_14] = ((/* implicit */unsigned char) (-(((/* implicit */int) ((unsigned char) arr_49 [i_12 - 2] [i_12] [i_12 - 2])))));
            var_21 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)6)) ? (arr_5 [i_14] [i_12]) : (((/* implicit */int) (short)-32446))))));
            var_22 = ((/* implicit */long long int) (short)-32469);
        }
        /* LoopNest 2 */
        for (int i_15 = 0; i_15 < 12; i_15 += 4) 
        {
            for (unsigned int i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                {
                    var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(arr_61 [0] [i_12] [i_12 - 3]))))));
                    arr_62 [i_12] = ((/* implicit */long long int) ((((((/* implicit */int) arr_39 [i_15] [i_15])) - (-2125763664))) % ((-(((/* implicit */int) (signed char)-119))))));
                    arr_63 [i_12] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_12 - 2])) ? (((/* implicit */int) arr_2 [i_12 - 1])) : (((/* implicit */int) arr_53 [i_12] [i_12 - 1]))));
                    arr_64 [i_12] [i_15] [(signed char)7] [i_16] = ((/* implicit */long long int) (((~(((/* implicit */int) (short)17501)))) & (((/* implicit */int) ((arr_61 [i_12] [i_12 - 1] [i_12]) == (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8024))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */long long int) arr_39 [i_12 - 2] [i_12]);
        /* LoopNest 2 */
        for (int i_17 = 3; i_17 < 11; i_17 += 4) 
        {
            for (short i_18 = 1; i_18 < 10; i_18 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                    {
                        var_25 *= ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)8024)) ? (((/* implicit */int) arr_2 [i_18])) : (156189482))) / (((/* implicit */int) arr_38 [i_12] [i_12 - 2] [i_17 - 3]))));
                        var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_35 [i_12 + 1] [i_17 - 3])) ? (((12070678229300252176ULL) - (((/* implicit */unsigned long long int) -5614257029266581231LL)))) : (((/* implicit */unsigned long long int) ((1497394707212542212LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)161))))))));
                    }
                    arr_74 [i_12 - 2] [i_18] [i_18] = ((/* implicit */short) (unsigned char)223);
                }
            } 
        } 
        arr_75 [i_12] &= ((/* implicit */short) (~(((/* implicit */int) arr_23 [i_12 + 1]))));
    }
}
