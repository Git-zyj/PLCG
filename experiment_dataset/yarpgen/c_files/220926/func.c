/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220926
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
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 2; i_2 < 23; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 1; i_3 < 24; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned char) var_4);
                                var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) arr_3 [i_0]))));
                            }
                        } 
                    } 
                    var_15 -= ((/* implicit */unsigned char) ((long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_1])) ? (((/* implicit */unsigned int) -1068265237)) : (arr_3 [i_2 + 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)27112)) : (((/* implicit */int) (unsigned short)25260))))) : (((unsigned long long int) var_4)))));
                    var_16 = ((/* implicit */unsigned long long int) (~(var_9)));
                }
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                var_17 = ((_Bool) ((((/* implicit */int) arr_18 [i_0] [i_1 - 2] [i_5] [i_6] [i_7 + 1])) / (((/* implicit */int) (unsigned short)22277))));
                                arr_23 [i_0] [14] [i_5] = ((/* implicit */short) (signed char)125);
                                var_18 = ((/* implicit */short) min((((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (_Bool)0)), (10775886048919648774ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_4 [i_7])) < (((/* implicit */int) (unsigned short)43259))))))))), ((-(4102285202U)))));
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */_Bool) var_4);
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((17051055818933926676ULL), (((/* implicit */unsigned long long int) -6410460971032724760LL))))) ? (((((/* implicit */_Bool) arr_17 [i_8])) ? (((/* implicit */unsigned long long int) var_2)) : (var_0))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((1068265241) != (((/* implicit */int) var_10))))))))) ? (min(((+(var_4))), (((((/* implicit */_Bool) arr_21 [i_8] [i_1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)86))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_9 [i_1 - 1] [i_1] [i_1] [i_1 - 1] [i_1 + 1] [i_1 - 1]))))));
                    arr_28 [i_0] [i_1] [i_0] = ((/* implicit */short) (+(1446231093)));
                    /* LoopNest 2 */
                    for (long long int i_9 = 0; i_9 < 25; i_9 += 2) 
                    {
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            {
                                var_21 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_9) : (((/* implicit */int) arr_8 [i_0] [(_Bool)1] [i_1 - 1] [i_9] [i_10]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26164))) : ((~(min((((/* implicit */unsigned long long int) (unsigned short)22277)), (var_11)))))));
                                var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 9ULL))));
                            }
                        } 
                    } 
                }
                var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)29723)) ? (((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_0] [i_1 + 1])))))) : ((~(((/* implicit */int) arr_2 [i_0] [i_1]))))));
            }
        } 
    } 
    /* LoopSeq 1 */
    for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
    {
        var_24 ^= max((((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) arr_30 [(signed char)11] [i_11] [i_11])), ((unsigned char)49)))), ((~(((((/* implicit */_Bool) (unsigned short)10249)) ? (18446744073709551593ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)97))))))));
        /* LoopSeq 3 */
        for (int i_12 = 1; i_12 < 8; i_12 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned char i_13 = 3; i_13 < 9; i_13 += 4) 
            {
                for (long long int i_14 = 0; i_14 < 10; i_14 += 4) 
                {
                    for (int i_15 = 0; i_15 < 10; i_15 += 2) 
                    {
                        {
                            arr_44 [i_14] [i_14] [i_14] [i_14] [i_14] = (+(((/* implicit */int) arr_22 [i_11] [i_11] [7] [i_12 + 1] [i_13 - 1] [i_15])));
                            var_25 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_16 [i_12 + 1] [i_12] [i_12] [i_12 + 1] [i_12 + 1] [i_12 - 1])) ^ (((/* implicit */int) arr_16 [i_12 + 1] [i_12] [i_12 + 2] [i_12 + 1] [i_12 + 1] [i_12])))))));
                        }
                    } 
                } 
            } 
            arr_45 [i_12] = ((/* implicit */int) ((((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_31 [i_12] [i_12] [i_11] [i_12] [i_12])) : (var_5))) != (arr_35 [i_12] [i_12 + 2]))) && (((/* implicit */_Bool) arr_11 [i_11] [i_11] [i_11] [i_12] [i_12 + 1] [i_12 - 1]))));
        }
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            var_26 = ((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) min((((/* implicit */unsigned short) arr_4 [i_16])), ((unsigned short)32768))))), ((+(((/* implicit */int) (signed char)-98))))));
            var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((var_1) ? (((/* implicit */int) (unsigned char)226)) : (((/* implicit */int) (_Bool)1)))) >> (((((var_9) << (((((/* implicit */int) (_Bool)1)) - (1))))) - (1913268178)))))) ? (((((/* implicit */_Bool) ((unsigned int) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_11] [i_16]))) : (arr_0 [i_11] [i_16]))) : (((/* implicit */unsigned long long int) min(((~(((/* implicit */int) var_10)))), (((/* implicit */int) arr_9 [i_11] [i_11] [i_11] [i_11] [i_11] [i_16])))))));
        }
        for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
        {
            arr_51 [i_11] [i_17] = ((/* implicit */unsigned char) ((unsigned long long int) -1446231093));
            arr_52 [i_11] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_5), (((/* implicit */int) (_Bool)1)))) / ((-(((/* implicit */int) (unsigned short)13396))))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) min((var_8), (((/* implicit */unsigned char) (_Bool)1))))) | (-1813181166)))) : (max((max((((/* implicit */unsigned long long int) arr_6 [i_11] [i_11] [i_11] [i_11])), (arr_20 [i_17] [i_17] [i_17] [4] [i_17] [(_Bool)1]))), (((unsigned long long int) arr_35 [i_11] [i_11]))))));
        }
    }
}
