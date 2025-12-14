/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45739
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45739 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45739
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 12; i_1 += 2) 
        {
            {
                /* LoopNest 3 */
                for (unsigned long long int i_2 = 2; i_2 < 10; i_2 += 4) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 10; i_4 += 2) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) var_10))));
                                var_13 = ((/* implicit */long long int) (-(var_5)));
                                var_14 = ((/* implicit */unsigned char) (+(18446744073709551615ULL)));
                                arr_14 [3] [i_0] [i_1 - 1] [1LL] [1ULL] [i_4] [1LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) ? (arr_5 [i_1 + 1]) : (arr_5 [i_1 + 1])))) ? ((-(arr_5 [i_1 + 1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_1 + 1])) && (((/* implicit */_Bool) var_3))))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (unsigned char i_6 = 4; i_6 < 11; i_6 += 4) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [4] [4] [i_6 + 2])))))) > ((+(arr_17 [i_0] [i_5] [i_6 - 3]))))))));
                            var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65534))))) ? (((/* implicit */unsigned long long int) arr_17 [i_0] [i_1] [i_6 - 3])) : (779611996281629471ULL)))));
                            arr_20 [i_6 - 4] [i_5] [2LL] [i_1 + 1] [i_0] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_7 [i_0] [i_1] [i_5] [i_6]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_7 = 1; i_7 < 12; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 13; i_8 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */int) -6078395140022402732LL);
                            var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_10))));
                            var_19 = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) > (arr_12 [i_7 - 1] [i_7 - 1] [i_1 - 1]))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1 + 1])))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-85))) + (arr_5 [i_1 + 1])))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 3 */
    for (long long int i_9 = 0; i_9 < 25; i_9 += 4) 
    {
        for (unsigned short i_10 = 0; i_10 < 25; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 25; i_11 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_12 = 0; i_12 < 25; i_12 += 3) 
                    {
                        for (unsigned short i_13 = 4; i_13 < 23; i_13 += 4) 
                        {
                            {
                                var_20 = ((/* implicit */_Bool) min((((/* implicit */int) arr_34 [i_13 - 2] [21] [1LL] [1LL])), ((~(((/* implicit */int) var_4))))));
                                arr_42 [i_9] [i_10] [i_10] [i_12] [(signed char)9] = ((/* implicit */long long int) (unsigned short)21790);
                                arr_43 [i_10] [i_11] [i_13] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((12132530151901852248ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_39 [i_13 - 4] [i_13 - 4] [i_13 - 3] [i_13 - 3] [i_13 - 3] [i_13 - 1] [i_13 + 1]))))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_14 = 0; i_14 < 25; i_14 += 2) 
                    {
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_10] [i_10] [i_10]))))) >= (((((/* implicit */_Bool) arr_46 [i_9] [i_10] [i_11] [i_14] [i_15])) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) arr_32 [i_15] [i_11])))))))));
                                arr_49 [i_9] [i_10] [i_10] [i_15] [i_15] = ((/* implicit */long long int) var_4);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (signed char i_16 = 0; i_16 < 13; i_16 += 2) 
    {
        for (signed char i_17 = 3; i_17 < 11; i_17 += 4) 
        {
            for (long long int i_18 = 2; i_18 < 9; i_18 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_19 = 4; i_19 < 12; i_19 += 1) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 13; i_20 += 1) 
                        {
                            {
                                arr_65 [i_19] [i_19 - 3] [i_17] [i_17] [i_19] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_0))))) ? (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) var_1)) : (arr_47 [i_16] [i_16] [i_18] [i_19] [i_20] [i_20]))), (((/* implicit */unsigned long long int) var_6)))) : ((((!(((/* implicit */_Bool) arr_1 [i_20] [i_16])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -5560561472474404210LL)))))) : (((9404320466554430078ULL) >> (((-403838322) + (403838367)))))))));
                                var_22 = ((/* implicit */long long int) min((((/* implicit */int) (!(var_0)))), ((~(((/* implicit */int) arr_3 [i_19 - 4] [i_18 + 1] [i_17 - 2]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (int i_21 = 1; i_21 < 11; i_21 += 4) 
                    {
                        for (unsigned char i_22 = 2; i_22 < 9; i_22 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) arr_69 [i_21 + 1]))));
                                arr_72 [i_16] [i_17 - 2] [i_18] [i_18] [i_21] [i_21] [5LL] = ((/* implicit */unsigned char) arr_8 [i_16] [i_16] [i_16]);
                                var_24 = (((!(((/* implicit */_Bool) arr_18 [i_16] [i_17])))) ? (max((((/* implicit */long long int) arr_38 [i_22 + 2] [i_21 + 1] [i_18 + 2] [i_17] [i_16])), (-5560561472474404210LL))) : (((/* implicit */long long int) ((((arr_38 [i_16] [i_16] [i_18 + 2] [i_21 - 1] [i_22]) + (2147483647))) << (((((arr_38 [(unsigned char)2] [i_17 - 1] [i_18 + 4] [i_21 + 1] [i_22 + 3]) + (886556330))) - (6)))))));
                                var_25 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) arr_33 [i_16] [i_18 + 4] [i_21 + 1] [i_22])) ? (arr_33 [i_16] [i_16] [i_18] [i_22]) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_16]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_33 [i_22 - 2] [i_21 + 1] [i_18 + 1] [i_17 - 3])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7)))))));
                                var_26 = ((/* implicit */int) var_11);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
