/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225779
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225779 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225779
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
    for (signed char i_0 = 2; i_0 < 8; i_0 += 1) 
    {
        var_13 = arr_0 [i_0 - 1] [i_0];
        arr_2 [i_0] [(signed char)1] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((((/* implicit */int) (short)31569)) * (((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 2]))))) | (((((unsigned int) var_7)) * (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 + 2] [i_0 + 1])))))));
        arr_3 [i_0 + 2] [i_0 + 2] = ((/* implicit */unsigned short) ((var_12) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 2] [i_0 + 2])))));
    }
    for (unsigned long long int i_1 = 1; i_1 < 16; i_1 += 3) 
    {
        arr_6 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((var_4) | (arr_5 [i_1] [i_1 + 4])))) ? (((arr_5 [i_1] [i_1 + 3]) ^ (arr_5 [i_1 + 1] [i_1 + 4]))) : (min((arr_5 [i_1] [i_1 - 1]), (arr_5 [i_1] [i_1 - 1])))));
        var_14 |= ((/* implicit */signed char) (!(((((/* implicit */_Bool) var_2)) && (((((/* implicit */_Bool) arr_4 [i_1])) && (((/* implicit */_Bool) (short)32678))))))));
        arr_7 [i_1] &= ((/* implicit */unsigned int) (_Bool)1);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_15 -= ((/* implicit */unsigned char) max(((~(arr_8 [i_2]))), (((/* implicit */unsigned long long int) (~(arr_9 [i_2] [i_2]))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_3 = 2; i_3 < 22; i_3 += 4) 
        {
            var_16 += ((/* implicit */short) (unsigned short)32049);
            arr_12 [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_11 [i_3] [i_2])) ? (((4294967289U) | (((/* implicit */unsigned int) ((/* implicit */int) (short)3840))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
            /* LoopSeq 2 */
            for (unsigned long long int i_4 = 2; i_4 < 22; i_4 += 2) /* same iter space */
            {
                arr_16 [i_2] [i_3 - 1] [i_2] = ((/* implicit */unsigned int) (-((+(var_2)))));
                arr_17 [i_2] [i_4 + 2] = ((/* implicit */long long int) (~(946793661U)));
                arr_18 [i_2] [i_2] [i_4] = ((/* implicit */short) ((((/* implicit */int) arr_10 [i_2])) != (((/* implicit */int) arr_10 [i_2]))));
            }
            for (unsigned long long int i_5 = 2; i_5 < 22; i_5 += 2) /* same iter space */
            {
                arr_21 [i_2] [i_2] [i_5] = ((/* implicit */short) ((long long int) arr_20 [i_2] [i_2] [i_2]));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 0; i_6 += 1) 
                {
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 2) 
                    {
                        {
                            arr_27 [i_2] [i_2] [i_2] [i_2] [i_2] = (i_2 % 2 == zero) ? (((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_2] [i_2] [i_5] [i_7] [i_5] [i_6] [i_6 + 1])) >> (((((/* implicit */int) arr_26 [i_7 + 3] [i_2] [i_6 + 1] [i_3 + 1] [i_3 + 1] [i_2] [i_2])) - (12748)))))) : (((/* implicit */_Bool) ((((/* implicit */int) arr_26 [i_2] [i_2] [i_5] [i_7] [i_5] [i_6] [i_6 + 1])) >> (((((((/* implicit */int) arr_26 [i_7 + 3] [i_2] [i_6 + 1] [i_3 + 1] [i_3 + 1] [i_2] [i_2])) - (12748))) - (2357))))));
                            var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)33487))))) ? (((/* implicit */int) arr_10 [i_2])) : (((/* implicit */int) arr_22 [i_7 + 2] [i_6 + 1] [i_3] [i_2]))));
                            var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_8))));
                            var_19 = ((/* implicit */unsigned int) min((var_19), (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_26 [i_7] [i_3] [i_5] [i_5 - 1] [i_3] [i_3] [2ULL])) : (((/* implicit */int) arr_11 [i_5] [i_3])))))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (signed char i_8 = 0; i_8 < 24; i_8 += 1) 
                {
                    for (short i_9 = 0; i_9 < 24; i_9 += 3) 
                    {
                        {
                            arr_32 [i_2] [i_5] [i_5] [i_2] [i_5] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? ((~(var_4))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_3 + 2] [i_5] [i_9])))))));
                            var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_19 [i_2] [i_3 - 1] [i_3] [i_3 - 2])) : (((/* implicit */int) arr_23 [i_2] [i_3 - 2] [i_3] [i_3 + 2]))));
                            arr_33 [11ULL] [i_3] [i_5 + 2] [i_2] [i_9] = ((/* implicit */unsigned char) (+(arr_15 [i_8])));
                            arr_34 [i_9] [i_8] [i_2] [i_3] [i_2] = ((/* implicit */short) (~(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_35 [i_5] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_28 [i_3 + 2] [i_2])) ? (((/* implicit */int) arr_28 [i_3 + 1] [i_2])) : (((/* implicit */int) arr_28 [i_3 + 2] [i_2]))));
            }
            arr_36 [i_3] [i_2] [i_3] &= ((/* implicit */unsigned short) ((unsigned char) (-(((/* implicit */int) var_6)))));
            /* LoopNest 3 */
            for (short i_10 = 2; i_10 < 22; i_10 += 1) 
            {
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (long long int i_12 = 0; i_12 < 24; i_12 += 1) 
                    {
                        {
                            arr_46 [i_2] [(_Bool)1] [i_10] [i_3] [i_3 - 2] [i_2] = ((/* implicit */unsigned char) (short)16958);
                            var_21 = var_8;
                            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_10 + 1] [i_3 + 2] [i_3])))))));
                            var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)33477))) : (var_5)))) ? (((/* implicit */unsigned long long int) (+(var_2)))) : (arr_25 [i_2] [i_11] [i_12] [i_12])));
                        }
                    } 
                } 
            } 
        }
        var_24 = ((/* implicit */signed char) (+(max((arr_37 [i_2]), (((/* implicit */unsigned int) arr_38 [i_2] [i_2] [i_2] [i_2]))))));
        arr_47 [i_2] [i_2] = ((/* implicit */long long int) (+((-((((_Bool)1) ? (arr_14 [i_2] [i_2] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_20 [i_2] [i_2] [i_2])))))))));
        arr_48 [i_2] = ((/* implicit */unsigned int) var_2);
    }
    /* LoopSeq 1 */
    for (unsigned char i_13 = 2; i_13 < 19; i_13 += 3) 
    {
        arr_51 [i_13] [i_13] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) (unsigned short)6)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)32049))))));
        arr_52 [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */int) ((((var_9) / (((/* implicit */long long int) ((/* implicit */int) var_3))))) >= (((/* implicit */long long int) min((arr_9 [i_13] [i_13 - 2]), (((/* implicit */unsigned int) arr_20 [i_13 - 1] [i_13] [i_13])))))))) >> (((((((/* implicit */_Bool) (signed char)122)) ? ((-(((/* implicit */int) var_1)))) : (((((/* implicit */int) arr_29 [i_13 + 1] [i_13 - 1])) - (((/* implicit */int) var_1)))))) + (30528)))));
        var_25 = ((/* implicit */unsigned char) ((((arr_9 [i_13] [i_13 - 1]) | (arr_9 [i_13] [i_13 - 1]))) >> (((max((var_4), (arr_9 [i_13 - 1] [i_13 + 1]))) - (3322849805U)))));
    }
    var_26 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) -9223372036854775791LL)), (var_5)));
    var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1291516380U))))) ? (min(((+(13427956170669215432ULL))), (((/* implicit */unsigned long long int) var_10)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_11)))) >= (((/* implicit */int) ((short) (_Bool)1)))))))));
    var_28 = ((max((((/* implicit */int) min((var_10), (((/* implicit */unsigned char) var_11))))), (((((/* implicit */_Bool) 13427956170669215431ULL)) ? (((/* implicit */int) (unsigned short)23673)) : (((/* implicit */int) (_Bool)0)))))) <= (((/* implicit */int) var_8)));
}
