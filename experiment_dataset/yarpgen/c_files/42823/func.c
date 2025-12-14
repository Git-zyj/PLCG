/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42823
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
    /* LoopNest 2 */
    for (short i_0 = 3; i_0 < 19; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 18; i_1 += 2) 
        {
            {
                /* LoopSeq 2 */
                for (unsigned int i_2 = 0; i_2 < 20; i_2 += 2) /* same iter space */
                {
                    arr_11 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */int) var_8);
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 20; i_3 += 4) 
                    {
                        var_20 = (i_0 % 2 == 0) ? (((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((arr_10 [i_0]) - (588589050)))))) == (var_7))), ((((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))))) >= (((/* implicit */unsigned long long int) (~(var_1))))))))) : (((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) >> (((((arr_10 [i_0]) - (588589050))) - (1230888808)))))) == (var_7))), ((((((_Bool)1) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0]))))) >= (((/* implicit */unsigned long long int) (~(var_1)))))))));
                        var_21 ^= arr_4 [i_3] [i_1];
                        arr_14 [i_0] [i_0] [i_2] [i_3] = ((/* implicit */short) max((((((((/* implicit */unsigned long long int) arr_1 [i_0])) & (var_9))) ^ (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)128))))))), (min((var_9), (((((/* implicit */_Bool) arr_8 [i_0 - 3] [i_0])) ? (var_6) : (((/* implicit */unsigned long long int) arr_10 [i_0]))))))));
                    }
                }
                for (unsigned int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
                {
                    arr_18 [i_0] = ((/* implicit */unsigned char) max((((var_6) - (var_12))), (((/* implicit */unsigned long long int) arr_10 [i_0]))));
                    var_22 ^= ((/* implicit */unsigned int) ((((var_3) ? (8963421341993681427ULL) : (max((var_6), (((/* implicit */unsigned long long int) arr_12 [i_0 - 2] [i_0 - 1] [i_0 - 1] [i_1] [i_4])))))) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_17)))));
                    var_23 = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((((/* implicit */short) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_12))))), (arr_0 [i_0]))))));
                }
                var_24 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ ((~(var_9)))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_5 = 0; i_5 < 25; i_5 += 3) 
    {
        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (short i_7 = 0; i_7 < 25; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 25; i_8 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) var_3);
                        var_26 *= ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_11)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_27 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_5] [i_7] [i_7] [i_7] [i_7] [i_7])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_6] [i_6]))) : (var_15)));
                        arr_31 [i_9] [i_7] [i_6] [i_9] [i_7] [i_6] = ((/* implicit */signed char) var_19);
                    }
                    var_28 = ((/* implicit */_Bool) var_12);
                    arr_32 [i_5] [i_6] = ((/* implicit */signed char) 18446744073709551615ULL);
                }
                /* vectorizable */
                for (signed char i_10 = 1; i_10 < 23; i_10 += 4) /* same iter space */
                {
                    var_29 = ((/* implicit */signed char) ((18446744073709551615ULL) / (((arr_24 [i_5]) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128)))))));
                    var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_16))));
                }
                for (signed char i_11 = 1; i_11 < 23; i_11 += 4) /* same iter space */
                {
                    var_31 *= ((/* implicit */short) (signed char)-109);
                    arr_38 [i_5] [i_11] [i_11 + 1] = ((/* implicit */short) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_35 [i_6] [i_11] [i_11 - 1] [i_11]))))), (((((/* implicit */unsigned int) ((/* implicit */int) arr_29 [i_5] [i_5] [i_5] [i_11] [i_5] [i_5]))) * (1630699766U)))));
                    var_32 = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) / (var_7)));
                }
                arr_39 [i_6] [i_6] = ((/* implicit */_Bool) (~(8ULL)));
                var_33 += ((/* implicit */signed char) (_Bool)1);
                var_34 = ((/* implicit */unsigned long long int) (short)1023);
            }
        } 
    } 
}
