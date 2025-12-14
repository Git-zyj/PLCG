/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4581
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4581 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4581
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
    var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */unsigned long long int) var_15)) : (((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)21))) : (576460752303423487ULL)))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 3; i_1 < 16; i_1 += 3) 
        {
            var_17 = ((/* implicit */unsigned long long int) min((var_17), (((/* implicit */unsigned long long int) (-(14U))))));
            arr_4 [i_0] [i_0] [i_0] = ((/* implicit */int) (signed char)1);
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1 - 3])) ? (arr_3 [i_0] [i_1 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
        }
        for (unsigned int i_2 = 3; i_2 < 16; i_2 += 3) 
        {
            var_19 = ((/* implicit */unsigned long long int) ((int) (~(((/* implicit */int) (_Bool)1)))));
            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) arr_2 [i_2 - 2]))));
            arr_8 [i_2] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4096))) : (arr_3 [i_0] [i_2 - 1])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_1 [i_2 - 1])))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)2369))) : (arr_0 [i_0]))))) > (max(((+(9561680012348447293ULL))), (((/* implicit */unsigned long long int) min((var_8), (((/* implicit */long long int) (signed char)28)))))))));
            var_21 -= ((/* implicit */unsigned short) (((~(arr_3 [i_0] [i_2 - 3]))) ^ (((/* implicit */unsigned long long int) min((((/* implicit */long long int) arr_6 [i_2 + 1] [i_0])), (var_8))))));
            var_22 = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
        }
        arr_9 [i_0] = ((/* implicit */unsigned char) min(((((_Bool)0) ? (arr_2 [i_0]) : (((/* implicit */long long int) arr_1 [i_0])))), (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopSeq 3 */
    for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 2; i_4 < 21; i_4 += 3) 
        {
            var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((((((/* implicit */unsigned long long int) var_9)) * (arr_10 [i_4 + 1]))) / (((((/* implicit */_Bool) ((var_1) * (((/* implicit */unsigned long long int) 0U))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)13))) / (6988492825633249629ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767))))))))));
            var_24 = ((/* implicit */unsigned char) min((((/* implicit */long long int) max((((/* implicit */unsigned int) arr_13 [i_4] [i_3])), (arr_12 [i_3] [i_3] [i_4 + 3])))), (((long long int) 2096128))));
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 24; i_5 += 2) 
            {
                for (short i_6 = 0; i_6 < 24; i_6 += 1) 
                {
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                    {
                        {
                            var_25 -= ((/* implicit */unsigned int) arr_14 [i_3] [i_5] [i_5] [i_3]);
                            var_26 -= ((/* implicit */signed char) (+(2707687012U)));
                            var_27 = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_6] [i_7]);
                            var_28 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 5303052864456029009ULL)) ? (833249732U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)32353)))))), ((-(((arr_18 [i_4]) ? (((/* implicit */unsigned long long int) arr_11 [i_3] [i_7])) : (11717929750387454877ULL)))))));
                        }
                    } 
                } 
            } 
            var_29 = ((/* implicit */short) 2138365520);
        }
        arr_21 [i_3] [i_3] = var_2;
    }
    for (unsigned short i_8 = 3; i_8 < 19; i_8 += 2) 
    {
        arr_26 [i_8 + 1] [i_8] = ((/* implicit */signed char) ((int) ((((((/* implicit */_Bool) 4294967295U)) ? (arr_25 [i_8 - 3] [i_8 - 3]) : (((/* implicit */long long int) var_9)))) < (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_24 [10U])) : (((/* implicit */int) arr_20 [i_8 - 2] [i_8] [i_8] [i_8] [i_8] [i_8]))))))));
        arr_27 [i_8] = ((/* implicit */unsigned int) min((max((arr_16 [i_8 - 3] [i_8] [i_8]), (((/* implicit */unsigned long long int) arr_18 [i_8])))), (((/* implicit */unsigned long long int) arr_13 [i_8] [i_8 - 2]))));
        var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_22 [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((max((arr_24 [i_8 + 1]), (((/* implicit */short) arr_13 [i_8] [i_8])))), (((/* implicit */short) (unsigned char)7)))))) : ((~(10774759036150253660ULL)))));
    }
    /* vectorizable */
    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
    {
        var_31 = ((/* implicit */unsigned int) ((_Bool) arr_15 [i_9] [i_9] [i_9]));
        var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_9] [(unsigned short)2] [i_9] [16ULL])) ? (((/* implicit */int) (!(var_13)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 18014398509416448LL)))))));
        arr_30 [i_9] = (!((_Bool)1));
        var_33 = ((/* implicit */short) ((((/* implicit */_Bool) (+(arr_16 [i_9] [(signed char)0] [12U])))) ? (((((/* implicit */_Bool) 18446744073709551615ULL)) ? (12531645672333514071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
    }
    var_34 *= ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
    var_35 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) (-(((/* implicit */int) var_12))))) >= ((~(((unsigned int) var_8))))));
}
