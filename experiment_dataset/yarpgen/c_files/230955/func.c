/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230955
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230955 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230955
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
    var_16 = ((/* implicit */unsigned short) var_1);
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) ((((/* implicit */int) arr_1 [(_Bool)1] [i_0])) != (((/* implicit */int) arr_2 [i_0] [i_1]))))), (var_4)))), (((arr_0 [i_0]) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_2))))))));
                var_17 |= ((/* implicit */_Bool) var_3);
                var_18 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_1)), ((-(7194661548604990828ULL))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 18; i_2 += 1) /* same iter space */
                {
                    var_19 *= ((/* implicit */_Bool) max((((/* implicit */int) ((15048423244290848253ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1] [i_1] [i_1] [i_1])))))), (((((/* implicit */int) arr_5 [6U] [i_1] [i_1] [i_2])) | (((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_2]))))));
                    var_20 = ((/* implicit */signed char) max((var_20), (((/* implicit */signed char) (-(((/* implicit */int) var_13)))))));
                    var_21 |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (+(((/* implicit */int) max((arr_5 [i_2] [i_1] [i_1] [i_0]), ((signed char)79))))))) != (var_3)));
                    arr_8 [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_5 [i_1] [i_1] [i_0] [i_0])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) (short)-8273))))), (((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0] [i_0])))))))) ? (min((arr_6 [i_0] [i_0]), (arr_6 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (0LL) : (((/* implicit */long long int) ((/* implicit */int) var_14)))))) ? ((-(((/* implicit */int) (_Bool)1)))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0] [6ULL])) ? (((/* implicit */int) var_14)) : (2088960))))))));
                }
                for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) /* same iter space */
                {
                    var_22 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_1] [i_3])) ? (arr_9 [i_0] [i_1] [i_3] [i_3]) : (arr_9 [(unsigned short)14] [i_1] [i_1] [i_0])))) ? (min((((((/* implicit */_Bool) var_11)) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_1] [(unsigned char)4])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_1])) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_0] [(short)16] [i_1] [12LL])))))))) : (((/* implicit */unsigned long long int) ((arr_7 [i_1] [i_1]) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((/* implicit */int) arr_7 [i_1] [i_1]))))));
                    /* LoopNest 2 */
                    for (signed char i_4 = 0; i_4 < 18; i_4 += 1) 
                    {
                        for (int i_5 = 0; i_5 < 18; i_5 += 4) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) min((((short) -8361984990352389723LL)), (((/* implicit */short) arr_5 [i_0] [i_1] [i_0] [i_3])))))) != (127U)));
                                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((/* implicit */_Bool) ((arr_12 [i_0] [i_1] [i_5] [i_1] [i_5] [0LL]) | (arr_3 [i_5] [i_5])))) ? (((/* implicit */long long int) (-((+(var_10)))))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_1] [i_0] [i_0])) ? (((/* implicit */long long int) arr_9 [i_0] [i_5] [i_0] [i_0])) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned char)34))) & (-8361984990352389700LL))))))))));
                                var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) ((((/* implicit */_Bool) ((var_3) & (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_1] [i_1] [i_1])))))) ? (((-8361984990352389725LL) | (1074585119206394270LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_9)) & (((/* implicit */int) var_4))))))))));
                            }
                        } 
                    } 
                }
                for (signed char i_6 = 1; i_6 < 17; i_6 += 2) 
                {
                    var_26 = ((/* implicit */unsigned short) arr_14 [i_0]);
                    arr_18 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */_Bool) max((1046528), (((/* implicit */int) (_Bool)1))));
                    var_27 = ((/* implicit */_Bool) min((var_11), (((/* implicit */unsigned int) var_1))));
                }
                /* vectorizable */
                for (int i_7 = 3; i_7 < 16; i_7 += 1) 
                {
                    /* LoopSeq 1 */
                    for (int i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        arr_26 [i_0] [i_1] [(unsigned short)17] [i_7] [i_7] [i_0] = ((/* implicit */long long int) (~(arr_14 [i_0])));
                        var_28 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((18446744073709551615ULL) | (arr_6 [(_Bool)1] [i_1])))) ? (((/* implicit */unsigned long long int) arr_19 [i_0] [i_1] [i_8] [i_8])) : (((((/* implicit */unsigned long long int) arr_14 [i_8])) & (arr_6 [i_0] [i_1])))));
                    }
                    var_29 -= ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_21 [i_1]))) | (-3888054089768205751LL)));
                    arr_27 [i_0] [i_0] [i_7] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_7 + 1] [i_7] [i_7] [i_7] [i_0]))));
                    arr_28 [i_0] [i_0] [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) arr_15 [i_0] [i_1] [i_7 + 2] [i_1] [i_0])) : (var_0)));
                    var_30 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_7] [i_0] [i_7] [i_7]))));
                }
            }
        } 
    } 
}
