/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198676
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198676 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198676
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
    for (int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_10 |= ((/* implicit */signed char) ((((/* implicit */int) (_Bool)0)) >= (var_4)));
        arr_3 [i_0] = ((/* implicit */short) arr_2 [i_0]);
        var_11 = ((/* implicit */short) arr_1 [i_0 + 1] [i_0 + 1]);
        /* LoopSeq 2 */
        for (long long int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            var_12 = ((/* implicit */int) arr_4 [i_0 - 2]);
            var_13 *= arr_1 [i_0 - 1] [i_1];
        }
        for (int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) var_8))));
            var_15 += ((/* implicit */int) max((((/* implicit */unsigned int) min((arr_7 [i_0] [12LL]), (var_5)))), (min((((/* implicit */unsigned int) (_Bool)1)), (min((1U), (((/* implicit */unsigned int) var_7))))))));
        }
        var_16 = ((/* implicit */short) var_7);
    }
    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */_Bool) arr_1 [i_3] [i_3]);
        var_17 ^= ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_2 [i_3])), (arr_4 [i_3]))), (((/* implicit */unsigned long long int) min((arr_0 [i_3]), (((/* implicit */unsigned int) arr_5 [i_3] [i_3])))))));
        arr_13 [i_3] = ((/* implicit */unsigned long long int) max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3]))) : (arr_1 [i_3] [i_3]))), (((/* implicit */unsigned int) arr_10 [i_3]))));
    }
    /* LoopNest 2 */
    for (short i_4 = 0; i_4 < 21; i_4 += 4) 
    {
        for (unsigned int i_5 = 2; i_5 < 20; i_5 += 1) 
        {
            {
                arr_20 [i_5] = min((((/* implicit */signed char) arr_19 [i_4])), ((signed char)69));
                var_18 &= ((/* implicit */unsigned short) ((unsigned char) max((((/* implicit */unsigned int) arr_19 [i_5 - 1])), (max((664176727U), (((/* implicit */unsigned int) var_3)))))));
                var_19 = ((/* implicit */int) min((((134279252U) | (((/* implicit */unsigned int) ((int) arr_19 [i_4]))))), (((/* implicit */unsigned int) arr_14 [i_5] [i_4]))));
                var_20 = ((/* implicit */signed char) (((_Bool)1) ? (max((3630790569U), (((/* implicit */unsigned int) 1944107361)))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-114)))));
                /* LoopSeq 1 */
                for (long long int i_6 = 2; i_6 < 20; i_6 += 4) 
                {
                    /* LoopSeq 4 */
                    for (unsigned int i_7 = 4; i_7 < 19; i_7 += 3) /* same iter space */
                    {
                        /* LoopSeq 1 */
                        for (signed char i_8 = 2; i_8 < 18; i_8 += 2) 
                        {
                            arr_28 [i_5] [i_5] = ((/* implicit */short) min((((((/* implicit */_Bool) arr_25 [i_5 - 1] [i_6 - 2] [i_7 - 2] [i_8 + 3])) ? (4227127164868321143ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_6 - 2]))))), (((/* implicit */unsigned long long int) (+(arr_27 [i_8 + 1] [i_8 + 1] [i_8 + 2] [i_8] [i_8]))))));
                            var_21 = ((/* implicit */_Bool) (short)17029);
                            var_22 = ((/* implicit */signed char) arr_22 [i_5]);
                        }
                        var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_24 [i_7 - 3] [i_5 + 1] [i_5 + 1]))));
                        var_24 = ((/* implicit */unsigned int) max((((/* implicit */int) (signed char)110)), (0)));
                        var_25 = ((/* implicit */long long int) min((((/* implicit */int) arr_17 [i_5] [i_5])), (max(((~(((/* implicit */int) arr_22 [i_5])))), ((~(arr_15 [i_4])))))));
                    }
                    for (unsigned int i_9 = 4; i_9 < 19; i_9 += 3) /* same iter space */
                    {
                        var_26 = ((/* implicit */signed char) arr_27 [i_4] [i_5] [i_6 + 1] [i_9] [i_6]);
                        arr_31 [0ULL] [i_4] [(signed char)14] |= ((/* implicit */_Bool) var_7);
                        arr_32 [i_5] = ((/* implicit */signed char) (_Bool)0);
                    }
                    for (unsigned int i_10 = 3; i_10 < 19; i_10 += 3) /* same iter space */
                    {
                        var_27 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((-3614268851124564811LL), (((/* implicit */long long int) arr_23 [i_4] [i_5 - 1] [i_6] [i_10]))))) ? (min((((/* implicit */long long int) (!(((/* implicit */_Bool) -1139040492))))), (arr_34 [i_10 + 1] [i_10] [i_10 - 3] [i_4]))) : (((/* implicit */long long int) max((arr_33 [i_6 - 2] [i_6 - 2] [i_5 - 1] [i_5 + 1]), (((/* implicit */int) arr_24 [i_6 - 2] [i_5 - 2] [i_5 - 1])))))));
                        /* LoopSeq 2 */
                        for (signed char i_11 = 1; i_11 < 17; i_11 += 4) 
                        {
                            var_28 = ((/* implicit */unsigned char) max((var_28), (((/* implicit */unsigned char) arr_35 [12] [12] [i_10 + 2] [i_6] [i_11]))));
                            var_29 = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((var_2), (min((((/* implicit */unsigned int) (unsigned char)120)), (3035023620U))))))));
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) max((min((arr_36 [i_6 - 2] [i_11] [(unsigned short)1] [i_6 - 2] [i_5] [i_4]), (((/* implicit */unsigned int) max(((signed char)-6), (var_0)))))), (max((arr_36 [i_11] [i_11 - 1] [i_10 - 3] [i_10 - 2] [i_5 - 2] [i_4]), (arr_36 [i_11] [i_11 + 2] [i_10 - 3] [i_5] [i_5 - 2] [i_5]))))))));
                        }
                        for (unsigned int i_12 = 0; i_12 < 21; i_12 += 4) 
                        {
                            var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) min((((/* implicit */signed char) ((_Bool) max((4160688036U), (((/* implicit */unsigned int) (unsigned char)111)))))), (var_5))))));
                            var_32 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_10]))) == (((unsigned long long int) arr_25 [i_4] [i_6 - 1] [i_10 + 1] [i_5]))));
                        }
                    }
                    for (unsigned int i_13 = 3; i_13 < 19; i_13 += 3) /* same iter space */
                    {
                        var_33 = ((/* implicit */signed char) arr_14 [(unsigned short)11] [i_4]);
                        var_34 = ((/* implicit */_Bool) arr_30 [i_5 - 1] [i_5 - 1]);
                        var_35 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_19 [i_6 + 1]))));
                    }
                    /* LoopNest 2 */
                    for (short i_14 = 1; i_14 < 18; i_14 += 3) 
                    {
                        for (signed char i_15 = 0; i_15 < 21; i_15 += 3) 
                        {
                            {
                                var_36 = ((((/* implicit */_Bool) ((int) arr_33 [i_4] [i_4] [i_14 + 3] [i_14]))) ? (((arr_33 [i_6 + 1] [i_5] [i_14 - 1] [i_14]) % (arr_33 [i_4] [i_4] [i_14 + 3] [i_15]))) : (max((arr_33 [i_4] [i_5 - 2] [i_14 + 1] [i_14]), (((/* implicit */int) (signed char)67)))));
                                arr_51 [i_5] [i_14 - 1] [i_6] [i_5] [i_5] = arr_22 [i_5];
                            }
                        } 
                    } 
                    var_37 ^= ((/* implicit */short) max((976132553), (976132551)));
                }
            }
        } 
    } 
    /* LoopSeq 1 */
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
    {
        var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) max((-976132554), (((/* implicit */int) (signed char)1)))))));
        var_39 = ((/* implicit */signed char) var_7);
        var_40 = ((/* implicit */int) max((((/* implicit */unsigned long long int) arr_25 [i_16] [i_16] [i_16] [i_16])), (arr_49 [i_16] [i_16] [i_16] [i_16])));
    }
}
