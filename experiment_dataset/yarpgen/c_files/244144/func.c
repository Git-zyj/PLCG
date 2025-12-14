/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244144
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
    for (unsigned char i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 22; i_2 += 2) 
            {
                {
                    var_20 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 2] [i_0 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1] [i_0 + 1]))) : (var_2)))) ? (((/* implicit */int) (short)-18394)) : ((-(((/* implicit */int) arr_0 [i_0 + 1] [i_0 + 3]))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 19; i_3 += 1) /* same iter space */
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (~(arr_5 [i_0] [i_1] [i_2 - 3] [i_3]))))));
                        arr_9 [6] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 1093498094))))))))) ? ((-((-(arr_5 [i_0] [i_0] [i_0 + 3] [(unsigned short)18]))))) : (((arr_3 [i_0] [i_2 - 1] [i_2 - 2]) | (max((((/* implicit */int) var_6)), (-1241978620)))))));
                        arr_10 [i_2] [i_3 + 2] [i_2] [i_3] = ((unsigned char) (((_Bool)1) ? (((/* implicit */unsigned long long int) var_18)) : (((((/* implicit */_Bool) arr_1 [i_3] [7U])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (6292626817346892237ULL)))));
                    }
                    for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 1) /* same iter space */
                    {
                        arr_13 [i_2] [i_2] [i_2] = ((/* implicit */short) ((int) min((((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [(_Bool)1] [(signed char)12]))))), (min((((/* implicit */short) arr_7 [i_2 + 1] [(unsigned char)16] [i_2] [i_2])), (var_17))))));
                        arr_14 [i_2] = ((max((((/* implicit */unsigned int) (_Bool)1)), (1883410456U))) <= (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1] [i_0 + 1])) ? (arr_5 [i_0 + 3] [i_0 + 3] [i_0 - 1] [i_2 - 1]) : (((/* implicit */int) var_15))))));
                        arr_15 [i_2] [i_2] = ((/* implicit */short) ((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)255))))) ? (arr_2 [i_2 - 1] [i_0 + 2]) : (max((var_16), (var_7))))) == (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) 0))))) ^ (((/* implicit */int) ((var_18) < (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2])))))))))));
                        arr_16 [i_2] = ((/* implicit */unsigned int) ((0) << (((-2114064209) + (2114064224)))));
                    }
                }
            } 
        } 
    } 
    var_22 ^= ((/* implicit */unsigned int) ((int) var_0));
    var_23 = ((/* implicit */long long int) ((((/* implicit */long long int) 2114064208)) != (min((((/* implicit */long long int) var_4)), (-6305370969388789971LL)))));
}
