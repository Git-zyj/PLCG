/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209553
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209553 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209553
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 11; i_0 += 3) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(-4685603007205282005LL)));
        var_12 = ((/* implicit */unsigned short) ((signed char) (unsigned char)0));
    }
    for (unsigned char i_1 = 0; i_1 < 11; i_1 += 3) /* same iter space */
    {
        /* LoopSeq 2 */
        for (int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_13 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (unsigned char)255)))), ((+(((/* implicit */int) (unsigned char)53))))));
            /* LoopSeq 4 */
            for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                var_14 = ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */_Bool) 3304256515100163607LL)) && (((/* implicit */_Bool) var_6))))), (max((var_10), (((/* implicit */long long int) arr_1 [i_3]))))));
                arr_13 [i_3] [i_2] [i_2] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_1)))))));
                arr_14 [i_3] = ((/* implicit */unsigned short) -889048535);
                /* LoopNest 2 */
                for (long long int i_4 = 0; i_4 < 11; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 9; i_5 += 3) 
                    {
                        {
                            arr_22 [i_1] [i_1] [(signed char)4] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) max((max((arr_21 [i_5 - 2]), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (unsigned char)249))))))), (((/* implicit */long long int) ((((var_3) + (2147483647))) << (((((/* implicit */int) (unsigned char)5)) - (5))))))));
                            arr_23 [i_1] [i_2] [i_3] [i_4] [i_1] [i_2] [i_3] = (+(((max((9223372036854775807LL), (var_10))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                            var_15 = ((/* implicit */signed char) var_4);
                        }
                    } 
                } 
            }
            for (unsigned long long int i_6 = 2; i_6 < 10; i_6 += 4) 
            {
                arr_26 [i_6] [i_2] = ((/* implicit */unsigned int) (+((+(arr_25 [i_1] [i_1] [i_1] [i_1])))));
                /* LoopSeq 1 */
                for (unsigned long long int i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) (!(((((/* implicit */long long int) ((-1285358893) % (((/* implicit */int) (_Bool)1))))) == (((((/* implicit */_Bool) arr_1 [i_6])) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))))));
                    var_17 = ((/* implicit */int) 12775278985153289278ULL);
                    var_18 = ((/* implicit */long long int) max((var_18), (var_6)));
                    arr_29 [i_1] [i_2] [i_6 - 2] [i_7] = ((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) max((12775278985153289278ULL), (((/* implicit */unsigned long long int) arr_4 [i_2] [i_6 - 2]))))) && (((/* implicit */_Bool) var_11)))));
                }
            }
            for (short i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                arr_32 [(unsigned short)3] [(unsigned short)7] = (~(((arr_8 [i_1]) * (((/* implicit */unsigned int) 2147483647)))));
                var_19 = ((/* implicit */int) max((9223372036854775807LL), (((/* implicit */long long int) (unsigned short)65515))));
            }
            for (unsigned long long int i_9 = 0; i_9 < 11; i_9 += 1) 
            {
                var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */int) (unsigned short)65535)), (var_3)))))))));
                /* LoopSeq 1 */
                for (int i_10 = 2; i_10 < 8; i_10 += 4) 
                {
                    var_21 = ((/* implicit */unsigned char) arr_10 [i_1]);
                    arr_39 [i_9] = ((/* implicit */unsigned char) ((((((((/* implicit */_Bool) ((var_6) | (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (min((((/* implicit */long long int) arr_30 [i_1] [i_2] [i_9] [i_10])), (var_10))) : (var_2))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) (unsigned short)65535)))) + (65598)))));
                    var_22 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((long long int) arr_38 [i_10 + 1] [i_10] [i_10 - 2] [(short)4])))));
                    /* LoopSeq 3 */
                    for (unsigned char i_11 = 0; i_11 < 11; i_11 += 3) 
                    {
                        var_23 ^= ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1])))));
                        var_24 = ((/* implicit */int) ((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) min((((/* implicit */int) ((var_7) != (((/* implicit */int) (unsigned short)2223))))), ((-(((/* implicit */int) arr_28 [i_1] [i_1] [i_9] [i_10 + 1] [4ULL] [i_2])))))))));
                    }
                    for (unsigned int i_12 = 2; i_12 < 10; i_12 += 4) 
                    {
                        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [i_1] [i_1] [i_2] [i_9] [i_10 + 2] [i_12]))))) << (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (var_9))) + (22808)))))))))));
                        arr_45 [i_1] |= arr_15 [i_2] [i_10 - 1] [i_12] [i_12 - 1];
                        var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) min((((/* implicit */int) arr_43 [i_1] [i_2] [i_9] [i_9] [i_12 - 1])), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_31 [i_12] [i_2] [i_9] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)1))) : (var_6)))) ? (max((-1), (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) var_4)))))))));
                    }
                    for (signed char i_13 = 1; i_13 < 9; i_13 += 1) 
                    {
                        arr_48 [i_2] [i_2] [i_13] [i_13] = ((/* implicit */int) var_10);
                        var_27 = ((/* implicit */signed char) arr_41 [i_1] [i_2] [i_9] [i_10] [i_13]);
                        arr_49 [i_1] [i_2] [i_9] [i_10] [i_1] = ((/* implicit */signed char) arr_44 [i_13] [i_10 + 3] [i_9] [i_2] [i_1]);
                    }
                    arr_50 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~(((/* implicit */int) max((arr_12 [i_1] [i_2] [i_9]), ((unsigned char)0))))));
                }
            }
            /* LoopNest 2 */
            for (unsigned int i_14 = 2; i_14 < 9; i_14 += 4) 
            {
                for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) 
                {
                    {
                        var_28 = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_1)))))) | (((9223372036854775794LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)59))))));
                        var_29 = ((/* implicit */int) min((var_29), (((/* implicit */int) max((((/* implicit */long long int) (!(((/* implicit */_Bool) (~(arr_25 [i_1] [i_1] [i_14] [i_15]))))))), (max((((/* implicit */long long int) max((((/* implicit */short) (signed char)-84)), (arr_10 [i_2])))), (137438953471LL))))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
        {
            var_30 = ((/* implicit */int) arr_30 [i_1] [i_1] [i_1] [i_1]);
            arr_57 [i_1] [i_16] = ((/* implicit */unsigned short) ((unsigned char) 3257127165316720429LL));
            var_31 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
        }
        arr_58 [i_1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) var_4)))))))));
        arr_59 [i_1] = max((((((/* implicit */long long int) ((/* implicit */int) arr_53 [(short)5] [i_1] [i_1] [5]))) ^ (9223372036854775801LL))), (((((/* implicit */_Bool) arr_30 [i_1] [i_1] [i_1] [i_1])) ? (arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))));
    }
    var_32 = ((/* implicit */long long int) (short)-1285);
}
