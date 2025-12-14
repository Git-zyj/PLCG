/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204490
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned short) ((unsigned int) ((short) arr_2 [i_0])));
        var_10 = ((/* implicit */unsigned long long int) (short)-32767);
        /* LoopNest 3 */
        for (unsigned int i_1 = 3; i_1 < 8; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 10; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 10; i_3 += 1) 
                {
                    {
                        var_11 = ((/* implicit */int) var_0);
                        var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)32766))) < (5653024215902771386ULL))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (int i_4 = 0; i_4 < 10; i_4 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 10; i_5 += 3) 
            {
                arr_17 [i_5] [i_5] [i_5] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)109)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-18048))) : (12793719857806780223ULL)));
                arr_18 [9U] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) 5653024215902771386ULL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_4))))))) ? (((long long int) 12793719857806780229ULL)) : (((/* implicit */long long int) min((((/* implicit */int) (short)-18048)), ((-(arr_6 [i_0] [i_0]))))))));
            }
            var_13 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((unsigned short) 848817163U))), (max((12793719857806780229ULL), (((/* implicit */unsigned long long int) -536870912))))));
            arr_19 [i_0] [i_0] [i_0] = ((/* implicit */int) 4590791581149939313LL);
        }
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_7 = 0; i_7 < 10; i_7 += 1) 
            {
                for (int i_8 = 0; i_8 < 10; i_8 += 2) 
                {
                    {
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((((/* implicit */_Bool) ((var_2) >> (((((/* implicit */int) (short)32755)) - (32738)))))) ? (((/* implicit */int) ((((/* implicit */int) (short)-32767)) >= (var_2)))) : (((/* implicit */int) arr_11 [(unsigned char)5] [4] [5U] [i_8])))))));
                        arr_27 [i_0] [i_6] [i_8] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-32763))) - (3701407316U)));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_9 = 0; i_9 < 10; i_9 += 4) 
            {
                for (long long int i_10 = 0; i_10 < 10; i_10 += 3) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned short i_11 = 0; i_11 < 10; i_11 += 4) 
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_8 [i_10]))));
                            arr_35 [i_0] [6U] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) var_8))))));
                        }
                        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 3) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) (+((-(((/* implicit */int) var_6))))));
                            var_17 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) | (9933102104794210347ULL))) > (((unsigned long long int) arr_15 [(short)5] [i_12] [i_10] [i_10]))));
                            arr_39 [i_12] [(unsigned char)0] [(unsigned char)0] [i_10] [i_10] [i_10] = ((/* implicit */_Bool) var_7);
                            arr_40 [i_0] [i_0] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */signed char) var_8);
                            var_18 &= ((var_6) ? (((/* implicit */int) arr_11 [i_12] [i_9] [i_6] [i_0])) : (((/* implicit */int) (unsigned short)56254)));
                        }
                        var_19 += ((/* implicit */long long int) arr_38 [i_0] [i_0] [i_10] [i_9] [i_6] [i_0]);
                        /* LoopSeq 4 */
                        for (int i_13 = 0; i_13 < 10; i_13 += 2) 
                        {
                            arr_44 [i_0] [i_13] [i_0] [i_9] [i_13] [(short)4] [i_6] = ((/* implicit */int) ((((/* implicit */int) (signed char)31)) >= (((/* implicit */int) (short)32766))));
                            var_20 = 5479830012502724109LL;
                            arr_45 [i_0] [i_6] [i_9] [i_6] [i_9] = ((/* implicit */long long int) arr_5 [i_13] [i_10] [i_6]);
                        }
                        for (int i_14 = 1; i_14 < 7; i_14 += 4) 
                        {
                            arr_49 [i_0] [i_9] [i_10] = ((/* implicit */signed char) var_4);
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_23 [i_14 - 1] [i_14 - 1] [i_14 - 1] [i_14 - 1])) ? (((/* implicit */int) arr_26 [i_14 - 1] [i_14 + 3])) : (((/* implicit */int) var_0))));
                            var_22 = ((/* implicit */short) 4294967295U);
                            var_23 = ((/* implicit */unsigned char) arr_22 [i_6]);
                            var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */int) arr_2 [i_0])) - (((/* implicit */int) arr_2 [i_14 + 3])))))));
                        }
                        for (signed char i_15 = 0; i_15 < 10; i_15 += 4) 
                        {
                            var_25 = ((/* implicit */signed char) min((var_25), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((unsigned int) var_7))))))));
                            arr_54 [(signed char)8] [i_9] [i_9] [i_9] [i_9] = ((/* implicit */short) (~(((/* implicit */int) (short)-5373))));
                            arr_55 [i_9] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [(unsigned char)6] [i_10] [i_15])) ? (((((((/* implicit */int) (short)-32767)) + (2147483647))) << (((268435454) - (268435454))))) : (((/* implicit */int) ((arr_10 [i_0] [i_0] [i_9] [i_0] [i_0] [i_0]) < (((/* implicit */int) var_0)))))));
                        }
                        for (unsigned char i_16 = 0; i_16 < 10; i_16 += 3) 
                        {
                            var_26 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_38 [i_0] [i_6] [i_6] [i_9] [i_10] [i_16]))));
                            arr_59 [i_0] [i_6] [(unsigned short)2] [i_10] [(unsigned short)2] = ((/* implicit */signed char) ((arr_22 [i_9]) % (((/* implicit */int) var_6))));
                            arr_60 [i_16] [i_10] [i_0] [(unsigned char)2] [i_0] [i_10] [i_6] = ((/* implicit */unsigned int) arr_26 [i_0] [i_10]);
                            var_27 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_51 [i_16] [6] [i_9] [i_6] [i_0])) ? (((/* implicit */int) var_5)) : (arr_51 [i_0] [i_0] [i_16] [i_10] [i_16])));
                        }
                    }
                } 
            } 
            arr_61 [i_0] [i_0] [i_6] = ((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)0)) << (((((/* implicit */int) var_7)) + (24535))))) << (((((/* implicit */int) (short)-4716)) + (4720)))));
            var_28 = ((/* implicit */signed char) min((var_28), (((/* implicit */signed char) ((((/* implicit */int) var_8)) - (arr_6 [i_0] [i_0]))))));
        }
        arr_62 [i_0] = ((/* implicit */long long int) min((((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-16)) ? (-3146506080891708968LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)74))))))), (-197576643)));
    }
    for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) (unsigned short)9281)))) ? (min((((/* implicit */int) (_Bool)1)), (-1338124868))) : (var_9))))));
        var_30 = ((/* implicit */long long int) (-(((/* implicit */int) min(((signed char)-88), (((/* implicit */signed char) var_0)))))));
    }
    for (unsigned char i_18 = 4; i_18 < 14; i_18 += 4) 
    {
        var_31 = ((/* implicit */unsigned int) max((var_31), (((/* implicit */unsigned int) max(((unsigned char)192), (min((((/* implicit */unsigned char) var_6)), (((unsigned char) (unsigned short)28301)))))))));
        var_32 ^= ((/* implicit */signed char) max((min((var_9), (((/* implicit */int) (signed char)-16)))), (((((/* implicit */_Bool) (unsigned short)65521)) ? (((((/* implicit */_Bool) 25165824)) ? (((/* implicit */int) (unsigned char)78)) : (((/* implicit */int) var_5)))) : (1548389972)))));
        /* LoopSeq 2 */
        for (int i_19 = 0; i_19 < 16; i_19 += 1) 
        {
            arr_72 [i_19] [i_19] [4] = ((/* implicit */unsigned long long int) ((short) (unsigned char)0));
            arr_73 [i_18] [14LL] [i_18] &= ((/* implicit */unsigned char) max((((/* implicit */int) var_5)), (((((/* implicit */_Bool) arr_65 [i_18 - 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))));
            var_33 = ((/* implicit */unsigned int) min((min((var_9), ((+(((/* implicit */int) (unsigned short)29158)))))), (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-127))))) ? (((/* implicit */int) min(((unsigned char)241), (((/* implicit */unsigned char) (signed char)1))))) : (((((/* implicit */_Bool) 2147483644)) ? (((/* implicit */int) (signed char)51)) : (((/* implicit */int) var_6))))))));
            var_34 = ((/* implicit */unsigned char) min((var_34), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (short)-14270)) : (var_2)))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)9298))))) : (4057787105U))))))));
        }
        /* vectorizable */
        for (unsigned int i_20 = 2; i_20 < 12; i_20 += 3) 
        {
            var_35 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_63 [i_18] [i_20 + 4]))));
            var_36 = ((/* implicit */signed char) ((((/* implicit */int) (short)-22784)) / (((/* implicit */int) (short)-22784))));
            var_37 = ((/* implicit */int) ((long long int) arr_70 [i_18]));
        }
        arr_76 [i_18] = ((/* implicit */int) 4969956144865257343LL);
        arr_77 [i_18] = ((/* implicit */unsigned char) 3219429825U);
    }
    for (short i_21 = 0; i_21 < 13; i_21 += 1) 
    {
        var_38 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)14)) + (var_2))))));
        arr_82 [i_21] [i_21] = ((/* implicit */short) max((((/* implicit */int) arr_79 [i_21])), ((((!(var_0))) ? ((((_Bool)0) ? (((/* implicit */int) var_3)) : (2147483647))) : (((/* implicit */int) (short)22796))))));
        arr_83 [10ULL] &= ((/* implicit */signed char) arr_79 [(signed char)12]);
    }
    var_39 = ((/* implicit */_Bool) max(((+(((/* implicit */int) (signed char)126)))), (((/* implicit */int) (short)-22797))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_22 = 4; i_22 < 16; i_22 += 1) 
    {
        var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) (~(962155839U))))));
        arr_86 [i_22] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((signed char) (signed char)2))) & (((/* implicit */int) var_8))));
    }
    for (unsigned char i_23 = 0; i_23 < 23; i_23 += 2) 
    {
        var_41 = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)2533)) >> ((((+(197576650))) - (197576637)))));
        var_42 ^= ((/* implicit */unsigned short) arr_63 [i_23] [i_23]);
        arr_90 [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(arr_88 [i_23])))) ? (((/* implicit */long long int) 197576663)) : (arr_88 [i_23])));
    }
    var_43 = ((/* implicit */int) var_5);
}
