/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22390
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
    for (short i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) 16373134026562208201ULL);
                    /* LoopSeq 3 */
                    for (int i_3 = 2; i_3 < 20; i_3 += 4) /* same iter space */
                    {
                        arr_9 [i_1] [i_1] [i_0] [i_3] = (short)347;
                        var_19 = min(((~(((/* implicit */int) arr_8 [i_0] [i_0])))), ((~(((/* implicit */int) arr_5 [i_0 - 1] [i_0] [i_0 + 1])))));
                        var_20 = (~(((/* implicit */int) arr_5 [i_0 - 1] [i_3] [i_2])));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) min((2073610047147343415ULL), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_3]))))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 30U)) ? (arr_1 [i_3]) : (((/* implicit */int) var_13))))), (min((((/* implicit */unsigned long long int) var_4)), (2073610047147343415ULL))))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 2; i_4 < 20; i_4 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        for (long long int i_5 = 2; i_5 < 19; i_5 += 1) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_8 [i_0] [i_0]))));
                            var_23 = ((/* implicit */short) (~(((((/* implicit */_Bool) 2073610047147343415ULL)) ? (16373134026562208200ULL) : (2073610047147343414ULL)))));
                            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 16373134026562208202ULL)) ? (16373134026562208214ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_5 - 2] [i_0])))));
                            var_25 -= ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [(short)4] [i_2]))))) ? (((unsigned long long int) 9223372036854775807LL)) : (((/* implicit */unsigned long long int) var_16))));
                        }
                        for (int i_6 = 0; i_6 < 21; i_6 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned long long int) min((var_26), (((/* implicit */unsigned long long int) arr_7 [i_0] [i_0] [i_4]))));
                            arr_19 [i_0] [i_0] [i_4] &= ((/* implicit */unsigned short) ((short) arr_18 [i_0] [i_0] [i_2] [i_4] [i_2]));
                            var_27 = ((/* implicit */int) ((short) arr_10 [i_4 - 2] [i_4 + 1] [i_0] [i_4] [15]));
                        }
                        for (int i_7 = 0; i_7 < 21; i_7 += 3) 
                        {
                            var_28 -= ((/* implicit */unsigned short) var_9);
                            var_29 -= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_13 [i_0] [10ULL] [12] [i_2] [i_4] [i_4 + 1] [i_7]))));
                            var_30 = (~((~(((/* implicit */int) var_4)))));
                            arr_22 [i_7] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((-4955473086017775400LL) > (-4955473086017775400LL)))) - (((/* implicit */int) arr_3 [i_0]))));
                        }
                        arr_23 [(short)0] [i_1] [i_0] [(unsigned short)1] = ((/* implicit */unsigned short) (~(arr_4 [i_0] [i_0] [i_4 - 1])));
                        var_31 -= ((/* implicit */unsigned char) ((arr_1 [i_2]) == (((/* implicit */int) (short)32758))));
                    }
                    for (int i_8 = 2; i_8 < 20; i_8 += 4) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 16373134026562208196ULL)) ? (-1278708923) : (1278708927))) / (((/* implicit */int) min((arr_18 [i_0 - 1] [i_8 + 1] [i_8 - 2] [i_0] [i_8 - 2]), (arr_18 [i_0 + 3] [i_8 - 2] [i_8 - 2] [i_0] [(unsigned char)14]))))));
                        arr_27 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_20 [i_0] [i_0 + 1])) || (((/* implicit */_Bool) arr_17 [i_0] [i_0] [i_2] [i_2] [i_2] [i_8]))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_9 = 0; i_9 < 21; i_9 += 4) 
                        {
                            arr_30 [14LL] [11U] [i_2] [i_0] [i_0] [i_2] = ((/* implicit */int) ((1349014410U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_1] [i_2] [i_0] [i_8] [i_9])))));
                            var_33 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) var_13))) ? (var_9) : (var_16)));
                        }
                    }
                }
            } 
        } 
    } 
    var_34 = ((/* implicit */short) (-(max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 25165824LL)) ? (var_15) : (((/* implicit */int) var_4))))), (min((((/* implicit */unsigned int) var_2)), (var_14)))))));
    var_35 = ((/* implicit */signed char) var_14);
}
