/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246530
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246530 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246530
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
    for (short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned char i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    arr_9 [i_0] [i_2] = ((/* implicit */unsigned char) arr_2 [i_1]);
                    var_11 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) max((arr_2 [i_1 + 2]), (arr_2 [i_1 + 3]))))));
                }
            } 
        } 
    } 
    var_12 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) (unsigned char)224)) ? (((((/* implicit */_Bool) (signed char)17)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) /* same iter space */
    {
        var_13 = ((((/* implicit */_Bool) min(((unsigned short)16368), (((/* implicit */unsigned short) max(((_Bool)1), ((_Bool)1))))))) ? (((/* implicit */unsigned long long int) arr_11 [i_3])) : (min((arr_10 [(signed char)18]), (((/* implicit */unsigned long long int) arr_11 [i_3])))));
        /* LoopNest 3 */
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (signed char i_5 = 0; i_5 < 25; i_5 += 4) 
            {
                for (short i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    {
                        arr_20 [i_3] [i_3] [i_4] [i_5] [i_5] [i_6] |= ((/* implicit */_Bool) min((((/* implicit */int) ((var_5) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [i_3])))))), (((((/* implicit */_Bool) 5LL)) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_5)) ? (-1968990598) : (((/* implicit */int) var_8))))))));
                        var_14 = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_13 [i_3] [i_6]) < (((/* implicit */long long int) ((/* implicit */int) ((arr_17 [i_3] [i_4] [i_4] [1LL] [i_5] [i_3]) || (((/* implicit */_Bool) var_1))))))))) == (arr_18 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])));
                        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) var_5))));
                        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */long long int) max((var_10), (((/* implicit */unsigned int) arr_15 [i_4]))))) : (var_3)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 25; i_7 += 1) 
        {
            for (unsigned int i_8 = 0; i_8 < 25; i_8 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) (((-(var_5))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_24 [i_3] [i_7] [(short)14] [i_9])) / (((/* implicit */int) arr_12 [i_8] [i_3])))))));
                        var_18 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3] [i_3] [i_8]))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65344)) ? (((/* implicit */int) arr_24 [i_3] [i_7] [i_8] [i_9])) : (((/* implicit */int) (signed char)108))))) : (var_7)));
                        var_19 = arr_27 [i_3] [i_3] [i_3];
                    }
                    var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_26 [i_3] [i_3] [i_8] [i_8] [i_7] [i_7])))) ? (arr_26 [i_3] [i_7] [i_8] [i_8] [i_8] [i_8]) : (max((arr_26 [i_8] [i_8] [i_8] [i_8] [i_3] [i_3]), (arr_26 [i_3] [i_3] [i_8] [i_3] [i_3] [i_3])))));
                }
            } 
        } 
        arr_28 [i_3] [i_3] = ((/* implicit */_Bool) arr_16 [i_3] [i_3] [(unsigned char)9] [i_3] [i_3]);
    }
    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
    {
        var_21 = ((/* implicit */short) min((var_21), (((/* implicit */short) -9223372036854775806LL))));
        var_22 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) var_1)) : (var_3)))) ? (((/* implicit */int) arr_16 [i_10] [(short)22] [i_10] [i_10] [i_10])) : ((-(((/* implicit */int) (_Bool)1))))))));
    }
}
