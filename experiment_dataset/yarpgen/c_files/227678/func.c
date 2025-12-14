/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227678
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
    for (unsigned int i_0 = 3; i_0 < 9; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            {
                var_17 -= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((arr_3 [i_0]), (((/* implicit */short) min((((/* implicit */signed char) (_Bool)1)), ((signed char)1))))))), ((~(8144762014525584670ULL)))));
                var_18 -= ((/* implicit */_Bool) min((((/* implicit */unsigned short) max((arr_4 [i_0] [i_1]), (arr_0 [i_0])))), (((unsigned short) (-(var_14))))));
            }
        } 
    } 
    var_19 = ((/* implicit */short) (+(((((/* implicit */int) (signed char)14)) / (((/* implicit */int) var_8))))));
    var_20 = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))))), (var_5)))) ? (((/* implicit */long long int) ((var_10) * (((/* implicit */int) (!(((/* implicit */_Bool) var_12)))))))) : (((var_5) * (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
    /* LoopSeq 2 */
    for (unsigned int i_2 = 2; i_2 < 24; i_2 += 4) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [10U] [i_2])) ? (((((/* implicit */_Bool) arr_6 [i_2 - 2] [i_2 + 1])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_6 [i_2] [i_2]))))) : (max((var_13), (((/* implicit */long long int) arr_6 [9LL] [(unsigned short)6])))))) : (((/* implicit */long long int) min((min((((/* implicit */unsigned int) (signed char)-1)), (var_15))), (((/* implicit */unsigned int) arr_5 [i_2 - 2])))))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 1; i_3 < 22; i_3 += 2) 
        {
            for (int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                {
                    arr_11 [i_2] [i_3] [i_4] = ((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_8), (var_8))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2] [i_3]))) : (min(((-(var_4))), (((/* implicit */unsigned long long int) min((arr_10 [i_2] [i_3] [i_3] [i_3]), (((/* implicit */short) arr_6 [i_2] [i_3])))))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned long long int i_5 = 3; i_5 < 23; i_5 += 2) /* same iter space */
                    {
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_6 [i_2] [i_3]))));
                        /* LoopSeq 3 */
                        for (long long int i_6 = 1; i_6 < 24; i_6 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_4] [i_5]))));
                            arr_16 [i_6] [i_3] [i_6] [i_6] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_2] [i_3] [i_3 + 1] [i_5 - 1] [i_6 - 1] [i_6])) ? (((/* implicit */unsigned long long int) arr_15 [i_2] [i_3] [i_3 + 2] [i_5 - 2] [i_6 + 1] [i_6])) : (arr_14 [i_3 + 3] [i_6 - 1] [i_6] [i_6])));
                        }
                        for (long long int i_7 = 1; i_7 < 24; i_7 += 1) /* same iter space */
                        {
                            arr_20 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (short)-28923)) + (28938)))));
                            var_24 -= ((/* implicit */int) ((arr_17 [i_2 - 2] [i_2] [(unsigned char)22] [i_2 + 1] [i_5 - 1]) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_2] [i_2] [(_Bool)1] [i_2 + 1] [i_5 - 1])))));
                        }
                        for (long long int i_8 = 1; i_8 < 24; i_8 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_3] [(short)4] [i_5] [i_8] = ((/* implicit */unsigned int) (_Bool)1);
                            arr_25 [i_2] [i_3] [i_3] [i_4] [4ULL] [i_8] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_10 [i_2 + 1] [i_8] [i_8] [i_8]))));
                        }
                        var_25 = ((/* implicit */short) ((((/* implicit */_Bool) arr_18 [i_2 - 2] [i_2] [i_2 - 2] [i_4] [i_4] [i_4] [i_5])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-12)) ? (arr_14 [i_2] [i_3] [i_4] [i_5]) : (3ULL))))));
                        var_26 = ((/* implicit */unsigned char) ((int) arr_8 [i_2 - 2]));
                    }
                    for (unsigned long long int i_9 = 3; i_9 < 23; i_9 += 2) /* same iter space */
                    {
                        arr_29 [i_2] [i_4] [i_4] [i_9] [i_9] [i_9] = ((/* implicit */short) (((_Bool)0) ? (3415294941U) : (((/* implicit */unsigned int) 2146435072))));
                        var_27 -= ((/* implicit */unsigned long long int) (signed char)67);
                        var_28 |= ((/* implicit */int) (-(((long long int) ((((/* implicit */_Bool) var_10)) ? (var_14) : (var_6))))));
                        var_29 -= ((/* implicit */_Bool) (signed char)60);
                    }
                    arr_30 [i_2] [i_2] [i_2] = ((((((/* implicit */_Bool) min((((/* implicit */long long int) (signed char)-60)), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) ((((/* implicit */int) var_3)) == (463960352)))) : ((+(((/* implicit */int) (_Bool)0)))))) > (var_16));
                }
            } 
        } 
        arr_31 [i_2] [i_2] |= ((/* implicit */unsigned short) (~(min((var_2), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
    }
    for (unsigned short i_10 = 1; i_10 < 14; i_10 += 1) 
    {
        arr_35 [i_10] = ((/* implicit */_Bool) arr_33 [i_10] [i_10]);
        /* LoopSeq 3 */
        for (unsigned char i_11 = 0; i_11 < 15; i_11 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_12 = 0; i_12 < 15; i_12 += 2) 
            {
                for (short i_13 = 1; i_13 < 14; i_13 += 1) 
                {
                    {
                        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((long long int) var_4)), (((/* implicit */long long int) (~(451833153))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((-8418555054095974145LL) + (9223372036854775807LL))) >> (((var_2) - (8247126193018390507ULL))))))))) : (max((arr_37 [i_10 + 1]), (((/* implicit */int) (signed char)-6))))));
                        arr_43 [i_10] [i_11] [i_12] [i_13 - 1] [i_13] = ((/* implicit */int) min((((/* implicit */long long int) max(((+(((/* implicit */int) arr_7 [i_11] [i_12])))), (((/* implicit */int) ((((/* implicit */int) arr_7 [i_11] [i_13])) >= (var_10))))))), (max((((/* implicit */long long int) (+(arr_15 [i_10] [i_11] [i_11] [i_11] [i_12] [i_13])))), (((((/* implicit */_Bool) arr_23 [5] [i_10] [5] [i_11] [i_12] [i_13] [i_13])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10] [i_12] [i_12])))))))));
                        var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) max((max((((/* implicit */long long int) arr_23 [i_10] [i_10 - 1] [i_13 - 1] [i_13] [i_13] [i_13 + 1] [i_13])), (((var_5) - (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) ((unsigned int) var_1))))))));
                        var_32 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) arr_28 [i_13] [(short)1])) * (((/* implicit */int) var_7))))) ? (((((/* implicit */_Bool) 190297604)) ? (var_4) : (((/* implicit */unsigned long long int) arr_19 [i_11] [(_Bool)1] [i_13 + 1])))) : (((/* implicit */unsigned long long int) arr_19 [i_13 - 1] [i_12] [i_10])))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) (-(((/* implicit */int) var_3))))), (var_5))))));
                    }
                } 
            } 
            arr_44 [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_18 [i_11] [i_11] [i_11] [i_10] [i_10] [i_10] [i_10]))))), (((arr_17 [i_10] [i_10 + 1] [i_10 + 1] [i_11] [i_11]) ? (((/* implicit */unsigned long long int) var_16)) : (var_2))))) : (((/* implicit */unsigned long long int) var_5))));
        }
        for (unsigned int i_14 = 2; i_14 < 14; i_14 += 4) 
        {
            var_33 &= ((/* implicit */unsigned long long int) arr_6 [i_14] [i_14]);
            arr_48 [(unsigned char)13] = ((/* implicit */unsigned char) arr_39 [i_14] [i_14 - 1] [i_10 - 1]);
        }
        /* vectorizable */
        for (unsigned int i_15 = 0; i_15 < 15; i_15 += 2) 
        {
            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_10 - 1] [i_10 - 1] [i_10 + 1])) ? ((~(((/* implicit */int) arr_6 [i_15] [i_10])))) : (((/* implicit */int) arr_47 [i_10 + 1] [i_10 + 1] [i_10 - 1]))));
            /* LoopSeq 2 */
            for (unsigned int i_16 = 2; i_16 < 14; i_16 += 1) /* same iter space */
            {
                arr_55 [i_16] [i_15] = ((/* implicit */int) ((((/* implicit */_Bool) arr_40 [i_10] [i_15] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_10] [i_15] [17ULL] [i_10] [i_16] [i_15]))) : ((+(arr_12 [i_15] [i_16])))));
                arr_56 [i_10] [i_15] [i_16] = ((/* implicit */int) (!(((/* implicit */_Bool) 0U))));
                arr_57 [i_10] [i_15] [i_16 + 1] = ((/* implicit */short) var_7);
            }
            for (unsigned int i_17 = 2; i_17 < 14; i_17 += 1) /* same iter space */
            {
                arr_61 [i_10] [i_10] [i_15] [i_17] = ((/* implicit */int) (~(arr_50 [i_10 - 1] [i_17 - 2])));
                arr_62 [i_10 - 1] [i_10 - 1] [i_17] [i_15] = ((/* implicit */unsigned long long int) arr_58 [i_10] [i_15] [i_17]);
                var_35 -= ((/* implicit */unsigned char) arr_41 [i_17 + 1] [i_15] [i_17] [i_17]);
                var_36 = ((/* implicit */unsigned short) var_10);
            }
            var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_10 - 1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_10] [i_10] [i_10 + 1] [i_15]))));
            var_38 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_36 [i_10 - 1] [i_10 - 1] [i_10 + 1])) ? (((/* implicit */int) arr_36 [i_10] [i_10 - 1] [i_10 + 1])) : (((/* implicit */int) arr_36 [i_15] [i_10 - 1] [i_10 + 1]))));
        }
        arr_63 [i_10] = ((/* implicit */unsigned short) (-((~(((/* implicit */int) min((arr_13 [i_10] [i_10] [i_10] [i_10] [6] [i_10]), (((/* implicit */unsigned short) arr_47 [i_10] [i_10] [i_10])))))))));
    }
}
