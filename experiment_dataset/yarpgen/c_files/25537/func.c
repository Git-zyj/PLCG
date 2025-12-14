/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25537
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
    for (short i_0 = 3; i_0 < 24; i_0 += 4) 
    {
        arr_2 [i_0 - 1] [i_0] = ((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) > (((/* implicit */int) var_5))));
        arr_3 [i_0 - 3] [i_0 - 3] = ((/* implicit */signed char) var_14);
        /* LoopNest 2 */
        for (signed char i_1 = 1; i_1 < 24; i_1 += 1) 
        {
            for (unsigned int i_2 = 0; i_2 < 25; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (signed char i_3 = 1; i_3 < 23; i_3 += 3) 
                    {
                        arr_12 [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) arr_1 [i_2] [i_3 + 1])))) || (((/* implicit */_Bool) (~(((/* implicit */int) var_11))))))))) > (((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_1]))) : (var_0)))));
                        arr_13 [i_1] [i_1 + 1] = ((/* implicit */short) (signed char)1);
                    }
                    for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [(signed char)0] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (short)(-32767 - 1))) - (((/* implicit */int) (signed char)3))));
                        var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) ((((/* implicit */_Bool) max((var_9), (((/* implicit */signed char) ((arr_16 [i_4] [i_2] [i_2] [i_0]) >= (var_8))))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)15993)) ? (var_6) : (9U)))) > (((((/* implicit */_Bool) (unsigned short)49539)) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))))) : (((/* implicit */int) var_5)))))));
                        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_8 [i_0] [i_1] [i_2] [i_4])))) ? (((/* implicit */unsigned int) max((((((/* implicit */int) var_9)) | (((/* implicit */int) (unsigned short)57984)))), (((/* implicit */int) var_13))))) : (((((unsigned int) (signed char)-84)) ^ (((((/* implicit */_Bool) (unsigned short)15996)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0 - 3]))) : (var_1)))))));
                        arr_18 [12LL] [i_4] [i_1] [i_1] [i_0] = ((/* implicit */long long int) var_6);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_5 = 0; i_5 < 25; i_5 += 4) 
                    {
                        arr_21 [i_5] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */short) ((((((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0] [i_0 - 3] [i_0 + 1] [i_1] [i_1] [i_5]))) % (var_8))) < (((((long long int) var_13)) / (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_1 + 1])) ^ (((/* implicit */int) arr_7 [i_0] [i_1 - 1] [i_0])))))))));
                        var_17 ^= ((/* implicit */long long int) ((max((((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)0)) || (((/* implicit */_Bool) var_4))))), (((((/* implicit */_Bool) 4294967275U)) ? (((/* implicit */int) arr_15 [i_0 - 1] [(unsigned short)8] [i_2] [i_5] [(short)5])) : (((/* implicit */int) arr_9 [i_0 - 3] [i_1 - 1] [i_2] [i_5])))))) - (((/* implicit */int) ((((((/* implicit */_Bool) arr_20 [i_5] [i_2] [i_1] [i_1] [i_2] [i_0])) ? (((/* implicit */int) (signed char)20)) : (((/* implicit */int) var_7)))) < (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)1297)) : (((/* implicit */int) var_4)))))))));
                        arr_22 [i_1] [i_1] [(unsigned short)23] [i_5] = ((/* implicit */long long int) var_0);
                    }
                    var_18 = ((/* implicit */long long int) ((signed char) var_7));
                }
            } 
        } 
    }
    for (short i_6 = 3; i_6 < 9; i_6 += 2) 
    {
        /* LoopNest 3 */
        for (long long int i_7 = 2; i_7 < 9; i_7 += 2) 
        {
            for (short i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                for (unsigned short i_9 = 1; i_9 < 8; i_9 += 1) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) max((var_19), (((/* implicit */unsigned short) arr_1 [(short)19] [i_8]))));
                        var_20 = ((/* implicit */short) ((var_8) < (((/* implicit */long long int) max((((/* implicit */unsigned int) var_14)), (var_1))))));
                        arr_34 [i_7] [i_7] &= ((/* implicit */long long int) ((((/* implicit */_Bool) (short)27818)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (unsigned short)15975))));
                        var_21 = ((/* implicit */signed char) min((((/* implicit */long long int) ((max((arr_14 [i_9] [i_9] [i_8 - 2] [i_7 + 1] [i_6] [i_6]), (((/* implicit */unsigned int) (unsigned short)15975)))) | (((var_3) | (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_9] [i_6])))))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)0)) >> (((((/* implicit */int) arr_19 [20U] [i_7])) - (7639)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_6] [i_7] [i_7] [i_9 + 1]))) : (((((-2239908442373469213LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-113)) + (156)))))))));
                    }
                } 
            } 
        } 
        arr_35 [i_6 - 3] [i_6 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) | (arr_20 [22LL] [12LL] [i_6] [i_6] [(short)2] [i_6 + 1])))) ? (((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) (unsigned short)16382)) == (((/* implicit */int) arr_28 [i_6] [i_6]))))) ^ (((/* implicit */int) ((1836562943320348770LL) > (((/* implicit */long long int) ((/* implicit */int) (short)-1))))))))) : ((~(max((arr_20 [i_6] [i_6] [i_6 - 1] [i_6] [24U] [(short)6]), (((/* implicit */long long int) arr_7 [i_6] [i_6 - 1] [i_6 - 2]))))))));
        /* LoopNest 3 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            for (short i_11 = 1; i_11 < 9; i_11 += 2) 
            {
                for (unsigned short i_12 = 0; i_12 < 10; i_12 += 2) 
                {
                    {
                        arr_43 [i_6] [i_11] = ((/* implicit */signed char) ((var_12) << (((((((((arr_23 [i_6 + 1]) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)20982))))) + (9223372036854775807LL))) << ((((~(var_3))) - (3381861597U))))) - (1870952808961038332LL)))));
                        arr_44 [i_6] [i_6] [i_11] [i_11 + 1] [i_12] = ((/* implicit */short) var_4);
                        /* LoopSeq 2 */
                        for (unsigned int i_13 = 0; i_13 < 10; i_13 += 3) /* same iter space */
                        {
                            arr_47 [i_11] [(signed char)8] [i_11 + 1] [3LL] [i_11] = ((/* implicit */signed char) (+(max((((/* implicit */long long int) (unsigned short)19034)), (var_2)))));
                            var_22 += ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                            arr_48 [i_12] [i_11] [i_11 - 1] [i_12] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_6] [i_13] [i_11]))) : (((((/* implicit */long long int) var_0)) + (arr_27 [i_6] [i_11 - 1])))));
                        }
                        for (unsigned int i_14 = 0; i_14 < 10; i_14 += 3) /* same iter space */
                        {
                            arr_53 [i_11] [i_11] = ((/* implicit */unsigned int) var_4);
                            var_23 = arr_6 [i_10] [(signed char)20];
                            arr_54 [i_6 - 3] [i_11] [i_11] [i_12] [i_12] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((max((var_2), (((/* implicit */long long int) arr_40 [i_11] [i_11])))) ^ (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)16))) ^ ((-9223372036854775807LL - 1LL))))))) ? (max((var_10), (((4294967282U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_6 + 1]))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) var_13))) ? (((/* implicit */int) arr_9 [i_11 + 1] [i_10] [i_11] [i_12])) : ((~(((/* implicit */int) arr_40 [i_11] [i_12])))))))));
                            arr_55 [i_6] [i_10] [i_11] [i_11] = ((/* implicit */signed char) ((((((/* implicit */int) arr_5 [i_11])) + (((/* implicit */int) ((unsigned short) var_7))))) >> (((((/* implicit */int) (signed char)-1)) + (8)))));
                        }
                    }
                } 
            } 
        } 
        arr_56 [i_6] = arr_23 [i_6];
    }
    var_24 = var_14;
}
