/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245288
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
    var_14 |= ((/* implicit */signed char) min((min((var_10), (((/* implicit */long long int) min((var_6), (var_9)))))), (((var_11) / (((/* implicit */long long int) (+(((/* implicit */int) var_8)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 17; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 4) 
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 17; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 2; i_4 < 15; i_4 += 4) 
                        {
                            {
                                arr_13 [(unsigned char)8] [(unsigned char)8] [i_2 - 2] [(unsigned char)8] [i_3] [i_0] [i_0] = ((/* implicit */signed char) min((((/* implicit */long long int) ((4206297241U) >= (4206297241U)))), (min((arr_8 [i_4 - 2] [i_4] [i_2]), (((/* implicit */long long int) var_6))))));
                                var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)64))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 1; i_5 < 15; i_5 += 4) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) (~(max((arr_3 [i_0] [(short)16] [i_5]), (var_5))))))));
                        var_17 += ((/* implicit */_Bool) (+(max((((/* implicit */unsigned long long int) (!(var_9)))), (arr_1 [(unsigned char)15])))));
                        var_18 ^= ((/* implicit */unsigned char) var_8);
                        var_19 = ((/* implicit */unsigned short) (+(max((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_13))) <= (var_0)))), (arr_4 [i_0] [i_0] [i_0])))));
                    }
                }
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    arr_22 [i_0] [i_6] [i_0] = ((/* implicit */unsigned char) min((var_10), (((/* implicit */long long int) arr_14 [i_0] [i_0] [i_0] [i_6]))));
                    arr_23 [i_0] [i_6] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)194)) * (((/* implicit */int) (signed char)-61))))) ? (((/* implicit */int) max(((unsigned char)191), ((unsigned char)0)))) : (((/* implicit */int) ((short) var_9)))))) ? (((long long int) var_4)) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))));
                    var_20 = (+((+(((/* implicit */int) arr_17 [i_0] [i_1] [i_6] [i_1])))));
                    arr_24 [i_0] [i_0] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) min((var_12), (((/* implicit */unsigned int) arr_17 [(_Bool)1] [i_1] [i_6] [i_6]))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_10)), (var_5)))) ? ((-(arr_1 [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_11) : (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_6] [i_0]))))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))) : (var_12))))));
                }
                for (unsigned short i_7 = 2; i_7 < 15; i_7 += 1) 
                {
                    var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) ((min((((/* implicit */unsigned long long int) var_4)), (arr_3 [i_7 - 1] [i_7 + 1] [i_7 - 1]))) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) max((var_2), (((/* implicit */signed char) var_6)))))))))))));
                    arr_27 [i_0] [i_0] = ((/* implicit */unsigned long long int) var_10);
                    arr_28 [i_0] [i_0] [i_0] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) max((var_2), (((/* implicit */signed char) var_1))))), (((arr_2 [i_7 + 2]) << (((((/* implicit */int) arr_17 [i_7 + 1] [i_7 - 1] [i_7 + 1] [9ULL])) - (24233)))))));
                    var_22 = ((/* implicit */short) ((((/* implicit */_Bool) (-(var_11)))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_1))) & ((+(3U)))))) : (((var_4) % (((/* implicit */long long int) ((/* implicit */int) var_1)))))));
                }
                /* LoopNest 2 */
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned int) var_8);
                            var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_9])) / (((/* implicit */int) arr_6 [i_1] [i_0]))))) ? (((/* implicit */long long int) (-(((/* implicit */int) var_1))))) : (max((var_4), (var_10)))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_5 [(signed char)13] [i_1] [i_1] [i_0])), (arr_20 [i_0] [i_1] [i_8] [i_0])))) ? (min((((/* implicit */unsigned long long int) var_6)), (var_5))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_12 [i_0] [i_0] [i_0] [(unsigned short)5] [16U] [(unsigned char)7] [i_0]))))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)251))))))))));
                            var_25 |= ((/* implicit */unsigned char) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)65535)))) ^ ((+(((/* implicit */int) arr_33 [i_0] [(unsigned char)4] [i_8] [4LL] [i_0] [i_9]))))));
                        }
                    } 
                } 
                arr_35 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_4)), (arr_11 [i_1] [i_1] [i_1] [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) min((var_11), (((/* implicit */long long int) var_9))))) : (max((arr_11 [i_0] [i_0] [i_1] [i_1] [i_0]), (((/* implicit */unsigned long long int) var_2))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 17; i_10 += 1) 
                {
                    for (unsigned long long int i_11 = 0; i_11 < 17; i_11 += 4) 
                    {
                        {
                            arr_43 [i_0] [(short)16] [i_0] [i_10] [i_10] = ((/* implicit */unsigned int) ((((((/* implicit */int) arr_31 [i_0] [i_11] [i_10])) >= (((/* implicit */int) ((signed char) arr_6 [i_0] [i_1]))))) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_6 [(unsigned char)12] [(unsigned char)12]))))), (min((((/* implicit */unsigned int) var_1)), (var_12)))))) : (min((((/* implicit */long long int) max((((/* implicit */short) var_2)), (var_7)))), (((long long int) var_2))))));
                            var_26 *= max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)8));
                            var_27 &= ((/* implicit */short) min((((/* implicit */unsigned char) (_Bool)0)), ((unsigned char)235)));
                        }
                    } 
                } 
            }
        } 
    } 
    var_28 = ((/* implicit */int) max((var_28), (((/* implicit */int) var_2))));
    var_29 += ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned int) var_3))), (min((var_4), (((/* implicit */long long int) var_1))))))) ? ((-(15439428270571280940ULL))) : (((/* implicit */unsigned long long int) var_3)));
}
