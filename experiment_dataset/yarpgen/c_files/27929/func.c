/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27929
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27929 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27929
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
    for (unsigned int i_0 = 3; i_0 < 18; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_4 [i_1] [i_0] [i_0 + 1] = ((/* implicit */short) ((max((((/* implicit */long long int) ((((/* implicit */_Bool) -2771828859696879299LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (signed char)-103))))), ((~(var_9))))) == (((/* implicit */long long int) ((/* implicit */int) max((arr_0 [i_0 - 2]), (arr_0 [i_0 + 2])))))));
                var_18 = ((/* implicit */_Bool) (unsigned char)0);
                arr_5 [i_0] [i_1] = ((/* implicit */int) arr_0 [i_0 + 1]);
                arr_6 [i_0] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) >= (((arr_1 [i_0 + 2]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0 + 1])))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 20; i_2 += 2) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (-(max((((/* implicit */int) ((short) 0LL))), (((((/* implicit */_Bool) arr_7 [i_0] [(unsigned short)7] [i_2] [i_3])) ? (-595582385) : (((/* implicit */int) arr_2 [i_3] [i_2] [i_1])))))))))));
                        /* LoopSeq 2 */
                        for (long long int i_4 = 0; i_4 < 20; i_4 += 3) 
                        {
                            var_20 = max((((/* implicit */unsigned long long int) max(((short)17882), (((/* implicit */short) (_Bool)1))))), (arr_10 [i_0] [i_0] [(_Bool)1] [i_3] [2U] [i_2]));
                            arr_15 [i_4] = ((/* implicit */short) var_16);
                            var_21 = ((/* implicit */long long int) max((var_21), (((/* implicit */long long int) (+(((/* implicit */int) arr_0 [i_0])))))));
                        }
                        for (short i_5 = 4; i_5 < 18; i_5 += 3) 
                        {
                            var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_12 [i_0 - 2] [i_5 - 2] [i_5 + 2] [i_5 - 4] [i_5]))));
                            var_23 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_1 [(unsigned char)1])) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((/* implicit */int) arr_2 [i_5] [(_Bool)1] [i_2])))), ((-(var_5)))));
                        }
                        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) var_3))));
                        arr_19 [i_3] [i_0] = ((/* implicit */int) max((((/* implicit */unsigned long long int) ((unsigned char) min((arr_12 [i_0] [i_0] [i_1] [i_2] [i_3]), (((/* implicit */int) (signed char)-3)))))), (max((arr_10 [i_1] [i_1] [i_2] [i_1] [i_0 + 2] [i_0 + 2]), (((/* implicit */unsigned long long int) arr_18 [i_0 - 3] [i_1] [i_2] [i_3] [i_0 - 3]))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) /* same iter space */
                    {
                        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_0 + 1])) : (((/* implicit */int) arr_9 [i_0 + 2] [i_0 + 2])))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 2) 
                        {
                            arr_25 [i_7] [i_6] [i_2] [i_0] [i_0] = ((((/* implicit */_Bool) (+(arr_3 [i_6] [i_0])))) ? (((((/* implicit */_Bool) var_14)) ? (var_1) : (((/* implicit */int) (unsigned short)32862)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)57))))));
                            arr_26 [i_0] [i_1] [i_1] [i_2] [i_2] [i_6] [i_7] = ((/* implicit */long long int) ((arr_10 [i_0] [i_1] [i_2] [i_6] [i_6] [i_7]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_0] [i_2])))));
                        }
                        for (int i_8 = 0; i_8 < 20; i_8 += 2) 
                        {
                            var_26 = ((/* implicit */long long int) arr_8 [i_2] [i_2] [i_0]);
                            var_27 = var_15;
                            var_28 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3739352874520157268LL)))))) ^ (((((var_9) + (9223372036854775807LL))) << (((((/* implicit */int) arr_1 [(_Bool)1])) - (1)))))));
                        }
                    }
                    for (signed char i_9 = 0; i_9 < 20; i_9 += 3) 
                    {
                        arr_31 [i_0] [i_1] [i_9] [i_9] [i_9] = ((/* implicit */unsigned long long int) ((unsigned char) min((arr_20 [i_1] [i_9]), (((/* implicit */short) ((((/* implicit */int) arr_20 [i_1] [i_0])) != (((/* implicit */int) var_6))))))));
                        /* LoopSeq 4 */
                        for (unsigned char i_10 = 1; i_10 < 18; i_10 += 2) /* same iter space */
                        {
                            arr_34 [i_9] = ((/* implicit */short) var_12);
                            var_29 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) var_3)), (arr_7 [i_0] [i_1] [i_1] [i_9]))))));
                            var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_2 [i_10 + 2] [i_9] [i_0]))))) ? (var_9) : (-388352280664671156LL))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_11 = 1; i_11 < 18; i_11 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */unsigned long long int) max((var_31), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_33 [i_2] [i_9] [i_2] [i_1] [i_1] [i_1] [i_2])))))));
                            arr_38 [i_9] [i_1] [i_2] [i_9] [i_11] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_11]))) * (arr_35 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_21 [i_0 + 1] [i_0 + 1]))) : (arr_18 [i_11] [i_9] [i_2] [i_9] [i_0])));
                            arr_39 [i_0 - 3] [i_9] [i_9] [i_1] [i_11] [i_9] = ((/* implicit */unsigned short) var_1);
                        }
                        for (unsigned char i_12 = 1; i_12 < 18; i_12 += 2) /* same iter space */
                        {
                            var_32 = ((/* implicit */long long int) min((var_32), (((/* implicit */long long int) ((((/* implicit */int) var_3)) < (((/* implicit */int) arr_28 [i_12] [i_9] [(_Bool)1] [i_0] [i_2] [i_0] [i_0])))))));
                            var_33 ^= ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */short) arr_0 [i_0])), (var_2)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) arr_41 [i_2])) ? (((/* implicit */int) arr_13 [i_0] [i_1])) : (((/* implicit */int) var_0))))))), (((unsigned int) (~(((/* implicit */int) arr_22 [i_1] [i_2])))))));
                            arr_43 [i_12] [i_9] [i_2] [i_9] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */long long int) arr_14 [i_9])) != (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_1]))) : (7662594956888287016LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1020429278U))))) : (((/* implicit */int) arr_27 [i_0] [i_1] [i_0] [i_2] [i_9] [i_0] [i_12 - 1]))));
                        }
                        for (unsigned long long int i_13 = 0; i_13 < 20; i_13 += 2) 
                        {
                            arr_46 [i_13] [i_13] [16U] [i_13] [i_0] &= ((/* implicit */_Bool) var_9);
                            var_34 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) -1309508015)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35166))) : (3274538021U))) | (((/* implicit */unsigned int) min((((/* implicit */int) var_2)), (var_1))))))) ? ((~((~(((/* implicit */int) arr_13 [i_2] [6U])))))) : (((/* implicit */int) (_Bool)1))));
                            var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6)))))));
                        }
                        arr_47 [i_9] [i_9] = ((((/* implicit */int) ((((/* implicit */int) (unsigned short)3072)) != (((/* implicit */int) (signed char)-120))))) >> (((((/* implicit */int) (signed char)-67)) + (74))));
                        var_36 = ((/* implicit */unsigned char) var_7);
                    }
                    arr_48 [i_0] [i_0] [i_0] [i_2] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((-(2458070360319698546ULL))) >> (((arr_35 [i_2]) + (1464378389036616266LL)))))) ? (((((/* implicit */_Bool) var_9)) ? (arr_14 [i_2]) : (arr_14 [i_2]))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0 + 2] [i_0 + 2] [i_0 - 1])) - (((/* implicit */int) arr_2 [i_0 - 1] [i_0 + 1] [i_0 - 2])))))));
                    arr_49 [i_0 + 1] [i_1] [i_2] [i_2] = ((/* implicit */_Bool) arr_23 [i_0 + 1]);
                    var_37 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) (unsigned short)20446)))) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_0] [i_2] [i_2] [i_2] [i_1])) >= (((int) var_13))))) : ((+((+(((/* implicit */int) var_17))))))));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_22 [i_14] [i_14])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [(unsigned short)8]))))) : (((/* implicit */int) (_Bool)1))))))));
                    var_39 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */int) (signed char)18)) : (((/* implicit */int) (_Bool)1))));
                    var_40 = ((/* implicit */unsigned char) ((((var_9) / (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_0 + 1] [i_0 + 1] [10ULL] [i_0 - 2] [i_0 + 2]))))) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_32 [14LL] [i_0 + 1] [i_0 - 1]))))))));
                    arr_53 [i_14] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (signed char)17)), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_0] [i_0] [(_Bool)1] [i_14] [i_1]))) : (arr_3 [i_14] [i_0])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_13 [i_0] [i_1])) - (((/* implicit */int) (unsigned char)244))))))) : (max((((/* implicit */long long int) var_12)), (((long long int) var_6))))));
                }
                /* vectorizable */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned long long int) max((var_41), (((/* implicit */unsigned long long int) (+(var_7))))));
                    var_42 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) % (((arr_44 [i_0 + 1] [i_1] [i_15] [i_0] [i_1] [i_15]) | (((/* implicit */unsigned long long int) arr_16 [i_15] [i_15] [i_15] [i_1] [i_1] [i_15] [i_0]))))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
                {
                    var_43 = ((/* implicit */int) ((((((/* implicit */_Bool) ((int) var_7))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [8LL] [i_16])) ? (((/* implicit */int) arr_55 [i_16] [i_1] [i_1])) : (((/* implicit */int) (unsigned char)252))))))) ? (-663450515262816781LL) : (((/* implicit */long long int) ((((/* implicit */int) arr_21 [i_0 + 1] [i_0 - 1])) & (((/* implicit */int) arr_21 [i_0 + 1] [i_0 - 1])))))));
                    /* LoopNest 2 */
                    for (unsigned int i_17 = 0; i_17 < 20; i_17 += 2) 
                    {
                        for (long long int i_18 = 2; i_18 < 17; i_18 += 3) 
                        {
                            {
                                var_44 = ((/* implicit */_Bool) min((var_44), (((/* implicit */_Bool) 502595902))));
                                var_45 = ((/* implicit */long long int) (~(((((/* implicit */unsigned long long int) ((unsigned int) (unsigned char)245))) ^ (arr_44 [i_16] [i_18 + 2] [i_18 + 1] [i_18 + 3] [i_0 - 1] [i_16])))));
                                var_46 = ((/* implicit */unsigned short) var_4);
                            }
                        } 
                    } 
                    arr_65 [i_0] [i_1] [i_1] [i_16] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) & (max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_11 [i_0] [i_16] [i_1] [i_1] [i_0] [i_0]))))), ((+(var_15)))))));
                }
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned short i_19 = 2; i_19 < 13; i_19 += 2) 
    {
        for (unsigned short i_20 = 0; i_20 < 16; i_20 += 3) 
        {
            for (signed char i_21 = 0; i_21 < 16; i_21 += 2) 
            {
                {
                    var_47 = ((/* implicit */unsigned char) arr_21 [i_19 + 2] [i_19 + 3]);
                    var_48 = ((/* implicit */unsigned char) max((var_48), (((unsigned char) arr_54 [i_19] [i_20] [i_21] [i_19 - 2]))));
                    var_49 = ((/* implicit */long long int) (+(arr_11 [i_19] [i_19] [i_20] [i_20] [i_20] [i_21])));
                }
            } 
        } 
    } 
}
