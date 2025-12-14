/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216542
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216542 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216542
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
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        arr_3 [(short)19] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) (signed char)127)) & (((/* implicit */int) ((short) arr_2 [i_0] [(unsigned short)2]))))) & (arr_2 [i_0] [i_0])));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */unsigned int) 2147483647)) / (var_0))))) ? (((/* implicit */long long int) min((((((/* implicit */int) arr_0 [7LL] [7LL])) + (((/* implicit */int) arr_0 [i_0] [i_0])))), (((/* implicit */int) arr_1 [(unsigned short)7]))))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))) - (70368744177663LL)))));
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((max((max((var_7), (((/* implicit */unsigned short) (unsigned char)116)))), (((/* implicit */unsigned short) arr_1 [(unsigned char)2])))), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-5293)) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (arr_5 [i_1])))) && (((/* implicit */_Bool) arr_2 [i_1] [i_1])))))));
        /* LoopSeq 1 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) ((0U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_2])))));
            var_18 = ((/* implicit */unsigned short) (((_Bool)1) ? (-8194978180105925369LL) : (((/* implicit */long long int) 36087392U))));
        }
        var_19 = ((/* implicit */unsigned char) ((min((255LL), (((/* implicit */long long int) var_7)))) | (((/* implicit */long long int) 1844796783U))));
    }
    var_20 = max(((!(((/* implicit */_Bool) -5500515493258865613LL)))), (var_12));
    /* LoopSeq 2 */
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 4) 
        {
            for (unsigned char i_5 = 3; i_5 < 19; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (signed char i_7 = 0; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            arr_22 [i_5] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_12 [i_5 + 1])), (min((arr_13 [i_4]), (((/* implicit */long long int) var_11))))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_4]))) : (((((/* implicit */_Bool) arr_1 [i_5 + 1])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) (short)-11585)), (arr_18 [i_3 - 1] [i_5] [i_5] [i_7]))))) : (((((/* implicit */_Bool) 1073741792ULL)) ? (arr_13 [i_3 - 1]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_3] [i_4])))))))));
                            arr_23 [i_5] [20U] [i_5] [i_3] = ((/* implicit */unsigned char) min((-1518521278), (((/* implicit */int) (unsigned short)0))));
                        }
                        /* vectorizable */
                        for (signed char i_8 = 0; i_8 < 21; i_8 += 2) /* same iter space */
                        {
                            arr_26 [i_8] [i_5] [(unsigned char)3] [i_6] = ((/* implicit */long long int) var_3);
                            arr_27 [i_6] [i_5] [i_5] [i_3 - 1] = ((((/* implicit */_Bool) arr_15 [i_5])) ? (arr_15 [i_5]) : (arr_15 [i_5]));
                            arr_28 [i_5] [i_5] [i_5] = ((/* implicit */signed char) (-2147483647 - 1));
                        }
                        var_21 *= ((/* implicit */unsigned short) 2059005703U);
                        arr_29 [i_5] [(unsigned char)1] [i_4] [i_5 - 1] [i_5 - 3] [i_6] = ((/* implicit */signed char) max((((((/* implicit */int) (short)-26368)) * (((/* implicit */int) (unsigned short)31)))), (((/* implicit */int) arr_12 [3LL]))));
                    }
                } 
            } 
        } 
        arr_30 [i_3 - 1] [i_3 - 1] = ((/* implicit */unsigned long long int) arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1] [i_3 - 1]);
        var_22 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (unsigned char)250)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)1)))))));
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+((((_Bool)1) ? (((/* implicit */int) (signed char)8)) : ((-2147483647 - 1))))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)63235))) & (((((/* implicit */unsigned long long int) 5768102286986728967LL)) ^ (arr_15 [(_Bool)1]))))))))));
    }
    for (signed char i_9 = 4; i_9 < 9; i_9 += 2) 
    {
        var_24 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_32 [i_9] [i_9])) ? (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)15), (((/* implicit */unsigned char) arr_11 [i_9 - 3])))))) : ((+(-1LL)))))) + (arr_15 [i_9])));
        arr_34 [i_9 - 1] = ((/* implicit */unsigned char) ((signed char) var_12));
        /* LoopSeq 2 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
        {
            arr_37 [i_10] = ((/* implicit */short) var_5);
            /* LoopSeq 1 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                var_25 = ((/* implicit */long long int) max((var_25), (((long long int) ((0U) << (((/* implicit */int) (_Bool)1)))))));
                arr_42 [i_10] [i_10] [i_10] = ((/* implicit */short) arr_41 [i_10]);
            }
            /* LoopSeq 1 */
            for (signed char i_12 = 0; i_12 < 12; i_12 += 3) 
            {
                var_26 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_21 [i_10] [i_9] [i_12] [i_10] [i_10])) ? (arr_13 [i_12]) : (((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)5), ((unsigned char)217))))))) < (((/* implicit */long long int) ((/* implicit */int) ((arr_25 [(unsigned char)10] [i_9 - 2] [i_9 - 3] [i_9 + 1] [i_9 - 2] [i_10] [(unsigned char)4]) >= (arr_25 [i_9] [i_9 - 1] [i_9 + 3] [i_9 + 2] [i_9 + 3] [i_12] [i_12])))))));
                arr_47 [i_9] [i_10] [i_10] [i_9] = ((/* implicit */unsigned char) arr_8 [i_9 - 4] [i_10]);
                arr_48 [i_10] [10] [i_9 + 2] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [i_10])) ? (arr_5 [i_12]) : (arr_5 [i_9])))) >= (arr_38 [i_10] [i_10])));
            }
        }
        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
        {
            var_27 &= ((/* implicit */short) arr_45 [i_9] [i_9] [i_9] [i_9]);
            arr_52 [i_13] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((-6346849780577745620LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned char)66)))))) & ((((~(var_6))) | (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (_Bool)1)), (4294967295U))))))));
        }
    }
}
