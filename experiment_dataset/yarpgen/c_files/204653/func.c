/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204653
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_13 -= ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned char) arr_1 [i_0] [i_0]))) < (((/* implicit */int) (!(((((/* implicit */_Bool) arr_1 [i_0] [i_0])) && (((/* implicit */_Bool) var_12)))))))));
        var_14 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) 26)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (1697540649)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 4) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (unsigned short)6144))));
                arr_9 [(signed char)9] [i_1] = arr_8 [i_2];
                arr_10 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_0] [i_0] [6LL] [i_0]))) : (arr_0 [i_0])));
                /* LoopSeq 1 */
                for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                {
                    var_16 = ((unsigned char) var_3);
                    var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_12 [i_0] [(signed char)10] [(signed char)7] [i_1] [i_3])) : ((~(((/* implicit */int) var_9))))));
                    arr_15 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */short) (-(((/* implicit */int) arr_4 [i_0] [i_1] [i_3]))));
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        var_18 = ((/* implicit */unsigned short) min((var_18), (((/* implicit */unsigned short) ((((-9223372036854775794LL) > (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_3]))))) ? (arr_11 [i_2] [i_3] [i_2]) : (((/* implicit */long long int) ((/* implicit */int) (short)15394))))))));
                        arr_18 [i_0] [i_0] [i_0] [i_0] [i_0] [i_4] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [(short)4] [(short)4] [(unsigned short)11] [i_3] [i_4])) ? (arr_3 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)59400)))))) ? (((/* implicit */int) ((arr_7 [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [(unsigned short)13])))))) : (((/* implicit */int) arr_8 [i_0]))));
                    }
                }
                arr_19 [i_0] = ((/* implicit */signed char) ((arr_0 [i_2]) % (((/* implicit */unsigned long long int) 3855747772U))));
            }
            for (long long int i_5 = 0; i_5 < 16; i_5 += 2) 
            {
                arr_22 [8U] [i_1] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_17 [(signed char)5] [(signed char)5] [i_1] [i_1] [i_5] [(signed char)5]) - (((/* implicit */long long int) ((/* implicit */int) var_8)))))) ? (((/* implicit */long long int) ((1697540649) + (((/* implicit */int) arr_1 [i_5] [i_5]))))) : (var_5)))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [(unsigned short)2])) ? (arr_11 [(signed char)15] [i_1] [i_1]) : (((/* implicit */long long int) 4294967281U))))) ? (6U) : (((/* implicit */unsigned int) ((((/* implicit */int) var_12)) << (((((/* implicit */int) var_4)) - (116)))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) ((unsigned short) (signed char)(-127 - 1)))) + (((/* implicit */int) ((arr_17 [i_5] [i_0] [i_1] [i_1] [i_1] [i_0]) < (((/* implicit */long long int) ((/* implicit */int) var_6))))))))));
                var_19 = ((/* implicit */unsigned int) (+(((/* implicit */int) min((((/* implicit */unsigned short) arr_12 [i_0] [i_1] [i_1] [i_1] [(signed char)4])), (arr_4 [i_0] [i_0] [i_5]))))));
                var_20 &= ((/* implicit */short) (~(((((/* implicit */_Bool) ((9U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_0] [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [(signed char)10] [i_5]))) : (arr_0 [i_0])))));
                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1493966915)))) ? ((~(arr_17 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)122))) / ((-(4294967287U)))))))))));
                var_22 = ((/* implicit */unsigned char) max((((/* implicit */unsigned int) (unsigned short)59379)), (((((/* implicit */_Bool) (-(arr_0 [i_5])))) ? (max((((/* implicit */unsigned int) var_12)), (var_0))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))))));
            }
            for (unsigned char i_6 = 0; i_6 < 16; i_6 += 4) 
            {
                var_23 -= ((/* implicit */unsigned int) (short)11005);
                var_24 &= ((/* implicit */unsigned int) min((((unsigned long long int) (~(-1776248955)))), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) arr_11 [(unsigned char)13] [(unsigned char)13] [(unsigned char)13])))) || (((/* implicit */_Bool) arr_13 [i_0] [i_1] [(unsigned short)4])))))));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 3; i_8 < 15; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */short) (unsigned short)3174);
                            var_26 = var_5;
                        }
                    } 
                } 
            }
            /* LoopNest 3 */
            for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
            {
                for (int i_10 = 0; i_10 < 16; i_10 += 4) 
                {
                    for (unsigned short i_11 = 0; i_11 < 16; i_11 += 4) 
                    {
                        {
                            var_27 -= ((/* implicit */unsigned long long int) 1941891519U);
                            arr_39 [i_0] [i_0] [i_1] [i_0] [i_0] [i_11] = ((/* implicit */short) min(((-(((/* implicit */int) arr_26 [i_9] [i_10] [i_11])))), (((((/* implicit */int) arr_26 [i_11] [i_9] [i_0])) + (((/* implicit */int) arr_26 [i_10] [i_9] [i_0]))))));
                            var_28 = ((/* implicit */unsigned short) (_Bool)1);
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */unsigned long long int) arr_5 [i_0] [i_0] [i_0]);
            var_30 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_16 [i_1] [i_1])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)104)) ? (((/* implicit */int) arr_34 [i_0] [i_0] [(signed char)15])) : (((/* implicit */int) arr_21 [i_1] [i_1]))))) ? (((/* implicit */int) ((((/* implicit */int) arr_8 [i_1])) <= (((/* implicit */int) arr_8 [i_0]))))) : (((/* implicit */int) (unsigned short)59402))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1])) ? (((/* implicit */long long int) (~(((/* implicit */int) (signed char)6))))) : (arr_28 [i_0] [i_0] [i_0] [i_1] [i_0] [i_0])))));
        }
        var_31 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(-1393578878)))) ? (max((min((3855747749U), (((/* implicit */unsigned int) (signed char)-51)))), (((/* implicit */unsigned int) arr_2 [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)12025))))))))));
    }
    var_32 = ((/* implicit */short) min((var_32), (((/* implicit */short) 130023424))));
    /* LoopSeq 1 */
    for (short i_12 = 2; i_12 < 12; i_12 += 3) 
    {
        var_33 &= ((/* implicit */short) ((long long int) (((-(((/* implicit */int) (signed char)41)))) - (((/* implicit */int) (signed char)-6)))));
        var_34 -= ((/* implicit */signed char) var_6);
    }
    /* LoopSeq 2 */
    for (signed char i_13 = 0; i_13 < 23; i_13 += 4) 
    {
        arr_48 [i_13] [i_13] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_45 [i_13]))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)27939)) ? (((/* implicit */int) arr_46 [i_13] [i_13])) : (((/* implicit */int) var_11))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) ((/* implicit */int) arr_46 [i_13] [i_13]))) : (var_5)))))) ? (4336581404270823990ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1104547683907929125LL)) ? (((/* implicit */int) arr_46 [i_13] [i_13])) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)27))))) : (((3855747772U) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_44 [i_13]))))))))));
        var_35 -= ((/* implicit */unsigned long long int) 1U);
    }
    for (unsigned short i_14 = 4; i_14 < 22; i_14 += 3) 
    {
        var_36 = ((/* implicit */signed char) max((var_36), (((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) arr_49 [i_14 - 2])) ? (arr_50 [i_14 - 2] [i_14]) : (((/* implicit */int) arr_49 [i_14 - 2]))))))));
        arr_51 [i_14] = ((/* implicit */signed char) (((((-(-9223372036854775800LL))) ^ (((/* implicit */long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) arr_49 [i_14 - 4]))))))) / (((((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_9)))) ? ((-(-7785037089166033163LL))) : (((/* implicit */long long int) ((((/* implicit */int) var_10)) % (((/* implicit */int) arr_49 [i_14])))))))));
    }
    var_37 = ((/* implicit */int) (-(((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((var_11) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (var_5))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)63)) ? (2331290620U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)972))))))))));
}
