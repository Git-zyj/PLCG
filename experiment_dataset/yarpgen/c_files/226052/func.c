/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226052
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226052 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226052
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
    var_14 = (+(var_11));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 16; i_1 += 4) 
        {
            for (_Bool i_2 = 1; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_10 [i_0] [i_0] [(short)14] [i_2] = ((/* implicit */unsigned char) (+(var_8)));
                    var_15 -= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_9 [i_1] [i_2 - 1] [i_2])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_0] [i_0]))))) : (((((/* implicit */_Bool) (unsigned char)160)) ? (6518317544325599511LL) : (-8028382431228696114LL))))) < (((/* implicit */long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_4 [i_0] [i_1])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_6)))))))));
                    arr_11 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_1 - 1] [(unsigned char)14])) ? (((/* implicit */unsigned long long int) arr_8 [4] [4] [i_0] [16LL])) : (var_11)))) && (var_12))), ((!(((/* implicit */_Bool) max(((unsigned char)121), (((/* implicit */unsigned char) var_12)))))))));
                    var_16 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_1])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_7 [i_2] [i_2]))))) && (((((/* implicit */_Bool) arr_1 [i_1] [(signed char)5])) && (((/* implicit */_Bool) var_11)))))) ? (((/* implicit */int) arr_5 [i_1 - 2] [i_1 - 2])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_1 + 1])))))));
                }
            } 
        } 
    } 
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_15 [i_3] [i_3] = ((/* implicit */short) var_11);
        arr_16 [i_3] [i_3] &= ((((/* implicit */_Bool) arr_7 [i_3] [(signed char)10])) ? (arr_3 [i_3] [i_3] [i_3]) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_9))) + (var_1)))));
        arr_17 [i_3] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_3] [(_Bool)0])) + (2147483647))) << (((((((/* implicit */int) arr_14 [i_3])) + (10917))) - (8)))))) != (var_4)));
        /* LoopSeq 2 */
        for (signed char i_4 = 0; i_4 < 11; i_4 += 3) 
        {
            arr_22 [i_3] = ((/* implicit */unsigned long long int) (unsigned short)31494);
            /* LoopNest 2 */
            for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    {
                        arr_29 [i_3] [i_3] [i_5] [8ULL] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_28 [(short)1] [i_6] [9LL] [i_3] [i_3]))));
                        var_17 = arr_14 [i_3];
                        var_18 &= ((/* implicit */unsigned short) var_5);
                        var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_4))));
                    }
                } 
            } 
        }
        for (int i_7 = 3; i_7 < 10; i_7 += 4) 
        {
            var_20 *= ((/* implicit */unsigned short) var_8);
            arr_32 [(_Bool)1] = (!(((/* implicit */_Bool) var_0)));
            /* LoopNest 2 */
            for (unsigned char i_8 = 0; i_8 < 11; i_8 += 2) 
            {
                for (signed char i_9 = 0; i_9 < 11; i_9 += 3) 
                {
                    {
                        arr_38 [i_3] [i_7 - 1] [i_3] [i_9] [i_3] [i_8] |= ((/* implicit */int) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) var_6))))) - (var_11)));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) var_7)) >> (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32227)))))));
                    }
                } 
            } 
        }
    }
    for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 2) 
    {
        arr_41 [i_10] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) arr_28 [i_10] [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(_Bool)1]))) : (((arr_28 [i_10] [i_10] [i_10] [0LL] [i_10]) * (arr_36 [i_10] [i_10] [i_10] [i_10] [(_Bool)1] [(short)10])))))));
        var_22 = ((/* implicit */int) (((((-(var_4))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_9), (var_12))))))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_10] [i_10])))));
        arr_42 [i_10] [i_10] &= ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) + (arr_0 [i_10] [i_10]))) / (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_12)))))));
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
        {
            for (int i_12 = 4; i_12 < 9; i_12 += 3) 
            {
                {
                    /* LoopSeq 3 */
                    for (unsigned long long int i_13 = 1; i_13 < 9; i_13 += 3) 
                    {
                        arr_49 [i_13] = ((/* implicit */short) min((((/* implicit */int) var_12)), (((((/* implicit */int) var_3)) - (((/* implicit */int) var_7))))));
                        var_23 = ((/* implicit */short) var_12);
                        /* LoopSeq 1 */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) arr_35 [9LL] [i_12 - 1] [i_13] [(unsigned char)3]);
                            arr_52 [i_13] [(_Bool)1] [i_12] = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_10)), ((~(arr_21 [i_12 - 1] [i_13 + 1] [i_12 - 1])))));
                            arr_53 [i_13] [i_11] [(short)9] [i_11] = ((/* implicit */_Bool) (-((+(var_13)))));
                        }
                        arr_54 [i_10] [i_13] [i_12] [i_10] = ((((/* implicit */int) (short)-24204)) + (((/* implicit */int) (unsigned char)8)));
                        arr_55 [i_10] [(short)8] [i_11] [i_13] [i_13] [(short)0] = ((/* implicit */unsigned char) var_12);
                    }
                    for (long long int i_15 = 0; i_15 < 10; i_15 += 4) 
                    {
                        arr_59 [i_10] [(unsigned char)2] = ((/* implicit */_Bool) var_13);
                        arr_60 [i_10] [i_10] [i_10] [i_10] = ((/* implicit */long long int) var_0);
                    }
                    for (unsigned char i_16 = 1; i_16 < 9; i_16 += 2) 
                    {
                        var_25 ^= ((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))))) != (max((((/* implicit */unsigned long long int) arr_2 [i_11])), (var_13))))) ? ((-(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11]))) / (var_4))))) : (((min((((/* implicit */unsigned long long int) arr_34 [(unsigned char)6] [i_11])), (var_4))) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))))));
                        arr_65 [i_10] [i_10] = ((/* implicit */unsigned char) (((+(((((/* implicit */_Bool) arr_35 [i_10] [i_10] [i_10] [i_10])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_12 - 2]))) : (var_11))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) (((+(((/* implicit */int) (unsigned char)99)))) == (((/* implicit */int) ((((/* implicit */_Bool) 3464096716271193062LL)) || (((/* implicit */_Bool) arr_64 [i_10] [i_11] [i_12] [i_10])))))))))));
                        arr_66 [i_12 - 4] = ((/* implicit */short) var_9);
                    }
                    arr_67 [8] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)32230))));
                }
            } 
        } 
    }
    var_26 = ((/* implicit */short) ((-5264132617163407871LL) | (((/* implicit */long long int) ((/* implicit */int) var_5)))));
}
