/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37745
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
    var_17 = ((/* implicit */unsigned char) (unsigned short)40494);
    /* LoopSeq 1 */
    for (long long int i_0 = 3; i_0 < 15; i_0 += 3) 
    {
        var_18 *= ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_2))))), (arr_1 [i_0 - 2])));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 17; i_1 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 17; i_2 += 3) 
            {
                arr_12 [i_2] = ((/* implicit */short) var_0);
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 17; i_3 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 4; i_4 < 13; i_4 += 3) 
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_2] [i_2] [i_4] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (((((/* implicit */_Bool) 4293918720U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32766))) : (arr_14 [i_4] [i_3] [(unsigned char)0] [(short)1] [(signed char)3] [i_0])))));
                        var_19 = ((/* implicit */signed char) min((var_19), (((/* implicit */signed char) var_1))));
                        arr_18 [i_2] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) 10287717659641490657ULL)))))));
                    }
                    var_20 += ((/* implicit */unsigned short) arr_11 [i_2] [i_2]);
                    arr_19 [i_3] [i_2] [i_2] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_11))));
                }
                var_21 = ((/* implicit */unsigned long long int) (+(((var_16) - (((/* implicit */long long int) ((/* implicit */int) var_10)))))));
                arr_20 [i_0] [(unsigned short)7] [i_2] [i_2] = ((/* implicit */unsigned int) ((long long int) (_Bool)1));
            }
            for (unsigned short i_5 = 0; i_5 < 17; i_5 += 3) 
            {
                var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) (-(((/* implicit */int) var_10)))))));
                var_23 += ((/* implicit */unsigned int) ((unsigned char) (signed char)-63));
            }
            /* LoopSeq 3 */
            for (long long int i_6 = 0; i_6 < 17; i_6 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-1))));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_0 - 2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)1)))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_9 = 2; i_9 < 15; i_9 += 2) 
                {
                    var_26 += ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_25 [i_0 + 2] [i_6] [i_0 + 1] [i_9 + 1] [i_9 - 2]))));
                    var_27 = ((/* implicit */long long int) var_2);
                }
            }
            for (long long int i_10 = 0; i_10 < 17; i_10 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_11 = 1; i_11 < 16; i_11 += 4) 
                {
                    for (unsigned short i_12 = 3; i_12 < 15; i_12 += 1) 
                    {
                        {
                            arr_39 [i_12] [i_11] [i_10] [i_1] [i_0 + 2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_4))));
                            arr_40 [i_11 - 1] [i_0] = ((/* implicit */unsigned short) var_6);
                        }
                    } 
                } 
                var_28 = ((/* implicit */long long int) var_13);
                arr_41 [i_0] [(unsigned char)11] [i_10] [i_0 + 1] = ((/* implicit */unsigned char) arr_28 [i_0 + 2] [i_0] [i_0 - 3] [i_0 + 2] [i_0]);
            }
            for (long long int i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                arr_44 [i_0] [i_0] [i_13] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8801)) ? (((((/* implicit */_Bool) 0U)) ? (20U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_0 + 1])))));
                arr_45 [i_0] [i_13] = ((/* implicit */_Bool) (unsigned short)25042);
                arr_46 [i_0] [i_0] [i_0] [i_1] = ((((/* implicit */unsigned long long int) var_12)) * (arr_11 [i_0 + 1] [i_0 - 2]));
                var_29 = ((/* implicit */short) 651175378U);
            }
        }
        for (short i_14 = 2; i_14 < 13; i_14 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 17; i_15 += 3) 
            {
                for (unsigned char i_16 = 0; i_16 < 17; i_16 += 4) 
                {
                    {
                        var_30 = ((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_2))))), (min(((~(var_12))), (((/* implicit */long long int) arr_23 [i_0 + 2] [13U] [i_0 + 2]))))));
                        arr_53 [i_16] [i_15] [i_14 + 4] [i_0] = ((/* implicit */unsigned long long int) ((unsigned int) var_8));
                    }
                } 
            } 
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_27 [i_0] [i_14] [i_0 - 1] [i_0 - 1] [2ULL] [i_14 + 2])) > (((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
        }
        arr_54 [i_0 - 2] [i_0] &= ((/* implicit */unsigned char) max(((+(((/* implicit */int) var_10)))), (((/* implicit */int) arr_38 [i_0 - 3] [i_0 + 2] [i_0 - 3] [i_0 - 1] [i_0] [i_0] [i_0 - 3]))));
    }
    var_32 &= ((/* implicit */int) ((unsigned short) var_7));
    var_33 = ((/* implicit */short) (+(((/* implicit */int) var_13))));
    /* LoopSeq 1 */
    for (signed char i_17 = 0; i_17 < 10; i_17 += 2) 
    {
        var_34 ^= ((/* implicit */signed char) (~(((var_1) ? (7U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        arr_58 [i_17] [i_17] = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) 1294262959569572525LL)), (((((/* implicit */_Bool) var_14)) ? (min((7769458565085674673ULL), (((/* implicit */unsigned long long int) (short)-4194)))) : (5345942121462721633ULL)))));
        arr_59 [(unsigned short)8] = ((/* implicit */unsigned long long int) max((((((((/* implicit */int) (short)-6229)) < (((/* implicit */int) (signed char)38)))) ? (((var_0) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_16))) : (((/* implicit */long long int) ((/* implicit */int) var_4))))), (((/* implicit */long long int) (((+(((/* implicit */int) arr_28 [i_17] [i_17] [i_17] [(short)11] [i_17])))) * (((/* implicit */int) (_Bool)0)))))));
    }
}
