/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240547
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
    var_14 -= ((/* implicit */long long int) var_9);
    var_15 = (-(((-6430220642217760277LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)9))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 13; i_0 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 11; i_1 += 2) 
        {
            var_16 = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((arr_2 [i_1 + 2] [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 - 2] [i_1 + 2] [i_1 + 1]))))));
            arr_4 [4U] [i_0] [i_0] = ((/* implicit */long long int) (+(((((/* implicit */int) ((((/* implicit */_Bool) arr_3 [i_0])) || (((/* implicit */_Bool) 2182958039U))))) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)108)) < (((/* implicit */int) (signed char)9)))))))));
        }
        /* vectorizable */
        for (unsigned char i_2 = 3; i_2 < 12; i_2 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_2 - 1] [i_2 - 1]))) - (arr_8 [i_2] [i_0] [i_2 - 2])));
            var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) arr_8 [i_0] [i_0] [2ULL]))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_2 - 2] [i_2 - 3] [i_2 - 2]))) : (9223372036854775807LL));
            arr_9 [i_0] [i_0] [i_2] = (((((+(((/* implicit */int) (short)-9368)))) + (2147483647))) << (((((((/* implicit */_Bool) -8730567393055112376LL)) ? (((/* implicit */int) (unsigned short)30)) : (((/* implicit */int) (signed char)-2)))) - (30))));
        }
        var_19 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_0] [i_0]), (arr_2 [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) (~(70368744169472LL)))) : (min((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_2 [8ULL] [i_0] [i_0]))))));
        var_20 += (-(((arr_6 [i_0] [i_0] [2U]) * (((/* implicit */unsigned long long int) arr_1 [i_0])))));
    }
    for (int i_3 = 0; i_3 < 13; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 13; i_4 += 4) 
        {
            var_21 |= ((/* implicit */long long int) ((signed char) ((((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)(-127 - 1)))))) * (arr_1 [i_3]))));
            var_22 = ((/* implicit */unsigned int) min((var_22), (max((min((arr_8 [i_3] [i_4] [i_3]), (arr_8 [i_3] [i_4] [i_4]))), (((arr_8 [i_3] [i_4] [i_3]) | (arr_8 [i_3] [i_4] [i_4])))))));
            arr_17 [i_4] &= ((((/* implicit */_Bool) (+(arr_0 [i_3])))) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (9223372036854775802LL));
        }
        for (unsigned int i_5 = 2; i_5 < 10; i_5 += 4) 
        {
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) ((((((/* implicit */_Bool) (signed char)127)) || ((_Bool)1))) ? (min((((((/* implicit */long long int) arr_8 [i_3] [i_5] [i_5 - 2])) + (var_11))), (((/* implicit */long long int) arr_7 [i_3] [i_5 - 2])))) : (((long long int) ((_Bool) (short)32767))))))));
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 13; i_6 += 4) 
            {
                /* LoopSeq 3 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    arr_25 [i_7] [i_5] [i_5] [i_3] |= ((((/* implicit */unsigned long long int) min((9223372036854775802LL), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_6] [i_5] [i_6])))))))) < ((+(((unsigned long long int) (unsigned char)102)))));
                    var_24 = ((/* implicit */unsigned char) ((int) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-20208))))) + (((/* implicit */int) ((short) -3829615156663672675LL))))));
                    var_25 = ((/* implicit */unsigned int) ((int) (short)-32747));
                    var_26 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2419307732699761316LL)) ? (arr_20 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512)))))) ? (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)30))) - (var_4))) : (((/* implicit */long long int) (+(arr_14 [i_3] [1])))))) + (((((/* implicit */_Bool) 2795031844U)) ? (((/* implicit */long long int) arr_14 [i_7] [i_5 + 3])) : (arr_18 [i_3] [i_6] [i_7])))));
                }
                for (unsigned long long int i_8 = 2; i_8 < 10; i_8 += 3) 
                {
                    var_27 = ((/* implicit */unsigned int) 26106304);
                    arr_28 [i_3] [i_3] [i_5 - 2] [i_6] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned int) arr_22 [i_3] [i_3] [i_3] [i_3])), (max((((/* implicit */unsigned int) arr_26 [i_3] [i_3])), (var_12)))));
                    var_28 = ((/* implicit */signed char) (!((((_Bool)0) || (((/* implicit */_Bool) 18446744073709551615ULL))))));
                    arr_29 [8LL] [i_5] [i_3] [8LL] [i_5] = ((/* implicit */_Bool) arr_13 [i_3] [i_5 + 3]);
                }
                for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                {
                    var_29 = min((((/* implicit */int) arr_11 [i_3])), ((-(((/* implicit */int) (unsigned char)148)))));
                    arr_32 [i_6] [(unsigned short)10] [i_6] &= ((/* implicit */long long int) ((((/* implicit */_Bool) min((arr_1 [i_6]), (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_3] [i_6] [i_9 + 3]))) - (var_12)))))) ? (((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_9]))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5] [(signed char)1]))) + (1977589520U))))) : ((+((-(arr_1 [i_6])))))));
                    arr_33 [i_3] [i_5] [i_6] [i_9 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)9)) && (((((/* implicit */_Bool) (unsigned char)153)) && ((!(((/* implicit */_Bool) (short)2))))))));
                    var_30 = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) arr_26 [i_3] [i_9 + 2])) ? (arr_26 [i_3] [i_9 - 2]) : (arr_26 [i_3] [i_9 - 4]))));
                }
                var_31 = ((/* implicit */long long int) ((unsigned char) (~(arr_0 [i_5 + 1]))));
                var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned char) (_Bool)1))) >> (((((/* implicit */int) (signed char)-119)) + (124))))))));
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_10 = 0; i_10 < 0; i_10 += 1) 
        {
            arr_36 [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((211106232532992ULL) | (arr_6 [i_3] [i_3] [i_3])))) ? ((~(((((arr_23 [i_3] [i_10 + 1]) + (2147483647))) << (((((((/* implicit */int) arr_31 [2LL] [i_3] [2LL] [i_10 + 1] [2LL])) + (18277))) - (4))))))) : (((((/* implicit */_Bool) (unsigned char)103)) ? (((/* implicit */int) (unsigned short)9841)) : (((/* implicit */int) (unsigned char)116))))));
            var_33 *= arr_20 [(short)2] [i_10];
            var_34 = (~(((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (arr_20 [i_3] [i_10]) : (((/* implicit */long long int) 689311248)))))))));
        }
        arr_37 [i_3] [i_3] = ((arr_24 [i_3] [i_3]) ^ (((/* implicit */long long int) ((((65528U) + (133955584U))) + (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43035)))))));
    }
    var_35 = ((/* implicit */int) min((var_35), (((/* implicit */int) ((unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_9))) - (4808666656289141658LL)))) <= (var_10)))))));
}
