/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28547
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
    for (unsigned short i_0 = 1; i_0 < 11; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_2 = 0; i_2 < 12; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_13 [i_0] [(signed char)4] [i_0] [i_0] [i_0] [i_4] [i_2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (signed char)48)), (arr_1 [i_4] [i_1]))))));
                                arr_14 [i_0] [i_1] [i_4] [i_1] [i_0 - 1] [i_0] [i_1] |= ((/* implicit */signed char) ((unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-29))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)115))) : (((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (2987942385655621684ULL) : (arr_7 [i_0] [i_4] [i_0] [i_4]))))));
                            }
                        } 
                    } 
                } 
                var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)72)) ? (((/* implicit */int) (unsigned short)59357)) : (((/* implicit */int) (signed char)-52))))))));
            }
        } 
    } 
    /* LoopSeq 2 */
    for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_6 = 0; i_6 < 25; i_6 += 2) 
        {
            for (unsigned short i_7 = 3; i_7 < 23; i_7 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */int) ((10774862036458058136ULL) >= (18446744073709551615ULL)))), ((-((-(((/* implicit */int) arr_19 [21ULL])))))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 4) 
                        {
                            {
                                arr_28 [(unsigned short)23] [i_8] [i_7] [i_6] [i_5] = ((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) arr_18 [i_7 - 3] [i_7 - 3] [i_7]))))));
                                arr_29 [i_5] [i_6] [i_7] [i_9] = ((/* implicit */unsigned long long int) ((signed char) (+(((/* implicit */int) ((signed char) arr_15 [i_9] [i_6]))))));
                                var_17 = ((/* implicit */unsigned short) min((var_17), (((unsigned short) ((((/* implicit */_Bool) arr_25 [i_7 - 3])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)50924)) ? (((/* implicit */int) (signed char)67)) : (((/* implicit */int) arr_26 [i_5] [i_6] [i_6] [i_7 + 2] [i_8] [i_9] [i_6]))))) : (((((/* implicit */_Bool) 7311134607859793728ULL)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)747))))))))));
                                var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)28))));
                            }
                        } 
                    } 
                    arr_30 [i_5] [i_6] [i_7] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((/* implicit */int) arr_26 [i_6] [i_6] [i_6] [i_7] [i_7 - 2] [i_7 - 1] [i_7])), ((+(((/* implicit */int) arr_24 [1ULL] [i_6] [(unsigned short)0] [i_6] [19ULL]))))))) ? (((((/* implicit */int) min(((signed char)33), ((signed char)-26)))) | (((/* implicit */int) ((unsigned short) arr_24 [i_5] [i_5] [i_6] [i_5] [i_5]))))) : (((/* implicit */int) ((signed char) arr_24 [i_7 - 1] [i_7 - 1] [(signed char)11] [i_5] [i_5])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_10 = 1; i_10 < 21; i_10 += 2) 
                    {
                        for (signed char i_11 = 0; i_11 < 25; i_11 += 3) 
                        {
                            {
                                arr_36 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max(((~(((/* implicit */int) arr_15 [i_6] [i_6])))), ((~(((/* implicit */int) (signed char)50))))))) ? (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) (unsigned short)65535)))))) : ((+(((/* implicit */int) ((unsigned short) (unsigned short)44355)))))));
                                arr_37 [i_10] [i_10] [i_7] [i_10] [i_5] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) (unsigned short)2040)), (2437410794662446963ULL))), (((((/* implicit */_Bool) (signed char)27)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1))) : (12135368977363804982ULL)))))) ? (((((/* implicit */_Bool) min((arr_32 [i_5] [i_10] [i_7 - 2] [(unsigned short)6] [i_10] [i_11]), (((/* implicit */unsigned long long int) arr_31 [i_10] [i_10] [i_7] [i_10]))))) ? (((((/* implicit */_Bool) (unsigned short)2040)) ? (((/* implicit */int) arr_19 [i_11])) : (((/* implicit */int) (unsigned short)23503)))) : (((/* implicit */int) min(((unsigned short)6178), ((unsigned short)65531)))))) : (((/* implicit */int) (signed char)-1))));
                                var_19 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [i_6] [i_10] [i_7 - 2] [i_6] [i_6])) ? (((/* implicit */int) arr_34 [i_6] [i_6] [i_7 + 2] [i_10 + 3] [i_11])) : (((/* implicit */int) arr_34 [i_6] [i_6] [i_7 - 3] [i_10 + 1] [i_11]))))) ? (((/* implicit */int) max((arr_34 [i_6] [(signed char)20] [i_7 + 2] [i_6] [i_6]), (arr_34 [i_5] [i_10 + 3] [i_7 + 1] [i_6] [i_5])))) : (((/* implicit */int) min((arr_34 [i_6] [i_7 + 2] [(unsigned short)22] [i_7 - 1] [i_7 + 2]), (arr_34 [i_5] [i_6] [i_7 + 1] [i_10 + 3] [i_11]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 25; i_12 += 3) 
        {
            for (unsigned long long int i_13 = 2; i_13 < 24; i_13 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_14 = 0; i_14 < 25; i_14 += 4) 
                    {
                        arr_45 [i_5] [i_12] [i_13] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) 15861724135747203813ULL)))) ? (((((/* implicit */_Bool) (unsigned short)9)) ? (((/* implicit */int) (signed char)-72)) : (((/* implicit */int) (signed char)26)))) : (((/* implicit */int) ((arr_32 [i_5] [i_13] [5ULL] [i_14] [i_5] [i_14]) != (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)59))))))))) ? ((+((+(((/* implicit */int) (signed char)-29)))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_43 [i_13] [i_12]))))) ? (((((((/* implicit */int) (signed char)-72)) + (2147483647))) >> (((arr_39 [22ULL] [i_12] [i_5]) - (2995020846738656439ULL))))) : ((-(((/* implicit */int) arr_44 [i_13] [i_12] [i_12] [i_12]))))))));
                        var_20 -= ((/* implicit */unsigned long long int) min(((signed char)1), ((signed char)122)));
                    }
                    var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (-((+(((/* implicit */int) (unsigned short)0)))))))));
                    arr_46 [i_5] [i_12] [i_5] [i_5] |= ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) max(((unsigned short)38369), ((unsigned short)54545)))))) ? (min((((/* implicit */unsigned long long int) arr_41 [i_13] [i_12] [i_5])), (min((((/* implicit */unsigned long long int) (unsigned short)65524)), (4402979774473632695ULL))))) : (((/* implicit */unsigned long long int) (+((+(((/* implicit */int) arr_18 [i_5] [i_12] [i_13])))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_15 = 1; i_15 < 24; i_15 += 2) 
                    {
                        for (unsigned long long int i_16 = 0; i_16 < 25; i_16 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-106)))))));
                                arr_51 [i_13] [i_15] [i_13] [i_12] [i_13] = min((((unsigned long long int) (~(((/* implicit */int) (signed char)1))))), (((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned short) arr_41 [i_12] [i_15] [i_12])), ((unsigned short)59357))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (max((((/* implicit */unsigned long long int) ((signed char) arr_33 [i_13 + 1] [i_13 + 1] [i_13 - 2] [i_13 - 2]))), ((~(((unsigned long long int) 2ULL))))))));
                }
            } 
        } 
        arr_52 [i_5] = ((/* implicit */signed char) (~(((/* implicit */int) max((arr_42 [i_5] [i_5] [i_5] [i_5]), (arr_42 [i_5] [i_5] [i_5] [i_5]))))));
    }
    for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 2) /* same iter space */
    {
        arr_57 [i_17] = ((unsigned short) ((((/* implicit */_Bool) arr_33 [i_17] [i_17] [i_17] [i_17])) ? (min((((/* implicit */unsigned long long int) (unsigned short)59350)), (arr_50 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))) : (((((/* implicit */_Bool) 2308496991336126208ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_17]))) : (arr_39 [i_17] [i_17] [i_17])))));
        var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (signed char)-120)) >= (((/* implicit */int) arr_26 [i_17] [i_17] [i_17] [i_17] [i_17] [i_17] [i_17]))))), ((+(((/* implicit */int) (signed char)-72))))));
    }
    var_25 -= ((/* implicit */signed char) var_2);
}
