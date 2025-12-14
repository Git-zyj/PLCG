/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53585
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53585 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53585
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned char i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        {
                            arr_9 [i_2] [1ULL] [i_3] [(unsigned char)3] [i_0] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((5666070851638879814LL) != (((/* implicit */long long int) ((/* implicit */int) min((var_12), ((unsigned short)54071))))))))));
                            var_18 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_4 [i_1 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)54071))) : (0ULL)))));
                            var_19 = ((/* implicit */unsigned int) ((max((arr_4 [i_1 + 1]), (((/* implicit */int) var_2)))) - (max((((/* implicit */int) (unsigned char)230)), ((+(var_7)))))));
                            arr_10 [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) 1)) : (18393091576058386915ULL))) - (((/* implicit */unsigned long long int) max((1240718280), (var_8))))))) ? (max((max((((/* implicit */int) (unsigned short)54071)), (2147483647))), ((-(((/* implicit */int) var_6)))))) : ((-((-(((/* implicit */int) (unsigned short)20956))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_4 = 3; i_4 < 13; i_4 += 3) 
                {
                    for (long long int i_5 = 3; i_5 < 11; i_5 += 1) 
                    {
                        {
                            var_20 += ((/* implicit */unsigned short) (+(max((((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_15)))), (((((/* implicit */int) (unsigned short)64496)) << (0LL)))))));
                            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) min((((((/* implicit */_Bool) max((24LL), (((/* implicit */long long int) 2842707619U))))) ? (min((((/* implicit */unsigned long long int) 3243872609U)), (53652497651164711ULL))) : (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_15))))))), (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (-16) : (((/* implicit */int) var_13)))), (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (short)-4412)) : (((/* implicit */int) var_6))))))))))));
                            arr_15 [i_4] [i_4] [i_4] [13] = ((/* implicit */int) var_13);
                            arr_16 [i_0] [0] [i_4] [i_0] |= ((/* implicit */long long int) ((max((arr_11 [0] [0] [i_0]), (((/* implicit */int) var_13)))) << ((((+(((/* implicit */int) (signed char)32)))) - (32)))));
                            var_22 = ((/* implicit */unsigned int) min((var_22), (arr_7 [i_0] [i_1] [i_4 - 3] [i_5])));
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) (+(min((((/* implicit */unsigned long long int) arr_6 [i_0] [i_1 - 1] [i_1 - 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)11464))) * (var_17)))))));
                var_24 = ((/* implicit */int) ((((/* implicit */_Bool) min((1445178137U), (1443733258U)))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_13 [i_1 - 1] [i_0] [i_1 - 1] [(signed char)10] [i_1 - 1] [i_1]), (arr_13 [i_1 + 1] [i_0] [i_1 - 1] [(short)12] [i_1] [i_1 + 1]))))) : (max((29LL), (((/* implicit */long long int) arr_13 [i_1 + 1] [i_0] [i_1 - 1] [8U] [8U] [(unsigned char)8]))))));
            }
        } 
    } 
    /* LoopNest 3 */
    for (unsigned char i_6 = 0; i_6 < 22; i_6 += 2) 
    {
        for (int i_7 = 0; i_7 < 22; i_7 += 2) 
        {
            for (unsigned int i_8 = 0; i_8 < 22; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 22; i_9 += 4) 
                    {
                        for (long long int i_10 = 3; i_10 < 20; i_10 += 2) 
                        {
                            {
                                arr_29 [i_6] [i_7] [i_7] [i_7] [i_9] [i_10] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (+(min((var_7), (((/* implicit */int) var_13))))))), (min((((((/* implicit */_Bool) var_15)) ? (2376845773U) : (9U))), (((/* implicit */unsigned int) ((((/* implicit */int) var_2)) / (((/* implicit */int) var_4)))))))));
                                arr_30 [i_10] [(unsigned char)17] [i_8] [2] [i_7] [i_6] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_28 [i_10 - 2] [i_10 - 2] [i_10 - 2] [0U] [i_10])) ? (-30LL) : (((/* implicit */long long int) 1918121523U)))), (((((/* implicit */long long int) (-(((/* implicit */int) var_12))))) / ((+(29LL)))))));
                            }
                        } 
                    } 
                    var_25 = ((/* implicit */unsigned int) max((((/* implicit */long long int) 0U)), (((((/* implicit */_Bool) var_0)) ? (min((0LL), (((/* implicit */long long int) arr_18 [i_7])))) : (((((/* implicit */long long int) var_9)) - (281474976710655LL)))))));
                    arr_31 [i_6] [18] [(unsigned short)19] = ((/* implicit */int) -7LL);
                }
            } 
        } 
    } 
    var_26 *= ((/* implicit */int) min((((/* implicit */unsigned int) ((var_8) == (((((/* implicit */_Bool) var_14)) ? (var_7) : (((/* implicit */int) (unsigned char)160))))))), (((((/* implicit */_Bool) max((-5666070851638879807LL), (((/* implicit */long long int) (unsigned short)0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((var_10), (((/* implicit */unsigned short) var_14)))))) : (((63U) / (((/* implicit */unsigned int) var_7))))))));
    /* LoopNest 3 */
    for (int i_11 = 3; i_11 < 17; i_11 += 2) 
    {
        for (unsigned short i_12 = 2; i_12 < 16; i_12 += 2) 
        {
            for (long long int i_13 = 3; i_13 < 17; i_13 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 2; i_14 < 15; i_14 += 1) 
                    {
                        for (unsigned long long int i_15 = 0; i_15 < 18; i_15 += 3) 
                        {
                            {
                                var_27 = ((/* implicit */int) (((+(var_17))) + (((/* implicit */unsigned long long int) ((/* implicit */int) max((arr_35 [i_11 - 3]), (arr_35 [i_11 - 2])))))));
                                arr_45 [i_15] = (((+(((((/* implicit */unsigned long long int) var_16)) / (var_11))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_40 [(short)8] [(unsigned char)10] [(short)8] [(short)8] [i_14 - 2] [i_15]))))) == (max((var_17), (((/* implicit */unsigned long long int) (short)4411)))))))));
                                arr_46 [i_15] [i_15] [1] [i_12] [1] [i_15] [0] = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_18 [(unsigned char)1])) && (((/* implicit */_Bool) 4294967295U)))))) : (min((((/* implicit */unsigned long long int) var_13)), (var_11)))));
                                arr_47 [i_11] [i_15] [(signed char)9] [i_13] [15LL] [i_11] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(9U)))), (((((/* implicit */_Bool) (unsigned char)240)) ? (((/* implicit */unsigned long long int) 3305604281U)) : (var_11)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) min((var_0), (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) arr_43 [i_11 - 3] [i_13 - 2] [i_14] [i_14 - 2] [i_14] [i_15])) : (((((/* implicit */_Bool) (unsigned short)57485)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)229)))))))));
                            }
                        } 
                    } 
                    var_28 = (+(9223372036854775807LL));
                    var_29 = ((/* implicit */short) 7U);
                }
            } 
        } 
    } 
}
