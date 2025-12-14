/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189634
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189634 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189634
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
    for (int i_0 = 3; i_0 < 17; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 3) 
        {
            for (unsigned char i_2 = 4; i_2 < 16; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (unsigned int i_4 = 1; i_4 < 17; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [(unsigned short)1] [i_2] [i_1] [i_4] [i_2] = ((/* implicit */unsigned short) var_3);
                                arr_13 [i_4 - 1] [i_3] [i_2] [i_3] [i_0 + 1] |= ((/* implicit */unsigned long long int) min(((unsigned short)5796), (((/* implicit */unsigned short) (short)-32762))));
                            }
                        } 
                    } 
                    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((var_9) & (((((/* implicit */_Bool) var_11)) ? (arr_11 [(short)17] [i_1] [i_1] [i_1] [i_2] [i_1]) : (932898191))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -414837281)) || (((/* implicit */_Bool) 4294967293U))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned short i_5 = 2; i_5 < 14; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            {
                var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)138)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_1), (((/* implicit */unsigned short) var_11)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) * (var_7))))) * (((((arr_8 [i_6] [i_6] [(short)6] [i_6]) * (arr_14 [i_5 - 1]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)3)))))))))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 2) 
                    {
                        {
                            var_18 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (unsigned short)65535)))) ^ (((((/* implicit */_Bool) arr_8 [i_5] [i_5] [i_5] [i_5 + 1])) ? (((/* implicit */int) var_11)) : (var_3)))));
                            var_19 = (+(max((((((/* implicit */unsigned long long int) 2147483632)) * (var_12))), (arr_5 [i_5 - 1] [i_5]))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (short i_9 = 2; i_9 < 14; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 12; i_10 += 4) 
                    {
                        {
                            var_20 -= ((/* implicit */unsigned short) ((short) ((((/* implicit */int) (unsigned short)65520)) - (((/* implicit */int) arr_24 [i_5 + 1] [i_5 + 1] [i_10 + 3] [i_10])))));
                            var_21 = ((/* implicit */short) max((var_6), (((/* implicit */unsigned int) ((unsigned char) var_2)))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_11 = 2; i_11 < 16; i_11 += 3) 
    {
        for (unsigned short i_12 = 3; i_12 < 15; i_12 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned short i_13 = 0; i_13 < 18; i_13 += 3) 
                {
                    for (unsigned short i_14 = 0; i_14 < 18; i_14 += 3) 
                    {
                        for (unsigned int i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_22 = ((/* implicit */short) min((((/* implicit */unsigned int) arr_40 [i_11] [i_11 - 1] [i_13] [i_13] [i_12 - 3])), (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_35 [i_11] [i_12] [i_13] [i_12] [5ULL] [i_15])), ((unsigned short)40427)))))))));
                                var_23 = ((max((((/* implicit */unsigned long long int) (unsigned char)238)), (((unsigned long long int) (unsigned char)109)))) >> (((((((/* implicit */_Bool) 11328772380725846487ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32762))) : (1763389708U))) - (32726U))));
                                var_24 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (+(((/* implicit */int) (short)-4181))))) ? (((var_3) - (var_5))) : (((((/* implicit */int) var_1)) / (((/* implicit */int) var_14)))))) == (((((/* implicit */_Bool) ((var_5) + (((/* implicit */int) (short)-32753))))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_6 [i_12] [10] [i_15]))))) : (var_5)))));
                                arr_41 [i_11] [i_12] [i_13] [i_12] [i_12 + 1] [i_11] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)3)) ? ((~(((/* implicit */int) (short)-13744)))) : (max((((((/* implicit */int) (short)-32756)) & (((/* implicit */int) (short)4180)))), (2147483630)))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 18; i_16 += 4) 
                {
                    for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
                    {
                        {
                            arr_46 [i_11 + 1] [i_11 + 1] [i_16] [i_11] [i_12] = ((/* implicit */unsigned short) ((unsigned long long int) (+((~(((/* implicit */int) var_8)))))));
                            arr_47 [i_11] [i_11 - 2] [i_17] [i_11] [1ULL] = (((~(var_4))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-4))) & (arr_5 [i_17] [i_11]))));
                            var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (((unsigned long long int) (unsigned char)32)))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_18 = 0; i_18 < 24; i_18 += 4) 
    {
        for (unsigned long long int i_19 = 1; i_19 < 22; i_19 += 1) 
        {
            {
                var_26 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                /* LoopNest 2 */
                for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                {
                    for (short i_21 = 2; i_21 < 22; i_21 += 2) 
                    {
                        {
                            arr_57 [i_21 + 1] [i_20] [i_19] [i_18] [i_18] = ((/* implicit */unsigned long long int) ((var_9) <= (((/* implicit */int) var_14))));
                            var_27 = ((/* implicit */unsigned long long int) min((var_27), (max(((-(arr_54 [i_18] [i_19] [i_19] [i_20 + 1] [10ULL]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_7) / (((/* implicit */unsigned int) var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)42)) ? (((/* implicit */int) arr_55 [i_18] [i_19] [i_19 + 1] [i_21 + 2])) : (((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) var_10)) ? (arr_50 [i_18] [i_18] [i_18]) : (((/* implicit */unsigned int) var_9)))))))))));
                            arr_58 [(unsigned short)14] [i_19] [i_20] [i_19] = ((/* implicit */int) ((((/* implicit */unsigned long long int) 1)) ^ (12ULL)));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */short) (unsigned char)14)), ((short)1))))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (2147483632)))) / (var_6))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
