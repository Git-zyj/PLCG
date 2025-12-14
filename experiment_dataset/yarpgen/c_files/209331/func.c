/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209331
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
    var_17 = ((/* implicit */signed char) max((var_17), (((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (unsigned char)102)) : (((/* implicit */int) (unsigned short)0))))) ? (((7114770980204722788ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)2))))))))))));
    var_18 = ((/* implicit */unsigned char) min((max((((/* implicit */long long int) (~(((/* implicit */int) var_16))))), (max((((/* implicit */long long int) var_0)), (var_11))))), (((/* implicit */long long int) var_4))));
    var_19 = ((/* implicit */int) var_8);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 1; i_1 < 14; i_1 += 2) 
        {
            for (int i_2 = 1; i_2 < 16; i_2 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 3) 
                    {
                        var_20 |= ((/* implicit */unsigned char) var_10);
                        /* LoopSeq 4 */
                        for (int i_4 = 4; i_4 < 16; i_4 += 3) /* same iter space */
                        {
                            var_21 *= var_2;
                            var_22 = var_2;
                        }
                        /* vectorizable */
                        for (int i_5 = 4; i_5 < 16; i_5 += 3) /* same iter space */
                        {
                            var_23 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_0])) ? (arr_4 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)68)))));
                            arr_16 [i_0] [i_1 + 2] [i_0] [i_3] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)124))))) / (((((/* implicit */_Bool) arr_6 [i_1] [i_1] [i_1] [i_3])) ? (7114770980204722793ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_2] [i_1] [i_5])))))));
                        }
                        for (unsigned char i_6 = 0; i_6 < 18; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned short) arr_12 [17LL] [i_1] [17LL] [i_2] [17LL] [i_1]);
                            var_25 = ((/* implicit */short) max(((~(((/* implicit */int) arr_11 [i_1])))), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_5 [i_0] [i_1 + 1] [i_1]) % (((/* implicit */int) arr_8 [i_1] [i_1 + 2] [i_1 + 2] [i_1]))))) && (((/* implicit */_Bool) ((arr_19 [i_1] [i_3]) / (((/* implicit */int) arr_8 [i_1] [i_3] [i_2 + 1] [i_1]))))))))));
                        }
                        for (unsigned char i_7 = 0; i_7 < 18; i_7 += 2) /* same iter space */
                        {
                            var_26 -= arr_11 [i_7];
                            var_27 |= ((/* implicit */int) min((((((/* implicit */_Bool) (short)-4)) ? (var_9) : (((/* implicit */long long int) arr_12 [i_0] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_1 + 2] [i_0])))), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(var_8)))))))));
                            var_28 = ((/* implicit */_Bool) (+((~(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [3] [i_1])))))))));
                            var_29 |= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_20 [i_7] [i_3] [i_2] [i_1 - 1] [i_0])) && (((/* implicit */_Bool) var_7))))), (min(((-(arr_10 [i_0] [i_0]))), (((/* implicit */unsigned long long int) max((arr_18 [i_0] [i_1 + 3] [i_2] [i_7]), (arr_6 [i_0] [i_0] [i_7] [i_7]))))))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 18; i_8 += 4) 
                        {
                            var_30 = ((/* implicit */short) (~(((/* implicit */int) (unsigned char)196))));
                            var_31 *= ((/* implicit */unsigned int) arr_7 [i_0] [i_1] [i_2] [i_1]);
                        }
                        for (unsigned char i_9 = 0; i_9 < 18; i_9 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */short) max((max((((((/* implicit */_Bool) arr_19 [i_1] [i_1])) ? (arr_4 [i_1]) : (arr_0 [i_3]))), (((/* implicit */unsigned long long int) ((var_2) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213)))))))), (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_8 [i_0] [15LL] [15LL] [i_1])))), (arr_19 [i_1] [i_1]))))));
                            var_33 = ((/* implicit */short) min((((((/* implicit */int) (short)16593)) ^ (((/* implicit */int) arr_18 [i_1] [i_1 + 2] [i_1 + 1] [i_2 - 1])))), ((-(arr_21 [i_1 + 1] [i_1] [i_2] [i_2 - 1] [i_2] [i_2 + 2] [i_2 + 1])))));
                            var_34 = ((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)7))));
                            var_35 = ((/* implicit */unsigned short) (short)-31636);
                            arr_29 [i_9] [(unsigned short)9] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_2 + 2]);
                        }
                        /* vectorizable */
                        for (unsigned char i_10 = 0; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            var_36 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_1 + 2] [i_2 + 2])) ? (((/* implicit */int) arr_25 [i_1 + 2] [i_2 + 2] [i_2])) : (((/* implicit */int) arr_2 [i_1 + 1] [i_2 - 1]))));
                            var_37 -= ((/* implicit */unsigned short) ((_Bool) arr_5 [(_Bool)1] [i_1 + 1] [i_10]));
                            var_38 = ((/* implicit */short) ((((/* implicit */long long int) arr_19 [i_1] [i_1 - 1])) % (var_9)));
                        }
                        var_39 = ((/* implicit */unsigned int) var_9);
                    }
                    /* vectorizable */
                    for (unsigned char i_11 = 0; i_11 < 18; i_11 += 2) /* same iter space */
                    {
                        var_40 -= ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_30 [i_11] [i_11]))))));
                        var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)117))))) ^ (((((/* implicit */_Bool) arr_5 [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_11]))) : (75378490974910344ULL))))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        arr_38 [i_1] [i_1] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) 881813440U)) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2] [i_12])) : (((/* implicit */int) (unsigned short)21909)))) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)1226)) > (((/* implicit */int) var_16)))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_13 = 3; i_13 < 15; i_13 += 2) 
                        {
                            var_42 = ((/* implicit */int) arr_37 [i_0]);
                            var_43 -= ((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)169))));
                            arr_43 [i_1] [i_1] [i_1] [i_12] [i_12] = var_10;
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_14 = 0; i_14 < 18; i_14 += 1) 
                        {
                            var_44 = (-(((((/* implicit */_Bool) var_11)) ? (var_3) : (((/* implicit */int) arr_35 [i_0] [i_1 - 1] [i_2] [i_12] [i_14])))));
                            var_45 |= ((((/* implicit */_Bool) ((((/* implicit */int) var_6)) ^ (((/* implicit */int) (short)2121))))) ? (((/* implicit */int) (short)3)) : (((/* implicit */int) arr_31 [i_0] [i_0] [i_12] [i_1 + 3] [i_2 + 1])));
                            var_46 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_3 [i_1 + 3])) / (((/* implicit */int) var_16))));
                            var_47 ^= ((/* implicit */signed char) (-(arr_12 [i_0] [i_2 + 1] [i_1 + 3] [i_2 + 2] [i_1 + 3] [i_0])));
                        }
                    }
                    var_48 = ((/* implicit */unsigned char) (~(min((((/* implicit */int) ((((/* implicit */long long int) var_8)) <= (375916760807378028LL)))), (((((/* implicit */int) (unsigned char)241)) << (((((/* implicit */int) var_6)) - (29762)))))))));
                }
            } 
        } 
        var_49 *= ((/* implicit */unsigned int) (((((-(((/* implicit */int) var_16)))) < (((/* implicit */int) max(((unsigned char)204), ((unsigned char)43)))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)204))) : (arr_37 [i_0])))), (min((((/* implicit */unsigned long long int) var_16)), (18371365582734641295ULL))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0] [i_0])))))));
        var_50 = ((/* implicit */unsigned char) (~(((arr_9 [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)15349)))))));
    }
}
