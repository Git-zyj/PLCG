/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210278
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210278 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210278
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 3) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) (-(arr_0 [i_0])))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) ((unsigned char) -1340817492965690765LL)))))), ((~(max((0LL), (-4LL)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                {
                    arr_8 [i_0] &= ((/* implicit */_Bool) 1825978611U);
                    arr_9 [i_2] [i_0] [6ULL] [i_0] = (~(((/* implicit */int) (signed char)75)));
                }
            } 
        } 
        arr_10 [i_0] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)-17))))));
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 9; i_4 += 3) 
            {
                {
                    arr_16 [i_0] [i_0] [i_4] [i_4 - 2] = ((/* implicit */short) var_3);
                    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 4091328522U)), (((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_0 [i_3])) : (12544613402118555151ULL)))))) ? (((unsigned int) (_Bool)1)) : (arr_7 [i_0 - 2] [2LL])));
                    var_17 += ((/* implicit */long long int) ((((unsigned long long int) (+(-1935430749)))) <= (max((((/* implicit */unsigned long long int) 2147483647)), (min((((/* implicit */unsigned long long int) arr_4 [i_0] [i_0])), (var_10)))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 2; i_5 < 10; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            arr_22 [i_0] [i_0] [i_3] [i_0] [i_4 + 2] [i_5 - 1] [i_6] = ((/* implicit */long long int) var_13);
                            var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) ((((/* implicit */unsigned int) (+(((/* implicit */int) arr_21 [i_0 - 1]))))) / (((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0 + 1]))) ^ (var_7))))))));
                            var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-65))))) ? (((/* implicit */unsigned long long int) -571475159)) : (var_13)));
                            arr_23 [(short)9] [i_5] [i_0] = ((/* implicit */unsigned long long int) max((max((((((/* implicit */_Bool) (short)19708)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-1340817492965690765LL))), (((/* implicit */long long int) arr_15 [i_0 - 2] [i_4 - 2] [i_5 + 1])))), (((/* implicit */long long int) var_12))));
                        }
                        var_20 = ((/* implicit */long long int) ((unsigned char) (_Bool)0));
                        /* LoopSeq 1 */
                        for (signed char i_7 = 4; i_7 < 8; i_7 += 1) 
                        {
                            var_21 &= arr_25 [i_0] [i_3] [i_4] [i_5] [i_4] [i_4];
                            var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) (signed char)-22))));
                            arr_27 [i_4 + 1] [i_4 + 1] [i_4 + 1] [i_4 - 2] [i_4 - 2] [i_3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) (_Bool)1)), (arr_17 [i_7] [i_3] [i_4 - 1] [i_4] [i_0 + 1])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1] [i_3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_9))))) ? (min((((/* implicit */long long int) (_Bool)1)), (arr_13 [i_4] [i_7 - 1]))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) arr_24 [(_Bool)1] [i_7] [i_7 + 3])), (arr_3 [i_3] [i_4 - 2] [i_7]))))))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0 - 2] [i_5 + 1] [i_7 + 2]), (arr_3 [i_0 - 2] [i_5 + 1] [i_7 - 4])))))));
                            var_23 -= ((/* implicit */short) (((+(((/* implicit */int) var_1)))) | (((/* implicit */int) (short)19710))));
                            var_24 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned int) var_15)), (arr_15 [i_0] [i_0] [i_0])))) ? (((arr_14 [i_0]) & (((/* implicit */unsigned long long int) 435585871)))) : (((/* implicit */unsigned long long int) arr_17 [i_3] [i_4] [i_3] [i_3] [i_5 - 1])))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 4109197760U))))))));
                        }
                        var_25 -= ((/* implicit */_Bool) ((((/* implicit */long long int) (~(((/* implicit */int) (!((_Bool)1))))))) % (max((((((var_8) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)230)) - (230))))), (((/* implicit */long long int) (short)19708))))));
                    }
                    for (signed char i_8 = 2; i_8 < 10; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) arr_30 [i_0] [i_0] [i_0] [i_0]);
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 11; i_9 += 3) 
                        {
                            var_27 *= ((/* implicit */unsigned int) var_5);
                            var_28 += (_Bool)0;
                            var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) ? ((-(((/* implicit */int) (!((_Bool)1)))))) : (((/* implicit */int) arr_18 [5U] [5U] [i_4] [i_8] [i_9]))));
                        }
                    }
                    /* LoopSeq 1 */
                    for (long long int i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 1) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((arr_3 [i_4 + 1] [i_0 - 2] [i_0]), (((/* implicit */unsigned char) (_Bool)1)))))));
                            arr_39 [i_11] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) 1318501186890918971LL)) >= (min((5902130671590996465ULL), (5902130671590996463ULL))))) ? (max((((/* implicit */unsigned int) (signed char)-75)), (arr_19 [i_0] [i_0 + 1] [i_0 - 2] [i_0 - 1] [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) (signed char)16))));
                            var_32 = ((/* implicit */int) ((((((/* implicit */_Bool) ((arr_14 [i_11]) >> (((((/* implicit */int) var_1)) - (193)))))) ? (((/* implicit */unsigned long long int) max((-9016502526546668982LL), (((/* implicit */long long int) var_7))))) : (((((/* implicit */unsigned long long int) 2251250057871360LL)) | (16250123025207132628ULL))))) | (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) var_12)) / (((/* implicit */int) var_4))))) / (arr_1 [i_0 - 2] [i_0 - 2]))))));
                            var_33 = ((/* implicit */long long int) min((var_33), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */long long int) ((arr_28 [(short)3] [(short)3] [(short)3] [i_11]) ? (arr_15 [i_3] [(unsigned char)8] [(unsigned char)8]) : (var_7)))) < (var_8)))))))));
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 11; i_12 += 1) 
                        {
                            arr_43 [i_0] [i_12] [i_12] [i_10] [i_12] = ((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */long long int) -1)) : (-4LL)))));
                            arr_44 [i_12] [i_12] = ((/* implicit */signed char) ((((/* implicit */_Bool) -8883269875695112047LL)) ? ((-(((/* implicit */int) (unsigned char)84)))) : (((/* implicit */int) (unsigned char)124))));
                        }
                        arr_45 [(unsigned char)0] [(_Bool)1] [i_0 + 1] = ((/* implicit */int) min((var_10), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_33 [i_0 - 2])))))));
                        var_34 = ((/* implicit */int) var_13);
                        var_35 = ((((/* implicit */_Bool) ((signed char) (unsigned char)124))) ? (((((/* implicit */_Bool) var_2)) ? (max((arr_36 [i_0]), (2224170459U))) : (((/* implicit */unsigned int) max((((/* implicit */int) arr_12 [i_10])), (4194303)))))) : (((4074259742U) & (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)124))))));
                        var_36 = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)11))));
                    }
                }
            } 
        } 
    }
    for (unsigned long long int i_13 = 0; i_13 < 10; i_13 += 3) 
    {
        var_37 += ((/* implicit */short) max((((((/* implicit */int) arr_3 [i_13] [i_13] [i_13])) | (((/* implicit */int) arr_3 [i_13] [i_13] [i_13])))), (((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_13] [i_13] [0LL])) || (((/* implicit */_Bool) 11LL)))))));
        arr_50 [i_13] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_13 [i_13] [i_13])) && (((/* implicit */_Bool) arr_13 [i_13] [i_13])))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(signed char)7] [i_13] [i_13])) ? (arr_13 [i_13] [i_13]) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_13] [i_13] [i_13]))))))));
        var_38 = ((/* implicit */unsigned char) (short)4684);
    }
    /* LoopNest 2 */
    for (long long int i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        for (int i_15 = 1; i_15 < 23; i_15 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 3) 
                {
                    arr_58 [i_14] [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) max((((/* implicit */int) (unsigned char)63)), (((((/* implicit */int) arr_53 [i_14] [i_14] [i_14])) + (((/* implicit */int) ((((/* implicit */int) var_0)) >= (4194303))))))));
                    /* LoopSeq 1 */
                    for (signed char i_17 = 3; i_17 < 21; i_17 += 1) 
                    {
                        var_39 = ((/* implicit */_Bool) min((((arr_60 [i_16] [i_15 + 1] [i_17 - 2]) >> (((var_13) - (1986819409955844307ULL))))), (((/* implicit */unsigned int) (~(((/* implicit */int) arr_53 [i_14] [(unsigned char)18] [i_17])))))));
                        arr_62 [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 19ULL)) ? (((/* implicit */int) (unsigned char)63)) : (((/* implicit */int) (_Bool)1))))), (min((arr_54 [3] [10] [i_17]), (((/* implicit */unsigned int) arr_52 [(_Bool)1]))))))) != (((((var_13) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [i_16] [i_17]))))) ? ((~(var_10))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_57 [i_17] [i_15])))))))));
                    }
                }
                var_40 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_59 [i_15 + 1] [i_15 - 1] [i_15] [i_15 - 1] [i_15] [i_15 + 1])) * (((/* implicit */int) (unsigned char)111)))) << ((((~(126100789566373888ULL))) - (18320643284143177708ULL)))));
                arr_63 [i_14] = ((/* implicit */long long int) ((14548758) != (((/* implicit */int) (unsigned char)29))));
                var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((((/* implicit */int) arr_57 [i_14] [i_15])) << (((/* implicit */int) arr_57 [i_14] [i_15 - 1]))))) : (((((/* implicit */long long int) ((int) (_Bool)1))) + (arr_51 [i_14])))));
                /* LoopNest 3 */
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    for (signed char i_19 = 1; i_19 < 21; i_19 += 1) 
                    {
                        for (signed char i_20 = 3; i_20 < 23; i_20 += 2) 
                        {
                            {
                                var_42 = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) -1)), (max((((/* implicit */unsigned long long int) ((((-1) + (2147483647))) >> (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) arr_52 [i_15 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_14]))) : (7590289322938976812ULL)))))));
                                var_43 = ((/* implicit */unsigned int) max((((unsigned long long int) arr_67 [(_Bool)1] [i_15 - 1] [i_19 + 2] [i_19 + 1])), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_67 [i_14] [i_15 + 1] [i_18] [i_20])))) >= ((+(((/* implicit */int) (signed char)-44)))))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
}
