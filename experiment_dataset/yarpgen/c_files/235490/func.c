/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235490
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
    var_10 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3))))) != (var_2))))) : (min((((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))), (var_9)))));
    var_11 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_8))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 = ((/* implicit */unsigned int) (~(var_1)));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((short) arr_1 [i_0]));
    }
    for (unsigned char i_1 = 4; i_1 < 8; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                for (short i_4 = 2; i_4 < 9; i_4 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            arr_17 [i_1] [i_2] [i_5] [i_4] [i_5] [i_3] [i_2] = ((/* implicit */unsigned char) ((_Bool) arr_13 [(short)9] [(unsigned char)9] [i_3] [i_4 + 2] [i_3]));
                            var_13 ^= ((/* implicit */int) (-(((var_1) ^ (((/* implicit */long long int) var_2))))));
                        }
                        var_14 = ((/* implicit */unsigned int) max((var_14), (((/* implicit */unsigned int) (((+(var_9))) << (((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (!((_Bool)1))))) != (min((((/* implicit */long long int) var_5)), (var_1)))))) - (1))))))));
                    }
                } 
            } 
        } 
        arr_18 [i_1] = ((_Bool) ((((/* implicit */int) var_6)) << (((((((/* implicit */int) var_3)) + (24204))) - (26)))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
        {
            for (int i_7 = 1; i_7 < 10; i_7 += 2) 
            {
                {
                    var_15 = ((/* implicit */short) min((var_15), (((/* implicit */short) (((-(var_1))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_1] [i_6] [i_7 - 1])) : (((/* implicit */int) arr_12 [i_1] [i_6] [i_7 + 1]))))))))));
                    arr_23 [i_6] [i_7] [i_7] [i_1] = ((((/* implicit */_Bool) (~(((long long int) arr_5 [i_1] [10U]))))) || (((/* implicit */_Bool) var_8)));
                    var_16 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((((arr_6 [4] [i_6]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) && (((/* implicit */_Bool) ((var_1) ^ (((/* implicit */long long int) var_0))))))))));
                    arr_24 [i_6] = ((/* implicit */unsigned char) (+(max((((int) var_8)), ((~(var_0)))))));
                }
            } 
        } 
    }
    /* LoopNest 2 */
    for (short i_8 = 4; i_8 < 10; i_8 += 3) 
    {
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            {
                /* LoopNest 3 */
                for (short i_10 = 0; i_10 < 14; i_10 += 1) 
                {
                    for (short i_11 = 3; i_11 < 13; i_11 += 3) 
                    {
                        for (long long int i_12 = 4; i_12 < 11; i_12 += 2) 
                        {
                            {
                                arr_41 [i_8] [(unsigned char)12] = ((/* implicit */unsigned short) max((((arr_40 [i_12 + 3] [i_12 - 1] [i_12] [i_12 + 1] [(short)12]) | (arr_40 [i_12 + 3] [i_12 - 1] [i_12] [i_12 + 1] [i_12]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_8)))))));
                                arr_42 [i_8] [(short)4] [i_8] [i_8] [i_8] [i_8] [(signed char)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((((/* implicit */int) arr_26 [i_12 + 3])) < (((((/* implicit */_Bool) var_2)) ? (var_5) : (var_5)))))) : (((/* implicit */int) var_4))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned char i_13 = 4; i_13 < 13; i_13 += 4) 
                {
                    for (int i_14 = 0; i_14 < 14; i_14 += 2) 
                    {
                        for (unsigned short i_15 = 0; i_15 < 14; i_15 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned char)246)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)52157)) : (var_0)))) : (((long long int) (signed char)-16)))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_51 [i_8] [i_15] [i_13 - 1]) : (((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (var_5)))))))));
                                arr_53 [i_8] [i_8] = ((/* implicit */signed char) (unsigned short)13378);
                                arr_54 [i_8] [i_14] [13] = (i_8 % 2 == 0) ? (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) arr_39 [(signed char)8] [(_Bool)1] [i_13] [i_8] [i_15])) - (42071)))))) ? (((((((/* implicit */int) (signed char)-98)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (24178))) - (5))))) : ((~(((/* implicit */int) var_6)))))), (max((((((/* implicit */_Bool) arr_30 [i_8] [i_9] [i_13] [i_15])) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((((((/* implicit */int) arr_39 [(signed char)8] [(_Bool)1] [i_13] [i_8] [i_15])) - (42071))) + (33336)))))) ? (((((((/* implicit */int) (signed char)-98)) + (2147483647))) << (((((((/* implicit */int) var_3)) + (24178))) - (5))))) : ((~(((/* implicit */int) var_6)))))), (max((((((/* implicit */_Bool) arr_30 [i_8] [i_9] [i_13] [i_15])) ? (((/* implicit */int) (unsigned char)173)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_7)))))));
                                arr_55 [i_8] [i_9] [(signed char)3] [i_14] [i_15] = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_7))) / (var_9)))) ? (((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (unsigned char)174)))) : (((/* implicit */int) var_6))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */long long int) (-(((var_5) / (((/* implicit */int) (unsigned char)252))))))) / (((arr_50 [i_8] [0LL] [i_8] [i_8]) / (((/* implicit */long long int) max((var_5), (((/* implicit */int) var_7)))))))));
            }
        } 
    } 
}
