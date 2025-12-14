/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209012
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            var_15 = ((/* implicit */long long int) 1823601358U);
            var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_1])))));
            var_17 = ((/* implicit */short) 778748283);
        }
        var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */long long int) arr_4 [i_0])) : (arr_2 [4LL])))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [15ULL])) || (((/* implicit */_Bool) var_13)))))) : (arr_3 [i_0] [i_0]))))));
        arr_6 [i_0] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)50))) != (var_14))))) ^ (((long long int) var_6))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 1) 
    {
        var_19 += ((/* implicit */unsigned int) ((((((/* implicit */long long int) ((/* implicit */int) (short)-10412))) != (arr_7 [i_2]))) ? (arr_7 [i_2]) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)37)) != (((/* implicit */int) (unsigned short)59579))))))));
        arr_9 [i_2] = ((/* implicit */unsigned char) 9197355685085612511LL);
    }
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_20 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)31)), ((short)15746)))) ? (arr_10 [i_3]) : (((/* implicit */int) (unsigned char)10))));
        var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)-18540)), (1823601376U)));
        var_22 *= ((/* implicit */unsigned long long int) (short)4032);
    }
    /* vectorizable */
    for (unsigned long long int i_4 = 2; i_4 < 10; i_4 += 2) 
    {
        /* LoopSeq 3 */
        for (short i_5 = 0; i_5 < 13; i_5 += 1) 
        {
            var_23 = ((/* implicit */short) ((long long int) (+(((/* implicit */int) var_13)))));
            arr_17 [i_4] [i_4] [i_5] = ((/* implicit */unsigned char) ((arr_5 [i_4 - 2]) >= (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100)))));
            var_24 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_4 + 1])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5]))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) 2471365928U)))))));
            var_25 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_1 [i_4 + 3]))));
        }
        for (int i_6 = 1; i_6 < 10; i_6 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_7 = 0; i_7 < 13; i_7 += 4) 
            {
                for (int i_8 = 1; i_8 < 11; i_8 += 3) 
                {
                    {
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) ((unsigned char) arr_14 [i_7])))));
                        /* LoopSeq 1 */
                        for (short i_9 = 0; i_9 < 13; i_9 += 4) 
                        {
                            arr_30 [i_4] [i_4] [i_4] [i_4] [i_9] = ((arr_13 [i_4 + 3] [i_4 + 3]) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)8))));
                            var_27 = ((/* implicit */unsigned long long int) max((var_27), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_11)))))));
                            arr_31 [i_8] [i_8] [i_4] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) arr_24 [i_7] [i_7] [i_9]))));
                            var_28 &= ((/* implicit */unsigned char) ((arr_8 [i_8 + 1]) != (((/* implicit */unsigned long long int) arr_15 [i_8 - 1] [i_4 - 2] [i_6 - 1]))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            var_29 += ((/* implicit */short) ((((int) (unsigned char)37)) * (((/* implicit */int) arr_25 [i_4 + 3]))));
                            var_30 *= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_25 [(unsigned char)4]))));
                            var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_35 [(_Bool)1] [(_Bool)1] [i_7] [i_4])) ? (var_5) : (((/* implicit */int) arr_0 [i_4])))) / (((/* implicit */int) ((unsigned short) var_9)))));
                        }
                    }
                } 
            } 
            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_2)) ^ (var_5)))) & (((((/* implicit */_Bool) (unsigned short)7680)) ? (10739311300057769762ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)13824))))))))));
            var_33 = ((unsigned char) var_4);
        }
        for (int i_11 = 0; i_11 < 13; i_11 += 1) 
        {
            /* LoopSeq 1 */
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) ((var_0) != (arr_2 [i_12]))))));
                /* LoopSeq 3 */
                for (int i_13 = 0; i_13 < 13; i_13 += 3) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_14 = 0; i_14 < 13; i_14 += 1) 
                    {
                        var_35 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_4] [i_4 + 1] [i_4])) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_23 [(unsigned char)4])) || (((/* implicit */_Bool) arr_39 [i_4] [i_14] [i_12] [i_4]))))) : (((/* implicit */int) arr_12 [i_4 + 3]))));
                        var_36 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
                    }
                    var_37 = ((/* implicit */int) min((var_37), (((/* implicit */int) (signed char)-126))));
                    var_38 = ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [i_4 - 2] [i_4 - 2])) ? (14LL) : (((/* implicit */long long int) arr_5 [i_4 - 2]))));
                    var_39 = ((((/* implicit */int) ((unsigned char) arr_36 [i_4] [i_4] [i_12]))) & (((/* implicit */int) (short)3)));
                    /* LoopSeq 1 */
                    for (unsigned int i_15 = 4; i_15 < 12; i_15 += 2) 
                    {
                        var_40 = ((/* implicit */unsigned short) ((unsigned char) arr_21 [i_15 - 3]));
                        var_41 ^= ((/* implicit */short) arr_7 [i_13]);
                        var_42 *= var_2;
                    }
                }
                for (unsigned int i_16 = 0; i_16 < 13; i_16 += 3) 
                {
                    arr_50 [i_4] [i_11] [i_12] [6U] &= ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_43 [i_4 - 1] [i_4 - 2] [i_4 + 1] [i_4]))) / (arr_19 [i_4 - 2])));
                    arr_51 [i_4] [(unsigned char)12] [12U] [i_11] = ((/* implicit */long long int) 2471365967U);
                    var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_4 [i_16])))))));
                    arr_52 [i_4] [i_4] [i_11] = ((/* implicit */signed char) ((((/* implicit */int) arr_28 [i_4 - 1] [10U] [i_4 - 1] [i_16] [i_16])) >> (((((/* implicit */int) arr_0 [i_4 + 2])) - (31571)))));
                }
                for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                {
                    var_44 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)222)) > (((/* implicit */int) arr_32 [5LL] [i_11] [i_12] [i_12] [i_11] [i_17])))) && (((/* implicit */_Bool) 18014398475927552LL))));
                    var_45 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (short)32744)) || (((/* implicit */_Bool) 3283875368U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 2471365926U))))) : (((/* implicit */int) arr_18 [10] [10]))));
                    var_46 = ((/* implicit */signed char) ((unsigned int) 22U));
                    /* LoopSeq 2 */
                    for (unsigned short i_18 = 2; i_18 < 11; i_18 += 2) /* same iter space */
                    {
                        arr_59 [i_4] [8U] [(signed char)7] [i_4] [i_11] = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (unsigned char)67)) ? (((/* implicit */unsigned int) var_5)) : (arr_20 [i_12])))));
                        var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) 231606933U))));
                        var_48 = ((/* implicit */unsigned short) arr_26 [0LL] [i_18 - 2] [i_18 + 2] [i_18] [i_18 + 2] [i_18 + 2] [i_18 + 2]);
                    }
                    for (unsigned short i_19 = 2; i_19 < 11; i_19 += 2) /* same iter space */
                    {
                        var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) (unsigned char)48))));
                        var_50 = ((/* implicit */int) ((((((/* implicit */unsigned long long int) -443645065)) != (18ULL))) ? (arr_1 [i_19 - 2]) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)12344)))))));
                    }
                }
                var_51 += ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_28 [(unsigned char)8] [1LL] [i_4] [i_4] [i_4])) & (arr_38 [i_4 + 1])));
                var_52 &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) >= ((((_Bool)1) ? (((/* implicit */int) (unsigned char)113)) : (((/* implicit */int) (unsigned char)16))))));
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 13; i_20 += 1) 
                {
                    arr_64 [i_11] [i_11] [0U] [i_20] = ((/* implicit */int) var_7);
                    var_53 = ((/* implicit */unsigned int) min((var_53), (((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)7)))))));
                    var_54 = ((/* implicit */_Bool) ((((((/* implicit */int) arr_37 [i_4])) != (((/* implicit */int) (unsigned short)25910)))) ? (var_0) : (var_0)));
                }
            }
            var_55 = ((/* implicit */unsigned char) arr_14 [i_4]);
            /* LoopSeq 1 */
            for (unsigned char i_21 = 0; i_21 < 13; i_21 += 1) 
            {
                var_56 = ((/* implicit */short) (~(((/* implicit */int) arr_60 [i_4] [8U] [i_4] [i_11] [(short)8] [i_4] [i_4]))));
                var_57 = ((/* implicit */unsigned long long int) min((var_57), (((/* implicit */unsigned long long int) var_14))));
                var_58 = ((/* implicit */int) arr_19 [3LL]);
            }
        }
        var_59 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_27 [(unsigned short)6] [i_4 - 1] [(short)12] [i_4 - 1] [i_4] [i_4 - 1] [i_4])) - (((/* implicit */int) (short)30251))));
    }
    var_60 = ((/* implicit */unsigned int) max((var_60), (((/* implicit */unsigned int) var_6))));
    var_61 = ((/* implicit */_Bool) var_7);
}
