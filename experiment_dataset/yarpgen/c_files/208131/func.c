/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208131
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
    for (unsigned short i_0 = 2; i_0 < 23; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) var_11);
        var_14 = ((/* implicit */_Bool) (+(((/* implicit */int) max((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)202)) && (((/* implicit */_Bool) var_10))))), ((unsigned short)32429))))));
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 20; i_1 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                var_15 = ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_0 [i_1 + 1] [i_0 + 1]))) ? (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_1] [i_1 + 2] [(unsigned short)5] [i_1]))) : (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) (unsigned char)60)))))));
                var_16 -= ((/* implicit */unsigned char) var_10);
                var_17 = ((/* implicit */long long int) (+(((((/* implicit */int) var_1)) & (((var_4) & (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
                arr_8 [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((arr_0 [i_1 - 1] [i_1 - 1]) && (((/* implicit */_Bool) min((((/* implicit */int) arr_0 [i_1] [i_0])), (var_13)))))))) > (((long long int) arr_4 [i_0] [i_1] [i_2])));
            }
            var_18 += ((/* implicit */long long int) max((18446744073709551587ULL), (((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */int) arr_7 [i_1] [i_0] [(unsigned short)3] [i_0])) != (((/* implicit */int) var_11))))))));
            var_19 -= ((/* implicit */unsigned short) (!(((((/* implicit */_Bool) arr_4 [12U] [12U] [16ULL])) && (((/* implicit */_Bool) ((unsigned int) arr_3 [i_0] [i_0 + 1] [i_1])))))));
            arr_9 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */int) ((arr_3 [i_1 + 1] [i_1 + 4] [i_1 + 4]) >= (arr_3 [i_1 + 4] [i_1 + 3] [i_1 + 2])))) << (((max((arr_3 [i_1 + 3] [i_1 + 1] [i_1 + 3]), (arr_3 [i_1 + 2] [i_1 + 4] [i_1 + 4]))) - (6493869142232056362ULL)))));
        }
        for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
        {
            var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) ((max((((/* implicit */int) ((unsigned char) arr_5 [i_0] [(short)6] [i_3]))), (((((/* implicit */_Bool) var_13)) ? (var_12) : (var_12))))) ^ (((/* implicit */int) ((((/* implicit */int) max(((unsigned char)148), (((/* implicit */unsigned char) var_10))))) > (arr_11 [(signed char)14] [(signed char)14] [4LL])))))))));
            arr_12 [i_0] [i_0] = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(var_4)))) ? (max((((/* implicit */unsigned int) var_2)), (2372143570U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_3)) >= (arr_3 [i_0] [i_3] [i_3])))))))));
            var_21 = ((((max((((/* implicit */long long int) var_12)), (arr_5 [i_0 - 2] [i_0] [i_3 - 1]))) ^ (((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_3 - 1] [8LL])) * (((/* implicit */int) var_8))))))) < (((/* implicit */long long int) ((((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0 + 1])) % (((/* implicit */int) arr_6 [i_0] [i_0 - 2] [i_0]))))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 24; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (long long int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        var_22 ^= 9223372036854775797LL;
                        arr_23 [i_0] [i_0] [i_4] [i_6] = ((/* implicit */unsigned short) 7766185173357395406LL);
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) 15925581202269087719ULL)) ? ((+(((/* implicit */int) arr_18 [i_5] [i_6] [i_5] [i_5])))) : (((/* implicit */int) arr_7 [i_0 - 1] [i_4] [9LL] [i_6])))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 21; i_7 += 1) 
            {
                for (signed char i_8 = 2; i_8 < 23; i_8 += 1) 
                {
                    {
                        arr_30 [i_0] [i_4] [i_8] [i_7 - 2] [i_4] = ((/* implicit */unsigned char) var_5);
                        /* LoopSeq 1 */
                        for (unsigned short i_9 = 0; i_9 < 24; i_9 += 3) 
                        {
                            var_24 &= ((/* implicit */unsigned long long int) ((unsigned char) arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_0 + 1]));
                            arr_33 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_11 [i_0] [i_8] [i_0]);
                            arr_34 [i_0] [i_4] [i_7] [(short)10] [i_0] &= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_17 [10ULL] [10ULL] [i_7 - 1])) || (((/* implicit */_Bool) var_13)))) && (((var_0) < (((/* implicit */long long int) ((/* implicit */int) var_2)))))));
                            arr_35 [i_0] [(unsigned short)2] [i_0] [i_0 - 2] [i_0] &= arr_32 [i_8 + 1] [i_8 + 1] [i_7 - 2];
                        }
                        arr_36 [i_0] [i_4] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_24 [i_0] [i_0 - 1] [i_0] [i_0])) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))) == (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_8] [i_4])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_10 = 0; i_10 < 24; i_10 += 3) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    {
                        arr_42 [i_0 - 2] [i_0] [i_0 - 1] [4LL] |= ((/* implicit */int) ((arr_40 [i_0 + 1] [i_0 - 2] [22U] [i_0] [i_0 - 2]) > (((/* implicit */unsigned long long int) arr_21 [i_0 - 1] [i_0] [i_0] [i_0] [i_0]))));
                        arr_43 [12LL] [i_11] &= ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_5 [i_0] [10ULL] [i_10])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_0] [(unsigned char)10] [i_0] [i_11]))) : (var_5)))));
                        var_25 = ((/* implicit */short) (unsigned short)55287);
                        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_13 [i_0 + 1] [i_0 - 1])) ? (0ULL) : (((/* implicit */unsigned long long int) arr_13 [i_0 - 1] [i_0 + 1]))));
                    }
                } 
            } 
        }
        arr_44 [i_0] = ((/* implicit */long long int) arr_19 [i_0] [i_0 - 1] [i_0] [i_0]);
    }
    /* vectorizable */
    for (unsigned short i_12 = 1; i_12 < 20; i_12 += 1) 
    {
        arr_48 [i_12] [i_12 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_12] [i_12] [i_12] [i_12 - 1] [i_12])) && (((/* implicit */_Bool) arr_21 [13U] [i_12 + 2] [i_12] [i_12 + 2] [i_12 - 1]))));
        var_27 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_12] [i_12 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [10LL] [i_12] [i_12] [10LL]))) & (var_5)))));
    }
    var_28 = ((/* implicit */_Bool) min((min((((((/* implicit */unsigned int) var_13)) ^ (var_9))), (var_5))), (((/* implicit */unsigned int) var_4))));
    var_29 = (+(((((((/* implicit */unsigned int) ((/* implicit */int) var_11))) * (var_5))) * (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_11))))))));
}
