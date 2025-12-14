/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4042
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
    var_11 &= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned char)16)), (((16U) % (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (_Bool)1))))))));
    var_12 &= ((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))));
    /* LoopSeq 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        var_13 = ((/* implicit */short) max((var_13), (((/* implicit */short) arr_1 [i_0]))));
        var_14 = ((/* implicit */int) ((((/* implicit */int) ((((((/* implicit */int) arr_1 [i_0])) >> (((((/* implicit */int) arr_0 [i_0] [i_0])) - (133))))) != (((/* implicit */int) (_Bool)1))))) > (((/* implicit */int) ((_Bool) min(((_Bool)1), ((_Bool)1)))))));
        var_15 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_1 [i_0])))))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 20; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) arr_4 [i_2]))));
                    var_17 = ((/* implicit */_Bool) max((var_17), (((_Bool) arr_1 [i_0]))));
                }
            } 
        } 
        /* LoopSeq 4 */
        for (unsigned char i_3 = 1; i_3 < 19; i_3 += 1) 
        {
            var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))));
            var_19 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((((arr_7 [i_0] [(unsigned short)5] [(short)2]) & (((/* implicit */int) var_7)))) ^ ((~(((/* implicit */int) (_Bool)1))))))), (((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) ^ (arr_8 [i_3 + 1] [i_3 - 1])))));
            var_20 &= ((/* implicit */_Bool) (((+(((/* implicit */int) arr_3 [(signed char)3])))) >> (((var_0) - (4978878442689779978ULL)))));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 3; i_4 < 19; i_4 += 3) 
        {
            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (_Bool)1)))))));
            var_22 = ((/* implicit */unsigned long long int) (((~(((/* implicit */int) (_Bool)1)))) % (((var_7) ? (((/* implicit */int) var_4)) : (arr_2 [i_0] [i_0] [i_0])))));
        }
        for (signed char i_5 = 0; i_5 < 20; i_5 += 4) 
        {
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((var_9) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_8)))))) || (((/* implicit */_Bool) var_8)))))));
            /* LoopSeq 2 */
            for (short i_6 = 2; i_6 < 18; i_6 += 2) 
            {
                var_24 += ((/* implicit */int) ((unsigned int) ((((((/* implicit */int) (_Bool)1)) > (((/* implicit */int) (_Bool)1)))) && (((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [i_0]))))))));
                arr_17 [i_0] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) max(((_Bool)1), ((_Bool)1))))));
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 0; i_7 < 20; i_7 += 4) 
            {
                var_25 = ((/* implicit */int) min((var_25), ((+(var_6)))));
                /* LoopSeq 4 */
                for (unsigned int i_8 = 2; i_8 < 16; i_8 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) ((arr_1 [i_7]) ? (((/* implicit */unsigned long long int) var_10)) : (arr_14 [i_0])));
                    var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_20 [i_8] [i_8 + 2] [i_8 + 2] [i_8 - 1] [i_8 + 2] [i_5]))));
                    var_28 *= ((/* implicit */unsigned char) (~(arr_14 [i_0])));
                    var_29 = ((/* implicit */signed char) arr_2 [i_8 + 3] [3] [i_0]);
                }
                for (signed char i_9 = 1; i_9 < 17; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 20; i_10 += 4) 
                    {
                        var_30 = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_5]))) ^ (arr_27 [i_0] [i_0] [i_0] [i_0] [i_0])))));
                        var_31 = ((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_20 [i_0] [i_0] [i_0] [i_0] [(_Bool)1] [i_0])) | (((/* implicit */int) var_5))))));
                        var_32 &= ((/* implicit */unsigned char) ((((/* implicit */int) var_9)) > ((~(arr_7 [i_0] [i_9] [i_10])))));
                    }
                    for (signed char i_11 = 1; i_11 < 19; i_11 += 4) 
                    {
                        var_33 = ((/* implicit */_Bool) min((var_33), (((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1)))))));
                        var_34 += ((/* implicit */int) ((signed char) arr_4 [i_9 + 2]));
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_35 *= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
                        var_36 &= ((/* implicit */unsigned long long int) (((~(var_6))) & (((((/* implicit */_Bool) arr_8 [i_0] [i_5])) ? (arr_2 [i_12] [i_7] [i_7]) : (((/* implicit */int) var_1))))));
                        var_37 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_9 + 2] [i_9 + 3] [i_9 + 2] [i_9 + 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_9 - 1] [i_9 + 1] [i_9 - 1] [i_9 + 1])))));
                        arr_33 [i_0] [i_5] [i_7] [i_9] [i_0] = ((/* implicit */int) var_3);
                    }
                    var_38 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_5))));
                }
                for (signed char i_13 = 2; i_13 < 19; i_13 += 4) 
                {
                    arr_37 [i_0] [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) ((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))) << (((/* implicit */int) (_Bool)1))));
                    var_39 += ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >> ((((~(((/* implicit */int) (_Bool)1)))) + (4)))));
                    arr_38 [(_Bool)1] [(_Bool)1] [(signed char)16] [i_0] [(_Bool)1] [i_0] = ((/* implicit */signed char) (_Bool)1);
                }
                for (_Bool i_14 = 1; i_14 < 1; i_14 += 1) 
                {
                    var_40 &= ((/* implicit */unsigned short) (((~(((/* implicit */int) arr_4 [i_5])))) - (((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_0] [i_0])) || (((/* implicit */_Bool) var_0)))))));
                    arr_43 [i_7] [(signed char)4] [i_7] [i_5] [i_7] |= ((/* implicit */short) ((((/* implicit */int) arr_25 [i_0] [i_5] [10] [i_0] [0U] [i_7])) != (((/* implicit */int) arr_21 [i_0] [i_5] [i_5] [i_14 - 1]))));
                    var_41 = ((/* implicit */int) arr_15 [i_0] [(_Bool)1] [i_0] [i_0]);
                }
            }
        }
        /* vectorizable */
        for (signed char i_15 = 1; i_15 < 19; i_15 += 4) 
        {
            var_42 = ((/* implicit */long long int) (+((((_Bool)1) ? (((/* implicit */int) arr_44 [i_15])) : (((/* implicit */int) (_Bool)1))))));
            var_43 = ((/* implicit */unsigned short) var_1);
            /* LoopSeq 2 */
            for (signed char i_16 = 0; i_16 < 20; i_16 += 2) 
            {
                var_44 = ((/* implicit */unsigned short) (~(((/* implicit */int) (_Bool)1))));
                /* LoopSeq 1 */
                for (unsigned char i_17 = 2; i_17 < 16; i_17 += 4) 
                {
                    arr_52 [(_Bool)1] [i_16] [i_0] [i_0] = ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                    var_45 += ((/* implicit */short) (+(((/* implicit */int) (_Bool)1))));
                }
                var_46 += ((/* implicit */unsigned char) (_Bool)1);
                var_47 += ((/* implicit */unsigned char) arr_51 [(signed char)12] [(signed char)6]);
            }
            for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
            {
                var_48 = ((((/* implicit */_Bool) var_3)) ? ((~(((/* implicit */int) arr_11 [i_0] [i_15] [i_0])))) : (((((/* implicit */_Bool) arr_27 [(short)18] [i_15] [i_15] [(short)18] [i_18])) ? (((/* implicit */int) arr_10 [i_0] [i_0])) : (arr_2 [i_0] [i_0] [i_0]))));
                /* LoopSeq 1 */
                for (signed char i_19 = 1; i_19 < 19; i_19 += 1) 
                {
                    var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_4))))) || (((/* implicit */_Bool) (+(arr_5 [i_0] [i_15 + 1] [i_18] [i_18]))))));
                    var_50 = ((/* implicit */unsigned long long int) min((var_50), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_1)))))));
                    var_51 = ((/* implicit */short) (_Bool)1);
                    var_52 += ((/* implicit */signed char) ((((((((/* implicit */int) var_1)) + (2147483647))) << (((((/* implicit */int) (_Bool)1)) - (1))))) & (((/* implicit */int) (_Bool)1))));
                }
            }
        }
    }
    for (unsigned char i_20 = 0; i_20 < 20; i_20 += 3) 
    {
        var_53 = ((/* implicit */_Bool) arr_18 [i_20]);
        arr_61 [i_20] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(var_10)))) && (((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((/* implicit */int) (_Bool)1)))))))), ((+(arr_54 [i_20] [i_20] [i_20])))));
    }
    /* LoopNest 3 */
    for (signed char i_21 = 0; i_21 < 15; i_21 += 4) 
    {
        for (unsigned long long int i_22 = 0; i_22 < 15; i_22 += 2) 
        {
            for (unsigned short i_23 = 1; i_23 < 12; i_23 += 4) 
            {
                {
                    var_54 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_21] [(short)16] [(short)17] [i_21] [i_21] [i_21])) | (((/* implicit */int) var_5))))) ? ((+(var_10))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_5)))))))) ? (((/* implicit */int) (_Bool)1)) : ((+((~(((/* implicit */int) var_5))))))));
                    /* LoopNest 2 */
                    for (unsigned char i_24 = 1; i_24 < 13; i_24 += 3) 
                    {
                        for (unsigned short i_25 = 3; i_25 < 14; i_25 += 4) 
                        {
                            {
                                arr_76 [i_21] [i_24] = (i_24 % 2 == 0) ? (((/* implicit */short) max(((((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_66 [(unsigned short)7] [(unsigned short)7] [i_23])))) >> ((((~(((/* implicit */int) arr_12 [i_24] [i_24 + 2] [i_24 + 2])))) - (81))))), (((((/* implicit */_Bool) ((arr_18 [i_21]) >> (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (arr_7 [i_22] [i_23 + 1] [i_25 - 2])))))) : (((/* implicit */short) max(((((((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_66 [(unsigned short)7] [(unsigned short)7] [i_23])))) >> ((((((~(((/* implicit */int) arr_12 [i_24] [i_24 + 2] [i_24 + 2])))) - (81))) + (161))))), (((((/* implicit */_Bool) ((arr_18 [i_21]) >> (((/* implicit */int) (_Bool)1))))) ? ((~(((/* implicit */int) (_Bool)1)))) : (arr_7 [i_22] [i_23 + 1] [i_25 - 2]))))));
                                arr_77 [i_23] [i_23] [i_22] &= ((/* implicit */unsigned short) min((min(((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (((_Bool)1) || ((_Bool)1)))))), (((/* implicit */int) arr_3 [i_23 + 2]))));
                            }
                        } 
                    } 
                    var_55 = ((/* implicit */signed char) (_Bool)1);
                }
            } 
        } 
    } 
}
