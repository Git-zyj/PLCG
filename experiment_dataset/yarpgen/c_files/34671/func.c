/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34671
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34671 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34671
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
    var_20 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((/* implicit */long long int) ((/* implicit */int) var_19))) : (min((((/* implicit */long long int) var_10)), (var_17)))))) ? ((+(((/* implicit */int) var_1)))) : ((+((+(((/* implicit */int) var_11)))))));
    var_21 = ((/* implicit */unsigned char) (~((((+(var_13))) / (((/* implicit */int) var_8))))));
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((~(var_5)))))) ? (((/* implicit */unsigned int) (~(max((var_12), (((/* implicit */int) var_0))))))) : (((arr_2 [i_0] [i_0]) - ((-(arr_2 [i_0] [i_0])))))));
        var_23 += ((/* implicit */unsigned long long int) arr_2 [i_0] [i_0]);
    }
    for (int i_1 = 1; i_1 < 10; i_1 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
        {
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    {
                        var_24 -= ((/* implicit */unsigned short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) 11276521372553398108ULL)) ? (((/* implicit */int) arr_8 [10] [i_1 + 1] [(_Bool)1] [10])) : (((/* implicit */int) (short)-32324))))), (max((1610738813U), (((/* implicit */unsigned int) arr_7 [i_1 + 1] [i_1 + 1] [(_Bool)1]))))));
                        var_25 = ((/* implicit */unsigned int) min((min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_1] [(signed char)6]))) > (var_17)))), (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))), (((/* implicit */int) ((var_16) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 2684228481U)) / (9660766506569886142ULL)))))))));
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((((max((var_3), (((/* implicit */unsigned int) arr_4 [i_3])))) + (((/* implicit */unsigned int) ((/* implicit */int) min((var_8), (var_18))))))), (((/* implicit */unsigned int) var_7)))))));
                        arr_13 [i_1] [i_2] [i_3] [i_3] [i_1] = ((/* implicit */short) (~(131071U)));
                    }
                } 
            } 
        } 
        arr_14 [i_1] [i_1] = min((min((((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_1] [i_1] [(_Bool)1] [i_1 + 1]))) : (var_17))), (((/* implicit */long long int) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1] [i_1] [(unsigned char)4])) / (((/* implicit */int) var_15))))))), (((/* implicit */long long int) var_13)));
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 11; i_5 += 4) 
        {
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) var_17))));
            /* LoopNest 3 */
            for (unsigned short i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                for (unsigned int i_7 = 0; i_7 < 11; i_7 += 4) 
                {
                    for (unsigned short i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_24 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [(signed char)7] = ((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */short) arr_21 [i_1])), (arr_6 [i_1] [i_1] [i_6 - 1]))))));
                            arr_25 [i_1 + 1] [i_1 + 1] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) min((arr_4 [(unsigned char)6]), (((/* implicit */int) arr_8 [i_1] [i_6 - 1] [i_5] [i_1]))))) ? (((/* implicit */int) arr_10 [i_6 + 1] [i_1 + 1] [i_1] [i_6 + 1])) : (((/* implicit */int) arr_3 [i_1])))) / ((-(max((var_12), (((/* implicit */int) arr_21 [i_1]))))))));
                            arr_26 [i_1] [i_1] [i_6] = ((/* implicit */unsigned int) min((((arr_17 [i_1] [i_1 - 1] [(short)8] [i_1]) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_16)))), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) min((arr_10 [i_1] [i_1] [i_1] [i_7]), (((/* implicit */unsigned char) var_8))))) : (((/* implicit */int) (!(var_1))))))));
                            arr_27 [i_1] [i_5] [i_1] [i_7] [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7] [i_1] [i_6] [i_8] [i_5] [i_1 - 1] [i_5])) ? (min((1500658402U), (2684228483U))) : (min((((/* implicit */unsigned int) var_16)), (((var_11) ? (((/* implicit */unsigned int) arr_12 [i_1] [i_1] [i_1] [i_1])) : (var_3)))))));
                        }
                    } 
                } 
            } 
            var_28 = ((/* implicit */unsigned short) min((((min((var_11), (var_7))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) (!(var_11)))))), ((-(((/* implicit */int) min((var_15), (((/* implicit */unsigned char) var_7)))))))));
            /* LoopSeq 1 */
            for (signed char i_9 = 0; i_9 < 11; i_9 += 2) 
            {
                arr_30 [i_1 - 1] [i_1] [i_9] = ((/* implicit */unsigned char) arr_3 [i_1]);
                /* LoopNest 2 */
                for (long long int i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    for (unsigned short i_11 = 0; i_11 < 11; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) min((((/* implicit */short) arr_15 [i_1])), (var_19)))))))));
                            arr_36 [i_1] [3LL] [i_1] = ((/* implicit */signed char) (!((!(((var_11) && (var_1)))))));
                            var_30 |= ((/* implicit */signed char) (((~(2794308902U))) > (((/* implicit */unsigned int) ((/* implicit */int) var_1)))));
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) min(((~((~(((/* implicit */int) var_19)))))), (((/* implicit */int) arr_3 [i_9])))))));
                        }
                    } 
                } 
            }
        }
        for (unsigned char i_12 = 0; i_12 < 11; i_12 += 4) 
        {
            var_32 = ((/* implicit */long long int) min((var_13), (((/* implicit */int) arr_3 [i_1]))));
            /* LoopSeq 1 */
            for (unsigned char i_13 = 2; i_13 < 9; i_13 += 3) 
            {
                arr_44 [i_1] [i_1] [(_Bool)1] [i_12] = ((/* implicit */unsigned short) ((((/* implicit */int) min((arr_34 [i_1 - 1] [(signed char)8] [(signed char)8] [i_1] [i_1]), (((/* implicit */short) arr_11 [(unsigned char)3] [i_1] [i_13 - 1] [i_1 - 1]))))) < ((+(((((/* implicit */_Bool) var_9)) ? (var_13) : (((/* implicit */int) var_16))))))));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 11; i_14 += 1) 
                {
                    for (unsigned short i_15 = 1; i_15 < 10; i_15 += 1) 
                    {
                        {
                            arr_50 [5] [9LL] [6ULL] [i_14] [i_15] [(unsigned short)2] [i_1] = ((/* implicit */signed char) min((min((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_1])) < (((/* implicit */int) arr_37 [i_1] [i_1]))))), (((((/* implicit */long long int) var_12)) & (var_6))))), ((-(((var_6) / (((/* implicit */long long int) ((/* implicit */int) var_18)))))))));
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (~(min((((((/* implicit */_Bool) var_3)) ? (var_12) : (((/* implicit */int) var_2)))), (((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (var_2)))))))))));
                        }
                    } 
                } 
                arr_51 [i_1] [i_1] [i_1] [i_13] = ((/* implicit */int) var_18);
                var_34 = ((/* implicit */short) max((((/* implicit */signed char) var_1)), (max((var_10), (((/* implicit */signed char) arr_32 [i_1] [i_1] [i_1] [i_1]))))));
            }
        }
    }
    for (unsigned long long int i_16 = 2; i_16 < 13; i_16 += 1) /* same iter space */
    {
        arr_54 [i_16] [i_16] = (~(max((((((/* implicit */_Bool) arr_53 [(unsigned char)13] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (arr_52 [i_16]))), (((arr_52 [i_16]) & (arr_53 [i_16] [i_16]))))));
        /* LoopNest 3 */
        for (long long int i_17 = 3; i_17 < 11; i_17 += 2) 
        {
            for (unsigned long long int i_18 = 0; i_18 < 15; i_18 += 2) 
            {
                for (short i_19 = 0; i_19 < 15; i_19 += 2) 
                {
                    {
                        var_35 = ((/* implicit */unsigned char) min((var_35), (((/* implicit */unsigned char) min((((/* implicit */int) arr_59 [i_18])), ((+((-(((/* implicit */int) var_0)))))))))));
                        var_36 = ((/* implicit */long long int) min((var_36), (((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_62 [i_17 + 2] [i_19] [i_17] [i_19] [i_17]), (arr_62 [i_17 - 2] [i_18] [i_17] [i_18] [i_17])))) ? (min((min((((/* implicit */unsigned int) arr_58 [i_16 + 1] [i_19] [(signed char)6] [i_19])), (var_3))), (((/* implicit */unsigned int) max((((/* implicit */signed char) arr_61 [(unsigned char)4] [i_19])), (arr_60 [i_16] [i_17 - 2] [i_19] [i_19])))))) : (((/* implicit */unsigned int) min((((/* implicit */int) arr_61 [i_19] [i_19])), (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_2)) : (var_12)))))))))));
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) min((arr_55 [i_19]), (((/* implicit */long long int) var_11))))) || (((var_1) || (((/* implicit */_Bool) arr_60 [i_16] [i_16] [i_18] [i_16]))))))))))));
                    }
                } 
            } 
        } 
        var_38 = ((/* implicit */_Bool) min((var_38), (((((((/* implicit */int) (unsigned short)0)) / (((/* implicit */int) (unsigned char)233)))) != (min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))), (((/* implicit */int) var_19))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_20 = 2; i_20 < 13; i_20 += 1) /* same iter space */
    {
        var_39 = ((((/* implicit */_Bool) arr_60 [i_20] [i_20 + 1] [i_20] [2U])) ? (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_20 - 2] [i_20 - 1] [i_20] [i_20 - 2]))) : (var_14));
        var_40 = ((/* implicit */signed char) ((-954009606) / (((/* implicit */int) (unsigned short)3661))));
    }
    var_41 |= ((/* implicit */unsigned long long int) (!(((((/* implicit */_Bool) var_0)) && ((!(var_8)))))));
}
