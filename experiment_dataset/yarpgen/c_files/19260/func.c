/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19260
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19260 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19260
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
    var_15 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((max((((/* implicit */unsigned int) var_13)), (var_14))) >= (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))) - (var_0)));
    var_16 ^= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) var_9)) & ((~(var_0)))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(max((((/* implicit */int) min((arr_0 [i_0] [i_0]), (arr_0 [i_0] [i_0])))), ((+(((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) max((arr_1 [i_0]), ((~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) var_12)) : (arr_1 [i_0]))))))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) /* same iter space */
        {
            var_18 = ((/* implicit */unsigned short) (~(((((arr_1 [i_0]) + (2147483647))) << (((((/* implicit */int) arr_4 [i_0] [i_0])) - (56476)))))));
            var_19 ^= ((/* implicit */unsigned int) arr_0 [i_1] [i_0]);
            var_20 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) arr_3 [i_0] [i_0])))), (((/* implicit */int) arr_0 [i_0] [i_1]))))) ? (((/* implicit */int) ((unsigned short) ((arr_1 [i_1]) & (((/* implicit */int) arr_0 [i_1] [(unsigned short)7])))))) : (((/* implicit */int) max((arr_4 [i_0] [i_1]), (arr_4 [i_0] [i_0]))))));
            var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((min((((/* implicit */unsigned int) arr_1 [i_1])), (var_14))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))))))));
        }
        /* vectorizable */
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        arr_13 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_9 [i_3])) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0])))));
                        /* LoopSeq 1 */
                        for (long long int i_5 = 0; i_5 < 11; i_5 += 2) 
                        {
                            var_22 = ((/* implicit */unsigned int) max((var_22), (arr_10 [i_0] [i_2] [i_3])));
                            var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) arr_11 [i_5] [i_4] [i_0] [i_0]))));
                        }
                        var_24 = ((/* implicit */short) arr_3 [i_0] [i_2]);
                    }
                } 
            } 
            var_25 = ((/* implicit */unsigned short) arr_0 [i_0] [i_2]);
        }
        arr_17 [i_0] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((_Bool) arr_3 [i_0] [i_0]))), (((((/* implicit */_Bool) (+(arr_1 [i_0])))) ? (var_1) : (((/* implicit */unsigned int) (-(arr_15 [i_0] [i_0] [i_0] [i_0]))))))));
        var_26 += ((/* implicit */unsigned int) var_0);
    }
}
