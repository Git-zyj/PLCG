/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20046
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20046 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20046
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
    var_20 = ((((/* implicit */int) var_7)) ^ (var_2));
    /* LoopSeq 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)63)))))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((short) max((arr_0 [i_0] [i_0]), (((/* implicit */unsigned short) (signed char)-64))))))));
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) arr_2 [i_0])))) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (44519)))));
        /* LoopSeq 4 */
        for (unsigned short i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 17; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 3; i_3 < 16; i_3 += 1) 
                {
                    {
                        var_22 = ((/* implicit */short) max((var_22), (var_4)));
                        /* LoopSeq 1 */
                        for (signed char i_4 = 1; i_4 < 14; i_4 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_14 [i_0] [i_0] [i_2] [i_0] [i_4] [i_2] [i_4]);
                            arr_17 [i_4] [i_4] [i_2] [i_4] [i_4 - 1] = ((/* implicit */long long int) ((short) ((((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_3] [i_2])) ? (((/* implicit */int) arr_6 [i_4 + 1] [i_0] [i_0])) : (((/* implicit */int) arr_10 [(unsigned short)0] [i_2 - 1] [i_0] [i_0])))) & (max((((/* implicit */int) arr_0 [i_0] [i_0])), (arr_4 [i_4]))))));
                            arr_18 [i_4] [i_1] [i_2] [i_3 - 1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))))), (max((((arr_15 [i_0] [i_0] [i_1] [i_2] [i_0] [i_4 - 1] [i_4]) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))), (((/* implicit */unsigned int) var_6))))));
                        }
                    }
                } 
            } 
            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) arr_11 [i_0 - 1] [i_0] [i_0 - 1] [i_0 - 1]))) ? (((/* implicit */unsigned long long int) var_0)) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [(signed char)15] [(signed char)15] [i_1])) && (((/* implicit */_Bool) arr_6 [i_0] [i_1] [(_Bool)0]))))), (max((((/* implicit */unsigned long long int) var_8)), (13267447737941334305ULL)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 3; i_5 < 17; i_5 += 4) 
            {
                for (int i_6 = 4; i_6 < 15; i_6 += 3) 
                {
                    {
                        arr_25 [i_0] [i_1] [i_1] [i_5] [i_5] = ((/* implicit */int) ((_Bool) 2168040126U));
                        arr_26 [i_5] [i_1] [i_1] [i_5] = ((/* implicit */long long int) min((arr_16 [i_0]), (((/* implicit */int) (short)0))));
                    }
                } 
            } 
        }
        for (signed char i_7 = 1; i_7 < 15; i_7 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned char i_8 = 0; i_8 < 18; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned long long int) var_9);
                            var_26 = ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) min((((/* implicit */unsigned int) arr_27 [i_7])), (2126927178U))))) || (((((/* implicit */_Bool) arr_19 [i_0 - 1])) || (((/* implicit */_Bool) arr_19 [i_0 - 1]))))));
                            var_27 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) & (((((/* implicit */_Bool) var_17)) ? (arr_32 [i_7]) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_8] [i_9]))))))) & (((((/* implicit */long long int) ((/* implicit */int) arr_0 [(_Bool)1] [i_7 + 2]))) & (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 1146709106U)) : (arr_22 [5LL] [5LL] [i_0] [i_0])))))));
                        }
                    } 
                } 
            } 
            arr_42 [i_7] [i_7] [i_7 + 3] = ((/* implicit */unsigned int) ((((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_7] [i_7])) || (((/* implicit */_Bool) arr_10 [i_0] [i_7] [i_7] [i_7 - 1])))) ? (((/* implicit */int) (unsigned short)65527)) : (((((/* implicit */_Bool) arr_12 [6LL] [i_7] [i_7])) ? (((/* implicit */int) arr_12 [i_7] [i_7] [i_0])) : (((/* implicit */int) arr_13 [17ULL] [17ULL])))))) % (((((/* implicit */int) max((((/* implicit */unsigned short) arr_13 [13] [i_0])), (arr_31 [i_7])))) + (((((/* implicit */_Bool) 4743746630130791195LL)) ? (((/* implicit */int) arr_31 [i_0])) : (((/* implicit */int) (_Bool)1))))))));
        }
        for (short i_11 = 0; i_11 < 18; i_11 += 4) 
        {
            arr_45 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((arr_34 [i_11] [i_11] [i_11] [11LL]) - (((/* implicit */int) (signed char)57))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0 - 1]))) : (((arr_15 [i_11] [i_11] [i_11] [i_11] [i_11] [(unsigned char)7] [i_0 - 1]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [(unsigned short)0] [i_0]))))))) - (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)62334)))));
            arr_46 [i_0 - 1] = arr_40 [i_11] [i_0 - 1] [i_0 - 1] [i_11] [i_0 - 1];
            var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0 - 1])) ? (((/* implicit */int) arr_35 [i_0 - 1])) : (((/* implicit */int) var_7))))) ? (((((/* implicit */int) arr_35 [i_0 - 1])) + (arr_37 [i_0 - 1] [i_11]))) : (((var_5) ? (arr_37 [i_0 - 1] [i_11]) : (arr_4 [i_0 - 1])))));
            arr_47 [i_0] [i_11] [i_11] = ((/* implicit */unsigned long long int) var_0);
        }
        for (int i_12 = 0; i_12 < 18; i_12 += 1) 
        {
            var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_0] [i_12] [i_12]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */long long int) ((unsigned int) (_Bool)1))) * (max((arr_51 [i_12] [i_12] [15ULL]), (((/* implicit */long long int) (unsigned char)255))))))));
            arr_52 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_1) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_12] [i_12]))) | (15826215659236181890ULL))) : (((unsigned long long int) var_11))))) ? (((/* implicit */int) arr_35 [i_0])) : (((/* implicit */int) (_Bool)1))));
        }
        var_30 *= ((/* implicit */unsigned long long int) arr_19 [i_0]);
        arr_53 [3] = ((/* implicit */signed char) (_Bool)0);
    }
    for (unsigned int i_13 = 3; i_13 < 15; i_13 += 1) 
    {
        var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_13] [(unsigned char)11] [i_13])) ? (((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6)))) : (((/* implicit */int) var_8))))), (arr_40 [8U] [i_13] [i_13 - 2] [i_13] [8U]))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)155)) ? (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (max((var_14), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((unsigned long long int) min(((unsigned short)65505), (((/* implicit */unsigned short) arr_50 [i_13] [(unsigned short)2] [i_13])))))));
    }
    var_33 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_10))))), (var_11)))) || (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_7)))) ? (1898719572U) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
}
