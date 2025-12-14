/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223891
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223891 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223891
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
    var_11 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)98))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */int) (unsigned short)65535);
        var_13 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14336U)) ? (((/* implicit */int) (signed char)108)) : (((((/* implicit */int) (signed char)98)) + (((/* implicit */int) (_Bool)1))))))) <= (min((max((var_4), (((/* implicit */unsigned int) arr_0 [i_0])))), (((/* implicit */unsigned int) ((arr_2 [i_0]) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_0 [i_0]))))))));
        var_14 = ((/* implicit */unsigned char) (signed char)-98);
    }
    for (unsigned long long int i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_15 = ((/* implicit */signed char) arr_1 [i_1]);
        var_16 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1 + 2])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (70368744177408ULL)))) ? ((+(7347502589681052180ULL))) : (((/* implicit */unsigned long long int) 288230376151711743LL))));
        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((long long int) max((arr_3 [i_1 + 1]), ((-(((/* implicit */int) arr_0 [i_1 - 2]))))))))));
        var_18 = ((/* implicit */_Bool) max((min((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_4 [i_1] [i_1]))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-99))) / (3968569211U)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((70368744177430ULL), (((/* implicit */unsigned long long int) (signed char)-83))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)84))) <= (-2722811109621263896LL)))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (short)-16193)))))))));
    }
    /* vectorizable */
    for (unsigned int i_2 = 0; i_2 < 10; i_2 += 4) 
    {
        var_19 = ((/* implicit */long long int) arr_3 [i_2]);
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_2])) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)150)))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-31820)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (signed char)4))));
    }
    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 3) 
    {
        var_22 &= ((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (3959085059U)));
        /* LoopSeq 2 */
        for (unsigned char i_4 = 3; i_4 < 12; i_4 += 3) 
        {
            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) (signed char)84)), (arr_10 [i_3] [i_4 + 1])))) ? (((unsigned int) (signed char)-94)) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)22271)))));
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) -2147483636))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (int i_5 = 2; i_5 < 11; i_5 += 3) 
            {
                var_25 = ((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_3])) / (((((/* implicit */_Bool) (unsigned short)19474)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_3]))))));
                /* LoopSeq 2 */
                for (unsigned int i_6 = 0; i_6 < 15; i_6 += 1) 
                {
                    var_26 = ((/* implicit */unsigned int) ((unsigned long long int) (signed char)-90));
                    var_27 = ((/* implicit */short) ((unsigned short) ((((/* implicit */_Bool) var_1)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))));
                    var_28 = ((/* implicit */short) var_8);
                    var_29 *= ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))));
                }
                for (short i_7 = 4; i_7 < 11; i_7 += 1) 
                {
                    var_30 |= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                    var_31 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_7 - 3])) ? (((((/* implicit */_Bool) (unsigned short)46071)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned char)42)))) : (((/* implicit */int) var_10))));
                    var_32 = ((/* implicit */signed char) 18446673704965374185ULL);
                    var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_14 [i_4 + 3] [i_5 + 1] [i_7 - 3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_3))));
                }
            }
        }
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_34 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-81))) ^ (arr_1 [i_8])))) ? (min((arr_22 [i_3]), (-7209381557868565039LL))) : (max((arr_22 [i_3]), (((/* implicit */long long int) arr_18 [i_8] [i_3]))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (signed char i_9 = 2; i_9 < 11; i_9 += 4) 
            {
                /* LoopSeq 1 */
                for (short i_10 = 1; i_10 < 11; i_10 += 1) 
                {
                    var_35 &= ((/* implicit */long long int) ((unsigned int) -8311761556805776214LL));
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_36 = var_3;
                        var_37 = ((/* implicit */unsigned short) arr_18 [i_3] [i_3]);
                    }
                }
                var_38 = ((/* implicit */unsigned char) var_7);
                /* LoopSeq 1 */
                for (int i_12 = 4; i_12 < 14; i_12 += 4) 
                {
                    var_39 = ((/* implicit */unsigned int) arr_21 [i_3] [i_8]);
                    var_40 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_3] [i_12 - 2] [i_3] [i_12]))));
                    var_41 -= ((((/* implicit */_Bool) (unsigned char)17)) ? (((/* implicit */int) (short)-23364)) : (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) var_2)))));
                }
            }
            for (unsigned int i_13 = 0; i_13 < 15; i_13 += 3) 
            {
                var_42 += ((/* implicit */unsigned long long int) (short)-29536);
                var_43 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) -9223372036854775789LL)) ? (arr_31 [i_13] [i_13] [(_Bool)1] [i_8] [(_Bool)1] [i_3] [i_3]) : (arr_31 [i_3] [i_3] [(unsigned char)14] [i_3] [i_3] [i_3] [i_3]))), (arr_31 [i_3] [i_3] [2U] [i_3] [i_8] [i_3] [i_13])));
            }
            for (int i_14 = 3; i_14 < 13; i_14 += 3) 
            {
                var_44 &= ((/* implicit */_Bool) (unsigned char)77);
                /* LoopSeq 4 */
                for (unsigned long long int i_15 = 1; i_15 < 12; i_15 += 1) 
                {
                    var_45 = ((/* implicit */unsigned int) max(((~(((/* implicit */int) arr_15 [i_14] [i_14 - 3] [i_14] [i_14 + 1])))), (((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    var_46 &= ((/* implicit */unsigned int) (_Bool)1);
                    var_47 = ((/* implicit */unsigned char) max(((unsigned short)47568), (((/* implicit */unsigned short) (signed char)117))));
                }
                for (unsigned int i_16 = 0; i_16 < 15; i_16 += 4) 
                {
                    var_48 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) ? ((-(8323072))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (short)-29536)) ? (((/* implicit */long long int) 65535U)) : ((-9223372036854775807LL - 1LL))))))));
                    var_49 = ((/* implicit */unsigned short) arr_29 [i_8] [i_16] [i_16] [i_3]);
                    var_50 = ((/* implicit */unsigned int) ((int) arr_27 [i_16]));
                }
                for (unsigned long long int i_17 = 0; i_17 < 15; i_17 += 4) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_18 = 0; i_18 < 15; i_18 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned int) arr_18 [i_8] [i_8]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)178))) / (var_4)))))) ? (arr_22 [i_14]) : (min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */long long int) var_9)) : (1808592029514288517LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (var_7) : (((/* implicit */int) var_6)))))))));
                        var_52 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned long long int) var_10)), (12834865989649762376ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_8)), (arr_29 [i_3] [11ULL] [i_18] [i_3]))))));
                        var_53 = -2727556680891099305LL;
                        var_54 = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) arr_48 [i_3] [i_14 + 2] [(short)12] [i_14 - 2])) : (arr_13 [i_8] [i_8] [i_8] [i_14 + 2]))));
                    }
                    var_55 = ((/* implicit */unsigned int) (_Bool)1);
                }
                for (unsigned char i_19 = 0; i_19 < 15; i_19 += 4) 
                {
                    var_56 = ((((/* implicit */_Bool) (+(min((-9223372036854775789LL), (6645128345470728601LL)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (max((8670248380610302096ULL), (((/* implicit */unsigned long long int) (signed char)-57)))));
                    var_57 = max((9223372036854775807LL), (((/* implicit */long long int) ((((/* implicit */_Bool) (short)-11095)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)24))))));
                }
                var_58 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (unsigned short)44342)) ? (((/* implicit */unsigned long long int) ((var_3) ? (((/* implicit */int) (unsigned short)26303)) : (((/* implicit */int) (unsigned char)150))))) : (((((/* implicit */_Bool) (unsigned short)50890)) ? (((/* implicit */unsigned long long int) 0U)) : (72057559678189568ULL))))), (((/* implicit */unsigned long long int) min((min((var_4), (4177920U))), (((((/* implicit */_Bool) 768924563U)) ? (15U) : (2725889231U))))))));
                var_59 -= min((((/* implicit */unsigned int) ((((/* implicit */_Bool) max((2047718996899245543LL), (((/* implicit */long long int) arr_27 [i_3]))))) ? (((((/* implicit */int) (unsigned char)220)) ^ (((/* implicit */int) arr_43 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))) : (max(((-2147483647 - 1)), (((/* implicit */int) var_0))))))), (var_4));
            }
        }
    }
}
