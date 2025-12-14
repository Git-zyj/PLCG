/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44746
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
    var_11 |= (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min((((/* implicit */short) ((((/* implicit */_Bool) (signed char)-78)) || ((_Bool)1)))), (((short) (_Bool)1))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_12 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (((/* implicit */unsigned char) (signed char)101))))) ? (((/* implicit */int) ((short) arr_1 [i_0] [i_0]))) : (((/* implicit */int) (signed char)-78))));
        arr_3 [i_0] = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 619034245)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 1417775704)) ? (arr_0 [(_Bool)1] [i_0]) : (((/* implicit */int) (_Bool)1))))))))));
    }
    /* LoopSeq 2 */
    for (unsigned char i_1 = 0; i_1 < 23; i_1 += 1) 
    {
        var_13 *= ((/* implicit */signed char) ((unsigned short) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) / (var_0))), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */unsigned int) arr_7 [i_1]))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */signed char) max((max((((((/* implicit */_Bool) 4294967283U)) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-78))))), (((((/* implicit */_Bool) arr_7 [1ULL])) ? (var_0) : (((/* implicit */unsigned long long int) 4294967288U)))))), (((/* implicit */unsigned long long int) var_5))));
    }
    for (signed char i_2 = 2; i_2 < 24; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 25; i_3 += 3) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            {
                                var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_10 [i_2])), (((unsigned long long int) arr_10 [i_2])))))));
                                var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) ((((/* implicit */unsigned long long int) (-(max((var_4), (((/* implicit */long long int) var_7))))))) & (((((/* implicit */unsigned long long int) ((1068860496) ^ (((/* implicit */int) (signed char)-78))))) | ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) : (arr_14 [i_4] [i_4] [i_3]))))))))));
                                var_16 = ((/* implicit */long long int) ((max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_13 [14] [i_4] [i_5])) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1)))))), (((4294967261U) | (((/* implicit */unsigned int) arr_11 [(signed char)5])))))) == (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) arr_9 [i_5])) == (arr_11 [i_6]))))) < (var_0)))))));
                                arr_21 [17LL] [i_3] [i_2] = ((/* implicit */_Bool) (~((((_Bool)1) ? ((-(28U))) : (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-1)), (arr_16 [(unsigned short)11] [i_3] [i_3] [i_5]))))))));
                                arr_22 [i_2 - 1] [(short)14] [i_4] [i_2] [i_2] = ((/* implicit */short) ((unsigned long long int) var_0));
                            }
                        } 
                    } 
                    arr_23 [(unsigned short)12] [10U] [i_3] [(unsigned short)12] |= ((/* implicit */int) ((var_7) ? (((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 33U)) ? (arr_11 [i_2]) : (((/* implicit */int) arr_13 [i_2] [(signed char)5] [i_2]))))), (((((/* implicit */unsigned int) ((/* implicit */int) var_6))) | (var_2)))))) : (max((((((/* implicit */long long int) ((/* implicit */int) var_8))) * (var_4))), (((/* implicit */long long int) ((signed char) (signed char)-1)))))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
        {
            for (unsigned long long int i_8 = 3; i_8 < 24; i_8 += 3) 
            {
                for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                {
                    {
                        var_17 -= ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) var_10)))));
                        arr_35 [i_2] [i_2] [i_8] [i_8] [i_8] [0LL] &= ((/* implicit */unsigned char) var_10);
                    }
                } 
            } 
        } 
    }
}
