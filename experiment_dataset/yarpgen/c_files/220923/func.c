/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220923
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220923 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220923
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 9; i_1 += 4) 
        {
            {
                var_15 += ((unsigned long long int) min((((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (((/* implicit */int) arr_2 [i_0])) : (-1363796704))), (((/* implicit */int) arr_3 [i_0] [i_1 - 2]))));
                var_16 = ((/* implicit */unsigned int) ((unsigned char) (unsigned short)3584));
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 2) 
                    {
                        {
                            arr_8 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) 4294967276U);
                            arr_9 [i_1] [i_1 - 1] [i_1] [(unsigned short)8] [i_1 - 2] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_7 [i_1 + 1] [(signed char)4] [i_1 - 2] [i_1 - 1] [i_1 + 1] [i_1 - 1])) - (((/* implicit */int) arr_7 [i_1 + 1] [i_1] [i_1 + 1] [i_1] [i_1 - 2] [i_1 - 1]))))) ? (((/* implicit */int) max((arr_3 [i_1 + 1] [i_1 - 1]), (((/* implicit */unsigned short) (unsigned char)236))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_2 [i_0]))))))));
                            arr_10 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_1 - 2] [i_1 - 2] [i_1 - 1] [i_1] [i_1] [i_1])))) - (1152921435887370240ULL)));
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 1; i_4 < 8; i_4 += 4) /* same iter space */
                            {
                                arr_13 [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0])) ? (30U) : (((/* implicit */unsigned int) ((/* implicit */int) (((-(((/* implicit */int) (short)-10104)))) <= (((((/* implicit */int) arr_6 [i_0] [i_0] [i_2])) - (((/* implicit */int) arr_4 [i_0] [i_4] [i_0] [i_3]))))))))));
                                var_17 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_2 [i_0])))) || (((/* implicit */_Bool) 18446744073709551615ULL))));
                            }
                            for (unsigned short i_5 = 1; i_5 < 8; i_5 += 4) /* same iter space */
                            {
                                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min(((((~(arr_15 [i_0] [i_0] [i_0] [i_0]))) ^ (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_5 [i_0] [i_1 + 1] [i_2] [i_3])), (arr_16 [i_0] [i_0]))))))), (min((((4294967287U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)104))))), (((/* implicit */unsigned int) arr_0 [i_5 + 1] [i_1 + 1])))))))));
                                arr_18 [i_5] [i_1] [i_1] [(unsigned short)3] [i_3] [(_Bool)0] [i_2] = ((((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_2] [3ULL] [i_2] [i_2])) ? (((/* implicit */int) arr_12 [i_1] [i_1] [6LL])) : (((/* implicit */int) arr_12 [i_0] [i_0] [i_0]))))) : (((((/* implicit */_Bool) 1152921435887370217ULL)) ? (17293822637822181364ULL) : (34359738367ULL))))) | (((/* implicit */unsigned long long int) (+(((((/* implicit */int) arr_3 [i_0] [(short)3])) & (((/* implicit */int) arr_2 [(_Bool)1]))))))));
                                var_19 = ((/* implicit */unsigned short) arr_5 [i_1 + 1] [i_5 + 2] [i_2] [i_3]);
                                arr_19 [i_5] [i_5] [i_0] [i_2] [i_1 + 1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_5 - 1] [i_5 - 1] [i_5] [i_5 + 2] [i_5 + 1] [i_5 - 1])) && (((((/* implicit */_Bool) arr_11 [i_5 - 1] [i_5 + 2] [i_5 + 1] [i_5 + 2] [i_5 + 1])) && (((/* implicit */_Bool) arr_11 [i_5] [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 1]))))));
                            }
                        }
                    } 
                } 
                arr_20 [i_0] = ((/* implicit */unsigned char) (((+(((/* implicit */int) (unsigned short)47075)))) < (-1799663085)));
                arr_21 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((18446744039349813248ULL), (34359738392ULL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 457782266517253516ULL)) ? (((/* implicit */int) arr_4 [i_1 - 1] [i_1] [i_0] [i_1 + 1])) : (((/* implicit */int) arr_14 [i_1 - 2] [i_0] [i_0] [i_0])))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned long long int i_6 = 0; i_6 < 15; i_6 += 1) 
    {
        /* LoopNest 2 */
        for (short i_7 = 0; i_7 < 15; i_7 += 2) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 13; i_8 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_9 = 1; i_9 < 13; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 15; i_10 += 2) 
                        {
                            {
                                arr_34 [i_6] &= arr_25 [i_6] [i_6];
                                arr_35 [i_8] [i_10] [i_10] [(short)10] [i_8] [(short)10] [i_6] = ((/* implicit */short) (+(arr_30 [i_6] [10] [i_7] [i_9] [i_6])));
                            }
                        } 
                    } 
                    var_20 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((arr_30 [i_8 - 2] [i_8] [i_7] [i_6] [i_6]) + (((/* implicit */unsigned int) ((/* implicit */int) (short)10102))))), (((((/* implicit */_Bool) 9718706821217281450ULL)) ? (((/* implicit */unsigned int) arr_27 [i_6] [i_6] [i_6])) : (2372621515U)))))) ? (((((/* implicit */_Bool) (unsigned char)201)) ? (arr_29 [7U] [i_7] [i_8 + 2]) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_27 [i_6] [i_6] [i_8])))))) : (((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-10104))) == (arr_30 [i_6] [i_6] [i_6] [1] [14U])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            for (short i_12 = 0; i_12 < 15; i_12 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                    {
                        for (int i_14 = 2; i_14 < 14; i_14 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_28 [i_11] [i_13])) || (((/* implicit */_Bool) (signed char)48)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_46 [i_14] [i_14 - 2] [i_14] [i_14 - 2] [i_11] [1ULL] [i_14])))))) : (arr_46 [i_14] [8] [i_11] [i_6] [i_11] [i_6] [i_6])))) ? (arr_33 [i_12]) : (((/* implicit */unsigned int) arr_41 [i_11]))));
                                var_22 = ((/* implicit */unsigned char) (-(min((arr_26 [(unsigned short)3] [(unsigned short)3] [i_12] [i_12]), (((/* implicit */unsigned long long int) (~(arr_33 [i_12]))))))));
                                var_23 = ((/* implicit */int) (signed char)-127);
                                var_24 = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-105))))), ((-(arr_44 [(signed char)7] [i_14 - 2] [i_14 + 1] [i_11] [i_14 + 1])))));
                                arr_48 [i_11] = ((/* implicit */signed char) (unsigned short)2544);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 0; i_15 < 15; i_15 += 4) 
                    {
                        arr_51 [i_11] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((((/* implicit */int) arr_45 [i_11] [i_12] [3])) > (arr_27 [i_6] [i_6] [i_12])))))))));
                        var_25 -= ((/* implicit */signed char) (+(((/* implicit */int) min((arr_22 [i_6] [i_11]), (arr_22 [i_6] [i_11]))))));
                        var_26 = ((/* implicit */unsigned char) max((var_26), (((/* implicit */unsigned char) ((((((/* implicit */int) arr_32 [i_6] [i_6] [i_11] [i_12] [i_15])) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) max((((/* implicit */long long int) arr_41 [i_15])), (-6797683174559289951LL)))))))));
                        var_27 = ((((/* implicit */_Bool) (~(((/* implicit */int) ((arr_44 [i_11] [i_11] [i_12] [i_11] [i_12]) < (3368522925U))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_42 [i_6] [i_11] [i_12] [i_11]))))) : (((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) (_Bool)1)))));
                        var_28 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (signed char)24)), (arr_41 [i_11])))) ? ((-(((/* implicit */int) arr_38 [0] [i_12] [i_15])))) : (max((arr_41 [i_11]), (arr_41 [i_11])))));
                    }
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_16 = 1; i_16 < 16; i_16 += 1) 
    {
        arr_54 [(unsigned short)16] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5173243122649495091ULL)) ? (((/* implicit */int) (short)20232)) : (((/* implicit */int) (signed char)-1))));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_53 [i_16] [16ULL])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [12U] [(signed char)12])) ? (((((/* implicit */_Bool) arr_52 [4])) ? (((/* implicit */int) arr_53 [i_16] [(unsigned char)12])) : (((/* implicit */int) arr_53 [(signed char)6] [(signed char)6])))) : (((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)129)), (arr_52 [10ULL]))))))))))));
    }
    var_30 = ((/* implicit */unsigned char) var_12);
}
