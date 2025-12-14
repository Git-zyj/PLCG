/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243548
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243548 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243548
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
    for (unsigned char i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) max((var_6), (((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_2)))))))))))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            var_15 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (short)-1)) ? (((/* implicit */int) arr_2 [i_0 + 2])) : (((/* implicit */int) var_3)))));
            arr_6 [i_1] [i_1] [i_1] = ((min((min((var_7), (((/* implicit */unsigned int) var_2)))), (((/* implicit */unsigned int) (unsigned short)3550)))) <= (var_7));
            var_16 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((13554634562701417391ULL), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_13)), (var_0))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0]))))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) > (((var_2) ? (11277213841131046767ULL) : (7169530232578504853ULL))))))));
            var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) 11277213841131046767ULL))));
        }
    }
    for (unsigned char i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) var_3))));
        var_19 = (!((!(((/* implicit */_Bool) (unsigned short)65533)))));
        /* LoopNest 2 */
        for (short i_3 = 0; i_3 < 15; i_3 += 4) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    var_20 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_6)))))), ((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) & (4892109511008134225ULL)))))));
                    /* LoopSeq 2 */
                    for (signed char i_5 = 4; i_5 < 14; i_5 += 4) 
                    {
                        arr_19 [i_2] [i_2] = ((/* implicit */signed char) min((((/* implicit */short) ((unsigned char) var_1))), (((short) ((((/* implicit */_Bool) 11277213841131046776ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
                        var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) (signed char)50)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (var_5)))) ? (((/* implicit */int) ((_Bool) 4892109511008134240ULL))) : (((/* implicit */int) (unsigned short)54830)))))));
                    }
                    /* vectorizable */
                    for (unsigned short i_6 = 1; i_6 < 14; i_6 += 4) 
                    {
                        arr_23 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 7169530232578504854ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-31257))) : (var_8)));
                        var_22 -= ((/* implicit */unsigned char) var_2);
                        arr_24 [i_2] [i_2] [i_4] [i_2] = ((/* implicit */int) 3214253739100799259ULL);
                        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) (((_Bool)1) ? (arr_18 [i_2] [i_2] [(short)14] [i_6 - 1] [i_4] [i_6 - 1]) : (arr_18 [i_2] [i_2] [i_4] [i_6 + 1] [i_2] [i_2]))))));
                    }
                    var_24 = ((/* implicit */_Bool) var_8);
                    var_25 = ((/* implicit */unsigned char) 11277213841131046792ULL);
                }
            } 
        } 
        var_26 += ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 4892109511008134232ULL))) ? (arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */_Bool) 7169530232578504839ULL)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) (short)548))))))));
        arr_25 [i_2] [i_2] = ((/* implicit */int) var_13);
    }
    var_27 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)-549)))))));
    /* LoopSeq 1 */
    for (unsigned char i_7 = 0; i_7 < 22; i_7 += 4) 
    {
        var_28 -= ((/* implicit */_Bool) var_11);
        /* LoopSeq 3 */
        for (long long int i_8 = 2; i_8 < 19; i_8 += 2) 
        {
            var_29 = ((/* implicit */unsigned char) ((unsigned long long int) ((((/* implicit */_Bool) ((short) 15ULL))) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_1)))));
            arr_32 [7LL] [i_7] [i_7] = ((signed char) min((7169530232578504863ULL), (((/* implicit */unsigned long long int) arr_29 [i_7] [i_7]))));
        }
        /* vectorizable */
        for (unsigned long long int i_9 = 0; i_9 < 22; i_9 += 2) 
        {
            /* LoopSeq 3 */
            for (short i_10 = 0; i_10 < 22; i_10 += 3) 
            {
                var_30 -= ((/* implicit */_Bool) (+(((/* implicit */int) arr_33 [i_7] [i_9] [i_10]))));
                arr_37 [i_7] [i_7] [i_7] [i_7] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)50)) ? (7169530232578504849ULL) : (17856641306793883008ULL)));
                arr_38 [i_10] [15] [i_7] = ((11277213841131046767ULL) | (((11277213841131046793ULL) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))));
            }
            for (int i_11 = 0; i_11 < 22; i_11 += 2) /* same iter space */
            {
                arr_42 [i_9] = ((/* implicit */unsigned char) (~(((var_8) & (((/* implicit */long long int) ((/* implicit */int) var_4)))))));
                var_31 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)54823)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) (short)-28160))))) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)104)))));
            }
            for (int i_12 = 0; i_12 < 22; i_12 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) var_1);
                /* LoopSeq 2 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) ((unsigned int) var_11)))));
                    arr_47 [i_7] [i_9] [i_13] [(short)6] [(short)6] [i_13] = ((/* implicit */int) -3503319116301229027LL);
                    var_34 = ((/* implicit */int) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_7] [i_12]))) : (var_5)));
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    arr_50 [i_14] [i_9] [i_12] [i_12] [i_12] [i_12] = ((/* implicit */unsigned int) ((((var_5) + (9223372036854775807LL))) << (((131071) - (131071)))));
                    /* LoopSeq 1 */
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        arr_53 [i_7] [i_9] [i_9] [i_9] [i_9] [i_12] [i_9] |= ((((/* implicit */int) (_Bool)1)) << (((((((/* implicit */_Bool) 7169530232578504839ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)152))) : (-4249452663329204838LL))) - (134LL))));
                        var_35 = (+(((/* implicit */int) (unsigned short)6469)));
                    }
                    arr_54 [i_14] = ((/* implicit */_Bool) ((int) 3307620478U));
                }
            }
            arr_55 [i_7] [(short)12] = ((_Bool) var_1);
            /* LoopSeq 2 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    for (signed char i_18 = 0; i_18 < 22; i_18 += 2) 
                    {
                        {
                            var_36 = ((/* implicit */unsigned short) min((var_36), (((/* implicit */unsigned short) (((_Bool)1) || (((/* implicit */_Bool) var_4)))))));
                            var_37 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 3350439911060969445LL)) - (((((/* implicit */_Bool) 7169530232578504853ULL)) ? (11277213841131046793ULL) : (((/* implicit */unsigned long long int) var_5))))));
                            var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (signed char)124)) & (((/* implicit */int) (signed char)0))));
                            var_39 = ((/* implicit */long long int) ((((/* implicit */_Bool) -3412100054742145384LL)) ? (-1199945056) : (((/* implicit */int) var_4))));
                        }
                    } 
                } 
                arr_65 [i_7] [i_7] [i_16] [i_7] = ((/* implicit */_Bool) (~(((((/* implicit */int) var_3)) + (((/* implicit */int) var_4))))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 1) 
            {
                arr_68 [i_7] [i_19] [i_7] = ((((/* implicit */long long int) ((/* implicit */int) (short)15388))) & ((~(var_12))));
                var_40 = (((_Bool)0) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) arr_43 [i_7] [i_9]))));
            }
            var_41 = ((/* implicit */long long int) max((var_41), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_0)))))));
        }
        for (signed char i_20 = 0; i_20 < 22; i_20 += 1) 
        {
            var_42 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)121))))) - (var_5))) & (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
            arr_71 [i_20] [i_20] [i_20] = max((((/* implicit */long long int) min((var_1), (((/* implicit */unsigned char) var_3))))), (min((var_6), (((/* implicit */long long int) var_3)))));
            var_43 = ((/* implicit */int) var_6);
            arr_72 [i_7] [i_20] [i_20] = ((/* implicit */signed char) ((max((((/* implicit */long long int) ((unsigned char) (unsigned short)13))), (6892491263312591716LL))) ^ (max((((((/* implicit */long long int) 1272272903)) | (-7444292271787738898LL))), (((/* implicit */long long int) ((((/* implicit */int) (unsigned char)97)) | (((/* implicit */int) (short)127)))))))));
        }
    }
    var_44 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (var_11))))));
}
