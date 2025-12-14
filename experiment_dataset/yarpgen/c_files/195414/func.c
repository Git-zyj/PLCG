/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195414
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
    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_0))) ^ (min((var_1), (var_1)))));
    var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((614508134U), (((/* implicit */unsigned int) (unsigned short)0))))) ? (((/* implicit */int) ((var_6) >= (((/* implicit */unsigned int) (~(((/* implicit */int) var_4)))))))) : (max((((/* implicit */int) min((var_4), ((unsigned short)65280)))), (((((/* implicit */int) (unsigned short)65535)) ^ (((/* implicit */int) (unsigned short)65264))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        var_18 = ((/* implicit */int) 314864757255779812LL);
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            /* LoopSeq 2 */
            for (unsigned char i_2 = 2; i_2 < 11; i_2 += 2) 
            {
                arr_7 [i_2] [i_2] [(signed char)4] [i_1 - 2] = ((/* implicit */unsigned char) var_14);
                var_19 = ((/* implicit */unsigned short) (~((~(18446744073709551595ULL)))));
                arr_8 [i_1] [(short)7] [(unsigned short)11] [i_1] = ((/* implicit */unsigned long long int) var_4);
            }
            for (long long int i_3 = 0; i_3 < 12; i_3 += 3) 
            {
                /* LoopSeq 4 */
                for (int i_4 = 1; i_4 < 11; i_4 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        var_20 = ((/* implicit */_Bool) ((var_6) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) arr_5 [i_0] [i_0] [i_0])))))));
                        arr_19 [(unsigned short)2] [i_3] [i_5] [i_5] [i_0] = ((/* implicit */int) var_15);
                        var_21 = ((/* implicit */unsigned long long int) var_12);
                    }
                    var_22 |= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_1 + 2] [i_1 - 2] [i_4 - 1])) ? (((((/* implicit */_Bool) (short)0)) ? (17108765782936289042ULL) : (((/* implicit */unsigned long long int) (-2147483647 - 1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31)))));
                }
                for (signed char i_6 = 0; i_6 < 12; i_6 += 3) 
                {
                    var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) ((short) var_13)))));
                    /* LoopSeq 2 */
                    for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) ((((((/* implicit */int) (unsigned short)65280)) < (((/* implicit */int) (short)-16268)))) ? (((/* implicit */int) (short)-25395)) : (((/* implicit */int) ((var_10) >= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))))));
                        var_25 = ((/* implicit */int) (-(arr_0 [i_1 + 1])));
                        var_26 = ((/* implicit */unsigned long long int) arr_25 [i_0] [i_3] [i_7]);
                        var_27 = ((/* implicit */unsigned long long int) var_12);
                    }
                    for (unsigned char i_8 = 1; i_8 < 11; i_8 += 3) 
                    {
                        var_28 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_6])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? ((+(17108765782936289028ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_0] [i_0] [i_6]))) - (3680459162U))))));
                        arr_28 [i_0] [i_3] [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) arr_12 [i_0] [i_1 + 1] [i_1 + 2] [i_6]))));
                    }
                    var_29 = ((/* implicit */int) var_4);
                }
                for (long long int i_9 = 2; i_9 < 10; i_9 += 3) /* same iter space */
                {
                    arr_31 [i_3] [i_9 - 1] [i_3] [i_9] = (~(((((/* implicit */_Bool) (unsigned char)95)) ? (arr_23 [i_0] [i_0] [i_1] [i_1 + 2] [i_3] [i_3] [i_1 + 2]) : (((/* implicit */int) var_0)))));
                    /* LoopSeq 1 */
                    for (unsigned char i_10 = 2; i_10 < 11; i_10 += 3) 
                    {
                        arr_36 [(unsigned short)6] [6] [i_3] [(short)0] [0] [i_9 - 1] [(unsigned char)0] = ((/* implicit */unsigned long long int) var_1);
                        var_30 = ((/* implicit */long long int) (unsigned short)0);
                        var_31 -= ((/* implicit */unsigned char) (+(0ULL)));
                    }
                    arr_37 [i_3] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12))));
                    var_32 -= ((((/* implicit */_Bool) (-(arr_23 [i_0] [i_1 - 1] [i_3] [i_9 + 1] [i_9 + 2] [i_0] [i_9])))) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_0] [i_1 + 2])) >= (((/* implicit */int) var_2))))) : (((/* implicit */int) var_5)));
                }
                for (long long int i_11 = 2; i_11 < 10; i_11 += 3) /* same iter space */
                {
                    var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_7))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-32763)) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) var_0))))) : (8045454362288451944ULL))))));
                    var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((/* implicit */int) var_12)) % (((/* implicit */int) ((((/* implicit */_Bool) 614508143U)) && (((/* implicit */_Bool) 614508134U))))))))));
                }
                var_35 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_33 [i_3] [i_3] [i_1] [i_1] [i_3] [i_3]))))) ? ((~(((/* implicit */int) arr_34 [i_0] [i_0] [i_0] [i_0] [i_0])))) : ((~(((/* implicit */int) arr_5 [i_3] [i_1] [i_0]))))));
            }
            arr_40 [i_0] |= ((/* implicit */int) ((var_14) > (((/* implicit */long long int) ((/* implicit */int) var_5)))));
            var_36 = ((/* implicit */unsigned short) ((((/* implicit */int) var_2)) + (((/* implicit */int) arr_32 [i_0] [i_1 + 1] [i_1] [i_1] [i_1 - 1]))));
            var_37 = ((/* implicit */long long int) ((((/* implicit */int) var_5)) >= (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)0)) : (((/* implicit */int) var_0))))));
        }
        var_38 -= var_3;
    }
}
