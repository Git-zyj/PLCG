/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46432
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
    var_20 = ((/* implicit */unsigned short) var_9);
    /* LoopSeq 4 */
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (signed char i_1 = 2; i_1 < 23; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_19))))) : (((/* implicit */int) var_14))));
            var_22 = ((((/* implicit */_Bool) var_18)) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8))))) : (((((/* implicit */_Bool) var_15)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_14))))));
        }
        for (long long int i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_2] [i_2] = ((/* implicit */short) var_1);
            var_23 = ((/* implicit */unsigned short) (~((-(((((/* implicit */_Bool) var_1)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_15)))))))));
            var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? ((~(var_17))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)6))))) != (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_6)))))))));
        }
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
        {
            var_25 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_16))))) ? (((/* implicit */unsigned int) ((var_14) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11))))) : ((~(var_6))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_3) : (var_17)))) ? (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned int) var_13)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (var_13))))))));
            var_26 += ((/* implicit */unsigned char) var_19);
        }
        /* vectorizable */
        for (long long int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            /* LoopSeq 4 */
            for (int i_5 = 0; i_5 < 24; i_5 += 4) 
            {
                var_27 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (var_1) : (var_1)));
                var_28 = var_5;
                var_29 = ((/* implicit */int) (+(((((/* implicit */_Bool) (short)-5117)) ? (1264715143U) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))));
                var_30 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_9))));
            }
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 3) 
            {
                var_31 |= ((/* implicit */_Bool) var_19);
                var_32 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
            }
            for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
            {
                var_33 = ((/* implicit */unsigned char) var_8);
                var_34 = ((/* implicit */short) var_2);
            }
            for (unsigned long long int i_8 = 0; i_8 < 24; i_8 += 2) 
            {
                var_35 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) (unsigned short)65535))));
                var_36 = ((/* implicit */int) max((var_36), (((/* implicit */int) (~(((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) var_13)) : (var_1))))))));
                var_37 = ((/* implicit */unsigned short) (~(var_6)));
                var_38 ^= ((/* implicit */signed char) (~(((/* implicit */int) ((((/* implicit */int) (signed char)127)) <= (((/* implicit */int) var_8)))))));
                var_39 -= ((/* implicit */_Bool) var_5);
            }
            var_40 = ((/* implicit */unsigned int) var_0);
            var_41 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_15))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_14)))) : (((/* implicit */int) (!(var_9)))));
            var_42 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)32))))) : (((((/* implicit */_Bool) var_13)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
        }
        arr_26 [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_15)))), (((((/* implicit */int) var_0)) + (((/* implicit */int) var_18))))))), (((((/* implicit */_Bool) (+(var_13)))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_0))))) : (var_5)))));
        /* LoopSeq 3 */
        for (unsigned short i_9 = 1; i_9 < 23; i_9 += 2) 
        {
            arr_31 [i_0] [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) var_7))));
            var_43 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-((-(((/* implicit */int) var_7))))))) ? ((+(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_5))))) : (((/* implicit */unsigned int) (((!(var_14))) ? (((/* implicit */int) ((var_14) || (((/* implicit */_Bool) var_2))))) : (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_0)))))))));
        }
        for (unsigned short i_10 = 0; i_10 < 24; i_10 += 4) /* same iter space */
        {
            arr_34 [i_0] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-31120)) ? (((/* implicit */int) (unsigned short)19752)) : (((/* implicit */int) var_10))))) ? (((((/* implicit */_Bool) var_15)) ? (var_19) : (((/* implicit */long long int) var_6)))) : (((/* implicit */long long int) (+(((/* implicit */int) var_9))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (var_12))) >= (((/* implicit */unsigned long long int) min((1578564403U), (((/* implicit */unsigned int) (unsigned char)203))))))))));
            arr_35 [4] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 5977865154241928248LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)51066))) : (4294967295U)));
            var_44 += ((/* implicit */unsigned short) (+(((/* implicit */int) (short)-13255))));
            var_45 = ((/* implicit */signed char) var_19);
            var_46 = ((/* implicit */short) (~(((/* implicit */int) var_9))));
        }
        /* vectorizable */
        for (unsigned short i_11 = 0; i_11 < 24; i_11 += 4) /* same iter space */
        {
            /* LoopSeq 4 */
            for (short i_12 = 0; i_12 < 24; i_12 += 2) 
            {
                var_47 = ((/* implicit */_Bool) var_15);
                var_48 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2))));
            }
            for (unsigned char i_13 = 0; i_13 < 24; i_13 += 4) 
            {
                var_49 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))));
                var_50 = ((/* implicit */long long int) min((var_50), (((/* implicit */long long int) var_5))));
            }
            for (unsigned short i_14 = 4; i_14 < 23; i_14 += 3) 
            {
                /* LoopSeq 1 */
                for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                {
                    var_51 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))))));
                    var_52 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_18))))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) var_2))))) : (((((/* implicit */_Bool) var_15)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) var_7))))));
                    var_53 = ((/* implicit */unsigned short) var_14);
                    var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (((((/* implicit */_Bool) var_4)) ? (var_1) : (var_6)))));
                    /* LoopSeq 1 */
                    for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
                    {
                        var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_16))))) ? (((/* implicit */int) ((((/* implicit */int) var_9)) != (((/* implicit */int) var_9))))) : (((/* implicit */int) var_8))));
                        var_56 = ((/* implicit */unsigned short) max((var_56), (((/* implicit */unsigned short) (-(var_3))))));
                        var_57 = ((/* implicit */int) (+(((var_19) + (((/* implicit */long long int) var_3))))));
                        var_58 = ((/* implicit */unsigned int) var_13);
                        var_59 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) ^ (((/* implicit */int) var_18))))) ? (((((/* implicit */_Bool) var_11)) ? (var_4) : (((/* implicit */unsigned long long int) var_13)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_2)))))));
                    }
                }
                var_60 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (var_13)));
                var_61 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? ((+(var_5))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_0)))))));
            }
            for (short i_17 = 0; i_17 < 24; i_17 += 4) 
            {
                var_62 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                var_63 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(var_4)))) ? (((/* implicit */unsigned int) var_13)) : (((((/* implicit */_Bool) var_16)) ? (var_1) : (((/* implicit */unsigned int) var_13))))));
                var_64 = ((/* implicit */short) var_6);
                var_65 = ((/* implicit */unsigned int) max((var_65), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) var_16)) : (((var_14) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_11)))))))));
                /* LoopSeq 1 */
                for (unsigned long long int i_18 = 0; i_18 < 24; i_18 += 3) 
                {
                    var_66 = ((/* implicit */short) var_2);
                    var_67 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_5)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))) >> (((((/* implicit */int) var_18)) - (131)))));
                    var_68 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_14))))) ? (((((/* implicit */_Bool) var_19)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_11)))) : ((+(((/* implicit */int) (signed char)-15))))));
                    var_69 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_11))));
                    var_70 = ((/* implicit */signed char) (~(((/* implicit */int) var_0))));
                }
            }
            arr_58 [i_0] [i_0] [(_Bool)1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (var_1)))) ? ((~(var_3))) : ((-(var_5)))));
            var_71 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(var_5)))) ? (((/* implicit */unsigned long long int) var_17)) : (((((/* implicit */_Bool) var_13)) ? (var_4) : (((/* implicit */unsigned long long int) var_6))))));
            var_72 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) + (var_12))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)32875)))))));
            var_73 = ((/* implicit */long long int) (+(var_13)));
        }
    }
    /* vectorizable */
    for (short i_19 = 1; i_19 < 9; i_19 += 2) /* same iter space */
    {
        var_74 = ((/* implicit */unsigned short) ((var_12) + (((/* implicit */unsigned long long int) var_13))));
        /* LoopSeq 2 */
        for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
        {
            var_75 = ((/* implicit */unsigned short) min((var_75), (((/* implicit */unsigned short) ((var_14) ? ((+(var_1))) : (((/* implicit */unsigned int) ((/* implicit */int) var_15))))))));
            arr_65 [i_19 + 3] [i_20] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_4)))) ? (((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_1))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (var_17)))));
            var_76 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_8))))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_0))))) : (((var_19) + (((/* implicit */long long int) ((/* implicit */int) var_0)))))));
            /* LoopSeq 2 */
            for (unsigned short i_21 = 2; i_21 < 10; i_21 += 3) 
            {
                var_77 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_4))) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_14)))))));
                var_78 = ((/* implicit */unsigned int) min((var_78), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_18)) ? (var_6) : (((/* implicit */unsigned int) var_13))))) ? (((/* implicit */unsigned int) var_13)) : ((~(var_5)))))));
                var_79 -= ((/* implicit */long long int) (~((+(var_12)))));
            }
            for (short i_22 = 3; i_22 < 10; i_22 += 4) 
            {
                var_80 = ((/* implicit */unsigned short) min((var_80), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) && (((/* implicit */_Bool) var_15)))))));
                arr_72 [i_19] [i_20] = ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)17515)) : (((/* implicit */int) var_0))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) (unsigned short)7)));
            }
        }
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            /* LoopSeq 2 */
            for (signed char i_24 = 1; i_24 < 11; i_24 += 3) 
            {
                var_81 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (signed char)-25))));
                var_82 = ((/* implicit */unsigned int) var_12);
                var_83 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)1))) ^ (7790871301405164760ULL)));
            }
            for (unsigned char i_25 = 0; i_25 < 12; i_25 += 4) 
            {
                var_84 = ((/* implicit */unsigned int) min((var_84), (((((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))) ? (var_5) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)53669)))))))));
                var_85 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_17)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)11808))))) : (((((/* implicit */_Bool) var_16)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15)))))));
                arr_82 [i_19] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_4)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (var_19))) : (((/* implicit */long long int) ((var_9) ? (var_17) : (var_17))))));
                var_86 = ((/* implicit */long long int) var_6);
            }
            var_87 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_2)))));
            /* LoopSeq 2 */
            for (unsigned short i_26 = 1; i_26 < 9; i_26 += 3) 
            {
                var_88 = ((/* implicit */long long int) min((var_88), (((/* implicit */long long int) (~(((/* implicit */int) var_2)))))));
                var_89 = ((/* implicit */unsigned short) min((var_89), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_12)))) ? (((var_14) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_9))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18))))))));
            }
            for (unsigned int i_27 = 0; i_27 < 12; i_27 += 4) 
            {
                var_90 = ((/* implicit */unsigned int) min((var_90), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) var_11)))))))))));
                var_91 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((var_9) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_18))))) ? (var_12) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_16)))))));
                var_92 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_19) < (((/* implicit */long long int) ((/* implicit */int) var_10))))))) : (var_1)));
            }
        }
        /* LoopSeq 1 */
        for (unsigned int i_28 = 1; i_28 < 11; i_28 += 1) 
        {
            var_93 = ((/* implicit */_Bool) max((var_93), (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) (unsigned char)65))))) ? ((-(((/* implicit */int) (_Bool)1)))) : ((-(((/* implicit */int) var_15)))))))));
            arr_89 [i_28] = ((/* implicit */_Bool) (-(8384512)));
            arr_90 [i_28] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_16)) : (((/* implicit */int) var_9))));
        }
    }
    for (short i_29 = 1; i_29 < 9; i_29 += 2) /* same iter space */
    {
        var_94 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
        var_95 ^= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((var_10) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_12)))) ? ((~(var_3))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))));
        var_96 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+((+(((/* implicit */int) var_2))))))) ? ((~(((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))))) : (((/* implicit */int) var_16))));
    }
    /* vectorizable */
    for (unsigned char i_30 = 0; i_30 < 12; i_30 += 1) 
    {
        var_97 = ((/* implicit */unsigned short) var_14);
        var_98 = ((/* implicit */signed char) (+(((/* implicit */int) var_7))));
        var_99 += (-(((/* implicit */int) var_16)));
        arr_96 [i_30] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_17)))) ? ((~(var_19))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
    }
    var_100 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) var_18))))) ? ((~(((/* implicit */int) var_8)))) : (((/* implicit */int) var_2))))) ? (var_12) : (((var_14) ? (var_4) : (((/* implicit */unsigned long long int) 750829659))))));
}
