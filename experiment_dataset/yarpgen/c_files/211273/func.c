/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211273
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211273 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211273
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
    var_18 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_11))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        arr_3 [i_0] = (signed char)68;
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            for (int i_2 = 0; i_2 < 10; i_2 += 4) 
            {
                for (unsigned int i_3 = 0; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned short) 70368744177662ULL);
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_2] [i_2] [i_1] [i_0])) ? (arr_9 [i_0] [i_1] [9ULL] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_1] [i_2] [i_3] [i_3])))));
                        var_21 = ((/* implicit */signed char) var_0);
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_9 [i_0] [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_9 [i_0] [i_0] [i_0] [i_2] [i_0])))));
                    }
                } 
            } 
        } 
    }
    /* LoopNest 2 */
    for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
    {
        for (signed char i_5 = 0; i_5 < 11; i_5 += 2) 
        {
            {
                arr_17 [i_4] = ((/* implicit */unsigned short) (-(arr_16 [i_4] [i_4] [i_5])));
                /* LoopNest 2 */
                for (unsigned char i_6 = 0; i_6 < 11; i_6 += 3) 
                {
                    for (int i_7 = 1; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_16)) ? (arr_24 [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) * (((/* implicit */unsigned long long int) arr_22 [i_6] [i_5] [i_6] [i_7]))));
                            /* LoopSeq 1 */
                            for (short i_8 = 0; i_8 < 11; i_8 += 3) 
                            {
                                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_7 - 1])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) arr_12 [i_7 - 1]))))) : ((+(arr_15 [i_7 + 1] [i_7 + 1] [i_7 + 1]))))))));
                                var_24 = (+(((/* implicit */int) ((signed char) arr_26 [i_6]))));
                            }
                            arr_28 [i_6] [i_5] = ((/* implicit */unsigned int) min((min((((((/* implicit */int) (_Bool)1)) ^ (var_16))), (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) var_14))))))), (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_7)) : (var_16)))) != (arr_23 [i_7 - 1] [i_7] [i_7 - 1] [i_7 - 1]))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 10; i_9 += 3) 
                {
                    for (signed char i_10 = 0; i_10 < 11; i_10 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */unsigned char) min((((arr_15 [i_9] [i_9 - 1] [i_9]) / (arr_15 [(unsigned char)10] [i_9 + 1] [i_9 + 1]))), (((((/* implicit */_Bool) arr_15 [i_4] [i_9 - 1] [i_9 - 1])) ? (arr_15 [i_4] [i_9 + 1] [i_9]) : (arr_15 [i_4] [i_9 + 1] [i_9])))));
                            arr_34 [i_9] [i_9] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                        }
                    } 
                } 
                arr_35 [i_4] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) ((var_6) << (((((/* implicit */int) var_7)) - (40)))))), (arr_16 [i_4] [i_5] [i_4])))));
            }
        } 
    } 
    var_26 = ((/* implicit */signed char) var_6);
}
