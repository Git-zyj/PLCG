/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218903
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
    var_11 = ((/* implicit */signed char) max((((/* implicit */short) var_0)), (var_3)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            arr_6 [(unsigned char)0] = ((/* implicit */unsigned int) var_4);
            var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) (~((~(var_4))))))));
            var_13 = ((/* implicit */_Bool) (+(((((((/* implicit */int) (unsigned short)65535)) >> (((1679846905U) - (1679846884U))))) + (((((/* implicit */_Bool) -9223372036854775786LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)13129))))))));
        }
        for (short i_2 = 0; i_2 < 10; i_2 += 4) 
        {
            var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((_Bool)0), ((_Bool)1))))) : (((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) var_10)))))))));
            /* LoopSeq 1 */
            for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) var_5))));
                arr_12 [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)55285)) ? (5637197304591315587LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-20754)))));
                arr_13 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned short) var_1))))) ? (((/* implicit */int) var_8)) : (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) max((var_8), (((/* implicit */unsigned short) var_0))))) : (max((((/* implicit */int) var_8)), (var_10)))))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_4 = 1; i_4 < 9; i_4 += 1) 
            {
                arr_16 [1LL] [i_2] [1LL] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (min((((/* implicit */unsigned int) var_0)), (var_9))) : (var_9))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)52406)))))));
                var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_5))))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) == (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_4))))))));
            }
            var_17 = ((/* implicit */_Bool) var_6);
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_5 = 1; i_5 < 9; i_5 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned long long int i_6 = 1; i_6 < 7; i_6 += 1) 
            {
                var_18 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                var_19 = ((/* implicit */int) max((var_19), (((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                arr_24 [(_Bool)1] [i_5] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (unsigned short)13129)))))));
            }
            for (unsigned short i_7 = 1; i_7 < 6; i_7 += 1) 
            {
                arr_27 [i_0] [(unsigned short)2] [(unsigned short)2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))));
                var_20 = ((/* implicit */_Bool) (+((+(((/* implicit */int) (short)20753))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                {
                    var_21 = ((/* implicit */long long int) var_2);
                    var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) var_6))) * (var_9))))));
                    var_23 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_5))));
                }
                for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) (!((_Bool)1))))));
                    arr_35 [(short)6] [i_5 + 1] [i_7] [i_5] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_10)))))) : (var_7)));
                }
                for (unsigned long long int i_10 = 0; i_10 < 10; i_10 += 1) 
                {
                    var_25 = ((/* implicit */unsigned char) (-(194742200565586774LL)));
                    var_26 = ((/* implicit */unsigned int) min((var_26), (((/* implicit */unsigned int) ((((/* implicit */int) var_3)) - (var_10))))));
                    var_27 = var_4;
                    arr_38 [i_0] [i_0] [i_5] [i_10] = ((/* implicit */unsigned int) var_7);
                }
                for (unsigned char i_11 = 1; i_11 < 9; i_11 += 4) 
                {
                    var_28 = ((/* implicit */int) min((var_28), ((+(((/* implicit */int) var_6))))));
                    var_29 = ((/* implicit */unsigned int) var_7);
                    var_30 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */int) var_3)))) : ((-(((/* implicit */int) var_0))))));
                    arr_41 [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_2)))))));
                    arr_42 [i_0] [i_5] [i_0] = ((/* implicit */int) ((((/* implicit */long long int) -1050052911)) % (9223372036854775807LL)));
                }
            }
            for (int i_12 = 0; i_12 < 10; i_12 += 3) 
            {
                var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */int) var_0))));
                var_32 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) -6244301358165232183LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)255))));
                arr_46 [i_5] [i_5] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)37)) || (((/* implicit */_Bool) 194742200565586774LL))));
                var_33 = ((/* implicit */unsigned int) ((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))));
            }
            for (int i_13 = 1; i_13 < 6; i_13 += 4) 
            {
                arr_51 [i_0] [i_13] [i_5 + 1] [i_0] &= (~(((((/* implicit */long long int) ((/* implicit */int) (short)7))) | (-194742200565586778LL))));
                arr_52 [i_5] [i_5 - 1] [i_5 - 1] [i_13 + 3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (short)20746))));
                var_34 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_5)))) < (((/* implicit */int) var_5))));
            }
            arr_53 [i_0] [i_5] = ((/* implicit */short) ((((/* implicit */int) var_6)) & ((-(((/* implicit */int) var_0))))));
            arr_54 [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) : (((((/* implicit */_Bool) var_7)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))));
        }
        for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
        {
            var_35 = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)6729))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_15 = 2; i_15 < 9; i_15 += 4) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_16 = 1; i_16 < 9; i_16 += 1) 
                {
                    var_36 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_2)))))));
                    arr_61 [(_Bool)1] [i_14] [i_14] [i_14] = var_9;
                    arr_62 [i_14] [(_Bool)1] [i_14] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))));
                    var_37 = ((/* implicit */signed char) max((var_37), (((/* implicit */signed char) (-(((/* implicit */int) (short)32399)))))));
                }
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    var_38 = ((/* implicit */unsigned short) min((var_38), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (((((/* implicit */long long int) 153115423U)) | (1125898833100800LL))))))));
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (var_4)));
                }
                arr_65 [i_0] [i_14] |= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (var_10))))));
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_19 = 0; i_19 < 10; i_19 += 1) 
                    {
                        var_40 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (-(var_9))))));
                        var_41 = ((/* implicit */unsigned long long int) (+(4294967276U)));
                        arr_70 [(short)4] [i_14] [i_14] [i_14] [2U] [(_Bool)1] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) % (((/* implicit */int) var_0))))) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_5))));
                    }
                    var_42 = ((/* implicit */unsigned int) min((var_42), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
                }
                arr_71 [i_14] [i_0] [i_14] = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) >> (((((/* implicit */int) var_3)) + (3318)))));
            }
            for (unsigned char i_20 = 0; i_20 < 10; i_20 += 4) 
            {
                var_43 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)127)) ? (1730016767891046817LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) - (((/* implicit */unsigned long long int) (((-(var_9))) - (((/* implicit */unsigned int) ((((/* implicit */int) var_0)) / (var_10)))))))));
                /* LoopSeq 2 */
                for (long long int i_21 = 0; i_21 < 10; i_21 += 4) 
                {
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned short i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        var_44 = ((/* implicit */_Bool) (~((-(var_4)))));
                        var_45 = ((/* implicit */unsigned char) (-(((/* implicit */int) var_3))));
                    }
                    for (unsigned char i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((var_10), (((/* implicit */int) var_5))))), (var_7)))) ? (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_5)))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))))));
                        arr_81 [i_14] [i_14] [2ULL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 1737178233U)) ? (10U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)26442)))));
                    }
                    arr_82 [i_0] [i_14] [i_14] [i_21] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))), (10965739442648835260ULL)));
                }
                for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                {
                    var_47 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */int) var_6)), (var_10)))) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) var_0))));
                    arr_85 [i_0] [i_14] [i_14] [i_20] [i_14] = ((/* implicit */unsigned long long int) (~((+(9223372036854775804LL)))));
                }
            }
            for (signed char i_25 = 1; i_25 < 7; i_25 += 2) 
            {
                arr_89 [i_14] [i_14] [i_25 + 1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(var_4)))) ? ((~(var_10))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_3)))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (var_9)))));
                var_48 = ((/* implicit */long long int) max((var_48), (((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2)))) + (((var_10) / (((/* implicit */int) var_8)))))))))));
                arr_90 [i_0] [i_14] [i_14] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((var_0), (var_0))))) / ((+(var_4))))))));
                var_49 = ((/* implicit */int) max((var_49), (((((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_3))))) * (((var_10) - (var_10)))))));
            }
        }
        var_50 = ((/* implicit */short) max((var_50), (var_6)));
        var_51 = ((/* implicit */signed char) (((-(var_7))) >> (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_2)))) + (3302)))));
    }
    var_52 = ((/* implicit */_Bool) var_1);
    var_53 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) (~(9223372036854775807LL)))), ((((~(var_4))) + (max((((/* implicit */unsigned long long int) var_9)), (var_4)))))));
}
