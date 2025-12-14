/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49456
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (7484845098097541188ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (7284371691253571715LL)))))) : (((/* implicit */unsigned long long int) var_5))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */long long int) max((var_11), (((/* implicit */long long int) max((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7886691769555360146ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (arr_0 [i_0] [i_0])))), (((((/* implicit */unsigned long long int) var_5)) * (10560052304154191469ULL))))), (((/* implicit */unsigned long long int) var_0)))))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned char)44)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_8))))))) < (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) ((unsigned char) var_9))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_4))) >= (arr_0 [i_0] [i_0])))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 22; i_1 += 2) 
    {
        /* LoopSeq 2 */
        for (long long int i_2 = 0; i_2 < 22; i_2 += 2) 
        {
            /* LoopNest 3 */
            for (signed char i_3 = 1; i_3 < 20; i_3 += 2) 
            {
                for (int i_4 = 1; i_4 < 18; i_4 += 1) 
                {
                    for (int i_5 = 3; i_5 < 20; i_5 += 4) 
                    {
                        {
                            var_12 |= ((/* implicit */unsigned char) -6065595526908940364LL);
                            var_13 = ((/* implicit */signed char) ((long long int) var_4));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                arr_18 [i_2] [i_2] [i_2] [i_2] |= ((/* implicit */long long int) (~(((((/* implicit */int) arr_6 [i_6])) % (((/* implicit */int) var_7))))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 2) 
                {
                    for (unsigned int i_8 = 0; i_8 < 22; i_8 += 1) 
                    {
                        {
                            var_14 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_2] [i_2] [i_6] [i_1] [i_1] [i_6])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_13 [i_1] [i_1] [i_8] [i_1] [i_7] [i_2]))))) && (((/* implicit */_Bool) 4294967295U))));
                            var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 7484845098097541188ULL)) ? (((/* implicit */long long int) arr_5 [i_6 + 1] [i_6 + 2])) : (140737488355327LL)));
                        }
                    } 
                } 
            }
            for (unsigned int i_9 = 0; i_9 < 22; i_9 += 2) 
            {
                var_16 ^= ((/* implicit */int) 7484845098097541176ULL);
                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_1]))));
                /* LoopNest 2 */
                for (unsigned char i_10 = 3; i_10 < 21; i_10 += 4) 
                {
                    for (unsigned char i_11 = 0; i_11 < 22; i_11 += 1) 
                    {
                        {
                            var_18 += ((/* implicit */unsigned long long int) (-(arr_10 [i_1] [i_10 - 1] [(unsigned char)10] [i_10 - 2])));
                            var_19 = ((/* implicit */unsigned int) (short)-20267);
                        }
                    } 
                } 
            }
            var_20 = ((((/* implicit */long long int) ((((/* implicit */int) var_2)) << (((140737488355327LL) - (140737488355308LL)))))) | (((((/* implicit */_Bool) -8630028571337572209LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)211))) : (6065595526908940363LL))));
            var_21 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_14 [12LL] [i_2] [i_2]))));
            /* LoopSeq 3 */
            for (signed char i_12 = 0; i_12 < 22; i_12 += 2) 
            {
                var_22 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) 3035393069500701898LL))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) 1079071307U)) : (140737488355327LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 31U))))))));
                var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)208)) ? (((/* implicit */int) arr_13 [12U] [i_2] [i_12] [2U] [i_12] [i_12])) : (((/* implicit */int) (!(((/* implicit */_Bool) -723093348504870096LL))))))))));
            }
            for (unsigned int i_13 = 3; i_13 < 21; i_13 += 2) 
            {
                var_24 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_13 - 2] [9] [i_13 + 1])) ? (((/* implicit */long long int) 2783772380U)) : (arr_12 [i_13 - 1] [i_13] [i_13 - 3])));
                /* LoopNest 2 */
                for (unsigned long long int i_14 = 0; i_14 < 22; i_14 += 4) 
                {
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 2) 
                    {
                        {
                            arr_39 [i_2] &= ((/* implicit */unsigned char) var_1);
                            var_25 = ((/* implicit */_Bool) 2593262299U);
                        }
                    } 
                } 
                var_26 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_1)) + (((/* implicit */int) var_2)))) | (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)20278)) : (((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned char i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 22; i_18 += 4) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned long long int) var_3);
                            var_28 = arr_27 [i_1] [i_1] [i_1] [i_1];
                        }
                    } 
                } 
                var_29 = ((/* implicit */int) (+(arr_47 [i_2] [i_2] [i_2] [i_2] [i_2] [i_16] [i_2])));
                arr_48 [i_16] [i_2] [i_2] = ((/* implicit */int) var_5);
                var_30 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) 6065595526908940363LL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_2)))));
            }
        }
        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 3) 
        {
            /* LoopNest 2 */
            for (int i_20 = 0; i_20 < 22; i_20 += 4) 
            {
                for (unsigned int i_21 = 0; i_21 < 22; i_21 += 3) 
                {
                    {
                        var_31 = ((/* implicit */unsigned char) ((unsigned long long int) (+(378525398))));
                        var_32 = ((/* implicit */int) min((var_32), (((((/* implicit */int) arr_6 [i_19])) * (((/* implicit */int) var_1))))));
                        var_33 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_0))));
                    }
                } 
            } 
            arr_57 [i_1] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_6 [i_1])) : (((/* implicit */int) var_7))));
        }
        /* LoopSeq 1 */
        for (signed char i_22 = 3; i_22 < 21; i_22 += 2) 
        {
            var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_33 [i_1] [i_1])))))) : (((long long int) var_0))));
            arr_60 [i_1] [i_22] [i_22] = ((/* implicit */signed char) (~(((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_22]))) ^ (32767U)))));
            arr_61 [i_1] [i_22] [i_22] = ((/* implicit */int) (!(((/* implicit */_Bool) var_7))));
            var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_0))))) ? (((unsigned int) var_1)) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 0LL)))))))))));
        }
        arr_62 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_31 [i_1] [i_1] [i_1])) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_6))))) : (((unsigned int) -2738766689827414760LL))));
        var_36 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_45 [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (-174275683913004539LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_1]))) : ((~(arr_16 [i_1] [(unsigned char)6] [i_1])))));
        var_37 = ((/* implicit */unsigned char) ((int) ((-7284371691253571716LL) / (((/* implicit */long long int) ((/* implicit */int) var_6))))));
    }
    for (unsigned long long int i_23 = 1; i_23 < 12; i_23 += 2) 
    {
        arr_66 [(unsigned char)10] = ((/* implicit */unsigned char) ((4294934528U) - (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_24 [i_23 - 1] [i_23 - 1] [i_23] [13ULL])) : (((/* implicit */int) arr_24 [i_23 - 1] [i_23 - 1] [i_23] [i_23])))))));
        var_38 = ((/* implicit */unsigned int) max((((/* implicit */long long int) (short)-20251)), (7284371691253571715LL)));
    }
}
