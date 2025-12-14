/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195951
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195951 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195951
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
    var_19 = ((/* implicit */short) (!(((/* implicit */_Bool) ((signed char) (!(((/* implicit */_Bool) var_17))))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) max(((unsigned char)121), ((unsigned char)156))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_11))));
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_21 *= ((/* implicit */signed char) max(((~(((/* implicit */int) arr_0 [i_0])))), (((/* implicit */int) arr_0 [i_0]))));
        /* LoopSeq 4 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 4) 
        {
            var_22 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_2 [i_0]))) ? (min((((/* implicit */unsigned int) (signed char)63)), (var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))) ? (((long long int) max((-9223372036854775793LL), (((/* implicit */long long int) var_11))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_0 [(unsigned char)11])), ((unsigned char)123)))))))));
            var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_4 [i_1] [i_0]))));
            var_24 -= ((/* implicit */signed char) (~(arr_2 [i_1])));
        }
        for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_8 [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2])) ? (arr_2 [3LL]) : (arr_2 [i_2])))) ? (((/* implicit */unsigned long long int) (~(arr_2 [i_0])))) : (((unsigned long long int) arr_2 [i_0]))));
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 9; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 12; i_4 += 3) 
                {
                    for (unsigned long long int i_5 = 0; i_5 < 12; i_5 += 4) 
                    {
                        {
                            var_25 = ((/* implicit */_Bool) arr_7 [i_3]);
                            var_26 = ((arr_7 [i_0]) << (((((((((/* implicit */_Bool) arr_12 [i_0] [i_3 - 1] [i_3 + 2])) ? (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_12 [i_3 + 3] [i_4] [i_5]) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_0] [(signed char)11] [i_3 + 2]))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_2] [i_4])) || (var_1))))))) + (8585621430128163223LL))) - (26LL))));
                        }
                    } 
                } 
            } 
            var_27 -= ((/* implicit */long long int) (short)-20060);
            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_2])) ? (((/* implicit */unsigned long long int) var_13)) : ((~(((var_10) ? (8636546100345921341ULL) : (8636546100345921346ULL))))))))));
        }
        for (unsigned long long int i_6 = 2; i_6 < 11; i_6 += 3) 
        {
            arr_18 [i_6] [(signed char)10] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_15 [i_0] [i_6 - 2]), (arr_15 [i_6 - 2] [i_0])))) ? (((/* implicit */long long int) (-(var_17)))) : (((((/* implicit */_Bool) arr_12 [i_0] [i_6] [1LL])) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [(short)5] [i_6] [i_6] [i_0] [(short)2]))) : (var_5)))))) ? (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)122))))) >> (((9039719772782676107ULL) - (9039719772782676104ULL))))) : (((/* implicit */int) (unsigned short)27789))));
            /* LoopNest 2 */
            for (unsigned short i_7 = 2; i_7 < 10; i_7 += 4) 
            {
                for (short i_8 = 1; i_8 < 11; i_8 += 1) 
                {
                    {
                        arr_23 [10U] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((long long int) (short)-21422))) - (max((9039719772782676120ULL), (((/* implicit */unsigned long long int) var_10))))))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) ((((/* implicit */int) arr_19 [i_7 - 2] [(short)11] [i_6] [i_7])) > (((/* implicit */int) arr_20 [i_0] [i_0])))))));
                        var_29 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_0] [i_0] [2U] [0LL] [8])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_10 [i_0] [i_6] [(unsigned char)1])))) ? (((long long int) 134217727LL)) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_13 [i_0]))))))));
                    }
                } 
            } 
        }
        for (signed char i_9 = 0; i_9 < 12; i_9 += 4) 
        {
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-7868097468388219445LL)))) ? (((((/* implicit */_Bool) (unsigned char)104)) ? (9039719772782676116ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)144))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)124)) ? (((/* implicit */int) (unsigned char)126)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_9])))))))) ? (((/* implicit */int) ((((var_15) || (((/* implicit */_Bool) (signed char)-118)))) || (((/* implicit */_Bool) var_8))))) : (max((((/* implicit */int) arr_0 [i_9])), ((-(((/* implicit */int) (unsigned char)43)))))))))));
            var_31 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) 840466982)) ? (12689898139454763975ULL) : (((/* implicit */unsigned long long int) 840466988)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (signed char)-32)) : (var_16))))))) ? (((((/* implicit */_Bool) var_9)) ? (((((/* implicit */long long int) arr_10 [i_0] [i_0] [i_9])) - (var_5))) : (((/* implicit */long long int) (+(((/* implicit */int) var_6))))))) : (((/* implicit */long long int) ((arr_21 [i_0] [10LL] [i_0] [i_0]) >> (((8191U) - (8182U))))))));
        }
        var_32 = ((/* implicit */short) 8998403161718784ULL);
    }
    for (long long int i_10 = 0; i_10 < 16; i_10 += 2) 
    {
        /* LoopNest 3 */
        for (short i_11 = 4; i_11 < 15; i_11 += 1) 
        {
            for (int i_12 = 0; i_12 < 16; i_12 += 1) 
            {
                for (int i_13 = 0; i_13 < 16; i_13 += 3) 
                {
                    {
                        arr_36 [i_10] [i_12] [i_12] [9LL] = ((/* implicit */short) ((((/* implicit */unsigned int) max((((((/* implicit */int) (short)-30650)) & (((/* implicit */int) (short)30660)))), (((/* implicit */int) var_11))))) & (((((/* implicit */_Bool) var_14)) ? (min((arr_35 [i_12]), (((/* implicit */unsigned int) (signed char)3)))) : (((/* implicit */unsigned int) (~(arr_28 [i_10] [(_Bool)1]))))))));
                        arr_37 [i_12] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_32 [i_13] [i_12] [i_12] [i_10])) ? (arr_30 [i_11 - 3] [i_12] [(short)8]) : (min((var_16), (arr_30 [i_10] [i_11 - 2] [10])))));
                    }
                } 
            } 
        } 
        var_33 = (!(((/* implicit */_Bool) (unsigned char)124)));
        /* LoopSeq 2 */
        for (int i_14 = 0; i_14 < 16; i_14 += 1) 
        {
            var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_31 [i_10] [(signed char)0] [i_14])), (9186291603263169682ULL))), (((((/* implicit */_Bool) var_13)) ? (18437745670547832820ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [(_Bool)1] [i_14])))))))) ? (((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) (unsigned short)26139)), (5402114010783967949LL)))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)103))) ^ (((((/* implicit */_Bool) arr_30 [6ULL] [i_10] [0LL])) ? (arr_41 [i_10]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_33 [i_14])))))))));
            arr_42 [i_10] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_34 [i_10] [(unsigned short)2] [i_14] [i_14] [12] [i_10])), (((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -840466975)) ? (((/* implicit */int) arr_33 [(signed char)6])) : (((/* implicit */int) arr_33 [i_10]))))) : (((((/* implicit */_Bool) 2286780373138467218ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)12))) : (17630650026637796022ULL)))))));
            var_35 = (!(arr_40 [4]));
            /* LoopNest 3 */
            for (long long int i_15 = 0; i_15 < 16; i_15 += 1) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 16; i_17 += 1) 
                    {
                        {
                            arr_52 [i_10] [i_14] [i_15] [(unsigned short)3] [i_17] = ((/* implicit */long long int) ((unsigned int) arr_34 [i_10] [i_10] [i_10] [i_15] [i_14] [i_10]));
                            var_36 = ((/* implicit */signed char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_50 [i_10] [i_10] [i_14] [i_15] [i_16] [(unsigned char)7]))))) & (max((arr_46 [i_17] [i_14] [i_15] [i_16]), (((/* implicit */long long int) (~(arr_49 [i_14] [3LL] [(_Bool)1] [i_10]))))))));
                            var_37 = ((/* implicit */short) ((((/* implicit */_Bool) min((min((arr_41 [12ULL]), (((/* implicit */unsigned long long int) arr_44 [i_10] [9ULL] [i_10])))), (((/* implicit */unsigned long long int) arr_30 [i_10] [i_14] [i_15]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-1))) : (2401950721U)))) || (((/* implicit */_Bool) min((((/* implicit */long long int) (unsigned char)186)), (6304796084308689780LL))))))) : ((+(((arr_50 [i_10] [11] [i_10] [i_10] [11] [i_10]) ? (arr_30 [i_10] [(short)15] [i_10]) : (((/* implicit */int) arr_45 [i_10] [(unsigned short)1] [i_10]))))))));
                            arr_53 [i_10] [(signed char)14] [i_15] [i_16] [i_16] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [15U] [i_14] [3U] [i_17])) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_43 [3LL] [3LL] [(_Bool)1])))) ? (((/* implicit */unsigned long long int) arr_44 [i_14] [i_15] [i_16])) : (arr_38 [i_10]))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-1)), (arr_51 [i_10] [i_10] [i_10])))))))));
                        }
                    } 
                } 
            } 
            var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) max((((/* implicit */short) (_Bool)1)), ((short)-14999))))));
        }
        for (unsigned char i_18 = 3; i_18 < 15; i_18 += 3) 
        {
            var_39 = ((/* implicit */_Bool) ((unsigned char) ((unsigned long long int) arr_56 [i_18 - 3] [i_18 - 1])));
            var_40 = ((/* implicit */int) min((var_40), (((/* implicit */int) ((short) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (-2024658384)))) || (((/* implicit */_Bool) arr_46 [i_10] [i_10] [i_18 + 1] [i_18]))))))));
        }
        arr_57 [i_10] [5] = max((arr_44 [(_Bool)1] [i_10] [i_10]), (((((/* implicit */int) max((arr_50 [4] [15] [i_10] [11] [i_10] [4LL]), (arr_40 [i_10])))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))));
        var_41 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) 6U)), (arr_38 [i_10])));
    }
    for (int i_19 = 1; i_19 < 10; i_19 += 1) 
    {
        arr_62 [(unsigned char)2] = ((/* implicit */_Bool) ((unsigned long long int) max((var_5), (((/* implicit */long long int) arr_61 [i_19 + 1] [i_19 + 2])))));
        var_42 = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_56 [i_19] [i_19])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)44))) : (2286780373138467225ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_50 [i_19] [i_19] [14LL] [i_19] [(unsigned short)4] [i_19])) : (-419061609))))))) ? (((((/* implicit */long long int) (+(((/* implicit */int) arr_50 [i_19] [i_19] [(short)0] [i_19] [i_19] [i_19]))))) + (max((((/* implicit */long long int) arr_32 [i_19 + 1] [(unsigned char)14] [(short)14] [i_19])), (-6304796084308689764LL))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -2024658375)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_19]))) : (arr_41 [i_19])))) ? (((((/* implicit */_Bool) arr_30 [i_19] [i_19 - 1] [i_19])) ? (arr_44 [(unsigned char)12] [i_19] [i_19]) : (((/* implicit */int) arr_54 [i_19] [i_19 - 1] [i_19])))) : ((-(67108863))))))));
    }
    var_43 = ((/* implicit */unsigned char) var_6);
}
