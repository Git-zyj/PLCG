/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43774
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
    for (long long int i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((signed char) var_1))) || (((((/* implicit */_Bool) arr_5 [i_1] [i_0])) || (((/* implicit */_Bool) (unsigned short)0))))));
                var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)85)))))) * ((((!(((/* implicit */_Bool) arr_3 [i_1] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_1])) || (((/* implicit */_Bool) -3)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) / (3398226330U)))))));
            }
        } 
    } 
    var_18 = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned short)1920)) * (((((/* implicit */int) var_9)) / (((/* implicit */int) var_6)))))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
    /* LoopNest 2 */
    for (signed char i_2 = 2; i_2 < 9; i_2 += 3) 
    {
        for (signed char i_3 = 0; i_3 < 10; i_3 += 1) 
        {
            {
                var_19 -= ((/* implicit */short) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_2 - 2]))))), (max((arr_6 [2U]), (((/* implicit */int) arr_7 [i_2]))))));
                arr_13 [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_2] [i_2 - 1])) ? ((~(((/* implicit */int) var_7)))) : (((((/* implicit */int) (short)1291)) / (var_0)))))) ? ((~(arr_11 [i_2 - 2] [i_2 - 2]))) : (((/* implicit */unsigned int) ((((((/* implicit */int) arr_7 [i_2])) / (((/* implicit */int) var_15)))) / (((/* implicit */int) max((var_11), (arr_2 [i_3])))))))));
                /* LoopSeq 3 */
                for (unsigned char i_4 = 3; i_4 < 9; i_4 += 1) 
                {
                    arr_17 [i_2] [(signed char)3] [4LL] [i_3] = ((/* implicit */long long int) 415249984U);
                    /* LoopNest 2 */
                    for (short i_5 = 0; i_5 < 10; i_5 += 1) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 10; i_6 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) arr_23 [8] [8] [i_3] [i_4] [i_2] [i_4] [i_6])) / (((/* implicit */int) ((((/* implicit */_Bool) (short)-12443)) || (((/* implicit */_Bool) -519166936))))))));
                                var_21 = ((((/* implicit */_Bool) ((short) (~(arr_1 [i_4 + 1] [i_2]))))) || (((/* implicit */_Bool) max((((((/* implicit */long long int) ((/* implicit */int) (signed char)0))) / (8589934528LL))), (((/* implicit */long long int) min((((/* implicit */int) var_1)), (arr_6 [i_2]))))))));
                                var_22 *= ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                }
                for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                {
                    var_23 -= ((/* implicit */_Bool) (+(max((((/* implicit */int) arr_16 [i_2 - 1] [i_3] [i_7 - 1])), (((((/* implicit */_Bool) arr_19 [i_7] [i_3] [i_3] [i_2] [(short)1])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_14))))))));
                    arr_28 [7] [i_2] [(unsigned char)4] [i_2 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) (~(((0) | (((/* implicit */int) arr_4 [i_2] [i_2]))))))) ? (max((747223690), (-519166941))) : (min(((+(747223711))), (((((/* implicit */int) arr_19 [(unsigned short)3] [(unsigned short)3] [i_2] [i_2] [(unsigned short)0])) / (((/* implicit */int) var_15))))))));
                    arr_29 [i_2] [i_2] = (~(min((((/* implicit */unsigned int) (((_Bool)1) || (((/* implicit */_Bool) arr_19 [i_7] [i_3] [i_2] [i_2] [(_Bool)1]))))), (max((arr_26 [i_2] [(unsigned short)1] [i_2] [i_7]), (((/* implicit */unsigned int) var_14)))))));
                }
                for (unsigned char i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 0; i_9 < 10; i_9 += 3) 
                    {
                        for (int i_10 = 0; i_10 < 10; i_10 += 1) 
                        {
                            {
                                arr_39 [i_2] [i_2] = ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_15 [i_2 + 1] [i_2 + 1] [i_2]))))));
                                arr_40 [i_2] [i_2] [i_8] [i_2] [i_2] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)124)) ? (((/* implicit */int) ((((/* implicit */_Bool) 1542596950U)) || (arr_16 [i_10] [i_3] [i_3])))) : ((-(((/* implicit */int) var_5))))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)12)) || (((/* implicit */_Bool) 1087863214))))) : (((/* implicit */int) var_15)));
                                arr_41 [i_2] [i_2] = ((/* implicit */long long int) var_10);
                                var_24 = ((/* implicit */int) ((unsigned int) 198727076U));
                                var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) arr_25 [i_2 + 1] [i_2 + 1] [i_2] [i_2 + 1] [i_2 - 2])) * (((/* implicit */int) var_11))))))));
                            }
                        } 
                    } 
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (int i_11 = 0; i_11 < 10; i_11 += 1) /* same iter space */
                    {
                        var_26 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) - (6850362794782197161ULL)));
                        var_27 *= ((/* implicit */signed char) arr_19 [i_2] [i_2] [i_8] [i_11] [i_8]);
                    }
                    for (int i_12 = 0; i_12 < 10; i_12 += 1) /* same iter space */
                    {
                        arr_47 [6U] [2U] [(unsigned char)6] [6U] &= ((/* implicit */unsigned int) arr_43 [5LL] [5LL] [1U] [(unsigned char)1] [i_8] [1U]);
                        arr_48 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((int) max((((((/* implicit */_Bool) (short)13946)) || (((/* implicit */_Bool) -9223372036854775801LL)))), ((!(((/* implicit */_Bool) arr_5 [1] [1])))))));
                    }
                    /* LoopSeq 1 */
                    for (signed char i_13 = 1; i_13 < 7; i_13 += 3) 
                    {
                        var_28 = ((/* implicit */int) ((unsigned short) (!(((/* implicit */_Bool) arr_27 [i_2] [i_2 + 1] [i_2] [i_2 + 1])))));
                        var_29 = ((/* implicit */unsigned char) min((((((/* implicit */int) ((var_14) || (((/* implicit */_Bool) var_11))))) / (1093921632))), (min((((/* implicit */int) min((((/* implicit */short) var_5)), (arr_50 [i_2] [i_2] [i_2] [i_3] [i_13 + 2] [i_13])))), (arr_30 [i_13 + 1] [i_3])))));
                    }
                }
                arr_52 [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) var_11);
            }
        } 
    } 
    var_30 *= var_5;
}
