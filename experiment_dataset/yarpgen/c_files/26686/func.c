/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26686
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            arr_5 [8] [8] [i_1] = ((/* implicit */int) ((((/* implicit */int) arr_4 [(_Bool)1] [i_1] [i_1])) == ((+(((/* implicit */int) arr_0 [i_1]))))));
            arr_6 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) var_7))))) >= (((/* implicit */int) arr_0 [i_1]))));
            var_12 = ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) > (var_3));
        }
        var_13 = ((/* implicit */signed char) min((((((var_4) & (((/* implicit */long long int) ((/* implicit */int) (signed char)1))))) != (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_2)))))), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_2 [i_0])))))))));
        /* LoopNest 3 */
        for (signed char i_2 = 1; i_2 < 14; i_2 += 4) 
        {
            for (short i_3 = 1; i_3 < 12; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    {
                        arr_16 [i_4] [i_4] [i_4] [i_4] [i_4] [11U] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) (!(((/* implicit */_Bool) var_3)))))) ? (((((/* implicit */int) arr_13 [i_0] [i_2 + 1] [i_3 - 1] [i_0] [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (1139))))) : (max((arr_12 [i_2 + 1] [i_3 + 2] [i_3 + 2] [i_4]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0])))))))));
                        var_14 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) arr_4 [i_2] [i_2 + 1] [i_3 + 2])))))));
                        var_15 ^= ((/* implicit */short) ((max((max((((/* implicit */long long int) (unsigned char)246)), (var_2))), (((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_3] [11ULL] [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2))))) != ((-((-(var_4)))))));
                    }
                } 
            } 
        } 
    }
    for (short i_5 = 0; i_5 < 25; i_5 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            /* LoopNest 2 */
            for (short i_7 = 2; i_7 < 24; i_7 += 4) 
            {
                for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    {
                        arr_27 [i_5] [i_5] = ((/* implicit */long long int) arr_19 [i_5]);
                        arr_28 [i_5] [13ULL] [i_7 + 1] [i_7 + 1] |= ((/* implicit */signed char) min((((((/* implicit */int) ((((/* implicit */int) arr_24 [i_5] [i_6] [i_6] [i_6])) >= (((/* implicit */int) arr_20 [i_8]))))) >> (((((((/* implicit */int) var_7)) - (((/* implicit */int) var_1)))) + (22643))))), (min((((((/* implicit */int) var_11)) >> (((((/* implicit */int) var_6)) - (31443))))), (((((/* implicit */int) arr_20 [i_6])) | (-1277601908)))))));
                    }
                } 
            } 
            /* LoopSeq 3 */
            for (int i_9 = 0; i_9 < 25; i_9 += 1) 
            {
                arr_32 [i_5] [i_6] [i_5] = ((_Bool) min((arr_26 [i_5] [i_5] [i_9] [i_9]), (((/* implicit */unsigned long long int) arr_21 [i_6]))));
                /* LoopNest 2 */
                for (unsigned long long int i_10 = 1; i_10 < 24; i_10 += 2) 
                {
                    for (long long int i_11 = 0; i_11 < 25; i_11 += 1) 
                    {
                        {
                            var_16 |= ((/* implicit */_Bool) min(((~(((/* implicit */int) (signed char)-13)))), ((+(((/* implicit */int) arr_31 [i_10 - 1]))))));
                            var_17 = ((/* implicit */long long int) ((signed char) arr_29 [i_10 + 1] [i_6]));
                        }
                    } 
                } 
            }
            for (unsigned int i_12 = 0; i_12 < 25; i_12 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_13 = 0; i_13 < 25; i_13 += 4) 
                {
                    for (short i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        {
                            arr_50 [i_5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 12ULL)) ? (((/* implicit */int) (short)11292)) : (((/* implicit */int) (_Bool)1))));
                            arr_51 [i_5] [i_5] [i_6] [i_6] [i_12] [i_13] [(_Bool)1] = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_39 [i_5] [i_5] [(_Bool)1] [i_5] [i_5] [i_5]))))));
                            var_18 = ((/* implicit */long long int) (+(arr_36 [i_5] [i_5] [(signed char)19] [i_5] [i_5] [i_5] [i_5])));
                        }
                    } 
                } 
                var_19 = ((/* implicit */unsigned int) (~(max((((/* implicit */int) arr_23 [i_5] [i_6] [i_6])), (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_48 [6ULL] [i_6] [i_6] [i_6] [(_Bool)1])) : (((/* implicit */int) var_9))))))));
            }
            for (unsigned int i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
            {
                arr_54 [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_38 [3LL] [i_6] [i_6] [3LL] [i_15]), (arr_38 [i_5] [i_6] [i_6] [i_15] [i_15])))) ? (((/* implicit */long long int) ((((/* implicit */int) var_11)) - (((((/* implicit */_Bool) arr_41 [i_15] [i_5])) ? (((/* implicit */int) arr_21 [(short)18])) : (((/* implicit */int) arr_24 [i_5] [i_6] [(signed char)3] [i_15]))))))) : (min(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (signed char)-1))))));
                arr_55 [i_5] = ((/* implicit */long long int) ((((((/* implicit */unsigned long long int) max((arr_30 [(signed char)9] [12LL] [i_15] [12LL]), (((/* implicit */long long int) arr_35 [i_6] [i_15]))))) == ((+(arr_40 [(signed char)1] [i_6] [(unsigned char)7] [(signed char)1]))))) ? (((unsigned long long int) ((((/* implicit */_Bool) arr_43 [i_5])) ? (((/* implicit */int) arr_35 [i_6] [i_6])) : (((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) 4245035376435530952LL))));
            }
        }
        var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) (signed char)-2))));
        var_21 = (((!(((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_5])))) ? (((/* implicit */int) min((arr_42 [i_5] [i_5] [i_5]), (arr_42 [i_5] [(signed char)20] [i_5])))) : (((/* implicit */int) max((var_10), (((/* implicit */short) arr_42 [i_5] [(_Bool)1] [i_5]))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_22 |= ((/* implicit */unsigned short) ((_Bool) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) var_5))) | (arr_49 [i_16] [i_16] [16U] [i_16] [i_16] [i_16])))));
        arr_59 [i_16] [12ULL] = ((/* implicit */unsigned short) (+((~(((/* implicit */int) arr_57 [i_16] [i_16]))))));
    }
    var_23 = var_4;
}
