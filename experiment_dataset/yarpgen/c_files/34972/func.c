/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34972
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
    var_13 = max((((((/* implicit */_Bool) ((unsigned short) -1))) ? (((((/* implicit */_Bool) 26)) ? (((/* implicit */int) (signed char)12)) : (((/* implicit */int) (_Bool)1)))) : (-1))), (((/* implicit */int) (signed char)25)));
    var_14 |= ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) var_2)) : (-1LL))) >> (((var_8) - (900391236U)))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_1] [(_Bool)1] [i_1] = ((/* implicit */long long int) arr_2 [i_0] [i_1]);
                arr_6 [i_0] [i_0] = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) ? (((/* implicit */int) (unsigned char)83)) : (((/* implicit */int) (unsigned char)19))))) ? (((arr_3 [i_0] [i_1]) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_0]))) : (-1LL))) : (((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0] [i_1]), (arr_3 [(_Bool)1] [i_1]))))))) <= (((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_0 [i_1]) ? (((/* implicit */int) arr_4 [i_0] [i_0])) : (((/* implicit */int) arr_4 [i_0] [(unsigned char)3]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_3 [i_0] [i_1]))))) : (((((/* implicit */_Bool) (signed char)114)) ? (7U) : (((/* implicit */unsigned int) -10)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 4; i_2 < 23; i_2 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                    {
                        arr_11 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0])) ? (((/* implicit */int) arr_7 [i_0] [i_1] [i_2 - 4] [i_3])) : (((/* implicit */int) (unsigned char)31))))) ? ((~(((/* implicit */int) (signed char)-13)))) : (((int) (unsigned char)255))));
                        var_15 *= ((/* implicit */unsigned int) arr_1 [i_0]);
                    }
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [23U] [i_1] [i_2 - 2])), (arr_10 [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_7 [i_0] [i_1] [i_1] [i_1])) - (((/* implicit */int) arr_3 [i_0] [i_0])))))))) ? ((((~(((/* implicit */int) arr_3 [i_0] [i_1])))) | (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2])))) : (((((/* implicit */_Bool) ((arr_1 [i_0]) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (signed char)-12))))) ? (((/* implicit */int) ((_Bool) 1LL))) : (((((/* implicit */_Bool) arr_10 [i_0])) ? (-1944231100) : (((/* implicit */int) arr_0 [i_1]))))))));
                    var_17 = ((/* implicit */unsigned short) (-(((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)184))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0]))) : (((/* implicit */int) max((arr_9 [i_2] [i_1] [i_1] [i_0] [i_0]), (((/* implicit */unsigned char) arr_1 [i_0])))))))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 20)) ? (((((/* implicit */_Bool) arr_16 [i_0] [i_0] [i_5] [i_0] [i_2] [i_0] [i_0])) ? (((/* implicit */int) arr_15 [i_0] [i_1] [i_2] [i_0] [i_2] [i_1])) : (((/* implicit */int) (_Bool)1)))) : (arr_14 [i_5]))), ((-(((arr_0 [i_5]) ? (((/* implicit */int) (unsigned char)88)) : (-1)))))));
                                arr_17 [(unsigned char)6] [i_1] [(short)1] [i_4] [i_5] = ((/* implicit */unsigned short) arr_1 [i_0]);
                                var_19 -= ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_0]);
                            }
                        } 
                    } 
                }
                arr_18 [i_1] [i_0] = ((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_0] [i_0] [i_1]);
            }
        } 
    } 
    var_20 = ((/* implicit */unsigned char) (((-((+(((/* implicit */int) var_12)))))) + (((/* implicit */int) ((unsigned char) 4294967295U)))));
}
