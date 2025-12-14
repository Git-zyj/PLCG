/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39817
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39817 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39817
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
    for (short i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                /* LoopNest 3 */
                for (unsigned int i_2 = 1; i_2 < 17; i_2 += 3) 
                {
                    for (unsigned char i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (long long int i_4 = 1; i_4 < 16; i_4 += 4) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_1] [i_1] [i_4 + 2] [i_2 + 2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) var_1))));
                                arr_17 [i_0] [i_0] [i_2] [(signed char)1] [i_1] = var_2;
                                arr_18 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((arr_14 [i_0] [i_0] [i_0] [i_0]), (arr_14 [i_0] [i_1] [i_2] [i_0]))))));
                            }
                        } 
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_5 = 2; i_5 < 16; i_5 += 3) 
                {
                    for (long long int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        {
                            arr_24 [i_0] [i_1] [i_5] [i_1] |= ((/* implicit */signed char) arr_8 [i_5 + 2] [i_5] [i_0] [i_5 - 1]);
                            arr_25 [3] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-1)))))))) < (((/* implicit */int) (signed char)27))));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (unsigned short i_7 = 4; i_7 < 17; i_7 += 3) 
                {
                    for (signed char i_8 = 2; i_8 < 18; i_8 += 4) 
                    {
                        for (unsigned int i_9 = 3; i_9 < 17; i_9 += 2) 
                        {
                            {
                                arr_34 [i_1] = ((/* implicit */unsigned char) (-(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)46651))) | (4095LL)))));
                                var_17 = ((/* implicit */signed char) (unsigned short)46641);
                            }
                        } 
                    } 
                } 
                arr_35 [i_1] = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))), (((((/* implicit */int) arr_1 [i_1])) & (((/* implicit */int) var_3))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 1; i_10 < 18; i_10 += 3) 
                {
                    for (signed char i_11 = 0; i_11 < 19; i_11 += 4) 
                    {
                        {
                            arr_41 [i_0] [i_1] [i_10] [i_1] [i_1] [i_1] = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */long long int) 3603693861U)) & (4123LL))));
                            var_18 = ((/* implicit */unsigned int) max((var_18), (((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) << (((arr_10 [i_0] [i_0] [i_0]) + (1632710745)))))) ? (((((/* implicit */int) var_11)) ^ (((/* implicit */int) var_9)))) : (((/* implicit */int) ((-1LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned short)53583))))))))) & (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (short)60))))), ((-(3603693864U)))))))));
                            var_19 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(max((-1LL), (((/* implicit */long long int) 691273435U))))))) ? (var_16) : (3603693864U)));
                            arr_42 [i_0] [i_1] [i_11] [i_1] [11ULL] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) 531853339U)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_11] [i_10] [i_0] [i_0])) ? (((/* implicit */int) (signed char)-4)) : (((/* implicit */int) var_15))))) ? (max((((/* implicit */long long int) (unsigned char)100)), (281470681743360LL))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) 9223372036854775807LL))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopNest 2 */
    for (signed char i_12 = 2; i_12 < 17; i_12 += 2) 
    {
        for (unsigned short i_13 = 1; i_13 < 19; i_13 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) min((max((((/* implicit */unsigned long long int) (signed char)-7)), (arr_46 [i_13 + 1]))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_48 [i_12]))))))))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 20; i_14 += 1) 
                {
                    for (signed char i_15 = 0; i_15 < 20; i_15 += 1) 
                    {
                        {
                            arr_53 [i_13] [i_12] [i_12] [i_12] [i_13] [i_13] = ((/* implicit */short) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)23168))))) ? (((/* implicit */int) (signed char)17)) : (((/* implicit */int) ((unsigned short) var_16)))))), (max((3603693838U), (var_5)))));
                            var_21 = ((/* implicit */unsigned short) (((-(var_14))) + (((/* implicit */long long int) ((((/* implicit */int) arr_47 [i_12] [i_13 + 1] [i_13 + 1])) - (((/* implicit */int) var_12)))))));
                            var_22 = ((/* implicit */int) ((((/* implicit */unsigned int) min((((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) (short)-29764)) : (((/* implicit */int) (signed char)113)))), ((-(((/* implicit */int) (short)68))))))) - (max((((/* implicit */unsigned int) (_Bool)1)), (min((((/* implicit */unsigned int) (short)69)), (2712345016U)))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_16 = 1; i_16 < 18; i_16 += 4) 
                {
                    for (unsigned long long int i_17 = 1; i_17 < 17; i_17 += 2) 
                    {
                        {
                            arr_59 [i_12] [i_13] [i_16] [i_17] = ((/* implicit */long long int) (short)-29764);
                            var_23 -= ((/* implicit */_Bool) arr_44 [i_12]);
                            var_24 = ((/* implicit */_Bool) var_16);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (long long int i_18 = 2; i_18 < 18; i_18 += 3) 
                {
                    for (signed char i_19 = 2; i_19 < 19; i_19 += 4) 
                    {
                        {
                            arr_67 [i_13] [i_13] [i_18] [i_13] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)199)) | (((/* implicit */int) ((((/* implicit */int) var_11)) <= (((/* implicit */int) (signed char)7))))))))));
                            var_25 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_57 [i_12] [i_12] [i_12])) * (((/* implicit */int) arr_43 [i_12]))))) * ((-(16777215U)))));
                        }
                    } 
                } 
            }
        } 
    } 
}
