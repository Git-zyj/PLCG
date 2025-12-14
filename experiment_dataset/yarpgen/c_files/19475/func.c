/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19475
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19475 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19475
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
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */unsigned int) var_0);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) arr_0 [i_0]);
        var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) arr_1 [i_0]))));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_9 [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((unsigned char) 2648713708U));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 3; i_3 < 10; i_3 += 4) 
                {
                    /* LoopSeq 4 */
                    for (int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (_Bool)1))));
                        var_17 ^= ((/* implicit */int) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_12))))) != (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))))), (min((((_Bool) (_Bool)1)), ((_Bool)0)))));
                        arr_16 [i_0] [i_0] [i_2] [(short)8] [i_3] = ((/* implicit */int) ((((((/* implicit */int) var_6)) > (((/* implicit */int) arr_8 [i_0] [i_2] [i_2])))) ? ((((!(((/* implicit */_Bool) (signed char)83)))) ? (arr_14 [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3]) : ((+(var_10))))) : (((/* implicit */unsigned long long int) (((!((_Bool)1))) ? (arr_5 [i_3] [i_3 - 3]) : (arr_10 [i_0] [i_3 + 1] [i_2] [i_3] [i_2]))))));
                    }
                    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_18 = ((/* implicit */long long int) (signed char)110);
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (9223372036854775807LL) : (((/* implicit */long long int) ((((/* implicit */_Bool) 631428149343210568LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_0]))))))))) ? (min((((/* implicit */unsigned long long int) (-(var_8)))), (((((/* implicit */_Bool) var_1)) ? (var_7) : (((/* implicit */unsigned long long int) var_8)))))) : (((((/* implicit */_Bool) var_6)) ? (var_5) : (((/* implicit */unsigned long long int) var_4))))));
                        var_20 = ((/* implicit */unsigned short) max((-9223372036854775796LL), (9223372036854775781LL)));
                        arr_19 [i_0] [i_1] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)127)), (var_9)))) ? (((/* implicit */unsigned long long int) min((1121660190U), (((/* implicit */unsigned int) (unsigned char)42))))) : (max((((/* implicit */unsigned long long int) var_3)), (var_10)))))) || (((/* implicit */_Bool) var_9))));
                    }
                    for (unsigned char i_6 = 2; i_6 < 10; i_6 += 4) /* same iter space */
                    {
                        arr_23 [i_2] [i_1] [i_2] [i_2] [i_3] [i_6] = ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))), (((unsigned int) arr_22 [i_2] [i_2]))));
                        var_21 += ((/* implicit */unsigned int) ((short) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) arr_15 [i_0])), (-3659376324747345376LL)))), (min((var_5), (((/* implicit */unsigned long long int) 3659376324747345380LL)))))));
                    }
                    for (unsigned char i_7 = 2; i_7 < 10; i_7 += 4) /* same iter space */
                    {
                        var_22 *= ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_0] [i_1])), (32752U)))) || (((/* implicit */_Bool) (unsigned char)250)))))));
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_7] [i_7] [i_7] [i_7] [i_7 - 2]))))) * (((/* implicit */int) (!((!(((/* implicit */_Bool) var_12)))))))));
                        var_24 = ((/* implicit */_Bool) (unsigned char)88);
                    }
                    var_25 *= ((/* implicit */unsigned int) ((((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) - (var_5))) == (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)230)), (276330494U))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned short) 18446744073709551610ULL))))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_9 = 1; i_9 < 8; i_9 += 3) 
                    {
                        var_26 += ((/* implicit */unsigned short) min((((short) min((arr_18 [i_0] [i_1] [i_1] [i_0]), (var_11)))), (((/* implicit */short) min((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) -1791141446))))))))));
                        arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (signed char)92);
                        arr_32 [i_0] [i_9] [i_2] [i_2] [i_9 + 3] = ((/* implicit */unsigned short) (-(var_10)));
                        var_27 = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)226)) ? (var_11) : (arr_27 [i_9] [i_2] [i_1] [i_0])))) & (var_2))) * (((/* implicit */long long int) ((/* implicit */int) min((var_3), (arr_8 [i_1] [i_2] [i_9 + 2])))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */int) ((var_8) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_28 [i_9] [i_9] [i_9] [i_9 + 1] [i_2] [i_9 + 1])))))) * (((/* implicit */int) var_9))));
                    }
                    arr_33 [i_0] [i_1] [i_2] [i_8] [i_8] = ((int) var_0);
                    var_29 ^= ((/* implicit */unsigned short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_0] [i_1] [i_2] [i_0]))))), (max((var_12), (((/* implicit */int) (_Bool)1))))));
                }
            }
            arr_34 [i_0] [i_0] = ((/* implicit */short) 3U);
            var_30 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) 3069985522220023673LL)) : (min((var_5), (((/* implicit */unsigned long long int) -1702731745)))))), (((/* implicit */unsigned long long int) var_0))));
        }
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
        {
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 11; i_11 += 3) 
            {
                for (int i_12 = 0; i_12 < 11; i_12 += 3) 
                {
                    {
                        arr_44 [i_0] [i_0] [i_0] [i_11] = ((/* implicit */long long int) 0ULL);
                        var_31 = (short)6057;
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 11; i_13 += 3) 
                        {
                            var_32 = ((/* implicit */int) min((var_32), (((/* implicit */int) ((((/* implicit */_Bool) 1702731765)) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 1702731765)) || (((/* implicit */_Bool) var_10)))))) : (((long long int) (unsigned char)2)))) : (((/* implicit */long long int) 4U)))))));
                            var_33 = ((/* implicit */unsigned int) min((var_33), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) max((3562368827U), (((/* implicit */unsigned int) arr_7 [i_0] [i_10] [i_10]))))) != (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) * (var_10))))))));
                            arr_49 [i_12] [i_12] [i_11] [i_12] [i_12] = ((/* implicit */unsigned char) var_12);
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_34 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)17)) ? (((/* implicit */unsigned long long int) 1735825035232386686LL)) : (((((/* implicit */_Bool) arr_38 [0U] [(short)2] [i_11])) ? (18446744073709551615ULL) : (var_7)))));
                            arr_54 [i_11] [(_Bool)1] [i_11] [i_11] [(_Bool)1] [i_14] = ((/* implicit */unsigned int) ((_Bool) arr_48 [i_0] [i_11]));
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((400186141U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)19636))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0] [i_10] [i_0])) && ((_Bool)1)))) : (((((/* implicit */int) var_0)) << (((/* implicit */int) (_Bool)1))))))) != (arr_47 [i_0] [i_0] [i_10] [i_0] [i_0] [i_0])));
            var_36 *= ((/* implicit */int) (-(max((min((((/* implicit */long long int) (_Bool)1)), (var_2))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_0 [i_0])))))))));
        }
        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)30833)) + (var_12))))));
    }
    var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) 60U))));
}
