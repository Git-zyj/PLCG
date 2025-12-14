/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3314
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3314 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3314
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
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 13; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                var_15 = ((/* implicit */short) ((arr_6 [i_0] [i_0] [i_0] [i_0]) * (((/* implicit */unsigned long long int) arr_3 [i_0] [i_2 + 1] [i_2 + 2]))));
                /* LoopNest 2 */
                for (long long int i_3 = 0; i_3 < 13; i_3 += 2) 
                {
                    for (long long int i_4 = 3; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) ((((long long int) var_6)) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))))));
                            var_17 = (+(arr_6 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_2 - 1]));
                        }
                    } 
                } 
                var_18 = ((/* implicit */short) ((unsigned short) ((short) arr_2 [i_0])));
            }
            /* LoopNest 2 */
            for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
            {
                for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 13; i_7 += 2) 
                        {
                            var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_0] [i_5] [i_1])) ? (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_8)) ? (arr_16 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [1LL] [i_0] [1LL] [i_0] [i_0] [i_0]))))), (((/* implicit */long long int) ((var_4) ? (((/* implicit */int) arr_18 [i_7] [i_5] [i_5] [i_1] [i_0])) : (((/* implicit */int) arr_8 [i_0])))))))) : ((+(((((/* implicit */_Bool) var_5)) ? (2688912444076798248ULL) : (var_11))))))))));
                            var_20 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1))))), (15757831629632753372ULL)));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) /* same iter space */
                        {
                            var_21 = 18364700854177619144ULL;
                            arr_23 [i_1] [i_1] [i_5] [i_1] [i_1] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_22 [i_6] [i_6] [i_5] [i_1] [i_0])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
                            var_22 = ((/* implicit */long long int) min(((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_0] [(signed char)9]))))))), ((~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (short)-31761)) : (((/* implicit */int) (unsigned short)759))))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                        {
                            arr_27 [i_9] [i_9] [(_Bool)1] [i_6] [i_9] = ((/* implicit */_Bool) (unsigned char)220);
                            var_23 = ((/* implicit */unsigned char) var_13);
                            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_5])) - (((/* implicit */int) arr_8 [i_5]))))) ? (4617683079667630563ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0]))) + (var_11)))));
                        }
                        arr_28 [i_5] [(_Bool)1] = ((/* implicit */_Bool) 82043219531932470ULL);
                    }
                } 
            } 
            /* LoopNest 2 */
            for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
            {
                for (long long int i_11 = 0; i_11 < 13; i_11 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_36 [i_1] [(unsigned char)12] [i_10] [i_11] [i_12] |= ((/* implicit */unsigned char) (-(((/* implicit */int) max((var_0), (((/* implicit */signed char) arr_20 [i_12] [i_11] [(_Bool)1] [i_0] [i_1] [i_0] [i_0])))))));
                            var_25 = ((/* implicit */short) (~(((unsigned long long int) ((arr_10 [3ULL]) ? (82043219531932470ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0] [i_0] [i_1] [i_10] [(_Bool)1] [i_10] [i_12]))))))));
                        }
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) /* same iter space */
                        {
                            var_26 = ((/* implicit */signed char) (-(((/* implicit */int) (_Bool)1))));
                            var_27 = ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (arr_15 [i_0] [2])))) && (((/* implicit */_Bool) var_8))))));
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0] [i_0])) ? (((/* implicit */int) (short)-1081)) : ((~(((/* implicit */int) var_10)))))))));
                        }
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_10 - 1])), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                            var_30 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_10 - 1] [i_14])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_26 [i_0] [i_0] [(unsigned char)12] [i_11] [i_14] [i_1] [i_1]))))))))));
                        }
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((short) min((var_5), (((/* implicit */short) (unsigned char)79)))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_4)), ((unsigned char)237))))))) : (max((((/* implicit */unsigned long long int) max((arr_13 [i_11] [i_11] [i_11] [i_11]), (((/* implicit */long long int) arr_21 [i_0] [i_0] [i_0] [(_Bool)1]))))), (var_2)))));
                        var_32 = ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_4 [i_10 - 1] [i_10 - 1] [i_10])) : (((/* implicit */int) arr_4 [i_10 - 1] [i_10 - 1] [i_10 - 1]))))));
                        /* LoopSeq 2 */
                        for (unsigned short i_15 = 3; i_15 < 11; i_15 += 2) 
                        {
                            var_33 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_11] [i_0] [i_1] [i_1]))) * (min((((82043219531932470ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned long long int) arr_9 [i_15 - 1] [i_10 - 1] [i_0] [i_0]))))));
                            arr_45 [i_0] [i_10] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_2 [i_0])))) % (min((arr_35 [i_10] [i_11] [i_11] [i_11] [i_11] [i_11]), (arr_35 [i_10] [(_Bool)1] [i_10] [i_10] [i_1] [i_10])))));
                            var_34 *= ((/* implicit */_Bool) (unsigned short)47312);
                        }
                        for (long long int i_16 = 1; i_16 < 10; i_16 += 2) 
                        {
                            var_35 *= var_3;
                            var_36 = ((/* implicit */_Bool) max((var_36), (((/* implicit */_Bool) min((((/* implicit */int) ((short) 82043219531932472ULL))), ((~(((((-3) + (2147483647))) << (((((-3167171789470369862LL) + (3167171789470369877LL))) - (15LL))))))))))));
                        }
                    }
                } 
            } 
        }
        var_37 = min((((/* implicit */unsigned long long int) (-(var_14)))), (arr_7 [i_0] [i_0]));
        var_38 |= ((/* implicit */short) ((int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) var_1)), ((short)4)))), (var_8))));
        var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6308571808192269229LL)) ? (((/* implicit */int) (_Bool)1)) : ((~(((/* implicit */int) (short)-20733))))))) ? (((((/* implicit */int) max((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned short) var_10))))) ^ (((((/* implicit */_Bool) 5876542762471269051ULL)) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) (_Bool)0)))))) : (((/* implicit */int) (_Bool)1))));
    }
    for (unsigned char i_17 = 0; i_17 < 16; i_17 += 2) 
    {
        var_40 += ((min((((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-109)) % (((/* implicit */int) arr_50 [i_17] [i_17]))))), (max((16545457596434964466ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) -6308571808192269224LL))))) >> (((min((((/* implicit */long long int) arr_50 [i_17] [i_17])), (arr_49 [i_17]))) + (8435170160676152615LL)))))));
        var_41 += ((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) ((short) (unsigned short)65231)))) : ((~(arr_49 [(unsigned char)15]))))));
        /* LoopNest 2 */
        for (unsigned char i_18 = 3; i_18 < 13; i_18 += 2) 
        {
            for (unsigned long long int i_19 = 2; i_19 < 14; i_19 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        for (short i_21 = 0; i_21 < 16; i_21 += 2) 
                        {
                            {
                                arr_62 [i_17] [i_17] [i_18 + 1] [i_19] [i_17] [i_19] [i_21] = ((/* implicit */_Bool) (-(((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_57 [i_19] [i_18] [i_19])) || (((/* implicit */_Bool) arr_54 [i_17] [i_19] [i_19] [i_20]))))), ((unsigned short)65220))))));
                                arr_63 [i_17] [i_19] [i_19 + 1] [i_19 + 2] [i_19] [6] [i_19 + 2] |= ((/* implicit */unsigned short) arr_58 [i_17] [i_19] [i_20] [i_21]);
                                arr_64 [i_19] [i_17] [i_17] [i_18] [i_19] = ((/* implicit */unsigned long long int) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65220))) + (arr_53 [i_18 - 3] [i_20])))));
                                arr_65 [i_17] [i_17] [i_17] [i_17] [i_17] [i_19] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_11)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))))));
                                var_42 = ((/* implicit */long long int) (short)14442);
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
                        {
                            {
                                arr_71 [i_17] [i_19] [i_19] [i_19] [i_23] = ((/* implicit */signed char) ((_Bool) ((_Bool) max((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (arr_61 [i_17] [i_18 + 1] [(unsigned char)3] [i_22] [i_23])))));
                                var_43 = ((/* implicit */short) (+(((/* implicit */int) ((((((/* implicit */_Bool) arr_56 [i_17])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_60 [i_17] [i_17] [i_19] [i_22] [i_17]))) : (2688912444076798262ULL))) <= (((/* implicit */unsigned long long int) var_14)))))));
                                arr_72 [i_17] [i_17] [i_19] [i_19] [i_23] [i_18] |= ((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) var_10)), (arr_66 [i_17] [i_17] [i_19 - 1] [i_17]))), (((/* implicit */unsigned long long int) ((arr_49 [i_17]) ^ (arr_49 [i_23]))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_24 = 0; i_24 < 23; i_24 += 2) 
    {
        arr_75 [i_24] = ((/* implicit */unsigned char) arr_73 [i_24] [i_24]);
        arr_76 [i_24] = var_13;
    }
    for (unsigned long long int i_25 = 0; i_25 < 15; i_25 += 3) 
    {
        arr_80 [i_25] = ((/* implicit */_Bool) ((((((/* implicit */int) var_7)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_66 [(short)0] [i_25] [i_25] [(_Bool)0]))))))) ^ ((((-(((/* implicit */int) (short)-31301)))) & (((/* implicit */int) var_5))))));
        var_44 = ((/* implicit */unsigned char) ((signed char) ((((/* implicit */long long int) (-(((/* implicit */int) var_0))))) == (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)231))) / (var_12))))));
    }
    var_45 *= ((/* implicit */_Bool) ((var_13) ? ((-(((var_10) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4)))))) : (((((/* implicit */_Bool) ((((/* implicit */int) var_13)) / (((/* implicit */int) (unsigned char)124))))) ? (((((/* implicit */int) var_1)) * (((/* implicit */int) (short)-19530)))) : (((int) var_12))))));
    var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_8), (((/* implicit */unsigned long long int) var_5))))) ? (((unsigned long long int) (+(((/* implicit */int) var_7))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((var_11) == (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))))));
}
