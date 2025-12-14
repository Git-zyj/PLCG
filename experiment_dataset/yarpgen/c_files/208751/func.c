/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208751
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208751 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208751
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
    var_12 = ((/* implicit */long long int) var_8);
    var_13 &= ((/* implicit */signed char) var_11);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_2] [(short)3] = ((/* implicit */long long int) (~(((/* implicit */int) (!(((((/* implicit */int) arr_2 [i_1])) != (((/* implicit */int) arr_7 [i_0] [8U] [i_0])))))))));
                    var_14 = ((/* implicit */int) min((var_14), (max((max((((/* implicit */int) arr_2 [i_0])), (arr_3 [i_0]))), ((+(((/* implicit */int) (unsigned char)86))))))));
                }
            } 
        } 
        var_15 *= ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_7)) ? (-720811368) : (arr_3 [i_0]))), ((-(arr_3 [i_0])))));
    }
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) /* same iter space */
    {
        arr_11 [i_3] &= (~(((((/* implicit */_Bool) ((unsigned int) var_5))) ? (((/* implicit */int) var_10)) : (arr_10 [i_3]))));
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) max((max((min((arr_9 [i_3]), (((/* implicit */unsigned int) arr_10 [i_3])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) >= (((/* implicit */int) (signed char)-42))))))), (max((arr_9 [19]), (((/* implicit */unsigned int) ((var_6) >= (((/* implicit */long long int) arr_10 [i_3])))))))));
        var_16 = ((/* implicit */signed char) var_1);
        var_17 = ((/* implicit */short) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9))))), (((((/* implicit */unsigned int) ((/* implicit */int) (short)31329))) + (arr_9 [i_3]))))) << (((((((/* implicit */_Bool) ((int) arr_10 [i_3]))) ? (((/* implicit */unsigned int) (+(arr_10 [i_3])))) : (arr_9 [i_3]))) - (871779651U)))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 4) /* same iter space */
    {
        var_18 &= ((/* implicit */signed char) var_1);
        var_19 = ((/* implicit */signed char) ((unsigned long long int) min((arr_9 [9U]), (arr_9 [18ULL]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_5 = 0; i_5 < 11; i_5 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */int) arr_15 [i_5])) << (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) < (arr_9 [i_5]))))));
        /* LoopSeq 1 */
        for (long long int i_6 = 0; i_6 < 11; i_6 += 2) 
        {
            var_21 -= ((/* implicit */short) (((((~(((/* implicit */int) arr_14 [i_5] [i_5])))) + (2147483647))) << (((((arr_20 [i_5] [i_6]) + (694769581))) - (19)))));
            arr_23 [i_5] [i_6] &= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_2))));
            /* LoopNest 3 */
            for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 4) 
            {
                for (int i_8 = 3; i_8 < 10; i_8 += 1) 
                {
                    for (int i_9 = 0; i_9 < 11; i_9 += 4) 
                    {
                        {
                            arr_31 [i_8] [i_8] [i_8] [i_8] [i_6] [i_8] [i_8] = ((/* implicit */int) var_10);
                            arr_32 [i_8] [i_6] = ((/* implicit */signed char) arr_30 [2ULL] [2ULL] [2ULL] [2ULL] [2ULL]);
                        }
                    } 
                } 
            } 
            arr_33 [i_5] [i_5] [i_5] &= ((/* implicit */unsigned int) var_9);
        }
    }
    for (short i_10 = 0; i_10 < 12; i_10 += 1) 
    {
        arr_36 [i_10] = (-(((((/* implicit */unsigned long long int) arr_10 [i_10])) - (var_4))));
        var_22 ^= ((/* implicit */signed char) max((((/* implicit */int) (signed char)-1)), (((((/* implicit */_Bool) ((((/* implicit */int) arr_34 [i_10])) ^ (((/* implicit */int) (signed char)41))))) ? (min((((/* implicit */int) (signed char)7)), (720811344))) : (((((/* implicit */int) (short)-2937)) & (((/* implicit */int) arr_14 [i_10] [i_10]))))))));
    }
    for (signed char i_11 = 0; i_11 < 23; i_11 += 4) 
    {
        var_23 = ((/* implicit */short) ((((/* implicit */int) arr_14 [i_11] [i_11])) << (((min((((/* implicit */int) max((var_10), (var_7)))), (((((/* implicit */int) arr_15 [i_11])) << (((var_2) + (1702348231))))))) - (41)))));
        var_24 = ((/* implicit */signed char) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))));
    }
}
