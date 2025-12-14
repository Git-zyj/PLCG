/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207460
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207460 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207460
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10639056632709651104ULL)) ? (366622003358780100ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)22828)))))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_1 [i_0])))))) + (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))));
        arr_3 [i_0] = arr_1 [i_0];
    }
    for (long long int i_1 = 1; i_1 < 13; i_1 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 14; i_3 += 3) 
            {
                {
                    var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(arr_11 [i_1 - 1] [i_1 - 1] [i_1 - 1]))))));
                    arr_12 [i_3] [i_1] = ((/* implicit */unsigned long long int) arr_1 [i_1 + 1]);
                    var_16 = ((/* implicit */signed char) arr_5 [i_1]);
                }
            } 
        } 
        var_17 = (+(((long long int) ((arr_6 [(signed char)8] [i_1]) - (((/* implicit */unsigned int) arr_9 [i_1] [i_1]))))));
        /* LoopNest 2 */
        for (long long int i_4 = 0; i_4 < 14; i_4 += 4) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */unsigned char) (+((~(((((/* implicit */unsigned long long int) 77725811U)) + (1238012877566910523ULL)))))));
                    arr_17 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) ? (((unsigned long long int) var_10)) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_1 - 1])), (var_0)))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (short i_6 = 0; i_6 < 24; i_6 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) (-((+(var_4)))));
        var_20 = ((/* implicit */short) ((((/* implicit */unsigned long long int) (+(arr_19 [i_6])))) + (arr_18 [i_6])));
        arr_22 [i_6] = ((/* implicit */unsigned int) var_2);
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) arr_9 [i_7] [i_7])) ? (((/* implicit */long long int) (~(1592764146U)))) : (arr_21 [i_7])));
        /* LoopNest 2 */
        for (unsigned int i_8 = 1; i_8 < 9; i_8 += 3) 
        {
            for (long long int i_9 = 1; i_9 < 6; i_9 += 3) 
            {
                {
                    var_22 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_27 [i_9] [i_9])))) ? (((/* implicit */int) arr_15 [i_9 + 1] [i_9] [i_9 + 1] [i_9])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    var_23 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_24 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_8]))) : (arr_31 [i_7] [i_7] [i_7] [i_7])))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                    {
                        for (signed char i_11 = 0; i_11 < 10; i_11 += 3) 
                        {
                            {
                                var_24 = ((/* implicit */long long int) ((((-1981497749) <= (((/* implicit */int) (short)17694)))) ? (((((/* implicit */int) var_5)) >> (((9985741942480625265ULL) - (9985741942480625257ULL))))) : (((/* implicit */int) arr_4 [i_7]))));
                                var_25 ^= ((/* implicit */short) arr_27 [i_7] [i_7]);
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                    {
                        arr_42 [i_12] [(unsigned char)2] [(unsigned char)2] [i_7] &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_32 [i_9 + 1] [i_9 + 2] [i_9 + 4]))));
                        var_26 = ((/* implicit */signed char) ((((arr_34 [i_8 + 1] [i_8 + 1] [i_9 + 3] [i_9 + 2] [i_9 + 3] [i_9 + 1]) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) var_11)))) - (15722)))));
                    }
                }
            } 
        } 
    }
    var_27 = ((/* implicit */unsigned int) (+(((/* implicit */int) var_12))));
}
