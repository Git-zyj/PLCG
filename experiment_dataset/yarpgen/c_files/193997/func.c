/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193997
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193997 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193997
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
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned char) min((min((((/* implicit */long long int) var_16)), (var_14))), (min((((/* implicit */long long int) var_6)), (max((var_4), (((/* implicit */long long int) var_3))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_0))), (max((var_4), (((/* implicit */long long int) var_6))))));
        arr_5 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) min((var_5), (var_9)))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) var_12)) : (var_14)))), (min((var_11), (((/* implicit */unsigned long long int) var_7))))))));
    }
    /* vectorizable */
    for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) 
        {
            var_20 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_13))));
            arr_11 [i_2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_0)));
            /* LoopSeq 2 */
            for (unsigned int i_3 = 0; i_3 < 16; i_3 += 2) /* same iter space */
            {
                /* LoopSeq 4 */
                for (unsigned char i_4 = 0; i_4 < 16; i_4 += 3) /* same iter space */
                {
                    var_21 += ((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (var_12) : (((/* implicit */int) var_16))));
                    var_22 += ((/* implicit */unsigned char) var_8);
                }
                for (unsigned char i_5 = 0; i_5 < 16; i_5 += 3) /* same iter space */
                {
                    arr_19 [i_5] [i_5] [i_1] [3ULL] [(_Bool)1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_10))));
                    var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : (var_11)));
                }
                for (unsigned char i_6 = 0; i_6 < 16; i_6 += 3) /* same iter space */
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)16)) ? (((/* implicit */int) (unsigned short)35259)) : (((/* implicit */int) (short)-30957))));
                    var_25 = ((/* implicit */long long int) var_11);
                    arr_22 [i_6] [(unsigned char)14] [(unsigned short)13] [7U] [(unsigned char)9] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */_Bool) var_4)) ? (var_15) : (var_0)))));
                    arr_23 [(unsigned char)13] [i_2] [i_3] [8LL] [i_6] [i_6] = var_1;
                    /* LoopSeq 3 */
                    for (unsigned int i_7 = 0; i_7 < 16; i_7 += 4) /* same iter space */
                    {
                        var_26 += ((/* implicit */unsigned char) var_3);
                        var_27 = ((/* implicit */unsigned long long int) var_15);
                    }
                    for (unsigned int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
                    {
                        var_28 &= ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (var_0)));
                        var_29 -= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_8));
                    }
                    for (unsigned short i_9 = 1; i_9 < 15; i_9 += 3) 
                    {
                        var_30 = var_15;
                        arr_30 [i_6] [i_6] [i_3] [i_3] [i_3] = ((/* implicit */unsigned int) var_6);
                    }
                }
                for (unsigned long long int i_10 = 0; i_10 < 16; i_10 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 0; i_11 < 16; i_11 += 2) 
                    {
                        arr_38 [i_11] [i_10] [i_3] [i_2] [i_1] = ((var_6) ? (var_14) : (var_14));
                        var_31 = ((/* implicit */unsigned short) max((var_31), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)35268)) ? (-6397344966870699567LL) : (((/* implicit */long long int) 3043060008U)))))));
                        var_32 &= ((/* implicit */unsigned short) var_14);
                    }
                    arr_39 [i_10] [i_10] [i_3] [i_3] [i_2] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_15)) : (var_11)));
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 16; i_12 += 2) 
                    {
                        var_33 = ((/* implicit */short) var_13);
                        var_34 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_8) : (var_17)));
                        var_35 += ((/* implicit */short) var_6);
                        arr_42 [i_12] [i_12] [i_12] [(_Bool)1] [i_12] = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_12)) : (var_15)));
                    }
                    for (int i_13 = 2; i_13 < 12; i_13 += 3) 
                    {
                        arr_46 [i_1] [i_1] [i_3] [i_1] [(short)15] = ((/* implicit */int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (var_11)))));
                        var_36 ^= ((/* implicit */int) var_6);
                        arr_47 [i_1] [i_2] [i_3] [i_10] [i_13] = ((/* implicit */unsigned short) var_8);
                        arr_48 [i_1] [i_2] [i_3] = ((((/* implicit */_Bool) var_5)) ? (var_12) : (((/* implicit */int) var_18)));
                    }
                    var_37 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 6397344966870699556LL)) ? (1354029284) : (((/* implicit */int) (short)-31440))));
                }
                var_38 *= ((/* implicit */signed char) ((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                /* LoopSeq 1 */
                for (unsigned long long int i_14 = 0; i_14 < 16; i_14 += 4) 
                {
                    var_39 *= ((/* implicit */unsigned char) var_15);
                    var_40 = ((/* implicit */unsigned short) var_16);
                    var_41 -= ((/* implicit */unsigned short) var_0);
                }
            }
            for (unsigned int i_15 = 0; i_15 < 16; i_15 += 2) /* same iter space */
            {
                arr_55 [i_1] [i_2] [i_15] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))));
                var_42 = ((/* implicit */short) min((var_42), (var_7)));
                /* LoopSeq 1 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_17 = 2; i_17 < 13; i_17 += 3) 
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (var_15)));
                        var_44 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_18)) : (var_12)));
                        var_45 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
                        var_46 = ((/* implicit */_Bool) max((var_46), (((/* implicit */_Bool) var_11))));
                    }
                    var_47 = ((/* implicit */short) min((var_47), (((/* implicit */short) var_10))));
                    arr_61 [i_1] [i_15] [i_1] = ((/* implicit */unsigned int) var_16);
                    var_48 = ((/* implicit */short) max((var_48), (var_7)));
                }
            }
        }
        for (unsigned char i_18 = 0; i_18 < 16; i_18 += 2) 
        {
            var_49 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) var_12)) : (var_4)));
            arr_64 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_18))));
        }
        arr_65 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_3)) ? (var_8) : (var_17)));
        /* LoopSeq 2 */
        for (long long int i_19 = 4; i_19 < 15; i_19 += 4) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_20 = 0; i_20 < 16; i_20 += 4) 
            {
                arr_72 [i_20] [i_20] [i_20] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_7))));
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 0; i_21 += 1) 
                {
                    var_50 = ((/* implicit */unsigned short) min((var_50), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_18)) ? (var_17) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))))))));
                    arr_76 [i_21 + 1] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_7))));
                }
                var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((((/* implicit */_Bool) var_10)) ? (var_11) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                var_52 = ((/* implicit */unsigned char) min((var_52), (((/* implicit */unsigned char) var_12))));
            }
            arr_77 [i_1] [i_1] [i_19] = ((/* implicit */short) var_10);
            var_53 = ((/* implicit */unsigned long long int) var_16);
        }
        for (long long int i_22 = 4; i_22 < 15; i_22 += 4) /* same iter space */
        {
            var_54 = ((/* implicit */unsigned short) var_15);
            /* LoopSeq 1 */
            for (unsigned long long int i_23 = 4; i_23 < 14; i_23 += 3) 
            {
                /* LoopSeq 2 */
                for (long long int i_24 = 0; i_24 < 16; i_24 += 2) 
                {
                    var_55 -= ((/* implicit */unsigned char) var_15);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_25 = 0; i_25 < 16; i_25 += 2) 
                    {
                        var_56 += ((/* implicit */unsigned int) var_17);
                        var_57 += ((((/* implicit */_Bool) var_18)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_1))))) : (var_4));
                        var_58 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_4)));
                    }
                }
                for (unsigned int i_26 = 1; i_26 < 14; i_26 += 3) 
                {
                    var_59 += var_10;
                    /* LoopSeq 1 */
                    for (long long int i_27 = 0; i_27 < 16; i_27 += 3) 
                    {
                        var_60 = ((/* implicit */unsigned char) ((var_13) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_3)))));
                        var_61 = ((((/* implicit */_Bool) var_4)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) var_6))));
                        arr_93 [(short)3] [i_23] [(short)3] [i_26] [(signed char)6] = ((/* implicit */unsigned long long int) var_14);
                    }
                    /* LoopSeq 1 */
                    for (long long int i_28 = 3; i_28 < 15; i_28 += 2) 
                    {
                        var_62 = var_16;
                        var_63 = ((/* implicit */unsigned char) min((var_63), (((/* implicit */unsigned char) ((var_6) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
                        arr_98 [i_23] [i_26] [i_26 + 1] [i_23] [i_22] [i_23] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_4)));
                        arr_99 [(unsigned char)4] [i_1] [i_23] [i_26 - 1] [i_23] [i_23] [i_26] &= ((/* implicit */unsigned long long int) var_12);
                    }
                    arr_100 [i_23] [i_22] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_13))))));
                }
                var_64 = ((/* implicit */unsigned long long int) ((var_6) ? (((/* implicit */long long int) var_12)) : (var_4)));
                var_65 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_16))));
            }
            /* LoopSeq 1 */
            for (unsigned long long int i_29 = 0; i_29 < 16; i_29 += 3) 
            {
                arr_103 [i_1] [i_29] [i_29] = ((/* implicit */long long int) var_17);
                arr_104 [i_1] [i_29] = ((/* implicit */signed char) var_17);
            }
            var_66 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_18))));
        }
        var_67 = ((/* implicit */int) max((var_67), (((/* implicit */int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (var_0))))));
    }
    var_68 = ((((/* implicit */_Bool) min((var_15), (((/* implicit */long long int) max((var_12), (((/* implicit */int) var_5)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (min((var_8), (((/* implicit */unsigned long long int) var_5)))))));
}
