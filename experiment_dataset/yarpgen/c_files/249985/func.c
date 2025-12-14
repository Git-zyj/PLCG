/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249985
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (~(((/* implicit */int) var_12)))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        for (unsigned short i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned char i_2 = 1; i_2 < 14; i_2 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_3 = 3; i_3 < 15; i_3 += 3) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_4 = 0; i_4 < 17; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (+(var_14))))));
                            arr_12 [i_0] = ((/* implicit */signed char) arr_2 [i_4] [i_0] [i_0]);
                        }
                        for (long long int i_5 = 0; i_5 < 17; i_5 += 2) 
                        {
                            var_19 ^= ((/* implicit */int) var_13);
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_10 [i_0] [i_1 + 1] [i_3] [i_1 + 1] [i_5] [i_3])))) ? (((/* implicit */int) ((unsigned short) arr_14 [i_5] [i_3] [i_3] [i_2] [i_2] [(signed char)3] [i_0]))) : (((/* implicit */int) var_0))));
                        }
                        for (unsigned short i_6 = 1; i_6 < 16; i_6 += 4) 
                        {
                            var_21 *= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [1LL] [(_Bool)1] [i_2] [(_Bool)1] [i_2])))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_13))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) * (((/* implicit */int) var_0))))));
                            var_22 &= ((/* implicit */short) (-(209731874)));
                        }
                        arr_20 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_0]))) : (arr_1 [i_3 + 2] [i_2 + 3])));
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_7 = 0; i_7 < 17; i_7 += 4) 
                    {
                        arr_23 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)104)) >> (((arr_19 [i_0] [(unsigned char)2] [i_0] [i_7] [13U] [i_7] [i_7]) - (628537626)))))) : (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5)))));
                        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((unsigned int) arr_11 [i_0] [15LL] [i_2] [5] [i_0] [i_2] [i_7])))));
                    }
                    arr_24 [i_0] [i_0] [i_2 + 3] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [(signed char)11] [i_1] [i_2 + 3])) : (((/* implicit */int) var_6))))), (((((/* implicit */_Bool) arr_14 [i_0] [4LL] [i_1] [i_1] [i_1 - 1] [(signed char)11] [(signed char)14])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_4 [i_0] [i_1 - 1] [i_1 - 1])))))) ? ((+(((unsigned long long int) arr_4 [i_2 + 1] [i_1 + 2] [i_0])))) : (((/* implicit */unsigned long long int) ((long long int) min((var_13), (((/* implicit */unsigned long long int) var_10))))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_8 = 2; i_8 < 16; i_8 += 2) 
                    {
                        var_24 *= ((/* implicit */short) var_16);
                        arr_27 [i_0] [i_1] [i_0] [i_0] [i_1] = ((/* implicit */signed char) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) << (((/* implicit */int) ((var_16) < (((/* implicit */int) var_6))))))), (((((/* implicit */_Bool) arr_1 [i_1] [i_8])) ? (((((/* implicit */_Bool) arr_22 [11ULL] [(unsigned char)14] [11ULL])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_4)))) : (((/* implicit */int) ((((/* implicit */int) arr_18 [16ULL])) < (((/* implicit */int) var_10)))))))));
                        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_7 [i_0] [i_0] [14U] [i_8 - 1] [(signed char)11] [(unsigned short)7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_5))), (((/* implicit */unsigned long long int) var_9))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1 - 1] [i_8 - 2]))))) : ((~(((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */int) var_12))))))));
                    }
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */long long int) var_8);
}
