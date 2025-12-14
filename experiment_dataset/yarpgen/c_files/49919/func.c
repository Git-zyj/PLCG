/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49919
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49919 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49919
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
    var_10 = ((/* implicit */long long int) var_9);
    /* LoopSeq 1 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) (-((~(var_1))))))));
        var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_1 [i_0] [i_0])) + (2147483647))) << (((((/* implicit */int) arr_0 [i_0] [i_0])) - (14436)))))) : (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (var_0)))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            var_13 -= ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_1])));
            /* LoopSeq 2 */
            for (long long int i_2 = 2; i_2 < 13; i_2 += 1) /* same iter space */
            {
                arr_7 [i_0] [i_0] = ((/* implicit */int) arr_6 [i_2] [i_1] [i_2 - 1]);
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1] [i_2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((var_1) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_1]))))))));
                /* LoopSeq 1 */
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    var_15 = ((/* implicit */long long int) ((((/* implicit */int) arr_6 [(signed char)2] [i_1] [i_2 + 1])) ^ ((-(arr_9 [i_2] [i_1] [i_2] [i_3] [i_1])))));
                    var_16 -= ((/* implicit */short) (-(((((/* implicit */_Bool) arr_6 [i_0] [i_2 - 2] [i_3])) ? (arr_5 [(unsigned char)10] [i_1] [i_2 + 1] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
                    var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((var_6) <= (arr_9 [i_0] [i_0] [i_1] [i_2] [i_0]))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 1; i_4 < 10; i_4 += 4) 
                    {
                        var_18 = ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0] [i_1])))))));
                        var_19 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (((arr_5 [4LL] [i_3] [i_2] [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2])))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((long long int) arr_12 [i_2 - 1] [i_2 - 1] [i_4 + 3])))));
                        var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)41512))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1] [i_3])) ? (((/* implicit */int) var_7)) : (arr_11 [i_0] [i_1] [i_2] [i_3] [i_3] [i_3] [i_4 + 3]))) : (((arr_9 [i_0] [i_1] [i_4] [i_3] [i_4 + 4]) / (((/* implicit */int) arr_6 [i_1] [i_3] [i_4]))))));
                    }
                }
                var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */int) arr_2 [7])) >= (((/* implicit */int) var_8))))) >> (((arr_3 [i_0] [i_1]) - (631618940))))))));
                var_23 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) var_9)) : (var_0)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) > (var_1))))) : (var_0)));
            }
            for (long long int i_5 = 2; i_5 < 13; i_5 += 1) /* same iter space */
            {
                var_24 = ((/* implicit */int) max((var_24), ((~(((/* implicit */int) ((short) arr_0 [12ULL] [i_0])))))));
                arr_15 [i_0] [i_1] [i_5 - 1] [i_5] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_9 [i_0] [i_0] [i_0] [i_0] [i_0]) ^ (var_6))))));
                /* LoopSeq 3 */
                for (unsigned int i_6 = 2; i_6 < 12; i_6 += 2) 
                {
                    var_25 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_6 + 1] [i_1] [i_6 + 1] [i_6] [i_6] [i_6])))))) > (((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2)))));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 3; i_7 < 12; i_7 += 3) 
                    {
                        var_26 = ((/* implicit */int) var_8);
                        var_27 = ((/* implicit */unsigned long long int) (~((+(var_9)))));
                    }
                }
                for (unsigned char i_8 = 0; i_8 < 14; i_8 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_9 = 1; i_9 < 11; i_9 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned int) (+(var_6)));
                        var_29 = ((/* implicit */unsigned long long int) min((var_29), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_6 [i_0] [i_0] [i_8])))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))))))));
                        arr_24 [i_0] [i_9 + 2] = ((/* implicit */int) ((_Bool) -1818554941));
                    }
                    var_30 ^= (((+(((/* implicit */int) var_4)))) ^ (((/* implicit */int) var_4)));
                }
                for (unsigned long long int i_10 = 2; i_10 < 12; i_10 += 4) 
                {
                    var_31 = ((/* implicit */long long int) ((unsigned short) arr_16 [i_0] [i_10 + 2] [i_10] [i_10 + 1] [i_10 + 1] [i_1]));
                    var_32 = (~(((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_4 [i_1] [i_1])) : (((/* implicit */int) arr_14 [(short)5])))));
                }
                var_33 = ((/* implicit */int) (+(arr_26 [i_5 + 1] [i_5 - 1] [i_5 - 2] [i_5 - 2])));
            }
            arr_27 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_3 [i_0] [i_1]) <= (((/* implicit */int) var_4)))))) & ((~(var_1)))));
        }
        /* LoopNest 2 */
        for (short i_11 = 0; i_11 < 14; i_11 += 4) 
        {
            for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) 
            {
                {
                    arr_33 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11])) ? (((/* implicit */int) arr_13 [i_11] [i_0] [i_12 - 1] [i_11])) : (var_9)))) & (((arr_18 [i_12] [i_12 - 1] [i_12] [i_11] [i_11] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                    arr_34 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_6 [i_11] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (unsigned int i_13 = 1; i_13 < 13; i_13 += 1) 
                    {
                        for (short i_14 = 3; i_14 < 13; i_14 += 1) 
                        {
                            {
                                arr_42 [i_14] [i_13] [i_13 - 1] [i_12] [i_11] [i_13] [i_0] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((-8359648265292005164LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)24023)))))) ^ ((-(arr_30 [i_14] [i_12] [i_11] [i_0])))));
                                var_34 = ((/* implicit */signed char) ((((/* implicit */int) ((unsigned char) arr_31 [i_0] [i_11] [i_12] [i_11]))) <= (((((/* implicit */int) var_8)) << (((var_9) + (1524744536)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    var_35 = ((/* implicit */unsigned long long int) max((var_35), (((/* implicit */unsigned long long int) var_8))));
    var_36 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) << (((((/* implicit */int) ((short) ((short) var_4)))) - (65)))));
    var_37 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */int) var_7)) : (((((((/* implicit */int) var_5)) | (var_6))) | ((+(((/* implicit */int) var_4))))))));
}
