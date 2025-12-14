/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20687
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20687 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20687
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
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                for (long long int i_3 = 0; i_3 < 17; i_3 += 3) 
                {
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_3]))) ? (((/* implicit */int) min((arr_9 [i_2] [i_1]), (arr_9 [i_2] [i_3])))) : (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) 524287))))))));
                        arr_11 [i_0] [i_1] [i_2] [i_2] [i_3] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~((-(((/* implicit */int) (unsigned short)45954))))))), (min((arr_4 [i_1] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]))))));
                    }
                } 
            } 
        } 
        arr_12 [i_0] [i_0] = ((/* implicit */short) (-(max((((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_0] [i_0] [i_0])) / (((/* implicit */int) var_18))))), (((-6418274423632816620LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156)))))))));
        var_19 = ((/* implicit */short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_1)) | (((/* implicit */int) arr_3 [i_0] [i_0] [14U]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))) : (91141678U))), (((((/* implicit */_Bool) 9145680722666720571LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3285848243U)))));
    }
    for (unsigned char i_4 = 1; i_4 < 9; i_4 += 4) /* same iter space */
    {
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned int) ((((unsigned long long int) min((((/* implicit */short) arr_2 [(signed char)2] [i_4] [i_4])), ((short)-10260)))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-31820))) ^ (arr_4 [(signed char)11] [i_4] [(signed char)11] [i_4 + 1]))) == (((/* implicit */unsigned long long int) ((arr_6 [i_4] [i_4] [i_4 + 1] [i_4 + 1] [i_4]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_4] [i_4]))))))))))));
        arr_18 [i_4] = ((/* implicit */long long int) var_7);
        /* LoopNest 3 */
        for (unsigned int i_5 = 0; i_5 < 10; i_5 += 1) 
        {
            for (int i_6 = 0; i_6 < 10; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    {
                        arr_28 [i_4] [i_4] = (~(((((/* implicit */int) arr_5 [i_4] [i_4 - 1] [i_4 + 1])) + (((/* implicit */int) (short)24238)))));
                        arr_29 [0ULL] [i_4] [i_6] [0LL] [i_6] = ((/* implicit */int) arr_7 [i_4] [i_4]);
                        var_20 = ((/* implicit */unsigned long long int) min((var_20), ((-((~(4754269542842936949ULL)))))));
                        var_21 *= ((/* implicit */unsigned int) (~(max((((/* implicit */int) var_2)), (arr_21 [i_6] [i_6] [i_4 - 1])))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (short i_8 = 0; i_8 < 10; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                {
                    arr_36 [i_4] = ((/* implicit */unsigned int) arr_16 [i_4]);
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (unsigned short i_11 = 2; i_11 < 9; i_11 += 4) 
                        {
                            {
                                arr_42 [i_4] [i_4] [i_9] [i_4] [i_11] = ((/* implicit */unsigned short) var_9);
                                arr_43 [i_4] [i_4] = ((/* implicit */int) var_8);
                            }
                        } 
                    } 
                    arr_44 [i_4] [1] = ((/* implicit */unsigned long long int) arr_2 [i_4] [i_8] [i_4]);
                    var_22 = ((/* implicit */_Bool) min((((/* implicit */int) max(((short)-8648), (((/* implicit */short) (unsigned char)90))))), (((((((/* implicit */_Bool) arr_19 [i_4] [i_9])) || (((/* implicit */_Bool) -3921383526121034888LL)))) ? (((int) arr_24 [i_4] [i_4] [(short)1])) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_37 [i_9] [i_4] [i_9] [i_9]))))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_12 = 1; i_12 < 9; i_12 += 4) /* same iter space */
    {
        var_23 |= ((/* implicit */long long int) ((_Bool) arr_46 [(short)4]));
        arr_49 [i_12 - 1] [i_12] = ((/* implicit */_Bool) (~((-(((/* implicit */int) arr_2 [(short)14] [(short)14] [(short)14]))))));
    }
    var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) max((max((var_3), (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))))), (((/* implicit */unsigned int) var_6)))))));
}
