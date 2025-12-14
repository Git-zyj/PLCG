/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248422
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
    var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (_Bool)1))) ? (((var_4) & (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) var_2))))) ? (((((/* implicit */_Bool) var_9)) ? ((((_Bool)1) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_9)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_9))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        for (short i_1 = 0; i_1 < 19; i_1 += 4) 
        {
            {
                /* LoopSeq 4 */
                for (unsigned int i_2 = 2; i_2 < 18; i_2 += 2) 
                {
                    arr_6 [i_1] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (-(((((/* implicit */_Bool) arr_4 [i_1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0]))) : (2190308932U)))))), (max((((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1]))), (arr_2 [i_1])))));
                    arr_7 [i_2 - 1] = (unsigned short)54409;
                }
                for (long long int i_3 = 2; i_3 < 15; i_3 += 1) 
                {
                    arr_10 [i_0] = ((/* implicit */unsigned int) arr_0 [i_1] [i_3]);
                    arr_11 [i_3 + 1] [i_1] = ((/* implicit */unsigned short) max((1965380231U), (((/* implicit */unsigned int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 19; i_4 += 2) 
                    {
                        for (int i_5 = 1; i_5 < 17; i_5 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_1] [i_1] [i_4] [i_4] [i_0] [i_5] = ((/* implicit */unsigned short) (_Bool)1);
                                arr_18 [i_5 - 1] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) arr_12 [i_1] [i_3] [i_1]);
                                arr_19 [i_5 + 2] [i_4] [i_0] [i_1] [i_1] [i_0] &= ((/* implicit */int) ((unsigned int) var_2));
                            }
                        } 
                    } 
                }
                /* vectorizable */
                for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) /* same iter space */
                {
                    arr_24 [i_6] [i_1] [i_1] [i_0] = ((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_0] [i_0]);
                    arr_25 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((((/* implicit */_Bool) arr_23 [i_0] [i_1] [i_6] [i_6])) ? (var_0) : (((/* implicit */long long int) arr_16 [i_6] [i_6] [i_1] [i_1] [i_0] [i_0])))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_14 [i_0] [i_6] [i_0] [i_6])))))));
                }
                /* vectorizable */
                for (unsigned short i_7 = 0; i_7 < 19; i_7 += 3) /* same iter space */
                {
                    arr_29 [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_7] [i_7] [i_0] [i_0])) ? (1026252795U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))));
                    arr_30 [i_1] [i_7] = ((/* implicit */int) arr_21 [i_7] [i_1]);
                    arr_31 [i_7] [i_1] [i_0] [i_0] = arr_12 [i_7] [i_1] [i_0];
                    arr_32 [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((_Bool) arr_21 [i_7] [i_1]));
                    arr_33 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((unsigned short) (_Bool)0));
                }
                /* LoopSeq 1 */
                for (long long int i_8 = 0; i_8 < 19; i_8 += 3) 
                {
                    arr_36 [i_0] [i_1] [i_8] = ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_0] [i_0]);
                    arr_37 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) var_4);
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    for (unsigned long long int i_10 = 1; i_10 < 17; i_10 += 4) 
                    {
                        {
                            arr_43 [i_9] [i_9] [i_1] [i_9] = ((/* implicit */int) min((((/* implicit */unsigned int) var_7)), (((((arr_3 [i_9] [i_1] [i_0]) + (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1] [i_9] [i_9]))))) / (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_10 + 2] [i_9] [i_0])))))));
                            arr_44 [i_0] [i_0] [i_1] [i_9] [i_10 - 1] = ((/* implicit */int) max(((unsigned short)65524), (((/* implicit */unsigned short) (_Bool)1))));
                            arr_45 [i_0] [i_0] [i_9] [i_0] [i_0] = ((/* implicit */short) (~(2147483647U)));
                            /* LoopSeq 2 */
                            for (signed char i_11 = 0; i_11 < 19; i_11 += 4) 
                            {
                                arr_50 [i_0] [i_0] [i_1] [i_9] [i_9] [i_1] [i_11] = ((/* implicit */unsigned int) (~(((/* implicit */int) var_3))));
                                arr_51 [i_0] [i_9] [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_14 [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10 - 1]))) - (2074988078052515791LL)))) ? (((((((/* implicit */int) (signed char)-22)) + (2147483647))) << (((((/* implicit */int) var_8)) - (1))))) : (((/* implicit */int) min((arr_14 [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10 - 1]), (arr_14 [i_10 + 1] [i_10 + 2] [i_10 - 1] [i_10 + 2]))))));
                            }
                            for (unsigned int i_12 = 0; i_12 < 19; i_12 += 4) 
                            {
                                arr_54 [i_12] [i_9] [i_9] [i_9] [i_0] = min((((/* implicit */long long int) ((int) 2329587064U))), (-6351840299198345722LL));
                                arr_55 [i_9] [i_9] = ((/* implicit */_Bool) min((((/* implicit */long long int) ((signed char) (_Bool)1))), (((((/* implicit */_Bool) max((((/* implicit */long long int) (unsigned short)48248)), (2074988078052515810LL)))) ? (((((/* implicit */_Bool) 1965380234U)) ? (((/* implicit */long long int) 3307866146U)) : (-18LL))) : (((8753285106800110493LL) + (-2074988078052515802LL)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
}
