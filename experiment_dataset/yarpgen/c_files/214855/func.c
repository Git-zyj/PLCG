/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214855
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
    for (signed char i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_15 = ((/* implicit */unsigned char) arr_0 [i_0 - 1]);
        arr_2 [i_0 - 2] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0])) : (arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_0 + 2]))))) ? (arr_0 [i_0 - 1]) : (((/* implicit */int) arr_1 [i_0 + 1]))));
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            for (signed char i_2 = 3; i_2 < 20; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 20; i_3 += 4) 
                {
                    {
                        var_16 |= ((/* implicit */unsigned char) ((long long int) (~(((/* implicit */int) arr_6 [i_1] [i_1])))));
                        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) arr_1 [i_0 + 1]))));
                        var_18 = ((/* implicit */int) (-(arr_11 [i_3] [i_0 - 2] [i_2 - 2] [i_3 + 1])));
                        var_19 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_10 [i_1] [i_3] [i_1])) - (((/* implicit */int) arr_10 [i_1] [i_1] [i_1]))));
                    }
                } 
            } 
        } 
    }
    for (long long int i_4 = 1; i_4 < 17; i_4 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 4) 
        {
            for (short i_6 = 3; i_6 < 19; i_6 += 4) 
            {
                {
                    arr_21 [i_6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned char) ((_Bool) arr_20 [i_4 + 1]))), (min((arr_20 [i_4 + 2]), (arr_20 [i_5])))));
                    arr_22 [i_4] [(_Bool)1] [i_6 + 2] = ((/* implicit */unsigned int) (~(min((arr_16 [i_5 + 1] [i_5 - 1] [i_5 + 1]), (arr_16 [i_5 + 1] [i_5 - 1] [i_5 + 1])))));
                }
            } 
        } 
        arr_23 [i_4] [i_4] = ((long long int) min((arr_12 [i_4 + 1] [i_4 + 3]), (arr_12 [i_4 + 1] [i_4 + 3])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_7 = 0; i_7 < 21; i_7 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_8 = 1; i_8 < 17; i_8 += 1) 
            {
                arr_29 [i_4] [i_7] [i_8 + 4] = ((/* implicit */_Bool) (-(arr_19 [i_4 - 1] [i_7] [i_8 + 1])));
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 18; i_9 += 4) 
                {
                    arr_33 [i_4 + 3] [14LL] [i_7] [i_7] [i_7] [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_4 - 1] [i_8 + 2])) ? (((/* implicit */int) arr_13 [i_4 - 1] [i_8 + 2])) : (((/* implicit */int) arr_13 [i_4 - 1] [i_8 + 2]))));
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((signed char) arr_27 [i_4] [i_4 + 2] [i_9] [i_4 - 1])))));
                    arr_34 [i_4] [i_4] [i_8] [i_7] = ((/* implicit */unsigned int) arr_27 [i_4 + 2] [i_7] [i_7] [i_8 + 4]);
                }
                var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_14 [i_4 + 2] [i_4 + 2])) ? (((/* implicit */int) arr_14 [i_4 + 1] [i_8])) : (((/* implicit */int) arr_14 [i_4 - 1] [i_4]))));
            }
            /* LoopSeq 1 */
            for (long long int i_10 = 1; i_10 < 19; i_10 += 3) 
            {
                var_22 += ((((/* implicit */_Bool) arr_19 [i_4 - 1] [i_10 + 1] [i_10 + 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_4 + 3] [i_7] [i_7]))) : (arr_19 [i_4 - 1] [i_10 - 1] [i_10 + 1]));
                /* LoopSeq 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                {
                    arr_39 [i_4] [i_7] = ((/* implicit */unsigned char) arr_35 [(short)19] [i_7]);
                    arr_40 [i_7] [i_7] [i_10] [i_10 + 1] [i_10] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_17 [i_4 + 2])) ? (((((/* implicit */_Bool) arr_12 [i_7] [i_10])) ? (((/* implicit */int) arr_1 [i_4 - 1])) : (((/* implicit */int) arr_20 [i_4])))) : (((/* implicit */int) arr_9 [i_4 + 2] [i_4 + 2] [i_7]))));
                    arr_41 [i_4] [i_7] [i_7] [16LL] [i_4] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_4 + 3])) ? (arr_35 [i_4 + 2] [i_7]) : (arr_35 [i_4 + 3] [i_7])));
                }
                for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                {
                    arr_44 [i_4 + 3] [i_7] [i_7] [i_7] = (-(((/* implicit */int) arr_7 [i_7] [i_10 + 2] [i_10 + 1])));
                    var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_13 [i_12] [i_10 + 1])) & (((/* implicit */int) arr_6 [i_4 - 1] [i_10 + 1]))));
                }
            }
            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_7] [i_4 - 1] [i_7])) ? (((((/* implicit */_Bool) arr_16 [i_4] [i_7] [i_7])) ? (arr_17 [i_4 - 1]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_7]))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) arr_37 [i_7] [i_7] [i_7])))))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_12 [(short)16] [i_4 + 3])))))));
        }
        for (short i_13 = 0; i_13 < 21; i_13 += 3) /* same iter space */
        {
            arr_48 [i_13] = ((/* implicit */unsigned char) ((unsigned long long int) min((arr_14 [i_4 + 3] [i_4 + 4]), (arr_14 [i_4 - 1] [i_4 + 1]))));
            var_26 = ((((((/* implicit */_Bool) arr_24 [i_13])) ? (arr_24 [i_13]) : (arr_24 [i_13]))) > (((((/* implicit */_Bool) 8LL)) ? (1599169405) : (((/* implicit */int) (short)27272)))));
            arr_49 [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((short) arr_28 [i_4 + 4] [i_4 - 1] [i_4 + 4] [i_4 + 2]))) ? (((/* implicit */long long int) ((unsigned int) arr_28 [i_4 + 4] [i_4 - 1] [i_4 + 4] [i_4 + 2]))) : ((~(-7786230343084823847LL)))));
            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_46 [i_4 + 3] [i_13] [i_4 + 3]))) ? (((long long int) arr_36 [i_13] [i_4] [i_4 + 2])) : (((/* implicit */long long int) ((unsigned int) ((((/* implicit */unsigned int) arr_24 [i_13])) <= (arr_8 [i_13])))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
            {
                arr_54 [i_4] [i_4] [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_4 + 2] [i_14 - 1])) ? (((/* implicit */int) arr_12 [i_4 + 2] [i_14 - 1])) : (((/* implicit */int) arr_12 [i_4 + 3] [i_14 - 1]))));
                var_28 = ((/* implicit */short) ((((/* implicit */_Bool) arr_35 [i_13] [i_13])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-27301)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (signed char)-38))))) : (arr_11 [i_4 + 4] [i_13] [i_14 - 1] [i_14 - 1])));
                arr_55 [i_4] [0LL] [(short)18] &= ((long long int) ((((/* implicit */_Bool) arr_30 [i_4] [i_4] [i_4 + 3] [i_4 + 3] [i_4])) ? (((/* implicit */long long int) arr_24 [(unsigned char)10])) : (arr_31 [i_4] [17U] [i_13] [i_14] [i_14])));
                var_29 = ((/* implicit */unsigned int) ((arr_0 [i_4 + 4]) % (arr_0 [i_4 + 4])));
                var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_4 + 1] [i_14 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_14 - 1] [i_13] [i_4]))) : (((((/* implicit */_Bool) arr_19 [i_4] [i_13] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_36 [i_13] [i_13] [i_13]))) : (arr_31 [2LL] [i_4] [i_13] [i_4] [i_4])))));
            }
        }
    }
    var_31 |= ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) ((signed char) var_12))))))));
    /* LoopNest 3 */
    for (int i_15 = 0; i_15 < 19; i_15 += 2) 
    {
        for (unsigned char i_16 = 0; i_16 < 19; i_16 += 3) 
        {
            for (short i_17 = 0; i_17 < 19; i_17 += 2) 
            {
                {
                    var_32 = ((/* implicit */long long int) max((var_32), (min((((/* implicit */long long int) -1432280729)), (2204923094227030406LL)))));
                    arr_63 [i_16] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [(unsigned short)2])) ? (((/* implicit */long long int) arr_0 [i_17])) : (arr_11 [19] [i_16] [(_Bool)1] [i_16])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_16])) ? (((/* implicit */int) arr_42 [i_15] [i_15] [i_15] [i_16] [(short)11] [11LL])) : (((/* implicit */int) arr_27 [i_16] [i_16] [i_16] [i_16]))))) : (((long long int) arr_43 [i_15] [i_16] [i_17]))))) ? (((/* implicit */int) ((unsigned short) arr_6 [i_15] [i_17]))) : (((/* implicit */int) arr_10 [i_16] [i_16] [i_16]))));
                    arr_64 [i_16] [i_16] [i_16] = ((/* implicit */short) arr_50 [i_17]);
                    var_33 = ((/* implicit */short) (~(min((((/* implicit */long long int) -1432280728)), (8414647694778503824LL)))));
                }
            } 
        } 
    } 
}
