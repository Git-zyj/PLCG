/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223283
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223283 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223283
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
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (signed char i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        arr_9 [i_3] = ((/* implicit */long long int) var_3);
                        var_20 &= ((/* implicit */_Bool) ((min((var_9), (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_18))) : (var_13))))) - (((((/* implicit */_Bool) var_3)) ? ((+(var_13))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13))))))))));
                        var_21 = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((var_16), (((/* implicit */unsigned int) var_11))))) ? (min((var_8), (((/* implicit */unsigned long long int) var_16)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))) >> (((((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_13))) - (38504U)))));
                        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) min((((/* implicit */short) var_1)), (var_14)))), (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_18)))) : (min((min((((/* implicit */unsigned int) var_14)), (var_9))), (((/* implicit */unsigned int) var_0))))));
                    }
                } 
            } 
        } 
        var_23 ^= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) var_12)) : (var_4))))), (min((max((var_8), (var_8))), (((/* implicit */unsigned long long int) var_19))))));
        var_24 = ((/* implicit */unsigned int) ((((max((((/* implicit */unsigned long long int) var_2)), (var_6))) + (((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) - (((/* implicit */unsigned long long int) var_7))));
    }
    /* LoopSeq 1 */
    for (short i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */_Bool) max((((max((((/* implicit */unsigned int) var_3)), (var_4))) - (((/* implicit */unsigned int) ((/* implicit */int) var_14))))), (((/* implicit */unsigned int) var_11))));
        var_25 = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) ((var_15) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) var_2)) : (var_8))));
        /* LoopSeq 2 */
        for (unsigned char i_5 = 0; i_5 < 25; i_5 += 4) 
        {
            /* LoopSeq 2 */
            for (signed char i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                var_26 = ((/* implicit */int) ((min((((/* implicit */unsigned int) var_11)), (var_15))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) var_10))))))));
                var_27 = ((/* implicit */unsigned long long int) (-(((var_15) * (var_9)))));
                arr_18 [i_6 + 2] [i_5] [i_4] |= ((/* implicit */short) ((min((((((/* implicit */unsigned int) ((/* implicit */int) var_18))) / (var_15))), (((((/* implicit */_Bool) var_19)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))) * (((((/* implicit */_Bool) max((var_4), (var_4)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) var_19)) | (((/* implicit */int) var_5))))) : (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))));
            }
            /* vectorizable */
            for (unsigned long long int i_7 = 3; i_7 < 22; i_7 += 2) 
            {
                arr_21 [i_5] [i_7 + 3] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))));
                arr_22 [i_4] [i_5] [i_5] [i_7] = ((/* implicit */int) ((_Bool) var_7));
                /* LoopNest 2 */
                for (signed char i_8 = 1; i_8 < 24; i_8 += 4) 
                {
                    for (unsigned char i_9 = 2; i_9 < 23; i_9 += 3) 
                    {
                        {
                            var_28 -= ((signed char) var_15);
                            arr_27 [i_8] [i_5] [i_7] [i_5] [i_8] = ((/* implicit */unsigned int) ((((/* implicit */int) var_18)) + (((/* implicit */int) ((short) var_11)))));
                            var_29 = ((/* implicit */short) min((var_29), (((/* implicit */short) (-((-(var_6))))))));
                        }
                    } 
                } 
            }
            var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) var_0))));
            var_31 = ((/* implicit */signed char) min(((+(((var_16) & (((/* implicit */unsigned int) var_12)))))), (((((/* implicit */_Bool) var_18)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))));
        }
        for (signed char i_10 = 3; i_10 < 23; i_10 += 2) 
        {
            arr_32 [i_4] [i_10] &= ((((unsigned long long int) max((((/* implicit */unsigned int) -860218402)), (0U)))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) var_12))) ? (max((((/* implicit */long long int) var_10)), (var_2))) : (((/* implicit */long long int) ((((/* implicit */int) var_19)) << (((var_2) + (6889384737834460501LL))))))))));
            /* LoopSeq 3 */
            for (unsigned int i_11 = 0; i_11 < 25; i_11 += 1) 
            {
                var_32 = ((/* implicit */signed char) ((short) min((((/* implicit */unsigned long long int) var_12)), (((unsigned long long int) var_2)))));
                arr_35 [i_4] [i_10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_18))) & (var_13)))) ? (min((((/* implicit */unsigned long long int) var_16)), (var_8))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_17)))))));
                arr_36 [i_4] [i_4] [i_4] [i_4] = ((/* implicit */long long int) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)103))))) ? (((/* implicit */int) (signed char)9)) : (-2111491871)))));
            }
            for (unsigned int i_12 = 1; i_12 < 23; i_12 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_42 [i_4] [i_12 + 2] [i_12 + 2] [i_13] = ((/* implicit */int) min((((((/* implicit */unsigned int) ((/* implicit */int) var_19))) % (var_13))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_3)))))));
                    var_33 = ((/* implicit */signed char) min((var_33), (var_10)));
                }
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)-15590), (((/* implicit */short) (_Bool)1))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_17)), (var_2)))) : (((((/* implicit */_Bool) max((((/* implicit */short) var_5)), (var_19)))) ? (((/* implicit */unsigned long long int) var_4)) : (var_6)))));
            }
            for (unsigned long long int i_14 = 0; i_14 < 25; i_14 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_15 = 4; i_15 < 22; i_15 += 2) 
                {
                    arr_48 [i_15 - 2] [i_15] [i_14] [i_10] [i_10 - 1] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) max((((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_18)) : (var_7))), (((/* implicit */int) var_3))))), (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) var_7)) : (var_13)))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 1; i_16 < 23; i_16 += 3) 
                    {
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) ((short) var_18)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_13))), (((/* implicit */unsigned int) max((((/* implicit */short) var_10)), (var_19))))))));
                        arr_53 [i_4] [i_10] [i_14] [i_10] [i_14] [i_4] [i_16] = var_4;
                        arr_54 [i_16 + 1] &= ((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */int) var_18)) / (((/* implicit */int) var_5))))), (min((var_15), (var_9))))));
                        var_36 = ((/* implicit */short) ((int) ((signed char) var_16)));
                    }
                }
                for (unsigned int i_17 = 0; i_17 < 25; i_17 += 1) 
                {
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned char) var_7))) ? (min((var_6), (((/* implicit */unsigned long long int) var_9)))) : (((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned int) var_10)))))));
                    var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_3))))) : (((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) var_5)))))));
                    arr_57 [i_4] [i_10 - 2] [i_14] [i_17] = ((/* implicit */short) ((unsigned int) (-(var_8))));
                }
                var_39 &= ((/* implicit */signed char) ((short) (-(((((/* implicit */int) var_19)) * (((/* implicit */int) var_0)))))));
                arr_58 [i_4] [i_10] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) var_6))) ? (((/* implicit */int) ((unsigned short) var_15))) : (((((/* implicit */int) (unsigned char)109)) / (2147483647)))));
                var_40 = max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_17)))), (((/* implicit */int) max((var_3), (var_3)))));
                /* LoopSeq 4 */
                for (unsigned short i_18 = 0; i_18 < 25; i_18 += 3) 
                {
                    arr_62 [i_4] [i_4] [i_10] [i_14] [i_14] [i_4] = ((/* implicit */long long int) max((min((min((((/* implicit */unsigned long long int) var_5)), (var_8))), (((/* implicit */unsigned long long int) ((long long int) var_14))))), (((/* implicit */unsigned long long int) ((unsigned short) max((var_18), (((/* implicit */unsigned short) var_3))))))));
                    var_41 = ((/* implicit */short) ((((/* implicit */int) var_0)) <= (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), ((signed char)-40))))));
                }
                for (unsigned int i_19 = 0; i_19 < 25; i_19 += 2) 
                {
                    var_42 = ((/* implicit */unsigned short) var_19);
                    var_43 ^= ((/* implicit */short) var_5);
                }
                for (unsigned short i_20 = 1; i_20 < 24; i_20 += 1) 
                {
                    var_44 = ((/* implicit */short) (~(((var_13) - (var_9)))));
                    var_45 = var_5;
                }
                for (short i_21 = 0; i_21 < 25; i_21 += 1) 
                {
                    var_46 &= ((/* implicit */unsigned char) ((long long int) max((((/* implicit */unsigned long long int) var_17)), (var_8))));
                    arr_74 [i_4] [i_4] [i_10] [i_14] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_10))))), (((/* implicit */unsigned int) max((var_7), (var_7))))))) ? (((int) max((((/* implicit */unsigned long long int) var_12)), (var_6)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) var_0)))))));
                    var_47 = ((/* implicit */short) ((((((/* implicit */int) (signed char)-28)) + (2147483647))) << (((((/* implicit */int) (unsigned short)127)) - (127)))));
                }
            }
        }
    }
    var_48 = ((/* implicit */short) ((unsigned short) var_1));
}
