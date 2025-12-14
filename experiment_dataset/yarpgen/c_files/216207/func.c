/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216207
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216207 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216207
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
    for (unsigned int i_0 = 4; i_0 < 9; i_0 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 11; i_1 += 1) 
        {
            var_14 ^= ((/* implicit */short) 1957207880766529866ULL);
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 11; i_2 += 2) 
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) 633612302U))));
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 16489536192943021750ULL)) && (((/* implicit */_Bool) 1957207880766529874ULL))));
            }
        }
        arr_6 [i_0] |= ((/* implicit */unsigned short) ((min((var_2), (((/* implicit */unsigned long long int) ((arr_1 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)145))) : (var_6)))))) ^ (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
        arr_7 [i_0] = ((/* implicit */_Bool) (short)32767);
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 2; i_3 < 10; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    {
                        arr_15 [i_0] [i_3] [i_4] = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) (unsigned char)121)) ? (((/* implicit */int) (short)9247)) : (((/* implicit */int) (unsigned char)121))))));
                        arr_16 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0U)) ? (max((((/* implicit */long long int) var_5)), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)111)))))))) ? (((/* implicit */int) ((short) arr_10 [i_3 - 2] [i_3 - 2] [i_5] [i_5]))) : (((/* implicit */int) ((0ULL) <= (18446744073709551615ULL))))));
                        var_17 = ((/* implicit */unsigned int) var_1);
                    }
                } 
            } 
            var_18 += ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */int) (unsigned char)134)), ((-(((/* implicit */int) (unsigned short)511)))))));
            arr_17 [i_0] [7ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((((/* implicit */int) max(((unsigned char)121), (((/* implicit */unsigned char) var_12))))), (((((/* implicit */_Bool) 7335809958435033359ULL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) var_4)))))))));
        }
        var_19 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)-9248))));
    }
    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (unsigned short i_7 = 0; i_7 < 22; i_7 += 4) /* same iter space */
        {
            var_20 |= ((/* implicit */unsigned long long int) (!(min(((_Bool)1), ((_Bool)0)))));
            /* LoopNest 2 */
            for (unsigned long long int i_8 = 2; i_8 < 18; i_8 += 4) 
            {
                for (unsigned char i_9 = 4; i_9 < 20; i_9 += 3) 
                {
                    {
                        arr_30 [i_6] [10U] [i_8] [20ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) 3661354994U))) ? (var_9) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)215)) | (((/* implicit */int) (unsigned char)135)))))));
                        arr_31 [(_Bool)1] [i_9] [i_8 - 1] [i_9] = ((/* implicit */long long int) (_Bool)1);
                        var_21 = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) (unsigned short)0)) ? (992043691936143865LL) : (((/* implicit */long long int) 27U))))));
                        var_22 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) ((_Bool) 18446744073709551615ULL))) : (((/* implicit */int) (unsigned char)0))));
                        /* LoopSeq 2 */
                        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 2) 
                        {
                            var_23 ^= ((/* implicit */short) (-(((arr_28 [i_6] [i_6] [i_6] [i_8 + 4]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9257))) : (var_10)))));
                            arr_34 [4ULL] [i_7] [i_8] [i_7] [i_9 + 2] [i_7] = ((_Bool) 4294967273U);
                            var_24 ^= ((/* implicit */_Bool) max(((short)32767), ((short)13708)));
                            arr_35 [i_6] [i_7] [i_8] [i_6] [i_9] [i_7] |= min((((_Bool) arr_20 [2ULL])), (arr_28 [i_8] [12U] [i_8] [i_8]));
                        }
                        /* vectorizable */
                        for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                        {
                            var_25 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3329215265U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)231))) : (var_9)))) ? (((/* implicit */long long int) ((/* implicit */int) (short)13692))) : (var_8)));
                            var_26 &= ((/* implicit */unsigned long long int) arr_29 [i_8 + 1] [i_8 + 4] [i_8 + 1] [i_8 + 1] [i_8 - 2]);
                            var_27 *= ((/* implicit */_Bool) (-(var_13)));
                            arr_39 [i_6] [13U] [i_6] [i_9] [0ULL] = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) arr_27 [i_9 + 2] [i_9 - 1] [i_8 + 3] [i_8 + 3]))));
                            var_28 = ((/* implicit */long long int) (~(13935183299971239804ULL)));
                        }
                    }
                } 
            } 
            var_29 *= ((/* implicit */unsigned short) arr_21 [i_7]);
        }
        for (unsigned short i_12 = 0; i_12 < 22; i_12 += 4) /* same iter space */
        {
            var_30 = ((/* implicit */_Bool) -7217990213381156974LL);
            /* LoopSeq 2 */
            for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) /* same iter space */
            {
                var_31 = ((/* implicit */_Bool) (unsigned char)135);
                /* LoopNest 2 */
                for (long long int i_14 = 2; i_14 < 19; i_14 += 3) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            var_32 += ((unsigned long long int) min(((+(var_8))), (((/* implicit */long long int) arr_43 [i_13 + 1] [i_12]))));
                            var_33 += ((/* implicit */unsigned char) max((((((/* implicit */int) (!(((/* implicit */_Bool) var_13))))) >> ((((~(((/* implicit */int) (short)-13709)))) - (13685))))), (((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) 7640569121955183754LL))))))));
                        }
                    } 
                } 
                arr_54 [i_13] [i_13 + 1] [i_12] [i_13] = ((/* implicit */unsigned int) var_11);
                /* LoopNest 2 */
                for (long long int i_16 = 1; i_16 < 19; i_16 += 2) 
                {
                    for (unsigned int i_17 = 0; i_17 < 22; i_17 += 2) 
                    {
                        {
                            arr_60 [i_6] [i_6] [i_13] [i_6] [i_6] = ((/* implicit */_Bool) ((unsigned short) ((short) (!(((/* implicit */_Bool) 34359738352LL))))));
                            var_34 = ((/* implicit */_Bool) min((var_34), (((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)-28222))) > ((+(var_7)))))))))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) 0U))));
                        }
                    } 
                } 
            }
            for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) /* same iter space */
            {
                arr_63 [i_18] [i_12] [i_6] = ((/* implicit */long long int) (short)-13708);
                var_36 = ((/* implicit */unsigned int) (~((~(((/* implicit */int) (_Bool)1))))));
            }
            var_37 = ((/* implicit */unsigned long long int) var_13);
        }
        var_38 = (-(arr_49 [i_6] [(_Bool)1] [i_6] [i_6]));
        var_39 &= ((/* implicit */long long int) (_Bool)1);
    }
    /* vectorizable */
    for (unsigned long long int i_19 = 0; i_19 < 22; i_19 += 4) /* same iter space */
    {
        /* LoopSeq 2 */
        for (long long int i_20 = 0; i_20 < 22; i_20 += 4) 
        {
            var_40 = ((/* implicit */unsigned short) 67108863U);
            var_41 = ((/* implicit */_Bool) var_6);
            var_42 -= var_10;
        }
        for (unsigned long long int i_21 = 0; i_21 < 22; i_21 += 2) 
        {
            arr_74 [i_19] = ((/* implicit */_Bool) ((var_12) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65218))));
            var_43 &= ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) (short)18669)))))));
            var_44 = ((/* implicit */short) ((((/* implicit */_Bool) -7631581774379002353LL)) ? (((/* implicit */int) (short)-18669)) : (((/* implicit */int) (_Bool)1))));
            arr_75 [i_19] |= ((/* implicit */unsigned long long int) ((long long int) (-(((/* implicit */int) var_4)))));
            arr_76 [i_19] [i_19] [14ULL] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)14297))));
        }
        var_45 = ((((/* implicit */_Bool) (short)16384)) ? ((-(140187732541440ULL))) : (((/* implicit */unsigned long long int) ((var_11) ? (((/* implicit */int) (short)6459)) : (((/* implicit */int) var_12))))));
        arr_77 [i_19] [i_19] = ((/* implicit */_Bool) (-(((var_1) ? (var_2) : (18446603885977010175ULL)))));
        arr_78 [i_19] = ((/* implicit */unsigned long long int) (unsigned char)189);
    }
    /* vectorizable */
    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
    {
        var_46 = ((/* implicit */short) (~(((((/* implicit */_Bool) 140187732541454ULL)) ? (13935183299971239804ULL) : (((/* implicit */unsigned long long int) 0U))))));
        var_47 -= (!(((/* implicit */_Bool) (short)7496)));
        var_48 *= ((/* implicit */_Bool) var_6);
        var_49 = ((/* implicit */short) ((((var_7) > ((-9223372036854775807LL - 1LL)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (var_2) : (var_9))))));
        /* LoopSeq 1 */
        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
        {
            var_50 = ((/* implicit */unsigned char) (!(arr_84 [9ULL] [i_23] [15ULL])));
            arr_85 [i_22] [i_23] [i_22] = ((/* implicit */unsigned long long int) ((unsigned char) (_Bool)1));
            var_51 = ((/* implicit */_Bool) var_7);
            var_52 += (-9223372036854775807LL - 1LL);
        }
    }
    var_53 = ((/* implicit */_Bool) (short)(-32767 - 1));
}
