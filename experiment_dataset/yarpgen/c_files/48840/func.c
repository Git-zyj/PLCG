/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48840
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
    var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_6), (var_6)))), ((~(18446744073709551612ULL)))))) ? (((/* implicit */int) ((_Bool) ((((/* implicit */unsigned long long int) var_4)) >= (var_10))))) : (var_11)));
    var_13 = ((/* implicit */int) max((((/* implicit */long long int) var_7)), (var_6)));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        var_14 ^= ((/* implicit */int) ((((/* implicit */_Bool) ((((var_3) ? (arr_1 [i_0] [(short)6]) : (arr_1 [i_0 + 2] [4]))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [(signed char)8] [(signed char)8])) ? (((/* implicit */int) (unsigned char)12)) : (((/* implicit */int) var_7)))))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 3] [4])) ? (arr_1 [i_0 + 2] [(signed char)6]) : (arr_1 [i_0 + 3] [(short)2]))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 1; i_1 < 13; i_1 += 1) /* same iter space */
        {
            var_15 *= ((/* implicit */signed char) ((_Bool) 17483825541986404337ULL));
            var_16 = ((/* implicit */long long int) min((var_16), (((/* implicit */long long int) min((((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [6ULL] [i_1 + 1])) || (((/* implicit */_Bool) var_0))))), (arr_2 [i_1 + 1]))))));
            var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_11)), (arr_1 [(signed char)4] [(signed char)4]))))))))));
        }
        for (signed char i_2 = 1; i_2 < 13; i_2 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (short i_3 = 2; i_3 < 11; i_3 += 3) 
            {
                for (int i_4 = 2; i_4 < 12; i_4 += 2) 
                {
                    {
                        arr_15 [i_4] [i_0] [i_0] [i_0 + 3] = ((/* implicit */unsigned short) arr_12 [i_0] [i_2 + 1] [i_3 + 3] [i_4]);
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 962918531723147274ULL)) ? (((((/* implicit */_Bool) (short)-2408)) ? (arr_11 [12ULL] [i_2 + 1] [i_2 + 1] [i_4 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)384))))) : (((/* implicit */unsigned long long int) min(((-(((/* implicit */int) var_2)))), (((/* implicit */int) arr_9 [i_4 - 1] [i_0] [i_4])))))));
                        var_19 = ((((/* implicit */_Bool) var_7)) ? (min((((((/* implicit */_Bool) var_11)) ? (var_10) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 962918531723147279ULL)) ? (((/* implicit */unsigned int) arr_0 [i_0] [i_0])) : (arr_5 [i_3] [i_0])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2 - 1] [i_3] [i_0])) ? (((/* implicit */int) arr_6 [i_2 + 1] [i_2] [i_0])) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 14; i_7 += 4) 
                        {
                            arr_27 [i_0] [i_2] [i_2] [i_7] = ((/* implicit */unsigned long long int) ((arr_0 [i_0] [i_2 - 1]) / (arr_0 [i_0] [i_2 - 1])));
                            var_20 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_7] [i_0] [i_5]))))) | (((/* implicit */int) arr_6 [i_0] [i_5] [i_0]))));
                            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_21 [i_7] [i_7] [i_7] [i_0 + 3])) ? (var_10) : (((/* implicit */unsigned long long int) arr_0 [i_7] [i_6])))))));
                        }
                        /* vectorizable */
                        for (unsigned short i_8 = 4; i_8 < 13; i_8 += 3) 
                        {
                            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0 - 2] [i_0 - 1] [i_0 + 2])) ? (((/* implicit */int) arr_4 [i_0 - 2] [i_0 - 2] [i_0 - 1])) : (((/* implicit */int) arr_4 [i_0 + 1] [i_0 + 1] [i_0 - 1]))));
                            arr_32 [i_0] [i_2 - 1] [i_6] [13ULL] [i_8 + 1] = ((/* implicit */unsigned long long int) ((int) var_9));
                        }
                        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (-((+(((arr_14 [i_0] [10ULL] [i_5] [i_6] [i_5]) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-125))) : (var_4))))))))));
                        var_24 *= ((/* implicit */_Bool) arr_5 [i_0 + 2] [i_5]);
                        var_25 = ((/* implicit */_Bool) var_0);
                        arr_33 [i_0 + 3] [i_0] [i_5] [i_0 + 3] = ((/* implicit */unsigned int) ((((/* implicit */long long int) (+((-(arr_16 [i_0] [i_2 - 1] [i_0])))))) >= (((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) var_4)) : (arr_12 [i_2 + 1] [9] [(_Bool)1] [i_0 + 2])))));
                    }
                } 
            } 
            arr_34 [i_0 - 1] [i_0] = ((/* implicit */unsigned long long int) var_7);
            /* LoopNest 3 */
            for (signed char i_9 = 3; i_9 < 13; i_9 += 3) 
            {
                for (long long int i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 3) 
                    {
                        {
                            var_26 = (~(((((/* implicit */int) var_5)) ^ (var_0))));
                            var_27 = ((/* implicit */long long int) (~(((/* implicit */int) min((arr_19 [i_0 - 1] [i_9 - 3] [i_0] [i_10]), (arr_19 [i_0 - 1] [i_9 - 1] [i_0] [i_10]))))));
                            var_28 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */long long int) var_1)), (var_6))) : (((/* implicit */long long int) arr_23 [i_0] [i_2 + 1] [i_9 - 3] [i_11]))))));
                        }
                    } 
                } 
            } 
        }
        for (signed char i_12 = 1; i_12 < 13; i_12 += 1) /* same iter space */
        {
            var_29 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_19 [i_0 + 3] [i_0 + 2] [i_0] [i_12])) : (((/* implicit */int) arr_19 [i_0 + 3] [i_0] [i_0] [i_0 + 2])))));
            /* LoopSeq 2 */
            for (int i_13 = 1; i_13 < 12; i_13 += 2) 
            {
                var_30 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 962918531723147288ULL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((arr_30 [i_0 - 1] [12] [i_0 + 3] [(signed char)10] [4ULL] [i_13 + 1]), (((/* implicit */unsigned long long int) arr_0 [6] [10])))))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0 - 1])) != (((/* implicit */int) arr_2 [i_0 + 3])))))));
                /* LoopNest 2 */
                for (unsigned char i_14 = 1; i_14 < 11; i_14 += 3) 
                {
                    for (long long int i_15 = 0; i_15 < 14; i_15 += 2) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned int) ((((arr_14 [i_0] [i_12 + 1] [i_13 + 1] [i_14] [i_15]) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) * (17483825541986404343ULL))) : (arr_41 [i_0 - 2] [i_0 - 2]))) < (962918531723147279ULL)));
                            var_32 = ((/* implicit */signed char) (-(arr_3 [i_0] [i_0 + 3] [i_0 + 1])));
                        }
                    } 
                } 
            }
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                arr_58 [i_0] [i_12] [i_0] = ((/* implicit */int) arr_41 [i_0 + 3] [i_0]);
                var_33 = ((/* implicit */unsigned long long int) max((var_33), (((((/* implicit */_Bool) max((arr_36 [i_0 - 2]), (arr_36 [i_0 - 1])))) ? (min((((/* implicit */unsigned long long int) var_3)), (arr_36 [i_0 - 2]))) : (((((/* implicit */_Bool) arr_36 [i_0 + 1])) ? (arr_36 [i_0 - 1]) : (((/* implicit */unsigned long long int) var_6))))))));
            }
            var_34 = ((/* implicit */long long int) max((var_34), (((/* implicit */long long int) ((short) ((unsigned short) var_0))))));
            arr_59 [i_0] [i_12] = ((/* implicit */int) arr_48 [i_0 - 1] [i_12 + 1] [i_12 - 1]);
            var_35 = ((/* implicit */unsigned long long int) min((var_35), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_12 + 1] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_48 [i_0 + 2] [i_0 + 2] [i_0 + 2]))) : (var_10)))) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_20 [i_12] [i_12 + 1] [2] [2] [i_12 - 1]))))) ? (((long long int) arr_30 [i_12 - 1] [(unsigned char)12] [(unsigned char)12] [(unsigned char)12] [i_0] [i_0])) : (((/* implicit */long long int) (-((-(((/* implicit */int) var_7))))))))))));
        }
    }
}
