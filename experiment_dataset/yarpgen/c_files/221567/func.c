/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221567
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221567 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221567
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
    for (int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        for (int i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */signed char) var_13);
                var_16 &= ((/* implicit */unsigned char) ((max((((/* implicit */int) arr_5 [(unsigned char)7] [(unsigned char)7] [i_0])), (((arr_2 [14LL] [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (-213643324))))) > (((/* implicit */int) var_4))));
                var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) (signed char)43)) ? (152278690) : (((/* implicit */int) (signed char)-50))));
            }
        } 
    } 
    var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((2) | (((/* implicit */int) (short)-32763))))) ? (((/* implicit */int) ((short) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_12)))))) : ((~(max((((/* implicit */int) var_14)), (var_6)))))));
    /* LoopSeq 2 */
    for (short i_2 = 2; i_2 < 8; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [7LL] [i_2 - 1] [11]))));
        arr_10 [i_2] [(unsigned char)3] = (~(949970505));
        /* LoopSeq 1 */
        for (signed char i_3 = 0; i_3 < 10; i_3 += 3) 
        {
            var_20 = ((/* implicit */int) max((var_20), ((-(((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [9LL] [i_3])) ? (((/* implicit */int) arr_1 [i_3])) : (((/* implicit */int) var_4)))) != (((((/* implicit */_Bool) (unsigned char)3)) ? (((/* implicit */int) arr_5 [i_3] [6LL] [(signed char)7])) : (((/* implicit */int) arr_2 [i_2 - 2] [i_2])))))))))));
            var_21 = ((/* implicit */_Bool) min((((/* implicit */int) max((max((var_5), (((/* implicit */short) (signed char)-58)))), (((/* implicit */short) ((unsigned char) var_10)))))), ((~(((/* implicit */int) arr_12 [i_2 + 1]))))));
        }
    }
    for (int i_4 = 1; i_4 < 20; i_4 += 3) 
    {
        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) (short)32755))) ? (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */short) var_1)), ((short)-1)))) && (((var_1) && (((/* implicit */_Bool) var_12))))))) : (((/* implicit */int) ((((/* implicit */_Bool) max((arr_15 [i_4] [i_4]), (((/* implicit */int) var_1))))) || (((/* implicit */_Bool) (signed char)61))))))))));
        /* LoopSeq 4 */
        for (unsigned int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 23; i_6 += 3) 
            {
                for (short i_7 = 0; i_7 < 23; i_7 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) 
                        {
                            arr_28 [i_8] [i_8] [i_6] [i_8] [i_4] = ((/* implicit */long long int) (+(((((max((((/* implicit */int) arr_26 [i_4] [i_4] [i_4] [(unsigned char)9] [i_4] [(_Bool)1] [(unsigned char)9])), (-949970508))) + (2147483647))) >> (((((((/* implicit */_Bool) (signed char)-62)) ? (((/* implicit */int) arr_17 [i_6] [i_7] [i_8])) : (((/* implicit */int) arr_18 [i_6] [i_4] [i_4])))) + (2228)))))));
                            var_23 = ((/* implicit */int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) var_14))) % (((/* implicit */int) ((((/* implicit */_Bool) var_14)) && (arr_2 [i_5] [11]))))))), (((((/* implicit */_Bool) ((arr_6 [i_4]) + (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (arr_19 [i_4 + 1] [i_4 + 3] [i_4 + 3]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (arr_20 [i_7] [(unsigned char)0] [(signed char)10] [i_4 + 2]))))))));
                        }
                        for (short i_9 = 4; i_9 < 22; i_9 += 2) 
                        {
                            var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((/* implicit */_Bool) ((int) var_4))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) 2147483647))))))) : ((((!(((/* implicit */_Bool) arr_22 [i_5])))) ? (((/* implicit */int) ((var_9) < (((/* implicit */int) arr_0 [i_4 - 1]))))) : (((/* implicit */int) arr_1 [i_4 - 1])))))))));
                            var_25 = ((/* implicit */signed char) ((((unsigned int) (!(((/* implicit */_Bool) arr_16 [i_4 + 1]))))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1)))))))))));
                        }
                        var_26 ^= ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */int) (signed char)-77)) * (((/* implicit */int) (short)6442))))) ? (((((/* implicit */int) (unsigned char)0)) / (((/* implicit */int) arr_16 [i_4])))) : (((((/* implicit */int) (signed char)77)) + ((-2147483647 - 1))))))));
                        arr_32 [i_7] [(unsigned char)17] [i_5] [i_4] [i_4 + 1] [i_4] = ((/* implicit */_Bool) max((((((min((((/* implicit */int) (_Bool)0)), (var_9))) + (2147483647))) << (((((((((/* implicit */_Bool) 3229962806130484512LL)) ? (((/* implicit */int) arr_17 [i_7] [20U] [i_6])) : (((/* implicit */int) (_Bool)1)))) + (2232))) - (18))))), (((/* implicit */int) (short)747))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (long long int i_10 = 0; i_10 < 23; i_10 += 4) 
            {
                for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
                {
                    {
                        var_27 = ((/* implicit */int) ((short) ((((/* implicit */int) arr_30 [14U] [i_11] [i_11] [i_4 + 3] [i_4 + 1] [i_4])) < (((/* implicit */int) ((((/* implicit */_Bool) arr_31 [(_Bool)1] [6LL] [(_Bool)1] [(short)13] [i_10] [(unsigned char)12] [i_11])) && (((/* implicit */_Bool) var_9))))))));
                        var_28 ^= ((/* implicit */unsigned char) (+(((/* implicit */int) (short)-6443))));
                        var_29 -= ((/* implicit */unsigned char) ((short) (-(((/* implicit */int) arr_17 [i_4 + 2] [i_4 + 2] [i_4 + 2])))));
                    }
                } 
            } 
            var_30 = ((/* implicit */short) ((var_6) + ((-(((int) arr_26 [i_4] [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_5] [i_4 - 1] [i_5]))))));
            arr_38 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_30 [i_4 - 1] [(_Bool)1] [i_4 - 1] [0] [i_4 + 3] [6LL])) : (((/* implicit */int) arr_4 [i_5] [(signed char)9]))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)148))) - (max((288230376151711743LL), (arr_25 [i_4 + 2] [i_5] [i_5]))))) : (((/* implicit */long long int) ((((((/* implicit */int) min((arr_36 [i_4] [(_Bool)1] [(short)0] [i_5]), (((/* implicit */short) (unsigned char)255))))) + (2147483647))) >> (((arr_19 [i_5] [i_4 + 1] [i_4 - 1]) - (4142677668U))))))));
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 23; i_12 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_13 = 2; i_13 < 21; i_13 += 1) 
            {
                arr_44 [i_4] [i_12] = ((/* implicit */signed char) ((((/* implicit */int) arr_18 [i_4 - 1] [20LL] [i_13 + 2])) >= (var_9)));
                var_31 += ((/* implicit */signed char) ((((-2798563702298581708LL) + (9223372036854775807LL))) >> (((2147483647) - (2147483590)))));
            }
            var_32 += ((/* implicit */signed char) arr_31 [i_12] [i_12] [i_4] [i_4] [i_12] [i_4] [15U]);
            /* LoopNest 2 */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                for (int i_15 = 0; i_15 < 23; i_15 += 4) 
                {
                    {
                        var_33 = ((/* implicit */unsigned int) max((var_33), (((unsigned int) 2))));
                        var_34 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_4 + 3])) ? (((/* implicit */int) arr_16 [i_4 - 1])) : (((/* implicit */int) arr_16 [i_4 + 3]))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (long long int i_16 = 0; i_16 < 23; i_16 += 1) 
        {
            var_35 = ((/* implicit */unsigned int) ((((/* implicit */long long int) arr_29 [(signed char)14] [i_4 + 3])) / ((-9223372036854775807LL - 1LL))));
            arr_52 [i_4] [1] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_42 [i_4] [i_4] [i_16] [i_4]))))));
        }
        for (int i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            /* LoopSeq 1 */
            for (int i_18 = 0; i_18 < 23; i_18 += 2) 
            {
                var_36 = ((/* implicit */long long int) min((var_9), (((/* implicit */int) arr_51 [i_18] [i_4]))));
                var_37 = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-60))));
            }
            var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_4] [i_17] [i_17])) ? (((((min((((/* implicit */int) var_8)), (-2147483635))) + (2147483647))) << (8))) : (((((/* implicit */_Bool) (signed char)76)) ? (((/* implicit */int) arr_16 [i_4 + 3])) : (((/* implicit */int) arr_16 [i_4 + 2]))))));
            arr_58 [i_17] [i_4] = ((/* implicit */_Bool) (-((-(((((/* implicit */_Bool) var_11)) ? (2147483636) : (((/* implicit */int) (unsigned char)63))))))));
        }
        /* LoopSeq 1 */
        for (long long int i_19 = 0; i_19 < 23; i_19 += 4) 
        {
            var_39 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_46 [i_19] [i_4] [i_4]))) / (arr_47 [(_Bool)1] [i_4] [i_19] [i_19] [i_19])))) ? (((/* implicit */long long int) ((((/* implicit */int) arr_56 [(short)15] [i_19] [i_19])) + (((/* implicit */int) var_12))))) : (((((/* implicit */_Bool) arr_5 [i_4 + 1] [i_4 + 3] [i_4 + 1])) ? (-2176995974071614596LL) : (((/* implicit */long long int) arr_27 [i_4 + 2] [i_4] [i_4 + 1] [(unsigned char)3] [i_4 + 1] [i_4]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (min(((-(arr_31 [i_19] [i_19] [(signed char)0] [15] [(signed char)0] [i_19] [i_19]))), (((/* implicit */long long int) (+(2))))))));
            var_40 = ((/* implicit */int) arr_19 [i_19] [(unsigned char)8] [i_4]);
            var_41 = ((/* implicit */signed char) max((((/* implicit */long long int) ((arr_59 [i_4] [i_4]) ? (((/* implicit */int) arr_59 [i_4 - 1] [i_4 + 1])) : (((/* implicit */int) arr_59 [i_19] [i_4 - 1]))))), (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4] [i_19] [i_4 + 1])) && ((_Bool)0)))), (arr_48 [(unsigned char)1])))));
        }
    }
}
