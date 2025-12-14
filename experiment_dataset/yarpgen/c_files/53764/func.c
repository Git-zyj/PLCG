/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53764
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53764 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53764
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
    var_16 = ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned int) var_2))));
    var_17 = ((/* implicit */signed char) var_7);
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 10; i_2 += 3) 
                {
                    var_18 = arr_8 [i_0] [i_0];
                    var_19 &= ((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [2ULL] [2ULL])))))) < (min((arr_2 [(unsigned short)1] [(unsigned short)1] [i_2]), (((/* implicit */int) var_15))))));
                }
                for (unsigned int i_3 = 4; i_3 < 6; i_3 += 2) 
                {
                    var_20 = min((min((((/* implicit */unsigned int) arr_2 [i_0] [i_1] [i_1])), (var_7))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [(signed char)6] [i_3 + 2] [9])) || (((/* implicit */_Bool) var_5))))));
                    var_21 = ((var_13) < (((/* implicit */int) arr_0 [i_0] [(unsigned short)3])));
                    var_22 = ((/* implicit */signed char) ((long long int) min((arr_10 [(short)0] [(short)0] [i_3] [i_3 - 1]), (arr_10 [i_3] [i_1] [0] [i_3 - 1]))));
                }
                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (max((((/* implicit */int) var_3)), (arr_7 [i_0] [8] [9LL] [1LL])))))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_8 [1U] [i_1])))) ? (min((arr_4 [(unsigned short)4] [(signed char)8]), (((/* implicit */unsigned long long int) 559748837U)))) : (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) var_15)), (arr_9 [6LL] [i_1] [1LL])))))))));
                /* LoopNest 2 */
                for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                {
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */int) ((long long int) var_4));
                            var_25 ^= ((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) % (((/* implicit */int) arr_6 [7U] [i_1]))))))))));
                            var_26 = ((/* implicit */int) (+(max((((/* implicit */unsigned int) var_5)), ((+(var_12)))))));
                            /* LoopSeq 4 */
                            for (unsigned char i_6 = 0; i_6 < 10; i_6 += 2) 
                            {
                                var_27 = ((/* implicit */_Bool) (~(((/* implicit */int) ((_Bool) ((long long int) var_6))))));
                                var_28 = ((/* implicit */unsigned long long int) arr_9 [i_0] [4U] [i_1]);
                                var_29 *= 880304811U;
                                var_30 ^= ((/* implicit */long long int) (~((~(((/* implicit */int) arr_15 [8] [i_1] [(signed char)7]))))));
                            }
                            /* vectorizable */
                            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 2) /* same iter space */
                            {
                                var_31 = ((/* implicit */long long int) (+((~(1180620000)))));
                                var_32 = ((/* implicit */int) var_11);
                                var_33 += ((/* implicit */signed char) (-(var_12)));
                                var_34 |= ((/* implicit */unsigned short) ((arr_0 [i_0] [i_1]) ? (((/* implicit */unsigned int) var_2)) : (((((/* implicit */_Bool) arr_9 [5LL] [i_1] [(unsigned char)5])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_19 [i_0] [i_0] [i_4] [i_5] [i_5] [(unsigned char)7] [(unsigned short)9])))));
                                var_35 = ((/* implicit */long long int) ((unsigned char) arr_14 [i_0] [5U] [7U] [9U]));
                            }
                            for (unsigned char i_8 = 0; i_8 < 10; i_8 += 2) /* same iter space */
                            {
                                var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) arr_12 [i_0] [(_Bool)1] [(signed char)8] [2]))));
                                var_37 = ((/* implicit */_Bool) (-((~((+(((/* implicit */int) var_1))))))));
                            }
                            for (unsigned char i_9 = 0; i_9 < 10; i_9 += 2) /* same iter space */
                            {
                                var_38 = ((/* implicit */long long int) min((max(((+(arr_27 [i_5] [4LL] [i_4] [i_5] [2U] [7]))), (((/* implicit */unsigned long long int) (~(168363544U)))))), (((/* implicit */unsigned long long int) max((max((var_7), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_26 [i_4] [(unsigned char)2] [0LL] [(unsigned char)2] [(signed char)0] [0LL])) ? (((/* implicit */int) arr_0 [(short)0] [i_0])) : (((/* implicit */int) var_15))))))))));
                                var_39 = ((/* implicit */int) ((((/* implicit */_Bool) min((((unsigned long long int) -2132025730)), (((/* implicit */unsigned long long int) var_12))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (max((((/* implicit */unsigned int) (!(var_11)))), (var_12)))));
                                var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) (+(var_6))))));
                                var_41 *= ((/* implicit */unsigned char) min(((~(arr_27 [i_0] [i_9] [4U] [i_5] [(unsigned char)2] [(signed char)8]))), (min((((/* implicit */unsigned long long int) arr_8 [i_0] [9LL])), (arr_27 [i_0] [i_9] [0] [0] [0] [i_0])))));
                                var_42 = ((/* implicit */signed char) min((min((arr_19 [4] [4] [i_4] [i_5] [9] [2] [(unsigned char)3]), (((/* implicit */unsigned int) arr_15 [i_0] [i_1] [9])))), (((/* implicit */unsigned int) (~((~(((/* implicit */int) var_15)))))))));
                            }
                        }
                    } 
                } 
                var_43 = ((/* implicit */_Bool) ((unsigned int) min((((var_7) | (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) min((var_13), (((/* implicit */int) var_15))))))));
            }
        } 
    } 
}
