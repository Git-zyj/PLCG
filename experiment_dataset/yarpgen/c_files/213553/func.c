/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213553
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
    var_14 = ((/* implicit */int) (!(((/* implicit */_Bool) (((-(((/* implicit */int) (_Bool)0)))) << (((/* implicit */int) var_1)))))));
    var_15 ^= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_13)) : (var_8)));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (_Bool)1))))) / (((/* implicit */long long int) ((int) arr_5 [i_0] [i_1] [i_1])))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 681355078U)) ? (((((arr_4 [i_0]) > (arr_4 [i_0]))) ? ((-(var_11))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) ((signed char) 2967700972U))) : (((/* implicit */int) arr_1 [i_1] [i_0])))))));
                /* LoopNest 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            /* LoopSeq 2 */
                            for (unsigned short i_4 = 1; i_4 < 12; i_4 += 1) 
                            {
                                var_17 = (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_4] [i_4 + 3] [i_4 + 1]))))));
                                var_18 = ((/* implicit */signed char) min((((unsigned int) (_Bool)0)), (((/* implicit */unsigned int) arr_12 [i_0] [i_0] [i_2] [(signed char)5]))));
                                var_19 = ((/* implicit */signed char) ((((((((/* implicit */_Bool) arr_8 [i_0] [10U] [i_2])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_12 [i_3] [i_0] [i_3] [i_3])))) != (((/* implicit */int) ((((/* implicit */_Bool) (signed char)48)) && ((_Bool)1)))))) || ((!(((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_0])) & (1663549089))))))));
                                arr_16 [i_0] [i_2] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-462447705)))) ? (min((((/* implicit */unsigned int) arr_0 [i_0])), (var_11))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))) ? (max((((((/* implicit */_Bool) (unsigned short)31541)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (var_7))), (((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0] [i_0])) ? (arr_9 [i_0] [i_0] [i_0] [i_0]) : (var_11))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
                                var_20 &= ((/* implicit */_Bool) min((((/* implicit */unsigned int) (_Bool)1)), (1051072777U)));
                            }
                            for (signed char i_5 = 0; i_5 < 16; i_5 += 3) 
                            {
                                arr_19 [i_0] [i_2] = ((/* implicit */short) arr_15 [i_0] [i_0]);
                                var_21 -= ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))));
                                var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(arr_4 [i_0])))) ? (arr_8 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) >= (((/* implicit */int) (_Bool)0))))))));
                                var_23 = ((/* implicit */int) max((var_23), (max((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_2])) ? (((/* implicit */int) arr_5 [i_1] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)33994)))), (((int) arr_5 [i_0] [i_0] [i_0]))))));
                            }
                            arr_20 [i_0] [i_0] [i_2] = ((((/* implicit */_Bool) (((((_Bool)1) ? (arr_13 [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (var_8))))))) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (((/* implicit */int) (_Bool)1)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_6 = 2; i_6 < 14; i_6 += 1) 
                {
                    var_24 = ((/* implicit */signed char) var_1);
                    var_25 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) ^ (((((/* implicit */_Bool) -1)) ? (63U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)20)))))));
                    var_26 = ((/* implicit */_Bool) max((var_26), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((+(var_7))) * ((+(var_11)))))) ? (((/* implicit */long long int) ((unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_1 [i_0] [12U])))))) : (2509880135834527671LL))))));
                }
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 16; i_7 += 2) 
                {
                    var_27 = ((/* implicit */int) var_2);
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 0; i_8 += 1) 
                    {
                        for (unsigned int i_9 = 0; i_9 < 16; i_9 += 4) 
                        {
                            {
                                var_28 = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */int) arr_27 [i_1] [i_1] [i_1])) == (((/* implicit */int) arr_3 [i_0])))))));
                                arr_32 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 11469053072567586019ULL))));
                                arr_33 [i_0] [12U] [12U] [12U] = (~(((/* implicit */int) arr_11 [i_0] [i_1] [i_7] [i_0])));
                                arr_34 [i_0] [i_9] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) 7198749415284442726ULL);
                            }
                        } 
                    } 
                    arr_35 [i_0] [i_0] [(short)5] [i_0] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-27251)) ? (arr_13 [i_1] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) : (((var_2) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
                }
                arr_36 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_23 [i_1] [i_1] [i_0]))) ? (((((/* implicit */_Bool) ((4294967232U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)118)))))) ? ((+(((/* implicit */int) arr_3 [i_0])))) : ((-(((/* implicit */int) arr_26 [i_0] [i_0] [12U] [i_1])))))) : (((/* implicit */int) (unsigned char)22))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
    {
        for (unsigned char i_11 = 0; i_11 < 18; i_11 += 3) 
        {
            {
                var_29 *= ((/* implicit */unsigned long long int) (~(var_4)));
                var_30 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_39 [i_10] [i_11] [i_10])) ? (((/* implicit */int) var_3)) : (min((arr_39 [i_10] [i_10] [i_10]), (((/* implicit */int) arr_37 [i_10]))))))) ^ (((unsigned long long int) arr_37 [i_11]))));
                var_31 = ((/* implicit */_Bool) ((unsigned short) 2006893284U));
            }
        } 
    } 
    var_32 = ((/* implicit */unsigned short) min((var_32), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) >> (((var_9) - (559799469))))))));
}
