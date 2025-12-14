/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206449
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206449 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206449
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
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned short i_1 = 4; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 1; i_3 < 15; i_3 += 1) 
                    {
                        var_11 = ((/* implicit */unsigned int) min(((unsigned short)44536), (((unsigned short) 1707209670))));
                        arr_9 [i_0] [i_2] [i_1] [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)21009))) * (((((unsigned long long int) var_1)) / (((/* implicit */unsigned long long int) (-(var_4))))))));
                        var_12 = ((/* implicit */unsigned char) arr_0 [i_0] [i_1 - 1]);
                    }
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 2) /* same iter space */
                    {
                        var_13 = ((/* implicit */unsigned short) max((var_13), (((/* implicit */unsigned short) (_Bool)0))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_5 = 3; i_5 < 14; i_5 += 4) 
                        {
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((((/* implicit */int) arr_3 [i_4] [i_5 - 1])) ^ (((/* implicit */int) (unsigned short)63143)))))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1 - 3] [i_1 - 1] [i_5 - 2] [i_0]))) : (var_4)));
                        }
                    }
                    for (unsigned char i_6 = 0; i_6 < 16; i_6 += 2) /* same iter space */
                    {
                        var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) (~(((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (signed char i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_17 -= ((/* implicit */unsigned short) (+(arr_18 [i_0] [i_1 - 4] [4] [i_6] [i_6] [i_6])));
                            var_18 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_16 [i_1] [i_6] [i_2] [i_1]))));
                            var_19 = ((/* implicit */signed char) max((var_19), (((signed char) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_2] [i_6])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_0] [i_1] [i_0] [i_6] [i_6]))))))));
                        }
                        var_20 = ((int) (-((~(((/* implicit */int) (unsigned short)20444))))));
                    }
                    arr_20 [i_0] [i_1] [i_0] = ((/* implicit */int) ((((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */long long int) arr_10 [i_1 - 2] [3] [i_1 - 2] [i_0])))) == (((/* implicit */long long int) ((/* implicit */int) ((-1707209640) == (((/* implicit */int) var_5))))))));
                    var_21 = ((/* implicit */signed char) min((((((/* implicit */_Bool) var_2)) ? (arr_15 [i_1] [i_1 - 3] [i_1] [i_1 - 4]) : (arr_15 [i_0] [i_1 + 1] [i_1] [i_1 + 1]))), (((((/* implicit */int) var_7)) | (((/* implicit */int) (short)21360))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (unsigned int i_8 = 3; i_8 < 13; i_8 += 3) 
    {
        for (short i_9 = 0; i_9 < 15; i_9 += 3) 
        {
            for (unsigned char i_10 = 0; i_10 < 15; i_10 += 4) 
            {
                {
                    var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((max((arr_6 [i_10] [i_10]), (((16777215LL) == (((/* implicit */long long int) ((/* implicit */int) (signed char)0))))))) ? (min((1707209670), (((/* implicit */int) (unsigned short)65535)))) : (((((/* implicit */int) arr_22 [i_10])) * (((/* implicit */int) var_8)))))))));
                    var_23 = min((((((/* implicit */_Bool) (unsigned char)3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_10] [i_8 + 2] [i_10] [i_10])) ? (((/* implicit */int) arr_19 [i_8] [i_8] [i_8 + 2] [i_8] [i_8])) : (arr_15 [i_8] [i_8 - 1] [i_8] [i_10])))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_11 = 0; i_11 < 15; i_11 += 3) 
                    {
                        var_24 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_8 + 2] [i_8 - 2] [i_8 - 3] [i_8 + 2])) * (((((/* implicit */int) var_1)) / (-1282575812)))));
                        var_25 |= ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_8 [i_8 - 1])) : (((/* implicit */int) (unsigned short)51952)));
                    }
                    for (unsigned char i_12 = 0; i_12 < 15; i_12 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)7)), (2147483647)));
                        arr_33 [i_12] [i_8] [i_8] [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_8 - 3])), (var_4)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) 4393608075330100123ULL)))) : (((((/* implicit */_Bool) var_1)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_8 + 1] [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8])))))));
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_13 = 0; i_13 < 13; i_13 += 2) 
    {
        var_27 = ((/* implicit */long long int) min((var_27), (((/* implicit */long long int) ((var_3) >> (((arr_1 [i_13]) + (1168952912))))))));
        /* LoopNest 2 */
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_28 -= ((/* implicit */unsigned long long int) var_8);
                    var_29 = ((/* implicit */int) (+(var_6)));
                }
            } 
        } 
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((((/* implicit */_Bool) -4739225781130518821LL)) ? (4739225781130518820LL) : (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) max((((/* implicit */short) (unsigned char)239)), ((short)-27092))))) ? (var_3) : ((-(((/* implicit */int) var_8))))));
}
