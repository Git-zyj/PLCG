/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194991
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194991 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194991
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
    var_14 = ((/* implicit */_Bool) min((((((_Bool) (unsigned short)61305)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_13))))) : (((var_1) | (var_1))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))))) ? (((/* implicit */int) max((var_6), (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (short i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned short)4224)))))));
                    /* LoopSeq 1 */
                    for (short i_3 = 1; i_3 < 22; i_3 += 2) 
                    {
                        var_16 = ((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_0] [10U]);
                        var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)4230)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)4231))));
                    }
                    var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((1048320U), (((/* implicit */unsigned int) -1654413057)))))));
                    var_19 = var_6;
                }
                for (signed char i_4 = 4; i_4 < 22; i_4 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */unsigned short) ((signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) var_11)) >> (((((/* implicit */int) (unsigned short)4227)) - (4200)))))), (((var_1) / (arr_6 [(_Bool)1] [(_Bool)1] [i_1] [i_4 - 4] [(unsigned char)3]))))));
                    arr_10 [i_0] [i_0] [i_4 + 2] = ((/* implicit */int) max(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)104))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 24; i_5 += 2) 
                    {
                        var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) var_13)) | (((((/* implicit */int) arr_3 [i_0] [i_0] [i_5])) | (((/* implicit */int) arr_3 [i_0] [i_1] [i_4]))))));
                        arr_13 [i_0] [i_0] [i_0] [i_0] &= ((/* implicit */int) var_7);
                    }
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
                    {
                        var_22 = ((/* implicit */short) ((signed char) ((unsigned char) arr_14 [i_6] [i_6])));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((/* implicit */_Bool) 5346119888777960475LL)) ? (1516642123011954247LL) : (((/* implicit */long long int) 1389372637U)))) | (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_12 [i_4] [i_4])), (var_4)))) ? (((/* implicit */int) arr_4 [i_0] [i_1])) : (((/* implicit */int) min((((/* implicit */unsigned char) arr_11 [7LL])), ((unsigned char)169))))))))))));
                    }
                    for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                    {
                        arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) max((var_13), ((unsigned char)250)));
                        var_24 *= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */int) (short)-13833)) < (((/* implicit */int) (unsigned char)0)))))) ? (arr_16 [i_0] [i_0] [i_1] [i_4] [i_7]) : (((/* implicit */long long int) max(((~(((/* implicit */int) var_7)))), (((int) (unsigned char)20)))))));
                    }
                }
                for (signed char i_8 = 4; i_8 < 22; i_8 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (unsigned short i_9 = 0; i_9 < 24; i_9 += 2) 
                    {
                        for (unsigned short i_10 = 1; i_10 < 23; i_10 += 1) 
                        {
                            {
                                var_25 = ((int) max((var_1), (((/* implicit */unsigned int) (unsigned char)8))));
                                var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (unsigned short)13463))) < (3359224505180749967LL))) ? (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) (unsigned char)175)))) : (((/* implicit */int) ((unsigned char) arr_9 [i_10] [i_9] [i_0] [i_0])))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */signed char) var_5)), (var_8)))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) ((short) arr_9 [i_0] [i_1] [i_9] [i_10])))))) : (((((/* implicit */_Bool) ((arr_27 [i_0] [i_0] [i_0] [i_10 - 1]) >> (((2574658975U) - (2574658961U)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_11)))) : ((-(arr_17 [i_0] [i_0] [23] [i_0])))))));
                            }
                        } 
                    } 
                    arr_32 [i_0] [i_1] [i_8] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) min((1945964145), (((/* implicit */int) (unsigned char)238))))) : ((((_Bool)0) ? (((/* implicit */long long int) ((/* implicit */int) (short)13832))) : (var_3)))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_9)), (2147483647ULL)))) ? (4293680575375192964LL) : (((/* implicit */long long int) ((/* implicit */int) var_4))))) : (((/* implicit */long long int) (-(((/* implicit */int) (short)4823)))))));
                    arr_33 [i_0] [i_0] [i_8 - 3] [i_8 - 4] = ((/* implicit */_Bool) arr_0 [i_0] [i_0]);
                }
                var_27 = ((/* implicit */unsigned int) ((unsigned long long int) (~(((/* implicit */int) var_12)))));
            }
        } 
    } 
    var_28 = ((/* implicit */_Bool) var_6);
    var_29 = ((/* implicit */long long int) max((var_29), (var_9)));
}
