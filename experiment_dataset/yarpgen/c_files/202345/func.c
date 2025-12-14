/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202345
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202345 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202345
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            arr_4 [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)109)) ? (var_7) : (arr_3 [i_1])))) ? (max((((unsigned int) arr_0 [i_0] [i_0])), (((/* implicit */unsigned int) arr_2 [i_0] [i_1])))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-83)))));
            var_17 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_2 [i_0] [i_1])), (((var_9) << (((-1094517036636755437LL) + (1094517036636755495LL)))))))) ? ((~(((/* implicit */int) ((signed char) var_8))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0]))))) >> ((((+(((/* implicit */int) arr_2 [i_0] [i_1])))) - (81))))));
        }
        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) 1094517036636755427LL))) ? (min((arr_3 [i_0]), (arr_3 [i_0]))) : (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)43))) : (arr_3 [i_0])))));
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                for (unsigned char i_4 = 1; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)33)), (arr_7 [i_3])))) ? (max((var_0), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((var_14) & (((/* implicit */int) var_13)))))))) ? ((-(((((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_2] [i_3] [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_10 [i_0] [i_0] [i_0]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? ((-(var_0))) : (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)241)) / (((/* implicit */int) arr_5 [i_3] [i_3] [i_2]))))))))));
                        arr_15 [i_0] |= ((/* implicit */unsigned char) (-(((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) != (arr_3 [i_2]))), (arr_11 [i_0] [i_2] [i_3]))))));
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 1) 
        {
            for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
            {
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    {
                        var_20 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_3 [i_0])) ? (arr_1 [i_6] [i_5]) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_12 [i_0] [i_5] [i_6]))))));
                        var_21 = ((/* implicit */unsigned int) min((((arr_9 [i_5] [i_7] [i_7] [i_7]) ? (((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_6])) ? (arr_3 [i_7]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_5]))))) : (arr_22 [i_0] [i_5] [i_0] [i_0]))), (((/* implicit */unsigned long long int) arr_19 [i_5] [i_5] [i_7] [i_5]))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                        {
                            var_22 = ((/* implicit */unsigned int) ((int) ((long long int) ((((/* implicit */_Bool) 8918876622268074191LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)90))) : (3170984148U)))));
                            var_23 = ((/* implicit */int) ((((unsigned int) arr_11 [i_5] [i_7] [i_5])) + (((/* implicit */unsigned int) ((/* implicit */int) min((arr_20 [i_8] [i_8]), (((/* implicit */signed char) (_Bool)1))))))));
                            var_24 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_5] [i_0])) ? (((/* implicit */int) arr_5 [i_6] [i_6] [i_0])) : (((/* implicit */int) (short)-14374))))) ? (((/* implicit */int) ((_Bool) var_2))) : (((/* implicit */int) min((arr_5 [0LL] [i_6] [i_0]), (arr_5 [i_5] [i_6] [i_0]))))));
                        }
                        for (unsigned long long int i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                        {
                            var_25 = ((/* implicit */unsigned short) var_9);
                            arr_29 [i_5] [i_5] [(unsigned char)16] [i_7] = ((/* implicit */int) ((((/* implicit */_Bool) (-(var_15)))) ? (min((arr_3 [i_0]), (((/* implicit */unsigned long long int) arr_19 [(short)1] [11] [(short)1] [i_7])))) : (((unsigned long long int) arr_19 [i_0] [i_9] [i_6] [i_5]))));
                        }
                        arr_30 [i_0] [i_5] [i_5] [i_6] [i_5] [14ULL] = ((/* implicit */unsigned short) arr_20 [i_0] [i_5]);
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (signed char i_10 = 0; i_10 < 24; i_10 += 3) 
    {
        var_26 -= ((/* implicit */signed char) (-((-(var_8)))));
        var_27 = ((/* implicit */unsigned char) ((_Bool) arr_33 [i_10]));
        var_28 &= ((/* implicit */unsigned short) var_14);
        var_29 = ((/* implicit */signed char) ((arr_31 [i_10]) - (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_33 [(short)23])) == (((/* implicit */int) arr_33 [(short)6]))))))));
        /* LoopSeq 2 */
        for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 4) 
        {
            var_30 = ((/* implicit */short) ((int) (short)-14402));
            /* LoopSeq 1 */
            for (unsigned int i_12 = 2; i_12 < 23; i_12 += 3) 
            {
                arr_40 [i_10] [i_10] = ((/* implicit */unsigned char) (~((-(var_2)))));
                arr_41 [i_10] [i_11] [i_10] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_34 [(_Bool)1])) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) (short)-12758))))) ? (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1))))) : (arr_37 [i_11] [i_12 + 1] [i_12])));
                var_31 = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)62321)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (324300927938324051LL)));
            }
        }
        for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
        {
            var_32 |= arr_45 [i_10] [i_10];
            arr_46 [i_10] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) arr_36 [i_10] [i_13])) != (((((/* implicit */_Bool) var_13)) ? (var_9) : (var_9)))));
            arr_47 [i_10] [i_10] = ((/* implicit */_Bool) ((unsigned long long int) arr_39 [i_10] [i_13] [i_13] [i_13]));
            var_33 |= ((/* implicit */_Bool) (~(6329424441706071444ULL)));
            var_34 = ((/* implicit */int) ((arr_39 [i_10] [i_13] [i_13] [i_10]) << (((arr_37 [i_10] [i_13] [i_10]) - (2037721230582061646LL)))));
        }
    }
    for (unsigned int i_14 = 4; i_14 < 17; i_14 += 1) 
    {
        arr_51 [i_14] = ((/* implicit */short) (+(var_3)));
        var_35 = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (var_1) : (((/* implicit */int) arr_9 [(unsigned char)16] [i_14] [i_14] [i_14]))))) ^ ((-(var_6))))) ^ (((((/* implicit */_Bool) var_11)) ? (var_0) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_35 [i_14] [i_14])))))))));
    }
    var_36 *= ((/* implicit */signed char) 26U);
}
