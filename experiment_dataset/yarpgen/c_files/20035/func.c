/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20035
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
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        arr_3 [i_0] &= ((/* implicit */short) ((int) ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_0 [i_0])))));
        var_13 -= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1] [i_0 - 1])) ? (1581231293510617989LL) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0])))))) ? (min((var_6), (1581231293510617989LL))) : (((/* implicit */long long int) ((4153862427U) - (((/* implicit */unsigned int) 2041514940))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 5965453700051885888ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (5965453700051885896ULL)))) ? (((/* implicit */int) min((arr_0 [i_0 - 2]), (arr_0 [i_0])))) : (-2147483642))))));
        var_14 = ((/* implicit */unsigned char) ((((unsigned int) min((6447962587788699197ULL), (((/* implicit */unsigned long long int) -1941894443))))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) <= (((((/* implicit */_Bool) (signed char)112)) ? (-1581231293510618000LL) : (((/* implicit */long long int) arr_1 [i_0] [i_0]))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 13; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (short i_2 = 0; i_2 < 13; i_2 += 2) 
        {
            for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 13; i_4 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_5 = 1; i_5 < 10; i_5 += 2) 
                        {
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-108))) + (1125899904745472LL)))) ? (arr_4 [i_5] [i_5 + 1]) : (12540953667454712641ULL)));
                            arr_20 [i_1] [i_1] [i_1] [i_1] [i_5] [i_3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_4])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (arr_8 [i_2]) : (((/* implicit */unsigned long long int) ((unsigned int) arr_15 [i_1] [i_1] [i_1] [i_4] [i_5]))));
                            var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_6 [i_3])) < (12481290373657665726ULL)));
                            arr_21 [i_5] [i_5] [i_3] [i_5] [i_1] = ((/* implicit */unsigned int) arr_16 [i_1] [i_2] [i_2] [i_5 + 3]);
                        }
                        for (unsigned char i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_17 = ((unsigned short) var_4);
                            var_18 = ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_1] [i_1])) ? (((arr_11 [i_6] [i_4] [i_4] [i_4]) * (((/* implicit */unsigned int) var_3)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_6] [i_6])))));
                            var_19 -= ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_1] [i_2] [i_1] [i_1] [i_6]))) != (((unsigned int) (unsigned char)120))));
                            var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) ((arr_4 [i_4] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_1] [i_3] [i_4] [i_6]))))))));
                        }
                        var_21 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_16 [i_1] [i_2] [i_2] [i_4]))));
                        var_22 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_18 [i_2] [i_4])) ? (arr_23 [i_1] [i_2] [i_3] [i_4]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))) * (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_2] [i_3] [i_4] [i_3]))));
                    }
                    var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 34359738304ULL))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned char i_7 = 0; i_7 < 13; i_7 += 4) 
        {
            for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 4) 
            {
                for (signed char i_9 = 0; i_9 < 13; i_9 += 3) 
                {
                    {
                        arr_34 [i_1] [i_7] [i_8] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_31 [i_1] [i_7] [i_8 + 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_9] [i_7] [i_7] [i_1]))) + (var_1))) : (arr_13 [i_8 + 2] [i_8 - 2] [i_8 + 3] [i_8])));
                        /* LoopSeq 1 */
                        for (long long int i_10 = 2; i_10 < 12; i_10 += 4) 
                        {
                            var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_25 [i_1] [i_8])))) ? ((~(5965453700051885890ULL))) : (((/* implicit */unsigned long long int) arr_6 [i_9]))));
                            arr_39 [i_1] [i_1] [i_1] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3549128416U)) ? (((/* implicit */int) ((12481290373657665722ULL) <= (5965453700051885889ULL)))) : (((/* implicit */int) ((unsigned char) arr_19 [i_9] [i_8] [i_9])))));
                        }
                        arr_40 [i_1] [i_1] [i_1] [i_1] [i_9] = ((9407347108813896472ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) (short)20973))));
                        arr_41 [i_9] [i_7] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_8] [i_8 - 1])) || (((/* implicit */_Bool) arr_29 [i_8 + 3]))));
                        arr_42 [i_9] [i_9] [i_7] [i_8] [i_9] = ((/* implicit */long long int) ((((unsigned long long int) -254402995682428338LL)) - (((((/* implicit */_Bool) (signed char)12)) ? (12481290373657665727ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_38 [i_1])))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (unsigned char i_11 = 1; i_11 < 10; i_11 += 4) /* same iter space */
        {
            arr_46 [i_1] [i_11] [i_11 + 3] = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -5227494421726825897LL)) != (5965453700051885886ULL))) ? (((/* implicit */unsigned long long int) ((arr_43 [i_11] [i_11]) | (arr_24 [i_11])))) : (((((/* implicit */_Bool) var_9)) ? (5965453700051885887ULL) : (1688849860263936ULL)))));
            var_25 = ((/* implicit */int) max((var_25), (((/* implicit */int) ((unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1])) ? (arr_22 [i_1] [i_11] [i_1] [i_1] [i_1] [i_11] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))))))));
            var_26 -= (+(((((/* implicit */_Bool) arr_32 [i_11] [i_1])) ? (12481290373657665739ULL) : (((/* implicit */unsigned long long int) 254402995682428322LL)))));
        }
        for (unsigned char i_12 = 1; i_12 < 10; i_12 += 4) /* same iter space */
        {
            arr_50 [i_1] [i_12] = ((((((/* implicit */int) arr_15 [i_1] [i_1] [i_12] [i_12] [i_12])) <= (((/* implicit */int) (unsigned char)239)))) ? (((((/* implicit */_Bool) 605544929)) ? (2420817586744720006ULL) : (((/* implicit */unsigned long long int) -1992397317)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)192))));
            arr_51 [i_12] [i_12] [i_12] = (~(12481290373657665726ULL));
        }
        var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_27 [i_1] [i_1])) ? (((/* implicit */int) arr_27 [i_1] [i_1])) : (((/* implicit */int) arr_27 [i_1] [i_1]))));
    }
    var_28 = ((/* implicit */long long int) var_9);
    var_29 = ((unsigned short) -693130586);
    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) 18446744039349813334ULL)) ? (((/* implicit */int) (unsigned char)98)) : (((/* implicit */int) (unsigned char)150))));
    var_31 = ((/* implicit */int) min((var_31), (((((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) (unsigned char)166)), (5965453700051885889ULL)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((unsigned char) var_7)))))));
}
