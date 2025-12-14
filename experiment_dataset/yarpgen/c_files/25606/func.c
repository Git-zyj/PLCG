/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25606
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
    var_11 = ((/* implicit */long long int) 17556231238187426473ULL);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
                {
                    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_0]), (arr_2 [i_0])))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (291798865) : (((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_0 [i_0]))))) : (max((var_1), (((/* implicit */unsigned int) var_7)))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((139611588448485376LL) / (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((((/* implicit */_Bool) (unsigned char)7)) ? (var_10) : (((/* implicit */int) arr_6 [9LL] [i_2] [i_2])))) : (((/* implicit */int) ((unsigned short) var_5))))))));
                    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) arr_0 [16ULL]))));
                    arr_7 [i_0] = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_2] [i_0])) ? (((((/* implicit */unsigned int) var_2)) * (arr_2 [i_0]))) : (max((var_8), (arr_2 [i_0])))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_0 [i_0])), (var_7))))) - (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) -1825809698)) : (18446744073709551615ULL)))))));
                }
                /* vectorizable */
                for (short i_3 = 0; i_3 < 19; i_3 += 4) /* same iter space */
                {
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_4 [i_0] [i_0] [i_0] [i_0]))));
                    arr_12 [i_0] = ((/* implicit */unsigned char) var_7);
                    var_15 *= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_10 [i_1])) : (((/* implicit */int) (_Bool)1))))));
                }
                for (short i_4 = 0; i_4 < 19; i_4 += 4) /* same iter space */
                {
                    var_16 ^= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0]))) ^ (max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_0])) ? (var_10) : (((/* implicit */int) arr_5 [i_4] [i_1] [i_0]))))), (arr_9 [i_4])))));
                    arr_17 [i_0] [i_0] = ((/* implicit */long long int) arr_3 [i_0]);
                    arr_18 [4LL] [i_0] [4LL] [(unsigned char)9] = ((/* implicit */long long int) arr_3 [i_1]);
                }
                var_17 = ((/* implicit */short) var_10);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_5 = 0; i_5 < 19; i_5 += 1) 
                {
                    var_18 = ((/* implicit */short) (-(((/* implicit */int) arr_20 [i_1 - 1]))));
                    var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) var_0)) - (((/* implicit */int) ((4294967295U) >= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))));
                    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_19 [i_1] [i_5])))))));
                    var_21 = (~(arr_13 [i_0]));
                }
                for (unsigned char i_6 = 0; i_6 < 19; i_6 += 4) 
                {
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 19; i_7 += 3) 
                    {
                        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                        {
                            {
                                arr_30 [i_0] [i_0] [i_6] [i_0] [i_8] = ((/* implicit */int) max((((/* implicit */unsigned int) (((~(136471709))) / (((/* implicit */int) ((unsigned short) 1561827945U)))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (arr_26 [i_1] [i_0] [i_1]))), (((/* implicit */unsigned int) (-(((/* implicit */int) var_9)))))))));
                                arr_31 [i_0] [i_1] [(unsigned short)3] [i_0] [i_8] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_10 [i_7])), (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_0 [i_0]), (var_0))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) : (3942209800U))))) >> (((max((arr_22 [i_0] [i_1 - 1] [i_6] [3U]), (var_8))) - (4126375515U)))));
                                var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) arr_15 [i_0] [i_0] [(unsigned char)17] [i_0]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */long long int) max((((((/* implicit */_Bool) ((signed char) arr_14 [i_0] [i_0] [i_6]))) ? ((-(((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_26 [0] [i_0] [i_6])) ? (1830028404) : (((/* implicit */int) arr_0 [i_0])))))), (((/* implicit */int) ((arr_16 [i_0] [i_0] [i_0] [i_0]) != (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)118)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_6] [i_6]))))))))));
                    var_24 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) arr_20 [i_1 - 1])))) | (((/* implicit */int) var_5))));
                    /* LoopSeq 1 */
                    for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                    {
                        var_25 = ((/* implicit */_Bool) 1073741824U);
                        /* LoopSeq 1 */
                        for (unsigned int i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_26 ^= ((/* implicit */unsigned short) min((((/* implicit */int) var_7)), ((~(((/* implicit */int) arr_23 [0] [i_6] [i_6] [i_1 - 1]))))));
                            arr_37 [i_0] [i_0] [i_0] [(short)6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) var_0)) ? (-7497638872664637175LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_0])))))) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) min((max((((/* implicit */short) var_0)), (arr_35 [i_1]))), (((/* implicit */short) var_0)))))));
                        }
                    }
                    arr_38 [i_0] [i_0] = (!(((/* implicit */_Bool) var_4)));
                }
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) 18446744073709551588ULL))));
            }
        } 
    } 
    var_28 = ((/* implicit */short) max((var_28), (((/* implicit */short) var_9))));
}
