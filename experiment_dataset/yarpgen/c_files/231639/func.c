/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231639
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231639 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231639
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
    var_19 = ((/* implicit */signed char) max((var_19), (((/* implicit */signed char) ((unsigned char) ((unsigned short) min((var_18), (((/* implicit */unsigned char) var_6)))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (signed char i_3 = 0; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned short) arr_9 [(unsigned char)2] [i_1 - 2] [i_2] [i_3]);
                            arr_12 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */signed char) ((((((((/* implicit */int) arr_7 [i_1])) / (((/* implicit */int) arr_1 [i_3])))) << (((((((/* implicit */int) var_7)) ^ (((/* implicit */int) var_4)))) - (59))))) << (((((((/* implicit */_Bool) (-(arr_11 [i_0] [i_0] [i_0] [(unsigned char)1] [(unsigned char)12] [i_0])))) ? (((((/* implicit */int) (unsigned char)226)) | (((/* implicit */int) var_17)))) : (((/* implicit */int) max((((/* implicit */unsigned short) var_11)), (var_17)))))) - (2019)))));
                            /* LoopSeq 1 */
                            for (short i_4 = 0; i_4 < 13; i_4 += 2) 
                            {
                                var_21 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_0] [i_4] [i_1 - 1] [i_3] [i_4])) : (((/* implicit */int) arr_13 [i_0] [i_1] [i_1 - 1] [i_3] [i_1]))))) ? (((/* implicit */int) (unsigned char)226)) : ((+(((/* implicit */int) arr_9 [i_1 + 1] [i_1 - 1] [i_1 - 2] [i_1 - 1]))))));
                                arr_15 [i_0] [i_0] [i_0] [i_3] [(unsigned char)7] [i_3] = ((signed char) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) (unsigned char)92))))) * (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)29))) / (var_10)))));
                                arr_16 [(unsigned char)0] [i_1] [i_2] [(unsigned short)3] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_14 [i_1 - 1] [(unsigned short)0] [(signed char)10] [i_1 - 1] [i_1])) + (((/* implicit */int) arr_14 [i_1 - 1] [(unsigned char)8] [(short)12] [i_1 - 1] [(unsigned char)12]))));
                                var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)30))))) && (((/* implicit */_Bool) ((((/* implicit */int) ((arr_10 [i_0] [i_0] [12ULL] [i_3] [i_4] [i_2]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) * (((/* implicit */int) var_5))))))))));
                                var_23 = ((/* implicit */unsigned short) var_4);
                            }
                            var_24 = ((/* implicit */unsigned short) ((((((/* implicit */int) ((unsigned short) arr_1 [i_0]))) != (((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min((((((/* implicit */_Bool) (signed char)-7)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)216))) : (arr_4 [i_0] [i_1 - 1] [i_3]))), (var_0))) : (((/* implicit */unsigned int) max((((/* implicit */int) (unsigned char)166)), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_13 [i_0] [i_0] [i_0] [i_2] [8ULL])) : (((/* implicit */int) (unsigned char)30)))))))));
                        }
                    } 
                } 
                arr_17 [i_0] = ((/* implicit */signed char) ((unsigned long long int) min((arr_4 [i_1 - 1] [i_1 - 2] [i_1]), (arr_4 [i_1 - 1] [i_1 - 1] [(unsigned short)5]))));
                var_25 += ((/* implicit */unsigned int) min(((~(((/* implicit */int) var_17)))), (((/* implicit */int) arr_0 [i_1 - 1]))));
                /* LoopNest 2 */
                for (short i_5 = 0; i_5 < 13; i_5 += 4) 
                {
                    for (unsigned short i_6 = 0; i_6 < 13; i_6 += 4) 
                    {
                        {
                            var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) arr_19 [i_0] [i_0] [i_0] [i_0]))));
                            arr_22 [(short)8] [i_5] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) (+(7U)))) >= (((((((/* implicit */_Bool) var_18)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) << (((((/* implicit */int) arr_9 [i_1 - 1] [i_1 + 1] [(unsigned char)1] [i_6])) - (200)))))));
                            /* LoopSeq 4 */
                            for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
                            {
                                var_27 -= ((/* implicit */short) (~(max((((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) arr_19 [i_1] [i_1] [(signed char)0] [i_1]))))), (((((/* implicit */_Bool) (unsigned char)226)) ? (((/* implicit */int) arr_8 [(unsigned char)12] [i_1] [i_0])) : (((/* implicit */int) var_11))))))));
                                var_28 = ((/* implicit */unsigned char) ((arr_10 [i_0] [i_0] [i_1 - 2] [i_5] [i_0] [i_7]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))));
                            }
                            for (short i_8 = 0; i_8 < 13; i_8 += 3) 
                            {
                                arr_29 [i_0] [i_5] [i_6] [i_8] = ((/* implicit */unsigned char) (~(((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_8] [i_6] [i_5] [i_0])))))));
                                var_29 += ((/* implicit */signed char) min((min((arr_11 [i_1 - 1] [(signed char)4] [i_1 - 1] [i_1] [i_1 + 1] [i_1 - 2]), (arr_11 [i_1 - 2] [i_1] [i_1 - 2] [i_1] [i_1 + 1] [i_1 + 1]))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)30)) < (((/* implicit */int) (unsigned char)33)))))));
                                arr_30 [i_8] [i_8] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)33)) ? (((/* implicit */int) (unsigned char)52)) : (((/* implicit */int) (unsigned char)222))))))));
                            }
                            for (short i_9 = 1; i_9 < 11; i_9 += 2) 
                            {
                                arr_34 [i_0] [i_0] = ((/* implicit */unsigned long long int) (unsigned char)31);
                                var_30 = ((/* implicit */unsigned char) ((((/* implicit */int) ((signed char) arr_3 [i_9]))) / (((/* implicit */int) min((((/* implicit */unsigned char) arr_3 [i_0])), (arr_19 [(unsigned short)4] [i_1] [i_1 - 2] [(signed char)5]))))));
                                arr_35 [(unsigned char)10] [i_1] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) (unsigned char)169)) ? (min((arr_6 [i_6]), (((/* implicit */unsigned long long int) arr_18 [i_0] [i_5] [(unsigned char)0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                                var_31 = ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */unsigned char) arr_3 [i_1 - 1])), (arr_18 [(short)12] [i_9 + 1] [i_1 - 1])))) <= ((~(((/* implicit */int) arr_1 [i_0]))))));
                            }
                            for (signed char i_10 = 0; i_10 < 13; i_10 += 4) 
                            {
                                arr_38 [(unsigned char)10] = ((/* implicit */unsigned short) min((((/* implicit */int) ((unsigned char) arr_28 [(signed char)9] [(signed char)9] [(signed char)9]))), ((~(((/* implicit */int) arr_28 [i_0] [i_0] [i_0]))))));
                                var_32 = arr_14 [i_10] [i_0] [i_5] [i_1] [i_0];
                                var_33 = ((/* implicit */unsigned long long int) ((unsigned int) (~(arr_6 [i_10]))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) var_10))) ? (((/* implicit */unsigned long long int) var_0)) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_1)))) - (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_1)))))));
    var_35 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_4))));
    var_36 = ((/* implicit */short) min((var_36), (((/* implicit */short) (((~(min((((/* implicit */unsigned int) var_14)), (var_0))))) >> (((((((/* implicit */int) (short)-9338)) % (((((/* implicit */int) (signed char)-9)) ^ (((/* implicit */int) (unsigned char)225)))))) + (238))))))));
}
