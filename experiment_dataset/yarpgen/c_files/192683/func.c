/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192683
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
    var_11 = ((/* implicit */unsigned long long int) max((var_11), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) 49537762)), (131008U)))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_5)) : (var_7))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_3)))))) * (((/* implicit */long long int) ((((62) | (((/* implicit */int) (short)16128)))) % (((/* implicit */int) ((((/* implicit */long long int) var_5)) > (var_7))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            {
                arr_4 [i_1] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-16132))))) ? (((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (max((arr_0 [i_0]), (((/* implicit */unsigned int) arr_2 [i_1 + 3] [i_1 + 2] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-6059))))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-16)))));
                /* LoopSeq 3 */
                for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) /* same iter space */
                {
                    arr_8 [i_0] [i_1] [i_1] = ((/* implicit */short) ((arr_7 [i_0 - 1] [(unsigned short)3] [i_0 - 1] [i_1]) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)12288)))));
                    /* LoopSeq 1 */
                    for (signed char i_3 = 1; i_3 < 17; i_3 += 2) 
                    {
                        var_12 = ((var_3) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) 4294836288U)) ? (((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 3] [i_1 - 2])) : (((/* implicit */int) arr_12 [i_1 + 2] [i_1 + 3] [i_1 - 2]))))) : (min((((/* implicit */unsigned int) min((var_6), (((/* implicit */int) (short)16132))))), (arr_7 [i_3] [i_2 + 1] [i_1 - 1] [i_0 - 4]))));
                        arr_13 [i_0] [i_1] [i_1] [i_0] [i_2] = ((/* implicit */short) ((max((max((var_5), (arr_5 [i_3] [i_0]))), (((/* implicit */int) arr_12 [i_1 - 2] [6] [i_2 + 1])))) << (((/* implicit */int) ((((unsigned int) var_1)) >= (arr_0 [i_1 + 1]))))));
                        arr_14 [i_0] [i_0] [i_1] [i_2] [(unsigned short)15] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) arr_9 [i_3] [i_1] [i_1] [i_0])) > (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) arr_5 [i_2] [i_1])) : (18446744073709551615ULL))))))) == (((long long int) var_1))));
                        var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) var_6))))) ? (((-1515590669) / (-671891011))) : (((((((/* implicit */_Bool) -44)) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) (short)-32548)))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_2] [i_3])) || (((/* implicit */_Bool) var_10)))))))));
                    }
                    arr_15 [i_0] [i_0] [i_0] &= min((((unsigned int) arr_7 [i_1 - 1] [i_1 + 3] [i_1 - 2] [i_1 + 2])), (((/* implicit */unsigned int) arr_12 [i_2] [i_1] [i_0])));
                }
                for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) /* same iter space */
                {
                    arr_19 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) 0LL)))) : (((((/* implicit */_Bool) var_8)) ? (arr_16 [i_4 + 1] [i_1 + 2] [i_0]) : (arr_16 [i_4 + 1] [i_1 - 1] [(short)9])))));
                    arr_20 [i_1] [i_4 + 1] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) arr_6 [i_4] [i_4] [i_4 + 1] [i_4]);
                }
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    var_14 = ((/* implicit */unsigned int) min((var_14), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) arr_21 [i_5] [i_1 + 2] [14])) + (arr_0 [i_0 + 1])))) ? (min((arr_17 [i_0 - 4]), ((~(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [(short)13] [i_1 + 3]))))))));
                    var_15 = ((/* implicit */long long int) (-(((/* implicit */int) (signed char)38))));
                    arr_24 [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_2 [i_0] [i_1 + 1] [(_Bool)1]) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_5)))) : (max((((/* implicit */long long int) var_9)), (0LL)))))) ? (((((/* implicit */int) arr_12 [i_0] [i_1] [i_5])) ^ (arr_1 [i_0]))) : (((/* implicit */int) arr_3 [i_5] [5U]))));
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((arr_5 [i_0 - 4] [i_0 - 1]) ^ (((((/* implicit */_Bool) arr_5 [i_0 + 1] [i_0 - 1])) ? (var_6) : (((/* implicit */int) var_8)))))))));
                    arr_25 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) (short)22239)), (-1LL))) + (((/* implicit */long long int) (-(((/* implicit */int) (short)-4096)))))))) ? (((((/* implicit */_Bool) ((arr_9 [i_0] [i_1] [i_1] [i_5]) - (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_0])))))) ? ((+(0U))) : (((/* implicit */unsigned int) ((var_5) + (var_5)))))) : (max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_1])) ? (var_4) : (var_5)))), (((((/* implicit */_Bool) arr_17 [9LL])) ? (arr_10 [i_1] [i_1 - 2] [i_1] [i_1] [i_1] [9LL]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))));
                }
            }
        } 
    } 
    var_17 = ((/* implicit */short) var_10);
    var_18 = ((/* implicit */int) ((max((((/* implicit */unsigned int) (_Bool)0)), (0U))) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-7)))));
}
