/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221769
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
    var_16 = ((/* implicit */unsigned long long int) var_6);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                var_17 = ((/* implicit */unsigned long long int) (short)32256);
                /* LoopSeq 4 */
                for (unsigned long long int i_2 = 3; i_2 < 14; i_2 += 2) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        for (unsigned int i_4 = 3; i_4 < 15; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) (unsigned short)437);
                                arr_14 [i_1] [i_4] [i_4] [i_3] [i_2] [i_3] [(_Bool)1] = ((/* implicit */_Bool) 3632690769U);
                                arr_15 [i_0] [i_0] [i_4] [i_2 - 1] [i_3] [i_4] = ((/* implicit */_Bool) 4U);
                            }
                        } 
                    } 
                    var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) (unsigned short)25465))));
                }
                /* vectorizable */
                for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 2) /* same iter space */
                {
                    var_20 = ((/* implicit */long long int) max((var_20), (((/* implicit */long long int) 4611686018427387904ULL))));
                    arr_18 [i_1] [i_5] = ((/* implicit */unsigned short) 9182797920114256439ULL);
                    var_21 = ((/* implicit */_Bool) 3632690759U);
                }
                for (unsigned long long int i_6 = 3; i_6 < 14; i_6 += 2) /* same iter space */
                {
                    var_22 *= ((/* implicit */_Bool) 3632690782U);
                    arr_22 [i_0 - 2] [i_1] [i_6] = ((/* implicit */unsigned short) 353461298722598833ULL);
                }
                for (unsigned long long int i_7 = 3; i_7 < 14; i_7 += 2) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (long long int i_8 = 0; i_8 < 16; i_8 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (unsigned long long int i_9 = 4; i_9 < 14; i_9 += 4) 
                        {
                            var_23 = 895359763U;
                            arr_32 [i_7] = ((/* implicit */long long int) (unsigned short)439);
                            arr_33 [i_0] [i_7] [i_1] [i_7] [i_7 + 2] [i_8] [(_Bool)1] = 7841093679811692694ULL;
                            arr_34 [i_9] [3ULL] [i_7 + 1] [i_7] [i_7] = ((/* implicit */unsigned long long int) (_Bool)1);
                        }
                        for (unsigned long long int i_10 = 2; i_10 < 15; i_10 += 4) 
                        {
                            arr_37 [i_0] [i_7] = ((/* implicit */int) (unsigned short)443);
                            arr_38 [i_7] [(_Bool)1] [i_7] [i_10] [i_1] [i_10 - 2] [i_10] = ((/* implicit */long long int) (unsigned short)446);
                            arr_39 [i_0] [i_1] [i_7 - 1] [i_8] [i_7] [i_10 - 2] [i_10] = ((/* implicit */unsigned long long int) (unsigned short)65076);
                        }
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 16; i_11 += 2) 
                        {
                            var_24 += ((/* implicit */long long int) (signed char)90);
                            var_25 = ((/* implicit */signed char) (unsigned short)65078);
                        }
                        var_26 = ((/* implicit */signed char) 2007861557078601378ULL);
                        arr_43 [i_7] = ((/* implicit */_Bool) (unsigned short)65106);
                        var_27 = ((/* implicit */int) (_Bool)1);
                    }
                    /* LoopSeq 2 */
                    for (_Bool i_12 = 1; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (long long int i_13 = 0; i_13 < 16; i_13 += 4) 
                        {
                            var_28 = ((/* implicit */int) min((var_28), (((/* implicit */int) 11954175190158790967ULL))));
                            arr_50 [i_13] [i_7] [i_7] [i_1] [i_0] [i_7] [15ULL] = ((/* implicit */signed char) (unsigned short)9664);
                        }
                        for (long long int i_14 = 0; i_14 < 16; i_14 += 3) 
                        {
                            var_29 = ((/* implicit */unsigned int) -8LL);
                            arr_53 [i_0] [i_7] [i_7] [i_12] [i_14] = ((/* implicit */long long int) 2087201134);
                            var_30 = ((/* implicit */int) 2007861557078601378ULL);
                            var_31 = ((/* implicit */long long int) (_Bool)1);
                        }
                        arr_54 [i_7] [i_12] = ((/* implicit */signed char) 1358680115);
                        var_32 = ((/* implicit */int) 14320657371734172408ULL);
                        var_33 *= ((/* implicit */short) -671763597);
                    }
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) /* same iter space */
                    {
                        arr_58 [i_0] [i_1] [i_7] [i_0] &= ((/* implicit */int) 14985486504260479432ULL);
                        arr_59 [i_0] [i_7] [i_0] [i_15] [i_15 - 1] = 4096U;
                    }
                }
                var_34 = ((/* implicit */int) 11972059839722506589ULL);
                /* LoopSeq 4 */
                for (int i_16 = 3; i_16 < 14; i_16 += 3) 
                {
                    var_35 = ((/* implicit */short) 11972059839722506591ULL);
                    var_36 = ((/* implicit */unsigned long long int) (_Bool)1);
                }
                for (unsigned short i_17 = 0; i_17 < 16; i_17 += 4) 
                {
                    arr_68 [i_0 + 2] [1ULL] [i_17] = ((/* implicit */_Bool) 13315424643963473776ULL);
                    arr_69 [(unsigned short)3] [i_17] &= (_Bool)1;
                }
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_37 = ((/* implicit */signed char) -8LL);
                    arr_72 [i_0] [i_1] [i_1] [i_18] = ((/* implicit */long long int) 1358680114);
                }
                for (int i_19 = 1; i_19 < 14; i_19 += 4) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        for (unsigned short i_21 = 2; i_21 < 13; i_21 += 1) 
                        {
                            {
                                var_38 = ((/* implicit */unsigned int) 651145771);
                                var_39 = ((/* implicit */int) 15249096496293267029ULL);
                                arr_81 [i_19] = (_Bool)1;
                                var_40 = ((/* implicit */unsigned long long int) min((var_40), (((/* implicit */unsigned long long int) (_Bool)1))));
                                arr_82 [i_0] [i_1] [i_19] [i_20] [i_19] = ((/* implicit */unsigned long long int) (_Bool)1);
                            }
                        } 
                    } 
                    arr_83 [i_0] [i_0] [i_19] [i_0] = 16256719932074003903ULL;
                    var_41 = ((/* implicit */unsigned short) (short)25696);
                }
            }
        } 
    } 
}
