/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28750
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28750 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28750
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
    var_12 = ((/* implicit */unsigned short) (-((+(var_6)))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) /* same iter space */
    {
        arr_4 [(short)11] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (signed char)98)) || (((/* implicit */_Bool) -6932533449262279032LL)))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((((/* implicit */_Bool) var_2)) || ((_Bool)1))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_1 = 3; i_1 < 9; i_1 += 4) /* same iter space */
        {
            arr_9 [(short)7] [i_1] [i_0] = ((/* implicit */unsigned int) ((arr_3 [9U]) ? (((((/* implicit */_Bool) 1070369342U)) ? (((/* implicit */int) (unsigned short)18115)) : (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0])) <= (((/* implicit */int) arr_6 [i_1] [i_1])))))));
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        arr_14 [i_0] [i_0] [9ULL] [i_2] [i_2] [i_1] = ((/* implicit */_Bool) ((arr_2 [i_0 + 1]) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) arr_2 [i_3]))));
                        arr_15 [i_0] [i_1] [i_1 - 2] [i_2] [i_2] [i_3] = ((/* implicit */short) (~(((/* implicit */int) arr_3 [i_1 + 3]))));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_4 = 3; i_4 < 10; i_4 += 4) 
            {
                for (signed char i_5 = 2; i_5 < 10; i_5 += 4) 
                {
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        {
                            arr_25 [i_1] [i_5] [i_4] [i_5] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_5 + 2] [i_1] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_0))))));
                            arr_26 [i_1] [i_5] [i_4] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_7 = 3; i_7 < 9; i_7 += 4) /* same iter space */
        {
            arr_29 [(unsigned char)10] [(unsigned char)10] [i_0] |= (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [(short)10] [i_7])) ? (((/* implicit */int) arr_19 [9U] [i_0] [5LL])) : (((/* implicit */int) arr_16 [(unsigned short)4] [(short)6] [(unsigned short)4]))))) ? (((/* implicit */int) (unsigned char)224)) : (((/* implicit */int) arr_3 [i_7])))));
            arr_30 [i_7] [i_7] = ((/* implicit */unsigned long long int) ((unsigned int) (-(((/* implicit */int) (_Bool)1)))));
            arr_31 [i_0 + 1] [(unsigned short)8] [i_7] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1070369342U)))) ? (max((((/* implicit */unsigned long long int) var_4)), ((((_Bool)1) ? (5921103065214059868ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_7]))))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) min((arr_17 [i_0 + 1]), (((/* implicit */unsigned short) var_4))))))))));
        }
        arr_32 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)10777)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (_Bool)1))))) | (min((max((((/* implicit */long long int) var_10)), (arr_24 [i_0] [i_0] [i_0] [i_0 + 1] [i_0 + 1] [3LL]))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)43274)))))))));
    }
    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) /* same iter space */
    {
        arr_36 [(short)2] |= ((/* implicit */unsigned long long int) arr_3 [i_8]);
        /* LoopNest 3 */
        for (signed char i_9 = 4; i_9 < 9; i_9 += 4) 
        {
            for (signed char i_10 = 0; i_10 < 12; i_10 += 4) 
            {
                for (int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        arr_45 [i_8] = (~(((arr_43 [i_11] [i_11] [i_9 - 4] [i_9] [9ULL]) ? (max((((/* implicit */long long int) arr_43 [i_8 + 1] [i_9 - 3] [8LL] [i_9 - 3] [i_9 - 3])), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 3 */
                        for (long long int i_12 = 0; i_12 < 12; i_12 += 3) 
                        {
                            arr_49 [i_8] [i_9] [i_8] [i_11] [i_11] [i_8] = ((/* implicit */unsigned long long int) ((unsigned char) (((-(((/* implicit */int) var_4)))) != (((/* implicit */int) arr_42 [i_9 - 4] [i_9 - 2] [i_9] [i_8 + 1] [i_8 + 1])))));
                            arr_50 [i_8] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((-6932533449262279033LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned short)7937)))))) || (((/* implicit */_Bool) 3071160762U))));
                            arr_51 [(short)11] [i_8] [i_8] [i_9] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((2428144666045147043LL), (((/* implicit */long long int) arr_17 [i_8])))))) + (((/* implicit */long long int) (-(((/* implicit */int) var_0)))))));
                            arr_52 [i_8] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) var_11)), ((+((~(0ULL)))))));
                            var_13 = ((/* implicit */long long int) arr_1 [i_8]);
                        }
                        for (int i_13 = 0; i_13 < 12; i_13 += 2) /* same iter space */
                        {
                            var_14 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)155)) ? (12525641008495491754ULL) : (((/* implicit */unsigned long long int) 1070369342U))));
                            arr_55 [9ULL] [i_10] [(unsigned char)0] [i_8] [i_10] [i_10] = ((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)176)));
                        }
                        for (int i_14 = 0; i_14 < 12; i_14 += 2) /* same iter space */
                        {
                            arr_60 [i_14] [i_11] [i_8] [(signed char)4] [i_8] = ((/* implicit */int) arr_10 [i_10] [(unsigned short)10]);
                            arr_61 [i_8] [i_9 - 4] [i_8] = ((/* implicit */unsigned char) (~((~((~(arr_23 [i_10] [i_10] [i_10] [8U] [i_10])))))));
                        }
                        var_15 = ((/* implicit */unsigned char) arr_18 [i_8] [i_8] [i_11]);
                        var_16 = ((/* implicit */long long int) min((min((((/* implicit */unsigned long long int) arr_34 [(unsigned char)7])), ((+(var_1))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_10) ? (17979214137393152ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)5)))))) ? (((/* implicit */int) ((short) arr_33 [i_10]))) : (((/* implicit */int) arr_10 [i_11] [i_9])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned char i_15 = 2; i_15 < 11; i_15 += 1) 
        {
            var_17 = (-(arr_39 [i_8 + 1] [i_8]));
            arr_64 [i_8] = ((/* implicit */long long int) arr_11 [i_8] [i_8] [3ULL] [i_8]);
        }
    }
    var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
}
