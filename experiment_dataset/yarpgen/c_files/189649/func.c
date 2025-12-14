/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189649
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189649 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189649
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
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_12 = ((/* implicit */long long int) max((var_12), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_1))) : (max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) | (var_2))), (((/* implicit */unsigned long long int) min(((short)19899), (((/* implicit */short) (_Bool)1))))))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 4; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 20; i_2 += 2) 
            {
                {
                    var_13 |= ((/* implicit */_Bool) var_7);
                    /* LoopNest 2 */
                    for (signed char i_3 = 3; i_3 < 19; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (signed char)64)))) ? (((/* implicit */int) (signed char)58)) : (((/* implicit */int) (_Bool)1))))), (((unsigned long long int) (short)19882))));
                                arr_11 [i_0] [i_2] [i_2] [i_3 + 1] [i_2] [i_3] [i_1] = ((/* implicit */short) (_Bool)1);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_0 [i_0] [i_0]))))) ? (((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned char)238)))) : (((arr_0 [i_0] [i_0]) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))))))));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_16 ^= ((/* implicit */_Bool) max((((arr_5 [i_0] [i_5 + 1]) ? (((/* implicit */int) arr_5 [i_5] [i_0])) : (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))), ((+(((/* implicit */int) arr_5 [i_5 + 1] [i_0]))))));
            var_17 |= ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (16640138628279702574ULL)));
            arr_14 [i_5] [i_5] [i_5] = (((-(max((((/* implicit */unsigned long long int) var_10)), (var_1))))) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((unsigned long long int) (_Bool)1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [(short)16] [i_0] [(short)16]))))));
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_18 [0ULL] [i_5] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) max((arr_1 [i_0]), (((/* implicit */signed char) var_8)))))));
                /* LoopSeq 2 */
                for (signed char i_7 = 1; i_7 < 19; i_7 += 4) 
                {
                    arr_23 [i_0] [i_5] [i_6] [i_7 + 1] [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [(_Bool)1] [i_5] [4ULL] [i_7] [i_5 + 1] [(_Bool)1] [i_7]))) : (var_2))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)43)))));
                    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */signed char) arr_4 [i_7 - 1] [i_5 + 1])), (var_11))))));
                    arr_24 [i_6] |= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_8)) < (((/* implicit */int) var_3)))) ? (((/* implicit */int) ((signed char) ((arr_4 [i_0] [i_7]) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_6]))))))) : (((/* implicit */int) var_11))));
                    /* LoopSeq 1 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        var_19 += ((/* implicit */_Bool) max((((/* implicit */int) var_6)), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_4 [i_0] [i_5 + 1])) : (((/* implicit */int) arr_9 [(unsigned char)9] [i_5 + 1] [i_7 - 1] [i_7 + 1] [i_7] [(short)18] [i_7 - 1]))))));
                        var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) var_3))));
                        arr_27 [i_6] [i_6] [i_6] [(_Bool)1] [i_8] |= ((unsigned char) ((unsigned char) (signed char)112));
                        var_21 += arr_10 [i_0] [i_0] [i_0] [i_0] [i_0];
                    }
                    var_22 = ((/* implicit */_Bool) min((var_22), (arr_15 [i_6] [i_6])));
                }
                for (short i_9 = 0; i_9 < 20; i_9 += 1) 
                {
                    var_23 += ((/* implicit */signed char) ((((/* implicit */int) (!(arr_5 [i_5 + 1] [i_5 + 1])))) / (((/* implicit */int) (!(arr_5 [i_5 + 1] [i_5]))))));
                    arr_30 [i_0] [i_0] [i_0] [i_5] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_7)) == (((/* implicit */int) (signed char)50)))) ? (((/* implicit */int) min(((unsigned char)83), ((unsigned char)57)))) : (((/* implicit */int) var_10))))) ? (((/* implicit */int) max((((/* implicit */unsigned char) arr_2 [i_0])), (arr_29 [i_0] [i_5 + 1])))) : (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)6))))) && (((/* implicit */_Bool) min(((signed char)58), (((/* implicit */signed char) var_8))))))))));
                }
                var_24 &= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) var_6)), (((((((/* implicit */int) arr_9 [i_0] [i_5] [i_6] [i_6] [i_0] [i_6] [i_6])) == (((/* implicit */int) (signed char)-15)))) ? (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3))))) : (var_1)))));
            }
            for (signed char i_10 = 2; i_10 < 16; i_10 += 4) 
            {
                arr_34 [i_5] [i_5] [i_5] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_0)) >= (((/* implicit */int) arr_13 [i_10 - 2] [i_5] [i_10])))) ? ((~(((/* implicit */int) arr_13 [i_10 - 2] [i_5] [i_10])))) : (((/* implicit */int) arr_13 [i_10 - 2] [i_5] [i_10]))));
                /* LoopNest 2 */
                for (long long int i_11 = 1; i_11 < 16; i_11 += 4) 
                {
                    for (short i_12 = 1; i_12 < 16; i_12 += 2) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) min((((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_10] [i_11 + 4] [i_10])) < (((/* implicit */int) ((signed char) var_6)))))), (min((((unsigned char) (signed char)34)), (((/* implicit */unsigned char) arr_9 [i_0] [i_5] [i_10] [i_11] [i_11] [i_12] [i_0])))))))));
                            arr_39 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */long long int) var_1);
                            var_26 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((min((((/* implicit */long long int) var_9)), (arr_31 [i_0]))), (((/* implicit */long long int) ((_Bool) arr_28 [i_0] [i_0] [i_5 + 1] [8ULL] [i_11] [i_12])))))) ? (((var_8) ? (((/* implicit */int) arr_37 [i_10])) : (((/* implicit */int) var_0)))) : (((/* implicit */int) ((((/* implicit */int) arr_28 [i_12] [i_0] [i_12 - 1] [i_11] [i_0] [i_11 + 1])) < (((/* implicit */int) arr_38 [i_5 + 1] [i_10 + 2] [i_10 - 2] [i_10] [i_11 + 3] [i_12 + 3] [i_12 + 4])))))));
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_12 + 3] [i_12] [i_11] [i_10] [i_10 + 2] [i_5] [i_0])) > (((/* implicit */int) arr_9 [i_0] [i_10 + 4] [i_10 - 1] [(_Bool)1] [i_12 + 4] [(_Bool)1] [i_5])))))) != (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) | (((((/* implicit */long long int) ((/* implicit */int) var_10))) % (645929542671339265LL))))))))));
                            var_28 += ((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-44)) + (2147483647))) << (((((((/* implicit */int) var_5)) + (21786))) - (10)))));
                        }
                    } 
                } 
                arr_40 [i_0] [i_5] [i_0] [i_0] = ((/* implicit */_Bool) ((var_1) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((long long int) var_7)) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_0] [i_5] [i_5] [i_5 + 1]))))))));
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                var_29 += ((/* implicit */unsigned char) (_Bool)1);
                /* LoopSeq 3 */
                for (unsigned long long int i_14 = 0; i_14 < 20; i_14 += 4) /* same iter space */
                {
                    var_30 = ((/* implicit */_Bool) 14091651524680576181ULL);
                    var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)37)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (4355092549028975435ULL))))));
                }
                for (unsigned long long int i_15 = 0; i_15 < 20; i_15 += 4) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_32 = ((/* implicit */unsigned char) min((var_32), (((/* implicit */unsigned char) ((short) (_Bool)0)))));
                        arr_50 [i_0] [i_0] [i_0] [i_0] [i_5] [i_0] = ((/* implicit */signed char) 2473090677850837233LL);
                    }
                    var_33 = ((/* implicit */_Bool) arr_19 [i_0] [i_5] [i_5] [i_13] [i_0] [i_15]);
                    arr_51 [i_13] [i_13] [i_5] = ((/* implicit */signed char) min((((/* implicit */int) var_4)), (max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_25 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */int) arr_7 [i_0] [i_0] [i_0] [i_0] [i_0]))))));
                    var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_28 [(signed char)4] [i_0] [i_13] [(_Bool)1] [i_13] [i_0])) : (((/* implicit */int) arr_28 [i_15] [i_15] [i_13] [i_5] [i_15] [i_0])))) ^ (((/* implicit */int) var_6)))))));
                    arr_52 [i_13] [i_13] [i_13] [i_5] [i_13] = ((/* implicit */long long int) var_4);
                }
                for (unsigned long long int i_17 = 0; i_17 < 20; i_17 += 4) /* same iter space */
                {
                    var_35 = ((/* implicit */signed char) min((var_35), (max((((signed char) var_10)), (arr_28 [i_0] [i_17] [i_0] [i_17] [i_17] [i_5 + 1])))));
                    var_36 = ((/* implicit */long long int) var_4);
                }
                var_37 = ((/* implicit */_Bool) ((short) max((((((/* implicit */_Bool) var_11)) ? (arr_31 [i_5]) : (((/* implicit */long long int) ((/* implicit */int) var_0))))), (((/* implicit */long long int) min((((/* implicit */short) (unsigned char)173)), (var_10)))))));
            }
        }
    }
    var_38 = ((/* implicit */long long int) (_Bool)0);
    var_39 = ((/* implicit */_Bool) var_1);
    /* LoopNest 2 */
    for (short i_18 = 0; i_18 < 23; i_18 += 4) 
    {
        for (signed char i_19 = 2; i_19 < 21; i_19 += 1) 
        {
            {
                var_40 = ((/* implicit */_Bool) min((var_40), (((/* implicit */_Bool) var_7))));
                /* LoopSeq 1 */
                for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 4) 
                {
                    /* LoopSeq 3 */
                    for (unsigned char i_21 = 0; i_21 < 23; i_21 += 1) /* same iter space */
                    {
                        arr_65 [i_21] [i_19] [i_20] [i_21] [i_21] [i_21] = ((/* implicit */short) (+(((/* implicit */int) (unsigned char)77))));
                        arr_66 [i_20] |= ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) ((_Bool) (short)19889))), ((+(((/* implicit */int) (signed char)34))))))) ? (((/* implicit */int) arr_59 [i_19] [i_19 + 1] [i_20] [i_21])) : (((/* implicit */int) var_8))));
                        var_41 &= ((/* implicit */long long int) var_3);
                    }
                    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 1) /* same iter space */
                    {
                        var_42 ^= ((/* implicit */unsigned char) ((((_Bool) var_4)) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (arr_57 [i_20] [i_18] [i_18]))), (arr_57 [i_18] [i_19 + 2] [i_20]))) : (((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) arr_55 [i_22])) != (((/* implicit */int) var_6))))), (((((/* implicit */int) var_0)) - (((/* implicit */int) var_0)))))))));
                        var_43 ^= ((/* implicit */_Bool) (signed char)-115);
                        var_44 += ((_Bool) (-(((/* implicit */int) arr_59 [i_20] [i_19 + 1] [19LL] [i_20]))));
                        var_45 += arr_64 [i_22] [i_20] [i_19] [i_19] [i_18];
                        arr_69 [i_22] [i_20] [i_20] [i_18] [i_19] [i_18] = ((/* implicit */_Bool) arr_63 [i_19 + 1] [i_19] [i_19] [i_19] [i_19]);
                    }
                    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 1) /* same iter space */
                    {
                        arr_72 [i_18] [i_18] = ((/* implicit */signed char) arr_64 [i_18] [i_19] [i_20] [i_20] [i_23]);
                        arr_73 [(_Bool)1] |= ((/* implicit */unsigned char) arr_68 [i_23] [i_23] [i_19] [i_19] [i_19] [i_18]);
                        var_46 = ((/* implicit */unsigned char) min((var_46), (((/* implicit */unsigned char) max((((((/* implicit */long long int) ((/* implicit */int) max(((signed char)109), (((/* implicit */signed char) arr_64 [i_18] [i_18] [i_18] [(_Bool)1] [i_18])))))) % (((((/* implicit */_Bool) (signed char)-35)) ? (-1744808543111975563LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)46))))))), (((/* implicit */long long int) arr_62 [i_20] [i_19 - 1])))))));
                        arr_74 [i_18] [i_19 + 1] |= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */int) arr_60 [i_18] [i_19] [i_20] [i_23])) - (((/* implicit */int) arr_60 [i_18] [(unsigned char)8] [i_20] [i_23])))));
                    }
                    arr_75 [i_18] [i_18] [i_18] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_59 [i_20] [i_20] [i_19 + 2] [(unsigned char)9])), (arr_58 [i_19] [i_19 - 2] [i_18])))) ? (((/* implicit */int) arr_59 [i_20] [i_20] [i_19 + 1] [i_19])) : (((/* implicit */int) var_11))));
                }
                arr_76 [i_18] [i_19] = ((/* implicit */signed char) min((((/* implicit */int) ((unsigned char) arr_64 [i_19] [i_19 + 1] [i_19] [i_19 - 2] [i_19]))), (((((/* implicit */int) (unsigned char)53)) - (((/* implicit */int) (unsigned char)63))))));
            }
        } 
    } 
}
