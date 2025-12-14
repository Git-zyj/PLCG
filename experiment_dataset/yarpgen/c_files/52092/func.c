/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52092
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52092 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52092
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_0 + 1])) <= (((/* implicit */int) arr_0 [i_0 + 1]))));
        var_16 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0 + 1] [i_0 + 1]))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        var_17 = ((((/* implicit */unsigned long long int) min((var_4), (((/* implicit */unsigned int) arr_5 [i_1 + 1]))))) | (max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1]))))), (arr_2 [i_1 + 1] [i_1 + 1]))));
        var_18 = ((/* implicit */unsigned int) max((var_18), (((/* implicit */unsigned int) arr_4 [i_1 + 1]))));
    }
    for (unsigned short i_2 = 2; i_2 < 13; i_2 += 2) 
    {
        var_19 = ((/* implicit */unsigned int) (+(arr_8 [(unsigned char)2])));
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2] [i_2])) ? (arr_2 [i_2] [15]) : (arr_2 [i_2] [i_2])))) ? (arr_4 [i_2 + 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_2])))))) ? (arr_6 [i_2]) : (((((((/* implicit */_Bool) arr_5 [i_2])) ? (((/* implicit */unsigned long long int) arr_1 [i_2])) : (arr_4 [i_2]))) | (((/* implicit */unsigned long long int) ((var_8) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_5)))))))));
        var_21 = ((/* implicit */int) arr_4 [1U]);
    }
    for (unsigned short i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        /* LoopSeq 3 */
        for (int i_4 = 0; i_4 < 15; i_4 += 3) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 4) 
            {
                var_22 = ((/* implicit */unsigned char) max((var_22), (arr_3 [i_3])));
                arr_15 [i_3] [i_4] [i_4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3 - 1])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (arr_10 [i_3]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_3] [(_Bool)1])))))));
            }
            /* LoopSeq 1 */
            for (unsigned char i_6 = 0; i_6 < 15; i_6 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [i_3 + 3] [i_3 + 3] [i_3 + 3])) ? (arr_13 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_3 + 3] [i_3 + 3] [i_3 + 3]))))))));
                arr_19 [i_4] [i_3] [i_4] = ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_3] [i_3] [i_3] [i_3])))))) * (min((((/* implicit */unsigned long long int) arr_12 [(unsigned char)13] [i_4])), (arr_2 [i_4] [i_6])))))));
                var_24 = ((/* implicit */_Bool) arr_5 [i_3]);
                arr_20 [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3 + 3]))) | (((((/* implicit */_Bool) var_10)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_3]))) ^ (arr_4 [i_3]))) : (((/* implicit */unsigned long long int) (~(arr_13 [i_4]))))))));
            }
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_7 = 2; i_7 < 12; i_7 += 4) 
            {
                arr_24 [i_4] [i_3] [i_7] [i_3] = ((/* implicit */unsigned char) arr_4 [i_3]);
                arr_25 [i_4] [i_4] [i_4] = (~(((/* implicit */int) arr_17 [i_3 + 3] [i_7 + 3] [i_7 + 1])));
            }
            var_25 += ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_2 [i_3 + 3] [i_3 + 3])) ? (arr_2 [i_3 + 1] [i_3 + 2]) : (arr_2 [i_3 + 2] [i_3 + 2])))));
        }
        for (int i_8 = 0; i_8 < 15; i_8 += 3) /* same iter space */
        {
            var_26 -= ((/* implicit */short) arr_27 [i_3 + 1]);
            arr_28 [i_3] [i_8] [i_8] |= ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_27 [i_3 - 1])) <= (((/* implicit */int) arr_27 [i_3 + 1])))))));
        }
        for (int i_9 = 0; i_9 < 15; i_9 += 3) /* same iter space */
        {
            var_27 *= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_17 [i_3] [i_3 + 3] [i_3]))))) ? (((/* implicit */int) ((arr_30 [i_3 + 2] [i_3 - 1] [i_3 + 1]) != (arr_30 [i_3 - 1] [i_3 + 2] [i_3 + 3])))) : (((/* implicit */int) var_5))));
            arr_31 [i_3] [i_3] = ((((arr_6 [i_3 - 1]) / (arr_14 [i_3 - 1] [i_3 - 1] [i_9]))) * (max((arr_6 [i_3 - 1]), (arr_14 [i_3 - 1] [13ULL] [i_3]))));
        }
        var_28 = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) arr_13 [4U])) ? (arr_13 [14]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
        arr_32 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [(signed char)11] [i_3] [i_3] [i_3]))))))))));
    }
    /* LoopSeq 1 */
    for (int i_10 = 0; i_10 < 19; i_10 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_11 = 0; i_11 < 19; i_11 += 3) 
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 19; i_12 += 2) 
            {
                for (unsigned long long int i_13 = 0; i_13 < 19; i_13 += 4) 
                {
                    for (long long int i_14 = 4; i_14 < 17; i_14 += 2) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) (~(var_3)));
                            var_30 = ((/* implicit */unsigned long long int) min((var_30), (min((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)16368))))), (min((arr_39 [i_14 - 4] [i_14 - 4] [i_14 - 4]), (arr_39 [i_14 - 1] [i_14 - 2] [i_14])))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */int) max((var_31), (((/* implicit */int) ((((/* implicit */_Bool) (-(arr_43 [i_10] [i_10] [(unsigned short)17] [i_11] [i_11] [i_10] [i_11])))) ? (((arr_43 [i_10] [i_10] [i_11] [i_10] [i_10] [i_11] [i_11]) & (((/* implicit */long long int) var_4)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_43 [i_10] [i_10] [i_10] [i_11] [i_10] [i_11] [i_11])))))))))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_15 = 0; i_15 < 19; i_15 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_16 = 1; i_16 < 16; i_16 += 2) 
                {
                    arr_54 [i_16] [i_16] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_33 [5]))) : (var_3)))) ? (((/* implicit */int) var_5)) : ((-(((/* implicit */int) arr_47 [10U] [10U] [(unsigned char)9]))))));
                    var_32 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_34 [i_16 + 3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_40 [i_10] [i_16 - 1] [i_15] [i_15] [i_15] [i_11]))) : (arr_43 [i_16 - 1] [(short)0] [i_15] [i_15] [i_11] [i_15] [i_10])));
                    arr_55 [i_16] [i_11] [i_15] = ((/* implicit */unsigned int) ((arr_44 [i_10] [i_16] [i_16 + 2] [i_16 + 2] [i_11] [i_15] [i_16 + 2]) * (((/* implicit */unsigned long long int) var_4))));
                }
                var_33 += ((/* implicit */signed char) (+((+(var_3)))));
                arr_56 [i_10] [i_10] [i_15] [i_10] = (~(((/* implicit */int) arr_49 [i_15] [i_15] [i_11] [i_10])));
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 19; i_17 += 2) 
                {
                    for (int i_18 = 0; i_18 < 19; i_18 += 4) 
                    {
                        {
                            var_34 = (-((+(((/* implicit */int) arr_58 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10])))));
                            arr_64 [i_10] [0] [0] [0] = ((/* implicit */unsigned short) ((((/* implicit */int) arr_0 [i_10])) == (((/* implicit */int) arr_0 [i_18]))));
                            var_35 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_14)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) : (((/* implicit */int) (!((_Bool)1))))));
                        }
                    } 
                } 
            }
            /* vectorizable */
            for (unsigned char i_19 = 0; i_19 < 19; i_19 += 4) 
            {
                var_36 += ((/* implicit */unsigned char) ((((/* implicit */int) arr_36 [i_10])) < (((/* implicit */int) arr_36 [(unsigned char)14]))));
                arr_67 [i_10] [i_10] [i_19] [i_19] = ((/* implicit */long long int) (+(((/* implicit */int) arr_34 [i_10]))));
            }
        }
        var_37 = ((/* implicit */signed char) ((((/* implicit */_Bool) (((-(var_0))) & (((/* implicit */unsigned long long int) (-(arr_35 [i_10] [4LL]))))))) ? (((/* implicit */int) arr_52 [i_10] [i_10] [i_10] [i_10])) : ((+((+(((/* implicit */int) var_8))))))));
        var_38 += ((/* implicit */unsigned long long int) arr_46 [1U] [i_10]);
    }
    var_39 = ((/* implicit */unsigned char) max((var_39), (var_14)));
    /* LoopSeq 4 */
    for (unsigned short i_20 = 0; i_20 < 11; i_20 += 4) 
    {
        var_40 *= ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_37 [i_20]))))) || (((/* implicit */_Bool) ((((((/* implicit */int) arr_37 [i_20])) + (2147483647))) << (((arr_63 [i_20] [i_20] [10ULL] [9LL] [9LL] [i_20]) - (2165336071724372928ULL))))))));
        var_41 = ((/* implicit */unsigned char) arr_63 [i_20] [i_20] [i_20] [i_20] [i_20] [i_20]);
    }
    for (unsigned short i_21 = 0; i_21 < 22; i_21 += 2) 
    {
        var_42 = ((/* implicit */unsigned int) (!(arr_71 [i_21])));
        var_43 = ((/* implicit */int) ((((arr_2 [i_21] [i_21]) * ((-(arr_2 [i_21] [i_21]))))) >= (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_0 [i_21])))))))));
    }
    for (unsigned char i_22 = 3; i_22 < 11; i_22 += 4) 
    {
        var_44 = ((/* implicit */unsigned long long int) min((var_44), (((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) 435172949292603565LL)) && (((/* implicit */_Bool) (unsigned short)36137)))))))));
        arr_74 [i_22] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_52 [i_22] [i_22] [i_22] [i_22]))))))) ? ((((~(((/* implicit */int) arr_49 [i_22] [i_22] [i_22] [i_22])))) * (((/* implicit */int) arr_3 [i_22 - 3])))) : (((/* implicit */int) arr_65 [i_22] [i_22] [i_22]))));
        var_45 = ((/* implicit */unsigned short) max((var_45), (((/* implicit */unsigned short) (-((+(max((arr_22 [14U] [(signed char)4] [(signed char)4] [14U]), (((/* implicit */unsigned long long int) var_4)))))))))));
        var_46 += ((/* implicit */short) (+(((((((/* implicit */int) var_5)) + (((/* implicit */int) arr_40 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22])))) & ((+(((/* implicit */int) arr_40 [i_22] [i_22] [i_22] [i_22] [i_22] [i_22]))))))));
        var_47 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_42 [i_22] [i_22]), (arr_42 [i_22 + 1] [i_22])))) ? (arr_57 [i_22] [i_22] [i_22] [i_22] [i_22]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (-(arr_60 [i_22] [i_22] [i_22] [i_22] [i_22]))))))))));
    }
    for (int i_23 = 0; i_23 < 21; i_23 += 1) 
    {
        var_48 += ((/* implicit */short) arr_71 [i_23]);
        var_49 = ((/* implicit */signed char) arr_1 [i_23]);
    }
}
