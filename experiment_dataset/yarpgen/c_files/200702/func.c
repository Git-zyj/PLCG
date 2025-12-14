/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200702
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200702 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200702
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
    var_17 += ((/* implicit */unsigned long long int) var_12);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)32767))))) != (max((((/* implicit */unsigned long long int) (unsigned short)65535)), (11141166901716141672ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            var_18 *= ((/* implicit */long long int) (!(((((/* implicit */unsigned long long int) 8589934591LL)) <= (11141166901716141672ULL)))));
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 12; i_3 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 2) 
                        {
                            var_19 = ((/* implicit */int) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) / (min((((/* implicit */unsigned long long int) var_14)), (var_0)))))));
                            var_20 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (~(8589934591LL))))));
                            arr_12 [i_2] = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)65535)), (1894683920)));
                            arr_13 [i_0] [i_1] [i_1] [i_0] [i_3] [i_0] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) max((1894683925), (((/* implicit */int) (unsigned short)65535))))) ? ((-(288230376151449600LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)-57)) < (((/* implicit */int) (short)15550))))))));
                            var_21 = ((/* implicit */unsigned int) var_13);
                        }
                        arr_14 [i_3] [i_2] = ((/* implicit */int) var_4);
                    }
                } 
            } 
            var_22 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_4 [i_1] [i_1])))));
        }
        var_23 = var_2;
    }
    for (unsigned int i_5 = 0; i_5 < 19; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (int i_6 = 3; i_6 < 16; i_6 += 2) 
        {
            for (unsigned long long int i_7 = 2; i_7 < 17; i_7 += 1) 
            {
                {
                    var_24 -= ((/* implicit */unsigned int) max(((unsigned short)65535), (((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)65535)), (1342286014U)))) != (8024284245233022142ULL))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_8 = 0; i_8 < 19; i_8 += 1) 
                    {
                        var_25 += ((/* implicit */signed char) 1617765104U);
                        var_26 = ((/* implicit */unsigned int) ((((/* implicit */int) var_15)) & (((/* implicit */int) (unsigned short)65535))));
                        var_27 = ((/* implicit */int) ((short) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_15)))));
                    }
                    for (short i_9 = 0; i_9 < 19; i_9 += 2) 
                    {
                        var_28 = ((/* implicit */int) ((((/* implicit */_Bool) arr_23 [i_5])) ? (min((max((3663318076U), (((/* implicit */unsigned int) var_11)))), (((/* implicit */unsigned int) (~(((/* implicit */int) (short)30969))))))) : (min((((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) (_Bool)1))))), (min((var_12), (((/* implicit */unsigned int) var_6))))))));
                        var_29 = ((/* implicit */_Bool) min((var_29), (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)179)) ? (288230376151449620LL) : (((/* implicit */long long int) 2983994124U)))))));
                        var_30 = ((/* implicit */unsigned short) min((var_30), (((/* implicit */unsigned short) max((((/* implicit */int) (signed char)2)), (((((/* implicit */_Bool) (signed char)-48)) ? (((((/* implicit */_Bool) 516096U)) ? (arr_25 [i_9] [i_7]) : (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) (unsigned char)41)))))))))));
                    }
                }
            } 
        } 
        arr_28 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)20)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((16747551063443497558ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))))))) : (((unsigned int) ((((/* implicit */_Bool) (unsigned char)215)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (1602973874U))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 1; i_10 < 18; i_10 += 4) 
        {
            for (signed char i_11 = 0; i_11 < 19; i_11 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) (signed char)-5);
                    /* LoopNest 2 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_41 [i_13] [i_13] [i_11] [i_10] [i_5] [i_13] [i_5] = ((/* implicit */unsigned long long int) ((_Bool) (~(4294967295U))));
                                arr_42 [i_13] [i_12] [i_11] [9ULL] [i_13] = ((/* implicit */signed char) (unsigned char)59);
                                arr_43 [(unsigned short)9] [i_10] [i_11] [i_12] [i_13] [5U] = ((/* implicit */signed char) ((short) arr_29 [i_13] [i_12] [i_5]));
                                var_32 |= ((/* implicit */unsigned char) ((1ULL) * (((/* implicit */unsigned long long int) 4294967295U))));
                                var_33 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (unsigned char)192)), (arr_34 [i_10 + 1] [i_10 - 1] [i_10]))), (((/* implicit */unsigned long long int) ((unsigned char) var_9)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
