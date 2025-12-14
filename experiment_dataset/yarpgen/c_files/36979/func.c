/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36979
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
    var_15 += ((/* implicit */unsigned int) min(((~(((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_9))))))), ((~(((/* implicit */int) (signed char)124))))));
    var_16 = ((/* implicit */unsigned char) (signed char)124);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 23; i_1 += 2) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1] [23]))) ^ (((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [i_1 + 2])))))));
                    var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) (~(((((((/* implicit */_Bool) var_12)) ? (var_13) : (((/* implicit */long long int) var_0)))) & (((/* implicit */long long int) ((var_0) + (((/* implicit */unsigned int) var_1))))))))))));
                    var_19 ^= ((/* implicit */unsigned int) ((max((arr_1 [i_1 - 1]), (arr_1 [i_1 + 2]))) & ((~((~(arr_0 [(unsigned char)4] [i_1 - 1])))))));
                    var_20 = ((/* implicit */unsigned short) min((var_20), (arr_3 [i_1 + 1] [i_0])));
                }
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 4) /* same iter space */
                {
                    var_21 = arr_7 [i_0] [i_1 - 1] [i_0];
                    var_22 = ((/* implicit */short) (-(((/* implicit */int) ((_Bool) (~(((/* implicit */int) (unsigned short)65535))))))));
                    arr_10 [i_1] [i_1] = ((((/* implicit */_Bool) var_11)) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) < (14382138017687301934ULL))) ? ((+(((/* implicit */int) var_12)))) : (((/* implicit */int) arr_5 [i_1 - 1] [i_0])))) : ((~((~(((/* implicit */int) arr_5 [i_1] [i_3])))))));
                }
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 4) /* same iter space */
                {
                    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1))))) | (min((arr_0 [i_1 + 2] [i_1]), (((/* implicit */unsigned long long int) var_12))))));
                    /* LoopSeq 4 */
                    for (short i_5 = 0; i_5 < 25; i_5 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) arr_2 [i_1]);
                        var_25 = ((/* implicit */long long int) ((((((/* implicit */int) ((signed char) arr_7 [i_1 + 1] [i_1 + 1] [i_1 + 1]))) + (2147483647))) << (((((((/* implicit */_Bool) (~(((/* implicit */int) arr_9 [i_1] [i_0]))))) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) 738293221U)) || (((/* implicit */_Bool) var_0)))))))) - (8030475391747169474ULL)))));
                        var_26 = ((/* implicit */unsigned long long int) max((((((/* implicit */int) (unsigned char)58)) >> (((((/* implicit */int) arr_9 [i_1 + 1] [i_1 + 1])) - (64500))))), (((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */int) (short)-18060)) : (((/* implicit */int) (signed char)-123))))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 25; i_6 += 1) /* same iter space */
                    {
                        var_27 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)71))) & (arr_4 [i_0] [i_1] [i_4] [i_6]))) < (((/* implicit */unsigned int) min((arr_7 [i_0] [i_1] [i_4]), (((/* implicit */int) (signed char)122)))))))), (max((((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_4 [(signed char)20] [i_1] [i_4] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [10U])) || (((/* implicit */_Bool) arr_16 [i_6] [i_4] [i_0] [i_0])))))))));
                        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9285))) : (12234433577286668115ULL)));
                    }
                    for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                    {
                        arr_20 [i_0] [i_1 + 2] [i_0] [i_0] [i_4] [i_7] |= ((/* implicit */unsigned char) var_7);
                        var_29 = ((/* implicit */long long int) max((var_29), (((/* implicit */long long int) arr_9 [i_4] [i_0]))));
                        arr_21 [i_1] [i_0] [i_1 + 2] [i_1] = (+(((/* implicit */int) max((((arr_0 [i_0] [i_1 + 1]) == (((/* implicit */unsigned long long int) arr_4 [4U] [(unsigned short)5] [i_1] [i_0])))), (((((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_1]))) != (arr_12 [i_4])))))));
                    }
                    for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_9 = 1; i_9 < 21; i_9 += 2) 
                        {
                            var_30 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)9287)) || (((/* implicit */_Bool) arr_27 [(unsigned short)6] [i_1] [i_4] [i_8] [i_9]))))))))));
                            var_31 = ((/* implicit */unsigned char) var_3);
                            var_32 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) ^ (arr_4 [i_1 - 1] [i_1] [i_9 + 1] [i_9 - 1]))), (((/* implicit */unsigned int) (((~(((/* implicit */int) var_6)))) | ((~(((/* implicit */int) var_12)))))))));
                        }
                        /* vectorizable */
                        for (unsigned int i_10 = 0; i_10 < 25; i_10 += 4) 
                        {
                            var_33 = ((/* implicit */unsigned long long int) max((var_33), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) arr_9 [i_4] [i_1])) < (((/* implicit */int) (unsigned short)1))))) ^ (((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned char)123)))))))));
                            arr_32 [i_0] [i_1] [i_4] [i_1] [(unsigned char)9] [(unsigned short)13] [i_10] = ((/* implicit */unsigned short) (+(arr_31 [i_0] [i_0] [i_1] [(unsigned short)20] [i_8] [i_10])));
                            var_34 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) arr_14 [i_4])) : (((/* implicit */int) arr_14 [i_4]))));
                            var_35 = ((/* implicit */signed char) arr_25 [i_0] [i_1] [13]);
                        }
                        /* vectorizable */
                        for (short i_11 = 0; i_11 < 25; i_11 += 4) 
                        {
                            var_36 = ((((arr_34 [i_1 + 1] [i_1 + 1] [i_1 + 2] [i_1 + 1] [i_1 + 2] [i_4]) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */int) (signed char)-83)) <= (((/* implicit */int) (unsigned short)56251))))));
                            var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_4] [i_8])) ? (((/* implicit */int) (signed char)122)) : (arr_34 [i_1 + 1] [9LL] [i_4] [i_1 + 1] [9LL] [i_0]))) + (((int) var_12))));
                        }
                        var_38 &= ((/* implicit */_Bool) (+(((/* implicit */int) ((((var_1) / (((/* implicit */int) var_3)))) != (((/* implicit */int) var_12)))))));
                    }
                    var_39 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)9284))) * (0ULL)));
                    var_40 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_9 [i_1] [i_4])) ? (((/* implicit */int) arr_9 [i_0] [i_1])) : (((/* implicit */int) arr_9 [i_0] [i_0]))))));
                    var_41 = ((/* implicit */int) min((var_41), (max((((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) (signed char)-123))))), (arr_3 [i_1 + 1] [i_1 + 1])))), (((((/* implicit */_Bool) arr_24 [i_1 - 1] [i_1] [i_1 + 1] [i_4])) ? (((/* implicit */int) (short)32767)) : ((~(((/* implicit */int) (unsigned short)62769))))))))));
                }
                var_42 |= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) var_12))))) < (((min((-2193091109524538012LL), (((/* implicit */long long int) 4014897283U)))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_12))))))));
            }
        } 
    } 
}
