/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229219
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229219 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229219
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_8 [i_1] [i_0] [i_0] = ((/* implicit */unsigned int) ((((((/* implicit */unsigned long long int) arr_0 [i_1 - 1])) == (0ULL))) ? (arr_2 [i_0] [i_1] [i_2]) : (((((/* implicit */_Bool) ((arr_2 [i_0] [i_1] [i_1]) % (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (((arr_7 [i_0] [i_0] [i_2] [i_0]) % (((/* implicit */long long int) ((/* implicit */int) var_9))))) : (((/* implicit */long long int) min((301411673U), (((/* implicit */unsigned int) (short)32750)))))))));
                    arr_9 [i_0] [i_0] [i_2] [i_1] = ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_1]))) % (((((/* implicit */_Bool) arr_0 [i_0])) ? ((~(arr_4 [i_1]))) : (((/* implicit */unsigned long long int) ((long long int) arr_7 [i_2] [i_0] [i_0] [i_0]))))));
                }
            } 
        } 
    } 
    var_14 += ((/* implicit */_Bool) var_12);
    /* LoopNest 3 */
    for (short i_3 = 1; i_3 < 12; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 13; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 1; i_5 < 12; i_5 += 1) 
            {
                {
                    arr_17 [i_3] [i_4] [i_5] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)-11)) ^ (((/* implicit */int) (unsigned char)48))))) ? (((/* implicit */int) arr_13 [i_5] [i_5 + 1] [i_5])) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_3 [i_3])) : (((/* implicit */int) (short)-21238))))))), (((((/* implicit */_Bool) arr_4 [i_3])) ? (arr_4 [i_3]) : (((/* implicit */unsigned long long int) -9223372036854775797LL))))));
                    var_15 = ((/* implicit */short) max((var_15), (((/* implicit */short) (((~(((/* implicit */int) arr_1 [i_3])))) + (max(((-(((/* implicit */int) (short)512)))), (((/* implicit */int) ((((/* implicit */int) (unsigned char)227)) > (((/* implicit */int) arr_11 [(_Bool)1] [i_4]))))))))))));
                    arr_18 [i_3] = ((/* implicit */short) (-((~(((/* implicit */int) (unsigned char)48))))));
                    var_16 += (((_Bool)1) || (((/* implicit */_Bool) arr_15 [i_3])));
                }
            } 
        } 
    } 
    var_17 = ((/* implicit */short) ((((/* implicit */int) (short)-3861)) != (((/* implicit */int) var_5))));
    /* LoopNest 3 */
    for (unsigned int i_6 = 0; i_6 < 11; i_6 += 3) 
    {
        for (unsigned int i_7 = 1; i_7 < 9; i_7 += 1) 
        {
            for (long long int i_8 = 2; i_8 < 9; i_8 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_9 = 1; i_9 < 7; i_9 += 3) 
                    {
                        for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                        {
                            {
                                arr_33 [i_6] [i_6] [i_8] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [i_8 - 1])) ? (((/* implicit */int) (short)-26781)) : (((/* implicit */int) arr_32 [i_8 + 1]))))) || (((/* implicit */_Bool) max((arr_4 [i_6]), (((/* implicit */unsigned long long int) 3368001199U)))))));
                                arr_34 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */unsigned int) (-(min((((((/* implicit */_Bool) (unsigned char)63)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)2))) : (15106913119296280331ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)26201)))))))));
                                var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_9))));
                                arr_35 [i_6] [i_7] [i_8] [i_6] = ((/* implicit */short) (~(((((((/* implicit */_Bool) -4021235538264012349LL)) ? (524204939846436124ULL) : (((/* implicit */unsigned long long int) var_0)))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_11 = 0; i_11 < 11; i_11 += 4) 
                    {
                        for (unsigned char i_12 = 1; i_12 < 9; i_12 += 4) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned char) ((((/* implicit */int) var_6)) >= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)5689))) >= (arr_10 [i_7 - 1] [i_7]))))));
                                arr_41 [i_6] [i_7] = ((((/* implicit */_Bool) 3000799386U)) ? ((-9223372036854775807LL - 1LL)) : (9170781409712380298LL));
                                arr_42 [i_12] [i_6] [i_8] [i_6] [i_6] = ((/* implicit */_Bool) arr_16 [i_6]);
                                arr_43 [i_6] = ((/* implicit */short) (((!(((/* implicit */_Bool) min((-7270137361794881865LL), (((/* implicit */long long int) 7U))))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_31 [i_8] [i_6]))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_2))))) : (max((2676758409564843342LL), (((/* implicit */long long int) (short)-28375)))))) : (((/* implicit */long long int) ((/* implicit */int) ((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_31 [i_7] [i_6]))))) == (((/* implicit */unsigned long long int) 131072U))))))));
                            }
                        } 
                    } 
                    arr_44 [i_6] [i_7 + 2] = ((/* implicit */long long int) ((((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) arr_38 [i_6] [i_6] [i_7] [i_7 + 1] [i_8 + 2])) >= (((/* implicit */int) arr_23 [i_6] [i_6]))))), (arr_0 [i_8 + 1])))) == (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 4021235538264012348LL)) ^ (0ULL)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (short)2044)) ? (((/* implicit */int) (short)-13430)) : (((/* implicit */int) (unsigned char)16))))) : (-8839909306165421458LL)))));
                    arr_45 [i_7] [i_6] [i_8] [i_6] = ((/* implicit */unsigned int) var_1);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_13 = 0; i_13 < 11; i_13 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (short i_14 = 0; i_14 < 11; i_14 += 3) 
                        {
                            var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) ((((/* implicit */_Bool) -974140972018399264LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) : ((-9223372036854775807LL - 1LL)))))));
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */int) (short)-18)) + (((/* implicit */int) (!(((/* implicit */_Bool) 396661327744115222LL)))))));
                            arr_52 [i_6] [i_6] [i_7] [i_6] [i_13] [i_14] [i_14] = ((/* implicit */long long int) ((((/* implicit */_Bool) 131060U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_40 [i_7 + 1] [i_7] [i_7]))));
                        }
                        for (short i_15 = 0; i_15 < 11; i_15 += 1) 
                        {
                            var_22 = ((/* implicit */long long int) min((var_22), (((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_20 [i_13]))))) ? (((((/* implicit */_Bool) (short)-6352)) ? (((/* implicit */int) (short)-25)) : (((/* implicit */int) (short)413)))) : ((~(((/* implicit */int) (short)19802)))))))));
                            arr_55 [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_7 - 1] [i_7] [i_15])) ? (arr_10 [i_8 + 1] [i_8 + 1]) : (arr_10 [i_8 - 1] [i_8])));
                        }
                        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_16 [i_6])) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_7] [i_6]))) : (4021235538264012348LL))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_32 [i_8])) : (((/* implicit */int) var_8)))))));
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) (~(arr_4 [i_6])))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_54 [i_13]))))) : (((((/* implicit */_Bool) arr_0 [i_6])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_7])))))));
                    }
                }
            } 
        } 
    } 
}
