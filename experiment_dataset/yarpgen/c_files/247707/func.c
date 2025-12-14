/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247707
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247707 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247707
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
    var_20 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */_Bool) (unsigned short)34159)) ? (2147483647) : ((~(((/* implicit */int) (unsigned short)44792)))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (int i_1 = 4; i_1 < 10; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned short i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                for (unsigned short i_3 = 1; i_3 < 10; i_3 += 4) 
                {
                    {
                        var_21 &= ((/* implicit */short) (+(((/* implicit */int) (unsigned short)20632))));
                        var_22 -= ((/* implicit */unsigned char) 2147483639);
                        arr_12 [i_1] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(-2147483647)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) ((short) (_Bool)1))) : ((-(((/* implicit */int) (short)2134))))))) : (((((/* implicit */_Bool) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)220)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)62))))) : ((+(7835765920819365442ULL)))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_4 = 0; i_4 < 12; i_4 += 4) 
            {
                for (unsigned short i_5 = 3; i_5 < 8; i_5 += 2) 
                {
                    {
                        var_23 *= ((/* implicit */unsigned char) min((((/* implicit */int) (_Bool)1)), ((((+(((/* implicit */int) var_7)))) << (((((/* implicit */int) (unsigned char)117)) - (116)))))));
                        var_24 = ((/* implicit */unsigned short) (~(min(((~(((/* implicit */int) var_16)))), (((/* implicit */int) min(((signed char)0), (((/* implicit */signed char) arr_0 [i_4] [i_4])))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 12; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 2) 
                {
                    {
                        arr_23 [i_0] [2LL] [i_6] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_8 [(_Bool)1] [i_6] [i_7])) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned short)65535)))) >> ((+(((/* implicit */int) (signed char)0))))))) ? ((+(((unsigned long long int) 2147483647)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min(((signed char)-1), (((/* implicit */signed char) (_Bool)1))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) ((unsigned short) -8734628258078202412LL)))));
                            var_26 *= ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)18968)) >= (((/* implicit */int) (signed char)127))));
                        }
                        for (int i_9 = 1; i_9 < 11; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */unsigned char) max((var_27), (((/* implicit */unsigned char) (+((+(((/* implicit */int) var_19)))))))));
                            var_28 = ((/* implicit */unsigned short) arr_7 [i_0] [i_0]);
                            var_29 = (~((-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9))))))));
                            var_30 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) ((var_15) > (((/* implicit */int) (unsigned short)35933))))) + (((/* implicit */int) arr_22 [i_0] [i_1] [i_6] [i_7]))))) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((~(var_0)))));
                            arr_30 [i_0] [i_6] [i_6] [i_6] [(_Bool)1] [i_9] |= ((/* implicit */unsigned int) (_Bool)1);
                        }
                        /* vectorizable */
                        for (unsigned short i_10 = 1; i_10 < 11; i_10 += 2) 
                        {
                            var_31 = (+((~(((/* implicit */int) (unsigned short)1)))));
                            var_32 |= ((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)43382))))));
                            arr_35 [i_0] [i_0] [i_10] = ((/* implicit */unsigned short) ((17738272295691742359ULL) / (((/* implicit */unsigned long long int) -8734628258078202393LL))));
                        }
                        for (short i_11 = 1; i_11 < 10; i_11 += 1) 
                        {
                            arr_39 [i_0] [i_1] [i_1] [i_0] [i_11] = ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned short)32767))));
                            var_33 = ((/* implicit */short) ((unsigned char) 8734628258078202390LL));
                        }
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((unsigned short) (unsigned char)0));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned char i_12 = 0; i_12 < 12; i_12 += 4) 
        {
            arr_45 [i_0] = ((/* implicit */unsigned char) ((var_13) - (((/* implicit */long long int) 2147483647))));
            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) 3597632358U))));
            var_35 = ((/* implicit */_Bool) min((var_35), (((/* implicit */_Bool) ((unsigned short) -713902620)))));
        }
        var_36 = ((/* implicit */unsigned long long int) var_7);
        var_37 = ((/* implicit */unsigned long long int) min((var_37), (((/* implicit */unsigned long long int) (unsigned char)132))));
        arr_46 [(_Bool)1] |= (+(((/* implicit */int) (_Bool)1)));
    }
    for (signed char i_13 = 1; i_13 < 22; i_13 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_14 = 0; i_14 < 24; i_14 += 4) 
        {
            for (unsigned char i_15 = 0; i_15 < 24; i_15 += 1) 
            {
                {
                    arr_56 [i_13] [i_13] [i_13] = ((/* implicit */signed char) (unsigned char)126);
                    arr_57 [i_15] [i_13] [i_13] [i_15] = ((/* implicit */_Bool) (+(var_8)));
                    var_38 = ((/* implicit */int) var_18);
                }
            } 
        } 
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 24; i_16 += 4) 
        {
            for (signed char i_17 = 1; i_17 < 22; i_17 += 2) 
            {
                {
                    arr_65 [i_13] [i_16] [i_13] [i_13] = ((/* implicit */unsigned char) (~(((arr_59 [i_13] [i_13 + 2] [i_13]) | (((/* implicit */int) arr_48 [i_13 + 2] [i_16]))))));
                    var_39 = ((/* implicit */unsigned int) min((((/* implicit */int) (unsigned short)32767)), (0)));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned char i_18 = 1; i_18 < 20; i_18 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_19 = 0; i_19 < 22; i_19 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 1; i_20 < 19; i_20 += 2) 
            {
                for (signed char i_21 = 0; i_21 < 22; i_21 += 2) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)49621)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)30))) : (-815580593057607910LL)));
                        arr_78 [i_20] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)32768))))) ? ((~(10190507131603864771ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)27603)) ? (arr_68 [i_21]) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-32748))))))));
                        var_41 = ((/* implicit */unsigned short) 9223372036854775807LL);
                        arr_79 [i_20] [i_20] [15LL] [i_20] = ((/* implicit */unsigned short) (signed char)0);
                        arr_80 [i_18] [i_20] = ((/* implicit */int) (~(-713259133359299045LL)));
                    }
                } 
            } 
            /* LoopNest 3 */
            for (unsigned short i_22 = 1; i_22 < 19; i_22 += 4) 
            {
                for (int i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    for (unsigned int i_24 = 0; i_24 < 22; i_24 += 2) 
                    {
                        {
                            var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)32767)) ? (((/* implicit */int) arr_87 [i_18] [i_18] [i_19] [i_22 + 2] [i_23] [i_24] [i_24])) : (((/* implicit */int) (unsigned short)32771))));
                            var_43 = ((/* implicit */signed char) (((-(((/* implicit */int) (unsigned char)35)))) * ((+(((/* implicit */int) var_17))))));
                            arr_88 [i_22] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) var_0))) ? (((((/* implicit */int) var_3)) - (((/* implicit */int) (signed char)0)))) : ((~(var_15)))));
                        }
                    } 
                } 
            } 
            var_44 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)0))));
            var_45 = ((/* implicit */long long int) min((var_45), (((/* implicit */long long int) (unsigned short)32770))));
            /* LoopNest 3 */
            for (unsigned long long int i_25 = 2; i_25 < 20; i_25 += 4) 
            {
                for (int i_26 = 0; i_26 < 22; i_26 += 1) 
                {
                    for (short i_27 = 1; i_27 < 19; i_27 += 2) 
                    {
                        {
                            var_46 = ((/* implicit */signed char) (-(((/* implicit */int) (unsigned short)32766))));
                            var_47 = ((/* implicit */unsigned short) ((long long int) var_0));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 1 */
        for (unsigned char i_28 = 3; i_28 < 21; i_28 += 2) 
        {
            var_48 = ((/* implicit */long long int) arr_71 [i_18] [i_28] [i_18]);
            /* LoopSeq 2 */
            for (unsigned char i_29 = 1; i_29 < 18; i_29 += 4) 
            {
                arr_101 [i_18] [i_28] [i_18] [i_18] = ((/* implicit */long long int) (signed char)-60);
                arr_102 [i_28] [(_Bool)1] [(short)0] [i_18] = ((/* implicit */unsigned long long int) 419151544463722473LL);
            }
            for (unsigned char i_30 = 1; i_30 < 21; i_30 += 4) 
            {
                arr_107 [i_28] [i_30] = ((/* implicit */_Bool) ((long long int) 710799885U));
                /* LoopNest 2 */
                for (unsigned char i_31 = 0; i_31 < 22; i_31 += 2) 
                {
                    for (unsigned char i_32 = 2; i_32 < 21; i_32 += 1) 
                    {
                        {
                            arr_112 [i_18] [i_28] [i_28] [i_31] [i_32] = (unsigned short)32764;
                            var_49 -= ((/* implicit */signed char) (unsigned short)32771);
                            var_50 = ((/* implicit */unsigned int) var_1);
                            var_51 = (+(var_0));
                        }
                    } 
                } 
            }
            var_52 = ((/* implicit */signed char) (short)32756);
            var_53 = ((/* implicit */int) max((var_53), (((/* implicit */int) (signed char)75))));
        }
        var_54 += ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned long long int) (short)6737))) || (((/* implicit */_Bool) ((long long int) arr_60 [i_18 + 1])))));
    }
    var_55 |= ((/* implicit */long long int) ((short) (unsigned short)32770));
    var_56 = ((/* implicit */unsigned int) var_14);
}
