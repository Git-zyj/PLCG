/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39977
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39977 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39977
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
    for (signed char i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        arr_4 [i_0 + 1] = ((/* implicit */long long int) (unsigned char)255);
        var_12 = var_5;
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 2; i_1 < 10; i_1 += 1) 
        {
            var_13 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0] [i_1 - 2])) && (((/* implicit */_Bool) arr_3 [i_0 + 1]))));
            /* LoopSeq 2 */
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned int i_3 = 2; i_3 < 11; i_3 += 4) 
                {
                    for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                    {
                        {
                            var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) arr_8 [i_0] [i_1 + 2] [(unsigned char)1] [i_4]))));
                            var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2] [i_2 - 1] [i_2])) ? (((/* implicit */int) (unsigned char)2)) : (((var_9) ? (((/* implicit */int) arr_3 [(unsigned char)1])) : (((/* implicit */int) var_9))))));
                            var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((signed char) var_1))) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))));
                            var_17 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_1 - 2] [i_3 - 1])) ? (arr_0 [i_1 + 2] [i_3 - 1]) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_9 [i_1 + 1] [i_2] [i_2 - 1] [i_1] [i_2 - 1])) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) var_10))));
                var_19 = (+(((/* implicit */int) var_3)));
                /* LoopNest 2 */
                for (short i_5 = 2; i_5 < 8; i_5 += 4) 
                {
                    for (unsigned int i_6 = 0; i_6 < 12; i_6 += 3) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
                            arr_17 [i_0] [i_2] [i_2] [i_5 + 4] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) arr_10 [i_1 + 1]);
                        }
                    } 
                } 
                var_21 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) arr_10 [i_0])) : (((/* implicit */int) (unsigned char)29))))));
            }
            for (signed char i_7 = 3; i_7 < 10; i_7 += 3) 
            {
                var_22 |= ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                var_23 &= ((/* implicit */signed char) var_5);
            }
            arr_20 [i_1] [i_0 - 1] = ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) (~(((/* implicit */int) var_6))))) : ((~(var_7))));
        }
        for (int i_8 = 0; i_8 < 12; i_8 += 1) 
        {
            var_24 *= ((/* implicit */unsigned int) arr_13 [i_0 - 1] [i_0 - 1] [i_0] [(unsigned char)2] [(signed char)4]);
            var_25 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_8])) ? (arr_7 [i_0] [i_0 + 1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))));
            var_26 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_2 [i_8] [i_8]))));
        }
        for (short i_9 = 3; i_9 < 10; i_9 += 4) 
        {
            var_27 = ((/* implicit */unsigned int) arr_15 [i_9] [i_9] [7U] [i_9 + 2] [2LL]);
            arr_26 [(short)3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)18)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [(unsigned short)11] [i_0])) ? (arr_9 [(unsigned char)6] [4] [(unsigned char)6] [i_0 - 1] [(unsigned char)6]) : (((/* implicit */int) (_Bool)0))))) : (((((/* implicit */_Bool) arr_21 [i_0])) ? (((/* implicit */unsigned int) arr_23 [i_9] [i_9] [i_0])) : (arr_24 [(short)9] [i_9] [i_9])))));
            /* LoopSeq 1 */
            for (unsigned int i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                var_28 = (-(((/* implicit */int) (short)224)));
                var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) arr_25 [i_0 - 1] [i_0 + 1])) + (arr_7 [i_0 - 1] [i_0 + 1] [i_0 - 1]))))));
                arr_29 [i_10] [i_9 - 1] [i_10] = ((/* implicit */unsigned short) (+(arr_7 [i_0 - 1] [i_9 - 2] [i_10])));
            }
        }
        /* LoopNest 3 */
        for (int i_11 = 2; i_11 < 10; i_11 += 3) 
        {
            for (signed char i_12 = 2; i_12 < 9; i_12 += 1) 
            {
                for (unsigned long long int i_13 = 2; i_13 < 10; i_13 += 1) 
                {
                    {
                        var_30 |= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_14 [i_0 - 1])) ? (arr_14 [i_0 + 1]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                        var_31 = ((/* implicit */_Bool) 2290951095U);
                        var_32 = arr_28 [i_11];
                        var_33 = ((/* implicit */unsigned long long int) ((arr_31 [i_13 - 1] [6ULL] [i_13]) ? ((~(arr_11 [i_0 + 1] [i_0 + 1] [i_11] [(short)9] [i_0]))) : (((((/* implicit */_Bool) arr_9 [i_0] [i_11] [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned char)64)) : (((/* implicit */int) var_4))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned char i_14 = 3; i_14 < 16; i_14 += 1) 
    {
        var_34 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_11)) ? (arr_41 [i_14]) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) 889990134U))))) - (((unsigned long long int) arr_41 [i_14]))));
        arr_43 [i_14] [(short)16] = ((/* implicit */unsigned int) ((signed char) ((short) ((((/* implicit */_Bool) arr_42 [(_Bool)1])) ? (arr_41 [i_14]) : (22LL)))));
        var_35 *= ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */long long int) ((((/* implicit */int) (unsigned short)25717)) - (((/* implicit */int) (unsigned char)227))))) : (arr_41 [(signed char)4]))) / (arr_41 [(unsigned short)16])));
        var_36 = ((/* implicit */int) (unsigned short)57351);
    }
    var_37 ^= ((/* implicit */unsigned short) var_8);
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_15 = 2; i_15 < 19; i_15 += 2) /* same iter space */
    {
        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_45 [i_15 - 2] [i_15])) && (((/* implicit */_Bool) (unsigned char)255))));
        var_39 = ((signed char) ((((/* implicit */int) (signed char)-1)) + (((/* implicit */int) (signed char)14))));
        var_40 = ((/* implicit */int) ((unsigned char) arr_45 [i_15 + 1] [i_15 - 1]));
        var_41 = ((/* implicit */unsigned char) max((var_41), (((unsigned char) var_6))));
    }
    /* vectorizable */
    for (long long int i_16 = 2; i_16 < 19; i_16 += 2) /* same iter space */
    {
        var_42 = ((/* implicit */_Bool) ((unsigned int) arr_47 [i_16 + 2] [i_16]));
        var_43 = ((/* implicit */long long int) arr_46 [i_16]);
    }
}
