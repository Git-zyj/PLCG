/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205456
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
    var_16 = ((/* implicit */unsigned long long int) var_7);
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 0)) ^ (((((/* implicit */_Bool) min((-13), (((/* implicit */int) (short)-26238))))) ? (max((18446744073709551609ULL), (((/* implicit */unsigned long long int) -2085773899)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3253537028183783637ULL)) ? (((/* implicit */int) (short)3248)) : (((/* implicit */int) (_Bool)0)))))))));
        var_18 = ((/* implicit */short) (~(((((/* implicit */int) arr_1 [i_0])) ^ (max((((/* implicit */int) (signed char)-48)), (2085773893)))))));
        arr_2 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_0 [(unsigned char)6] [i_0])) == (((/* implicit */int) arr_1 [i_0])))) ? (((/* implicit */int) arr_1 [i_0])) : ((-(((/* implicit */int) arr_1 [i_0]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)27))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)29469)) || (((/* implicit */_Bool) (unsigned short)36051))))) : (((((/* implicit */_Bool) arr_0 [i_0] [(short)10])) ? (((/* implicit */int) (unsigned char)25)) : (((/* implicit */int) var_1)))))))));
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 18; i_2 += 4) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */int) min(((!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))), ((!(((/* implicit */_Bool) (short)26237))))));
                    var_19 |= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_4 [i_0] [i_1]) : (arr_5 [i_0] [9])))) ? (max((arr_5 [i_0] [i_1]), (((/* implicit */int) arr_6 [i_0] [i_1])))) : (((arr_4 [i_2] [i_0]) - (arr_4 [i_1] [i_2]))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_3 = 0; i_3 < 11; i_3 += 4) 
    {
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_8 [i_3] [i_3])))))));
        arr_10 [(unsigned char)9] [i_3] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_0 [(unsigned short)16] [(unsigned short)16])) && (((/* implicit */_Bool) 2085773904)))))));
        arr_11 [(short)7] [i_3] = ((/* implicit */unsigned char) (~(((((/* implicit */int) arr_9 [i_3] [(unsigned char)0])) ^ (((/* implicit */int) arr_1 [i_3]))))));
    }
    for (signed char i_4 = 3; i_4 < 10; i_4 += 2) 
    {
        var_21 = ((/* implicit */unsigned char) max((((((/* implicit */int) (!(((/* implicit */_Bool) -2085773899))))) + (((/* implicit */int) arr_14 [i_4 - 3] [i_4 - 2])))), (((/* implicit */int) ((arr_5 [i_4 + 4] [i_4 - 2]) <= (arr_5 [i_4 - 1] [i_4 + 3]))))));
        var_22 = ((/* implicit */_Bool) max((((/* implicit */int) ((((((/* implicit */_Bool) arr_5 [i_4] [i_4])) || (((/* implicit */_Bool) -1321758135)))) && (((/* implicit */_Bool) min((((/* implicit */int) (signed char)-124)), (arr_5 [i_4] [i_4]))))))), (max(((+(((/* implicit */int) var_7)))), (((/* implicit */int) ((unsigned char) arr_3 [(_Bool)1] [(short)5] [i_4])))))));
        arr_15 [(_Bool)1] = ((/* implicit */unsigned int) arr_12 [i_4]);
    }
    /* LoopSeq 2 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */unsigned int) ((min((min((3020934660862749802LL), (((/* implicit */long long int) (signed char)-26)))), (((/* implicit */long long int) max((((/* implicit */unsigned short) (unsigned char)209)), ((unsigned short)36049)))))) == (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */int) arr_17 [(short)4] [(unsigned short)11])) ^ (((/* implicit */int) arr_17 [i_5] [i_5])))))))));
        var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_17 [(unsigned char)15] [i_5]))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            var_24 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_20 [i_6])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_21 [i_5] [i_5])))) == (((/* implicit */int) arr_21 [i_5] [i_6]))));
            var_25 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_19 [14LL] [(unsigned short)14] [14LL])) < (((/* implicit */int) arr_19 [i_6] [i_6] [i_5])))))));
        }
        for (short i_7 = 0; i_7 < 23; i_7 += 4) 
        {
            arr_24 [(_Bool)1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_5] [i_5] [i_7])) + (((/* implicit */int) arr_20 [i_5])))))));
            var_26 = ((/* implicit */_Bool) (-(((((/* implicit */int) max((arr_22 [4] [i_7] [i_7]), (((/* implicit */short) arr_21 [i_5] [i_7]))))) / (((/* implicit */int) max((((/* implicit */unsigned char) (signed char)101)), (arr_21 [i_5] [i_5]))))))));
            arr_25 [i_5] = ((/* implicit */_Bool) (short)-14787);
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 2) 
            {
                for (unsigned char i_9 = 0; i_9 < 23; i_9 += 2) 
                {
                    {
                        var_27 *= ((/* implicit */_Bool) max((((((/* implicit */_Bool) (+(var_4)))) ? (((/* implicit */int) ((((/* implicit */int) arr_29 [i_8] [i_8] [i_8] [i_8] [(short)22])) == (((/* implicit */int) (short)-14767))))) : ((+(((/* implicit */int) arr_17 [(unsigned char)8] [(unsigned char)8])))))), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_28 [i_5] [i_7] [21U] [i_9])), (arr_16 [i_5])))) && (((/* implicit */_Bool) min((arr_22 [(signed char)0] [(unsigned short)0] [i_8]), (((/* implicit */short) arr_19 [i_7] [(signed char)20] [5]))))))))));
                        var_28 ^= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_5] [1LL] [(signed char)5] [i_5] [i_5]))) == (arr_26 [7LL])))) >= (((/* implicit */int) min((arr_21 [i_8] [i_8]), (((/* implicit */unsigned char) arr_28 [i_9] [i_8] [i_7] [i_5])))))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_9] [19] [i_5]))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_30 [i_5] [i_5] [i_5] [i_5] [i_5]))))) : (min((((/* implicit */unsigned int) (short)-26239)), (0U)))))));
                        var_29 = ((/* implicit */signed char) (_Bool)0);
                        arr_32 [9U] [i_7] [i_8] [i_9] [i_5] = min((((/* implicit */unsigned char) arr_28 [(_Bool)1] [(_Bool)1] [i_8] [(signed char)4])), (arr_19 [i_5] [3ULL] [i_8]));
                        var_30 = ((/* implicit */unsigned long long int) max((var_30), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) ((((/* implicit */_Bool) -2085773886)) || (((/* implicit */_Bool) var_2))))), (arr_17 [i_5] [i_7])))) >= (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_5] [i_5]))) == ((+(arr_16 [i_8])))))))))));
                    }
                } 
            } 
        }
        for (signed char i_10 = 1; i_10 < 20; i_10 += 4) 
        {
            var_31 = ((/* implicit */short) max((var_31), (((/* implicit */short) (((!(((/* implicit */_Bool) min(((short)30012), (((/* implicit */short) arr_28 [i_10] [i_10] [(signed char)18] [i_5]))))))) ? ((+(((/* implicit */int) (short)-14787)))) : (((/* implicit */int) max((((/* implicit */short) arr_30 [i_10 + 1] [i_10] [13ULL] [(signed char)4] [i_10 - 1])), (arr_27 [i_10 + 2] [i_10] [i_10])))))))));
            /* LoopSeq 1 */
            for (unsigned int i_11 = 1; i_11 < 20; i_11 += 2) 
            {
                var_32 = ((/* implicit */unsigned char) ((((((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10 + 1] [i_10])) + (((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_10 + 3] [i_5])))) + (((((/* implicit */_Bool) arr_29 [i_10] [i_10] [6U] [i_10 + 1] [i_10])) ? (((/* implicit */int) arr_29 [i_10] [i_10] [i_10] [i_10 - 1] [i_10])) : (((/* implicit */int) arr_29 [0U] [0U] [(unsigned char)7] [i_10 + 1] [6ULL]))))));
                var_33 = ((/* implicit */signed char) arr_19 [(unsigned char)21] [(signed char)11] [i_11]);
                arr_39 [1] [i_10] [i_10] [7LL] = ((/* implicit */signed char) arr_37 [15ULL] [i_10] [i_10 + 1] [i_11 + 2]);
            }
            /* LoopSeq 3 */
            for (int i_12 = 0; i_12 < 23; i_12 += 3) 
            {
                var_34 = ((/* implicit */_Bool) min((var_34), (((((/* implicit */_Bool) min((var_3), (((/* implicit */unsigned int) min((((/* implicit */int) arr_29 [i_5] [i_10 + 2] [i_12] [i_12] [i_12])), (0))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (~(4401373945441609268ULL)))) ? (((/* implicit */int) arr_36 [i_5] [i_10 + 3] [i_5])) : ((+(0))))))))));
                arr_42 [i_5] [i_10] [i_5] [i_5] = ((/* implicit */short) max((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) arr_29 [i_5] [i_5] [i_10] [(short)22] [i_12])) == (((/* implicit */int) (short)-239))))) == (((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) var_0)))))))), (((((/* implicit */int) (unsigned char)247)) + (((/* implicit */int) (_Bool)0))))));
                var_35 = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_38 [i_5] [i_10 + 2] [i_10 + 2] [i_10]))) + (arr_23 [i_5] [i_5] [(unsigned short)12]))) - (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_38 [i_5] [i_5] [i_5] [i_10])))))));
                var_36 |= ((/* implicit */short) (!(((/* implicit */_Bool) (+(-4))))));
            }
            for (long long int i_13 = 0; i_13 < 23; i_13 += 4) 
            {
                arr_47 [i_10] = ((/* implicit */unsigned char) (unsigned short)36066);
                var_37 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) arr_21 [i_5] [19ULL])) ? (-5) : (2)))))), (1831768855U)));
            }
            /* vectorizable */
            for (unsigned int i_14 = 0; i_14 < 23; i_14 += 2) 
            {
                var_38 = ((/* implicit */int) (+((-(725820988U)))));
                var_39 *= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_36 [12ULL] [i_10] [i_14])) == (((/* implicit */int) arr_19 [i_14] [i_10] [i_5])))))));
                arr_50 [i_5] [i_10] = ((/* implicit */signed char) ((4) - ((+(((/* implicit */int) (short)-25406))))));
            }
        }
        for (unsigned char i_15 = 0; i_15 < 23; i_15 += 2) 
        {
            var_40 = ((/* implicit */int) (!(((((((/* implicit */_Bool) arr_52 [(unsigned char)6] [i_15] [i_15])) ? (2429698729U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_5] [0U]))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_15] [i_15] [i_15])))))));
            var_41 = ((/* implicit */signed char) min((var_41), (((/* implicit */signed char) (+((~(((/* implicit */int) ((5808726858158625056LL) >= (((/* implicit */long long int) arr_23 [i_5] [i_5] [i_5]))))))))))));
        }
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 23; i_16 += 4) 
        {
            for (unsigned char i_17 = 0; i_17 < 23; i_17 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (signed char i_18 = 0; i_18 < 23; i_18 += 2) 
                    {
                        var_42 = ((/* implicit */unsigned char) -543164186);
                        var_43 = ((/* implicit */signed char) (-(((arr_44 [i_17] [i_17] [i_17] [i_17]) / (arr_44 [i_5] [i_16] [i_17] [i_18])))));
                    }
                    arr_62 [(signed char)12] [i_16] [i_17] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) arr_23 [(short)10] [6] [9])) ? (((/* implicit */int) arr_45 [i_5] [i_16] [i_16])) : (((/* implicit */int) arr_61 [i_5] [i_16] [i_16] [i_17] [i_17] [i_17])))) + (2147483647))) << ((+(((/* implicit */int) arr_21 [(signed char)7] [(_Bool)1]))))));
                }
            } 
        } 
    }
    for (signed char i_19 = 0; i_19 < 23; i_19 += 4) /* same iter space */
    {
        arr_66 [i_19] [(_Bool)1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(-1321758135)))) ? (((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_22 [i_19] [i_19] [(short)0])) : (((/* implicit */int) arr_19 [i_19] [(short)22] [i_19])))) : ((-(((/* implicit */int) arr_29 [i_19] [i_19] [(short)21] [i_19] [i_19])))))) == (((((/* implicit */int) max(((short)-1), (((/* implicit */short) arr_52 [(unsigned short)7] [i_19] [i_19]))))) + (((/* implicit */int) var_12))))));
        arr_67 [i_19] = ((/* implicit */unsigned short) (-(((/* implicit */int) (((~(32767ULL))) <= (min((((/* implicit */unsigned long long int) arr_60 [i_19])), (875290884955624808ULL))))))));
    }
}
