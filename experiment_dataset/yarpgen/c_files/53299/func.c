/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53299
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
    for (signed char i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (long long int i_1 = 4; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (long long int i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_13 += ((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) ((unsigned char) min((arr_0 [i_1]), (arr_0 [i_0])))))));
                        var_14 = ((/* implicit */_Bool) var_10);
                    }
                    /* LoopSeq 4 */
                    for (short i_4 = 0; i_4 < 20; i_4 += 3) 
                    {
                        var_15 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) (unsigned char)171)) : (((((/* implicit */int) (signed char)-58)) & (((/* implicit */int) ((unsigned short) var_4)))))));
                        arr_11 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */long long int) ((short) arr_0 [i_0]));
                        arr_12 [i_4] [i_2] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_1] [i_4]);
                    }
                    for (short i_5 = 1; i_5 < 19; i_5 += 3) 
                    {
                        arr_16 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-78))));
                        var_16 = ((/* implicit */unsigned short) min(((~(((/* implicit */int) ((((/* implicit */_Bool) -1234270860)) || (((/* implicit */_Bool) 204582152U))))))), (((/* implicit */int) var_4))));
                        arr_17 [(short)2] [i_1] [i_1] [i_1] [i_1] [(short)2] = min((((/* implicit */int) arr_0 [i_0])), ((~(((/* implicit */int) (unsigned char)214)))));
                    }
                    for (signed char i_6 = 3; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        arr_20 [1LL] [i_6 - 1] [i_6 - 1] [i_6] = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_2 [i_0] [i_1 + 1] [i_0]))));
                        var_17 |= ((/* implicit */unsigned long long int) arr_10 [i_1] [i_1]);
                        var_18 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_9 [i_0] [i_6] [i_2])) ? (((((/* implicit */_Bool) var_1)) ? (arr_7 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_1 - 2] [i_1 - 4] [i_2] [i_6 + 1]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))))));
                        /* LoopSeq 2 */
                        for (unsigned char i_7 = 0; i_7 < 20; i_7 += 1) /* same iter space */
                        {
                            arr_24 [i_2] [i_6] = ((/* implicit */unsigned char) ((_Bool) (unsigned char)11));
                            var_19 *= ((/* implicit */_Bool) arr_1 [i_2]);
                            arr_25 [(unsigned short)7] [i_6] [(signed char)6] [i_6] [i_7] = ((/* implicit */short) min((((unsigned char) ((unsigned char) arr_18 [i_0] [i_0] [i_0] [8ULL]))), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_6)))))));
                            arr_26 [i_0] [i_1] [11ULL] [i_6] [(unsigned char)1] [i_7] = ((/* implicit */int) ((signed char) 4090385137U));
                            arr_27 [17LL] [i_6] [i_0] [17LL] [i_0] = max((((var_7) % (max((var_7), (((/* implicit */unsigned long long int) arr_21 [i_0] [i_0] [i_2] [i_6] [i_0])))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)-13192)) % (((/* implicit */int) (unsigned char)183))))));
                        }
                        for (unsigned char i_8 = 0; i_8 < 20; i_8 += 1) /* same iter space */
                        {
                            arr_30 [i_6] [i_0] [i_0] [i_1] [i_0] [i_1] [i_6] = ((/* implicit */unsigned char) max((((unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (1ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_6] [(_Bool)1] [i_2])))))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_1] [(unsigned short)3] [i_8]))) / (var_10))))));
                            arr_31 [i_0] [i_0] [i_6] [i_6] [i_8] [i_6] = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (short)-2586)) - (((/* implicit */int) (short)-13192)))));
                        }
                        var_20 = max((((/* implicit */long long int) var_3)), (min(((~(arr_7 [i_0] [i_1] [13LL] [i_6 + 1]))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))));
                    }
                    for (signed char i_9 = 3; i_9 < 18; i_9 += 3) /* same iter space */
                    {
                        var_21 -= ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_3 [i_1])), (((var_0) | (((((/* implicit */unsigned long long int) var_8)) & (18446744073709551610ULL)))))));
                        var_22 = ((/* implicit */short) arr_14 [i_0] [i_0] [i_0] [i_0]);
                    }
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        for (unsigned short i_11 = 1; i_11 < 19; i_11 += 3) 
                        {
                            {
                                var_23 -= ((/* implicit */unsigned char) var_9);
                                var_24 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */int) var_4)), (arr_4 [i_10] [i_1 - 1] [i_2] [i_1 - 1])))) ? (arr_7 [i_1 - 4] [i_2] [i_2] [i_11]) : (((/* implicit */long long int) ((var_9) - (var_8)))))))));
                                arr_42 [i_0] [i_0] [(unsigned char)11] [i_2] [i_10] [i_11] = ((/* implicit */unsigned int) var_11);
                                arr_43 [i_11] [i_1] [i_2] [i_1] [i_11 - 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((((/* implicit */int) var_4)) + (2147483647))) >> (((arr_6 [i_0] [i_1] [i_10] [i_0]) - (3644942725U)))))) || (((/* implicit */_Bool) max((-8428072289612056101LL), (((/* implicit */long long int) (unsigned char)73)))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) -1173120776)))))));
                                var_25 -= ((/* implicit */long long int) arr_9 [i_11] [i_11] [i_11]);
                            }
                        } 
                    } 
                    var_26 -= ((/* implicit */signed char) ((max(((+(arr_23 [i_0]))), (((/* implicit */unsigned int) ((var_9) >= (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_2] [i_0]))))))) >= (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_5 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_2])))))) ? (((/* implicit */int) arr_38 [i_0] [i_1 + 1] [i_1 + 1] [i_2] [i_2] [(short)14])) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_23 [i_0])) > (arr_33 [i_2] [(short)19] [i_2] [i_1] [i_0])))))))));
                }
            } 
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_10)), (min((min((-2192809483305631886LL), (-2192809483305631888LL))), (8428072289612056101LL)))));
    var_28 = ((/* implicit */signed char) var_6);
}
