/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33152
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33152 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33152
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
    var_11 &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_0)))))) && (((/* implicit */_Bool) var_10))));
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((18446744073709551589ULL) >> (((18446744073709551589ULL) - (18446744073709551564ULL))))) : (var_7)))) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_1))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 14; i_3 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (unsigned char i_4 = 0; i_4 < 14; i_4 += 1) 
                            {
                                arr_12 [5LL] [i_1] [i_0] [i_0] [i_4] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_2] [i_0])) ? (((((arr_9 [i_0] [i_0] [i_2] [i_3]) && (((/* implicit */_Bool) arr_0 [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29138)) && (((/* implicit */_Bool) 18446744073709551589ULL)))))) : (min((((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0])), (arr_11 [i_0] [(unsigned short)9] [i_0] [(unsigned short)9] [i_0] [(unsigned short)9] [i_0]))))) : (((((/* implicit */_Bool) (short)-30002)) ? (max((3862876637705360237ULL), (1248297122500443733ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)40510)))))));
                                var_13 = ((/* implicit */unsigned long long int) ((int) ((arr_6 [i_0]) ? ((((_Bool)1) ? (arr_11 [i_0] [i_1] [i_1] [i_2] [i_0] [i_3] [i_4]) : (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) 0LL)))));
                                var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) 3001791984U)) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)23094)))));
                            }
                            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 4) 
                            {
                                var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) ? (arr_5 [i_0] [i_1] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_3 [i_1] [i_1])) * (((/* implicit */int) arr_0 [i_1] [i_2]))))) : (max((((/* implicit */unsigned long long int) var_1)), (((arr_13 [i_0] [i_1] [(signed char)0] [i_3]) ? (arr_11 [i_0] [i_1] [i_2] [i_1] [i_0] [i_5] [i_5]) : (((/* implicit */unsigned long long int) 870454000625156194LL))))))));
                                var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_2] [i_5])) ? (arr_11 [(unsigned short)11] [i_1] [i_2] [7LL] [i_0] [i_1] [i_2]) : (arr_11 [i_0] [i_0] [i_2] [i_3] [i_0] [i_0] [i_3])))) ? (min((((/* implicit */unsigned long long int) (short)16320)), (var_7))) : (((/* implicit */unsigned long long int) var_6))))) ? (((unsigned int) 18446744073709551571ULL)) : (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */unsigned int) ((/* implicit */int) var_9))) > (4294967288U))), ((!(((/* implicit */_Bool) arr_1 [i_0]))))))))));
                            }
                            for (long long int i_6 = 1; i_6 < 12; i_6 += 3) 
                            {
                                arr_17 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) var_0))));
                                var_17 &= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_7)))) ? (((/* implicit */unsigned long long int) min((arr_5 [i_1] [i_3] [i_1]), (arr_15 [i_0] [i_1] [i_2] [i_3] [i_6 + 2] [i_3])))) : (((var_9) ? (var_7) : (18446744073709551585ULL)))))) ? (((/* implicit */long long int) ((/* implicit */int) min(((_Bool)1), ((_Bool)1))))) : (((((((/* implicit */int) arr_9 [i_0] [i_1] [i_2] [i_6])) != (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_16 [i_0] [i_1] [i_2] [i_3] [i_6 + 2]), (arr_3 [i_2] [i_0]))))) : (-30LL)))));
                                var_18 = ((/* implicit */_Bool) ((((/* implicit */int) max(((signed char)127), (((/* implicit */signed char) (_Bool)0))))) >> (((((/* implicit */int) arr_4 [i_0] [i_1])) << (((((/* implicit */int) arr_3 [i_0] [i_1])) - (135)))))));
                            }
                            arr_18 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_0] [i_0] [i_0]))))) << (((((/* implicit */int) max((arr_16 [(short)1] [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned char) arr_6 [i_0]))))) - (225)))));
                            arr_19 [i_0] [i_0] [i_2] = ((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)25040)), (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (arr_0 [i_2] [(unsigned char)11]))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (long long int i_8 = 4; i_8 < 13; i_8 += 2) 
                    {
                        {
                            arr_27 [i_0] [12ULL] [i_0] = ((/* implicit */long long int) arr_10 [i_1] [i_8]);
                            arr_28 [i_0] [7LL] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */long long int) (~(((/* implicit */int) var_1))))) / (max((((/* implicit */long long int) ((-617468180) ^ (((/* implicit */int) var_9))))), ((-(var_10)))))));
                        }
                    } 
                } 
                arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (unsigned short)12)) ? (((/* implicit */int) (unsigned char)112)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) ((unsigned short) (+(((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                /* LoopSeq 2 */
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    arr_33 [i_0] = ((/* implicit */unsigned short) arr_21 [i_0] [i_0] [i_0]);
                    arr_34 [i_9] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) var_6);
                    /* LoopNest 2 */
                    for (unsigned short i_10 = 0; i_10 < 14; i_10 += 4) 
                    {
                        for (long long int i_11 = 0; i_11 < 14; i_11 += 2) 
                        {
                            {
                                var_19 = max((((/* implicit */int) max((arr_7 [i_0] [i_0] [i_9 - 1] [i_9]), (arr_7 [i_1] [i_1] [i_9 - 1] [i_9 - 1])))), (((((((/* implicit */_Bool) arr_41 [i_0] [i_1] [i_9] [i_10] [i_11])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_26 [i_0] [i_1] [i_9] [i_10] [i_11] [i_10])))) << (((((arr_25 [i_11] [i_10] [i_9 - 1] [i_1] [i_0] [i_0]) + (979983536287298544LL))) - (15LL))))));
                                var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25160)) ? (36027697507336192LL) : ((-9223372036854775807LL - 1LL))))) ? (((((/* implicit */_Bool) ((arr_25 [i_10] [i_11] [i_1] [i_10] [i_11] [i_9]) | (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_1] [i_1] [i_1])))))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (617468179) : (((/* implicit */int) (unsigned short)0)))) : (((/* implicit */int) (unsigned short)4095)))) : (((((/* implicit */_Bool) (((_Bool)1) ? (4611686018427387903LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)18688)))))) ? (((/* implicit */int) (unsigned short)5056)) : (((/* implicit */int) var_2))))));
                            }
                        } 
                    } 
                }
                for (long long int i_12 = 2; i_12 < 12; i_12 += 4) 
                {
                    var_21 = ((/* implicit */unsigned short) ((((min((var_0), (((/* implicit */long long int) arr_1 [i_0])))) & (((/* implicit */long long int) ((((/* implicit */_Bool) arr_20 [i_0] [i_1] [i_12])) ? (arr_24 [i_0] [i_0] [i_12] [i_12 + 2] [i_12]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)6)))))))) & (((/* implicit */long long int) ((/* implicit */int) ((((26ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)234)) ? (((/* implicit */int) (unsigned short)14)) : (617468180))))))))));
                    var_22 = ((/* implicit */_Bool) min((var_22), (((_Bool) var_3))));
                }
                var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((_Bool) ((arr_43 [i_0]) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) max((((((/* implicit */int) arr_23 [i_0] [i_1] [i_0])) < (((/* implicit */int) arr_38 [i_0] [i_0] [i_0] [i_1] [i_1])))), (((2147483647) == (((/* implicit */int) var_1)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) var_2);
    var_25 = ((((/* implicit */_Bool) (~(((/* implicit */int) var_9))))) ? (var_10) : (max((((var_10) & (var_0))), (((/* implicit */long long int) var_8)))));
}
