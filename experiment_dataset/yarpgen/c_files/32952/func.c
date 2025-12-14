/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32952
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
    var_16 = ((/* implicit */int) min((var_16), (((/* implicit */int) max((max((((unsigned long long int) var_6)), (((/* implicit */unsigned long long int) (-(971558128U)))))), (((/* implicit */unsigned long long int) max((((((/* implicit */int) (short)-20450)) - (((/* implicit */int) (short)16021)))), (((/* implicit */int) max((var_13), (((/* implicit */short) var_8)))))))))))));
    var_17 = ((/* implicit */signed char) (-2147483647 - 1));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 2) /* same iter space */
        {
            arr_6 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (arr_5 [i_0] [i_1]) : (arr_5 [i_0] [i_0])));
            arr_7 [i_0] = ((/* implicit */signed char) (unsigned char)255);
        }
        /* vectorizable */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
            {
                var_18 *= ((/* implicit */signed char) (+(((/* implicit */int) arr_14 [i_3] [i_3] [i_2] [i_0]))));
                var_19 = ((/* implicit */_Bool) min((var_19), (((/* implicit */_Bool) ((((/* implicit */int) arr_14 [4U] [i_2] [i_2] [i_3])) >> (((((/* implicit */int) arr_4 [i_0] [i_3])) - (150))))))));
                /* LoopNest 2 */
                for (_Bool i_4 = 1; i_4 < 1; i_4 += 1) 
                {
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-20450))))) << (((var_7) - (2297913944U))));
                            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (arr_13 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_4 - 1]) : (((/* implicit */int) arr_8 [i_5 + 1]))));
                            arr_22 [i_0] [i_2] [i_3] [i_4 - 1] [i_5] = ((/* implicit */signed char) 3323409168U);
                            arr_23 [i_4] [i_2] [(unsigned char)10] [i_4] [i_4] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_18 [i_4 - 1] [i_2] [i_3] [(unsigned short)11] [3U] [i_5 + 1])) ? (arr_18 [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_5 + 1] [i_5 + 1]) : (((/* implicit */unsigned int) arr_17 [i_4 - 1]))));
                            arr_24 [i_0] [i_2] [i_2] [i_4 - 1] [i_5 + 1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) var_11)) + (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_4] [i_3]))))) ? (arr_13 [i_3] [i_4 - 1] [i_5 + 1] [i_5 + 1]) : (((/* implicit */int) arr_12 [i_4 - 1] [i_4 - 1] [i_3] [i_5 + 1]))));
                        }
                    } 
                } 
            }
            var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) ((((((/* implicit */_Bool) 971558128U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (arr_1 [i_0] [i_0]))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [4] [i_2] [i_2] [i_2] [i_0]))))))));
        }
        /* vectorizable */
        for (short i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            var_23 = ((/* implicit */unsigned char) 3323409167U);
            arr_27 [i_6] [i_6] = ((((/* implicit */_Bool) ((2611058273U) + (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0)))))) ? (((/* implicit */int) arr_19 [i_0] [i_6] [i_0] [i_0] [i_6])) : (((/* implicit */int) ((var_12) != (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_0] [i_6] [i_6] [i_6] [i_6])))))));
            /* LoopNest 3 */
            for (unsigned char i_7 = 0; i_7 < 16; i_7 += 4) 
            {
                for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                {
                    for (unsigned char i_9 = 0; i_9 < 16; i_9 += 3) 
                    {
                        {
                            arr_36 [(signed char)5] [i_9] [i_6] [i_6] [(unsigned short)6] [(signed char)5] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_10 [i_8] [i_0])) ? (((/* implicit */int) arr_10 [i_6] [i_6])) : (((/* implicit */int) var_11))));
                            arr_37 [i_0] [i_6] [i_7] [i_7] [i_9] [i_8] [2ULL] = ((/* implicit */unsigned char) (~(((/* implicit */int) arr_28 [i_6]))));
                            arr_38 [8] [i_6] [i_7] = ((/* implicit */signed char) ((unsigned short) arr_34 [i_7] [i_7] [(_Bool)1] [i_7] [i_7] [i_7] [10]));
                        }
                    } 
                } 
            } 
        }
        for (unsigned char i_10 = 2; i_10 < 15; i_10 += 2) 
        {
            var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) max((((/* implicit */int) ((unsigned char) arr_10 [i_0] [i_10]))), (max((((/* implicit */int) (unsigned short)0)), (((((/* implicit */int) (signed char)0)) & (((/* implicit */int) (signed char)0)))))))))));
            arr_42 [i_10] [i_0] [i_0] = ((/* implicit */_Bool) arr_25 [i_10] [13U] [i_10 - 2]);
            arr_43 [i_0] [i_0] = ((/* implicit */short) max((arr_26 [i_10] [i_10]), (var_6)));
            arr_44 [i_0] [i_0] [i_10 + 1] = ((/* implicit */unsigned int) max(((+(max((((/* implicit */long long int) var_15)), (arr_5 [i_0] [i_10]))))), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)189)))))));
        }
        var_25 = ((/* implicit */_Bool) min((var_25), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16021)) & (((/* implicit */int) arr_3 [i_0] [i_0]))))) ? (((/* implicit */int) max((arr_19 [i_0] [i_0] [i_0] [i_0] [i_0]), (arr_19 [i_0] [(unsigned char)2] [6U] [i_0] [i_0])))) : (max((max((var_1), (((/* implicit */int) arr_25 [i_0] [i_0] [i_0])))), (((/* implicit */int) ((unsigned short) arr_20 [i_0] [i_0] [i_0] [i_0] [i_0]))))))))));
        arr_45 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) max((3323409168U), (((/* implicit */unsigned int) (-(((/* implicit */int) (short)-20450))))))))));
        arr_46 [i_0] [i_0] = ((/* implicit */unsigned long long int) max(((~(((((/* implicit */_Bool) arr_40 [i_0])) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_40 [i_0]))))))), (((/* implicit */unsigned int) (-2147483647 - 1)))));
        var_26 ^= ((/* implicit */_Bool) (+(min((((/* implicit */int) arr_3 [i_0] [(unsigned char)4])), (max((((/* implicit */int) (unsigned char)227)), (arr_2 [i_0] [i_0])))))));
    }
}
