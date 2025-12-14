/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48174
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
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_13 = ((/* implicit */long long int) min((var_13), (var_1)));
        var_14 = ((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned long long int) (+(((arr_0 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))))))))));
        arr_2 [i_0] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) ((arr_1 [i_0]) && (((/* implicit */_Bool) ((unsigned short) var_10)))))))));
    }
    for (short i_1 = 2; i_1 < 21; i_1 += 4) 
    {
        var_15 += ((/* implicit */long long int) ((((/* implicit */_Bool) max((arr_3 [i_1 - 2]), (((/* implicit */int) var_2))))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_0))))) + (arr_5 [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2])))));
        var_16 = ((/* implicit */int) ((var_3) + (((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned char)28)) ? (((/* implicit */int) (_Bool)0)) : (arr_3 [i_1]))), (((/* implicit */int) (_Bool)1)))))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (long long int i_4 = 2; i_4 < 18; i_4 += 4) 
            {
                {
                    arr_15 [i_4] [i_2] [i_2] [i_2] = ((((/* implicit */_Bool) max((((long long int) var_12)), (((/* implicit */long long int) (~(((/* implicit */int) (_Bool)1)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)11198), (((/* implicit */short) (!(((/* implicit */_Bool) 2456021568U))))))))) : (((((/* implicit */_Bool) (+(-21264715)))) ? (((((/* implicit */_Bool) (short)11179)) ? (4ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22087))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)0))) : (var_4)))))));
                    /* LoopNest 2 */
                    for (short i_5 = 2; i_5 < 18; i_5 += 4) 
                    {
                        for (unsigned char i_6 = 0; i_6 < 21; i_6 += 4) 
                        {
                            {
                                arr_23 [i_2] [i_5 + 2] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) (unsigned short)6142);
                                var_17 = ((/* implicit */short) var_2);
                            }
                        } 
                    } 
                    var_18 *= max((((((/* implicit */_Bool) (~(var_12)))) ? (((-5792292164691067947LL) | (((/* implicit */long long int) ((/* implicit */int) (short)5763))))) : (((var_1) + (-5930491336686218673LL))))), (((/* implicit */long long int) ((18446744073709551610ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)-3546), (((/* implicit */short) (_Bool)1))))))))));
                    /* LoopSeq 3 */
                    for (long long int i_7 = 1; i_7 < 20; i_7 += 4) 
                    {
                        var_19 &= ((/* implicit */unsigned long long int) ((var_4) > (((/* implicit */long long int) ((((/* implicit */_Bool) -6116039030763388061LL)) ? (-1733428943) : (((/* implicit */int) var_2)))))));
                        var_20 = ((/* implicit */unsigned short) ((long long int) 15570591678935540329ULL));
                        var_21 = ((/* implicit */int) max((var_21), ((~(((((/* implicit */_Bool) max((var_1), (((/* implicit */long long int) (_Bool)1))))) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_4]))))))))))));
                    }
                    for (unsigned short i_8 = 0; i_8 < 21; i_8 += 4) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */unsigned char) max((((((/* implicit */int) arr_13 [i_4 - 1] [i_4 - 1] [i_4 + 3])) - (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) min((var_2), (arr_13 [i_4 + 3] [i_4 + 3] [i_4 + 3]))))));
                        var_23 = ((/* implicit */unsigned char) max((var_23), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_24 [i_8]) ? (((/* implicit */int) (short)29925)) : (((/* implicit */int) arr_24 [i_4]))))) ? (((((/* implicit */int) arr_24 [i_8])) + (((/* implicit */int) arr_24 [i_4])))) : ((-(((/* implicit */int) (short)-10616)))))))));
                    }
                    for (unsigned short i_9 = 0; i_9 < 21; i_9 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (short i_10 = 1; i_10 < 19; i_10 += 4) 
                        {
                            arr_32 [i_2] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) arr_16 [i_10 + 1] [8ULL] [i_10] [(_Bool)1] [i_10]);
                            var_24 = ((/* implicit */int) (~(arr_20 [i_2] [i_2] [i_4] [i_2] [i_10 + 2])));
                        }
                        for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 4) 
                        {
                            var_25 ^= ((/* implicit */unsigned char) (+(((arr_6 [i_4 - 1] [i_4 - 2]) ? (((/* implicit */int) (unsigned char)254)) : (((/* implicit */int) arr_6 [i_4 + 1] [i_4 + 1]))))));
                            arr_37 [i_2] [i_9] [i_4] [i_9] [(_Bool)1] [i_2] [i_11] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_0))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (15606810737202272202ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_11] [i_2] [i_11] [i_2] [i_4]))))), (((/* implicit */unsigned long long int) ((arr_35 [i_4] [i_2] [i_4 + 1] [i_2] [i_4 - 1]) - (arr_35 [i_4] [i_2] [i_4 - 2] [i_2] [i_4 + 2]))))));
                            arr_38 [i_2] [i_2] [i_11] [i_2] [(_Bool)1] |= ((/* implicit */unsigned short) max((max((min((((/* implicit */long long int) var_11)), (-22LL))), (((/* implicit */long long int) min(((_Bool)1), (arr_13 [i_2] [i_3] [i_2])))))), (-7154919530459641840LL)));
                            arr_39 [i_2] [i_2] [i_4] = ((/* implicit */unsigned int) ((long long int) (~(arr_26 [i_2] [i_3] [i_4] [i_9] [i_11] [i_4 + 3]))));
                            var_26 += ((/* implicit */short) (((+(var_8))) + (((/* implicit */unsigned long long int) min((((7554231660728106793LL) - (5362639013041385041LL))), (((/* implicit */long long int) arr_16 [i_2] [15LL] [i_4] [i_4 + 1] [i_11])))))));
                        }
                        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                        {
                            arr_43 [i_2] [i_2] [i_4] [i_9] = ((/* implicit */_Bool) var_4);
                            var_27 = ((/* implicit */unsigned int) min((var_27), (((/* implicit */unsigned int) 9511208821622005819ULL))));
                        }
                        /* LoopSeq 3 */
                        for (long long int i_13 = 0; i_13 < 21; i_13 += 3) 
                        {
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)65535)) ? (9059841274689116078LL) : (((/* implicit */long long int) ((/* implicit */int) max((var_11), (((/* implicit */unsigned char) var_2)))))))) / (((((((var_9) + (((/* implicit */long long int) ((/* implicit */int) var_2))))) + (9223372036854775807LL))) << (((4409184778623364269LL) - (4409184778623364269LL))))))))));
                            var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) ((((long long int) var_12)) < (max((((/* implicit */long long int) arr_17 [i_4 + 3] [i_4 - 2] [i_4 + 3] [i_9])), (3392238444666416193LL))))))));
                            var_30 += ((/* implicit */unsigned char) (_Bool)1);
                            arr_48 [i_2] [(unsigned short)16] [(unsigned short)18] [i_9] [i_13] = (-(((max((var_9), (((/* implicit */long long int) var_5)))) * (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) var_1)))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (var_4)));
                        }
                        /* vectorizable */
                        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                        {
                            var_32 ^= ((/* implicit */int) -428289145329792027LL);
                            arr_51 [i_2] [i_4] [i_2] = ((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */long long int) ((/* implicit */int) var_11))));
                            arr_52 [i_2] [i_2] [(_Bool)1] [i_2] [(_Bool)1] = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (short)28979))) : (var_9)));
                        }
                        /* vectorizable */
                        for (long long int i_15 = 1; i_15 < 18; i_15 += 4) 
                        {
                            arr_55 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)45899)) < (((/* implicit */int) (unsigned short)65535))));
                            arr_56 [i_2] [i_3] [i_4 - 2] [i_4 - 2] [i_3] = ((/* implicit */short) ((((/* implicit */int) var_0)) / (((/* implicit */int) (short)27819))));
                            var_33 = ((/* implicit */long long int) 1341897615U);
                            var_34 = ((/* implicit */long long int) ((((long long int) arr_42 [i_2] [i_3] [i_4 + 2] [i_9] [i_4 + 2])) <= (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 576460751229681664ULL))))))));
                            arr_57 [i_2] [i_3] [1U] [i_2] [i_15] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_28 [i_2] [i_3] [i_4] [i_9] [i_9] [i_15])) ? (var_3) : (-8291615717717760596LL)));
                        }
                        arr_58 [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_5)) + (2147483647))) << (((((var_12) + (1112842110350547331LL))) - (3LL))))))))) * (((/* implicit */int) ((((((/* implicit */unsigned long long int) 1079277906)) & (0ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_3) != (arr_33 [i_2] [i_3] [i_2] [i_4] [i_9]))))))))));
                        /* LoopSeq 1 */
                        for (unsigned char i_16 = 0; i_16 < 21; i_16 += 3) 
                        {
                            arr_61 [9LL] [i_2] [i_2] [i_2] [i_16] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (-(var_4)))), (var_6)));
                            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)50652)))))));
                        }
                        var_36 = ((/* implicit */unsigned long long int) min((max((max((var_3), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) (_Bool)1)))), (((/* implicit */long long int) var_2))));
                    }
                }
            } 
        } 
    } 
    var_37 = var_4;
}
