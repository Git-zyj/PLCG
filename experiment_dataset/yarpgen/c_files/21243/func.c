/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21243
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
    var_18 = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_15))))))) ? (((min((((/* implicit */unsigned long long int) var_14)), (var_16))) + (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) 12022454172011135743ULL)))))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_4))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)64840))));
        arr_3 [i_0] = ((/* implicit */long long int) (~(((/* implicit */int) ((signed char) (unsigned short)55273)))));
    }
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 1) 
        {
            arr_12 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_0 [i_1]))));
            var_19 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_2])) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) arr_6 [i_2]))));
            /* LoopSeq 3 */
            for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 2) 
                {
                    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((((/* implicit */_Bool) arr_8 [i_1] [i_1])) ? (((/* implicit */int) (unsigned short)4)) : (((/* implicit */int) (short)-11937))))));
                    arr_20 [i_1] [i_2] [i_3] [i_1] [i_3] = ((((/* implicit */long long int) ((((/* implicit */int) arr_15 [i_2] [i_3 + 1] [i_4])) | (((/* implicit */int) arr_19 [i_1] [i_2] [i_3] [i_4]))))) + (((((/* implicit */_Bool) arr_5 [i_4])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8192))) : (arr_1 [i_4]))));
                }
                for (long long int i_5 = 0; i_5 < 12; i_5 += 1) 
                {
                    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) (short)-11937))));
                    arr_23 [i_1] [(signed char)8] [(signed char)8] [i_1] = ((/* implicit */unsigned short) ((arr_1 [i_3 + 1]) << (((arr_1 [i_3 - 1]) - (6796788416757312102LL)))));
                    arr_24 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                }
                arr_25 [i_1] [i_1] [i_1] = ((/* implicit */signed char) arr_0 [i_3]);
                var_22 = ((/* implicit */unsigned char) 18446744073709551615ULL);
                var_23 = ((/* implicit */signed char) (+(arr_5 [i_1])));
                arr_26 [i_1] = ((/* implicit */unsigned long long int) var_9);
            }
            for (short i_6 = 0; i_6 < 12; i_6 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 1; i_7 < 8; i_7 += 2) 
                {
                    for (signed char i_8 = 1; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_36 [i_1] [i_1] [i_6] [i_7] [0ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) || (((/* implicit */_Bool) ((var_14) - (((/* implicit */long long int) ((/* implicit */int) var_15))))))));
                            arr_37 [i_6] |= ((/* implicit */long long int) (-((~(arr_32 [i_1] [i_2] [i_2] [i_2] [(signed char)3])))));
                            arr_38 [i_1] [i_1] [i_1] [(signed char)10] [i_8 + 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)177)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_15))))) : (((arr_11 [i_8]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_1] [i_2] [i_6] [i_7])))))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned short) (unsigned short)0))) ^ (((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (short)28503))))));
                        }
                    } 
                } 
                var_25 = ((/* implicit */long long int) (+(arr_21 [i_2] [i_2] [i_6] [i_1])));
            }
            for (signed char i_9 = 0; i_9 < 12; i_9 += 3) 
            {
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 10; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 10; i_11 += 4) 
                    {
                        {
                            arr_46 [i_1] [i_2] [i_1] [i_10 + 1] [(unsigned short)3] [i_1] [i_10 + 1] = ((/* implicit */unsigned long long int) (!(((((/* implicit */int) (unsigned short)65535)) >= (((/* implicit */int) arr_29 [i_1] [i_1] [i_1]))))));
                            arr_47 [i_1] [i_1] [i_2] [i_1] [i_10] [i_1] [i_11 + 1] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_2))));
                        }
                    } 
                } 
                arr_48 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_9))))) > (((unsigned long long int) 0ULL))));
            }
            var_26 = ((/* implicit */unsigned short) var_11);
        }
        var_27 = ((/* implicit */unsigned short) ((((((/* implicit */int) arr_19 [i_1] [i_1] [i_1] [i_1])) << (((((/* implicit */int) var_4)) + (5566))))) < (((/* implicit */int) var_12))));
        /* LoopNest 3 */
        for (long long int i_12 = 1; i_12 < 11; i_12 += 4) 
        {
            for (signed char i_13 = 0; i_13 < 12; i_13 += 3) 
            {
                for (unsigned short i_14 = 0; i_14 < 12; i_14 += 2) 
                {
                    {
                        var_28 ^= ((((/* implicit */_Bool) arr_10 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)200)) * (((/* implicit */int) var_1))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-5))) : (arr_10 [i_1] [i_1]))));
                        arr_55 [i_1] [i_12 + 1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [(signed char)2] [i_12 - 1])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (unsigned short)22962))))) : ((+(16293027447261342119ULL)))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_15 = 3; i_15 < 9; i_15 += 3) 
                        {
                            var_29 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) (unsigned short)37915))))) - (((/* implicit */int) (short)17471))));
                            var_30 = ((/* implicit */unsigned long long int) arr_14 [i_12] [(signed char)4] [(short)11]);
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) ((((arr_21 [i_12 + 1] [i_12] [i_12 + 1] [i_12]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_1] [i_12 + 1] [i_14] [(signed char)6]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) ? (arr_39 [i_1] [i_12 + 1] [i_13] [i_14]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)0)))))) : (arr_40 [i_1] [i_1] [i_14]))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_13)))) + (((((/* implicit */_Bool) (unsigned short)2)) ? (((/* implicit */unsigned long long int) var_14)) : (10544980238885282841ULL)))));
                            var_33 += ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_30 [(unsigned short)0] [i_12 + 1] [i_12 + 1]))));
                        }
                    }
                } 
            } 
        } 
    }
}
