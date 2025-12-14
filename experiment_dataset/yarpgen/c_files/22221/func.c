/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22221
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
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_16 = ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [(short)24] [(short)24])));
        arr_2 [i_0] = ((/* implicit */unsigned short) ((unsigned int) 18446744073709551615ULL));
        var_17 *= ((/* implicit */short) (!(((/* implicit */_Bool) arr_1 [(short)22] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 17; i_1 += 4) 
    {
        var_18 = ((/* implicit */long long int) var_4);
        /* LoopSeq 4 */
        /* vectorizable */
        for (short i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_3 = 2; i_3 < 13; i_3 += 2) 
            {
                for (long long int i_4 = 3; i_4 < 15; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            arr_16 [i_2] [i_2] [9U] [i_2] [i_4] [i_2] [i_2] = ((/* implicit */unsigned char) ((int) ((((/* implicit */_Bool) arr_11 [i_1])) ? (var_1) : (var_8))));
                            arr_17 [(unsigned char)3] [i_4] [i_3 + 4] [(unsigned char)3] [(unsigned char)3] = (~(((/* implicit */int) var_0)));
                            arr_18 [i_1] [i_1] [i_4] [i_4] [i_3] [i_4] [i_4] = ((((/* implicit */_Bool) arr_14 [i_1] [i_1] [i_3 + 3] [i_5] [i_2 - 1])) || (((/* implicit */_Bool) arr_14 [1] [i_2] [i_2] [i_4 - 3] [i_5])));
                        }
                    } 
                } 
            } 
            arr_19 [i_1] [i_1] [i_1] = ((/* implicit */unsigned short) ((signed char) arr_0 [i_2 + 1] [i_2 + 3]));
            arr_20 [i_1] [(_Bool)1] [i_1] = ((/* implicit */unsigned int) (-(var_13)));
            arr_21 [i_1] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) ((int) (short)11737))) && (((_Bool) var_10))));
        }
        for (unsigned int i_6 = 1; i_6 < 14; i_6 += 3) 
        {
            var_19 = ((/* implicit */int) ((((((/* implicit */_Bool) (+(var_13)))) || (((/* implicit */_Bool) ((int) (unsigned short)6765))))) ? (max((var_8), (((/* implicit */long long int) var_15)))) : (((/* implicit */long long int) min((((/* implicit */int) ((unsigned short) var_3))), (((((/* implicit */int) var_6)) + (((/* implicit */int) var_4)))))))));
            arr_24 [6U] [i_1] [i_6] = ((((/* implicit */_Bool) 1590930399942076188LL)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (short)-11738)));
        }
        for (unsigned short i_7 = 1; i_7 < 16; i_7 += 4) 
        {
            /* LoopNest 2 */
            for (long long int i_8 = 1; i_8 < 14; i_8 += 1) 
            {
                for (unsigned short i_9 = 0; i_9 < 17; i_9 += 3) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) arr_31 [i_7 + 1] [i_7 + 1] [i_7 - 1] [i_7 - 1] [11LL] [i_7]);
                        var_21 = ((/* implicit */unsigned char) (~(min((min((((/* implicit */long long int) (short)32736)), (140737488355327LL))), (((-1431385139389967898LL) / (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
                    }
                } 
            } 
            var_22 -= (~(((((/* implicit */long long int) var_5)) & (((((-140737488355319LL) + (9223372036854775807LL))) >> (((((/* implicit */int) var_0)) - (22874))))))));
        }
        for (long long int i_10 = 0; i_10 < 17; i_10 += 4) 
        {
            var_23 = ((/* implicit */short) (((!(((/* implicit */_Bool) var_13)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (arr_1 [i_1] [9U])))) : (((int) var_12))));
            var_24 ^= ((/* implicit */short) ((_Bool) max((((/* implicit */int) arr_30 [(unsigned char)2] [i_1] [i_10] [i_1])), (-209677421))));
            /* LoopSeq 3 */
            for (long long int i_11 = 0; i_11 < 17; i_11 += 1) 
            {
                var_25 = ((/* implicit */short) var_5);
                arr_40 [i_1] = ((/* implicit */unsigned int) ((_Bool) ((unsigned char) arr_25 [i_10] [i_10] [i_10])));
            }
            /* vectorizable */
            for (long long int i_12 = 0; i_12 < 17; i_12 += 2) 
            {
                var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) ((unsigned char) arr_33 [11U] [11U] [11U])))));
                arr_43 [i_1] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_9))));
                /* LoopSeq 2 */
                for (signed char i_13 = 4; i_13 < 15; i_13 += 3) 
                {
                    arr_48 [15U] [i_10] [i_10] [i_13 + 1] &= ((/* implicit */long long int) (~(((/* implicit */int) var_6))));
                    arr_49 [i_13] [i_12] [i_10] [i_1] = arr_35 [i_13 - 3] [i_13 - 3] [i_13 - 4];
                    arr_50 [i_1] [i_12] [i_13] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) - (((/* implicit */int) arr_30 [i_12] [i_12] [12LL] [i_1]))));
                }
                for (long long int i_14 = 1; i_14 < 13; i_14 += 1) 
                {
                    var_27 |= ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_30 [i_1] [i_14 + 2] [i_14] [i_10]))) + (3997265095849958851ULL)));
                    var_28 = ((/* implicit */unsigned int) (unsigned short)18847);
                    var_29 = ((/* implicit */unsigned long long int) var_9);
                    var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned short)47815)) && (((/* implicit */_Bool) ((unsigned short) var_7)))));
                }
                arr_55 [i_1] [i_10] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 15460629444055074640ULL)) || (((/* implicit */_Bool) var_12)))) && (((/* implicit */_Bool) var_15))));
            }
            /* vectorizable */
            for (signed char i_15 = 0; i_15 < 17; i_15 += 2) 
            {
                var_31 = ((/* implicit */signed char) ((arr_39 [i_1] [i_1] [(short)8]) - (((/* implicit */long long int) ((/* implicit */int) var_0)))));
                var_32 = ((/* implicit */int) ((long long int) 1918872036));
            }
            var_33 = var_15;
            var_34 = ((((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) max((((/* implicit */int) (short)12575)), (var_13)))))) ? (((/* implicit */int) ((((/* implicit */int) (unsigned short)24814)) > (((/* implicit */int) (unsigned char)210))))) : (min(((~(((/* implicit */int) var_0)))), ((~(var_13))))));
        }
        arr_58 [(unsigned short)6] = ((/* implicit */unsigned char) (+(((/* implicit */int) min((((/* implicit */short) (unsigned char)159)), ((short)8192))))));
    }
    for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (short i_17 = 0; i_17 < 23; i_17 += 1) 
        {
            arr_64 [i_16] [i_16] = ((/* implicit */int) arr_59 [i_16]);
            var_35 = ((/* implicit */unsigned long long int) ((unsigned int) ((2147483630) != (((/* implicit */int) ((short) 9223372036854775807LL))))));
        }
        /* LoopNest 3 */
        for (unsigned long long int i_18 = 3; i_18 < 22; i_18 += 3) 
        {
            for (signed char i_19 = 0; i_19 < 23; i_19 += 3) 
            {
                for (unsigned short i_20 = 0; i_20 < 23; i_20 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (short i_21 = 0; i_21 < 23; i_21 += 2) 
                        {
                            var_36 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_70 [i_16] [i_21] [i_18 + 1] [4] [i_16])))) ^ (((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_13)) ? (var_8) : (arr_63 [i_21] [i_19] [(unsigned char)6]))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_12)))))));
                            var_37 = ((/* implicit */long long int) ((((/* implicit */int) var_11)) != (var_13)));
                            var_38 = ((((/* implicit */long long int) ((/* implicit */int) (short)11737))) | ((~(var_1))));
                            var_39 = ((((((/* implicit */int) var_7)) == (((/* implicit */int) arr_74 [i_18] [14ULL] [i_21] [i_18 - 3])))) ? (((/* implicit */int) ((((/* implicit */long long int) min((var_10), (((/* implicit */unsigned int) var_13))))) > (arr_60 [i_18 - 3] [i_18 - 3])))) : (((/* implicit */int) ((signed char) var_11))));
                        }
                        for (int i_22 = 0; i_22 < 23; i_22 += 3) 
                        {
                            var_40 = ((/* implicit */signed char) min((var_40), (((/* implicit */signed char) max((((((/* implicit */int) min(((unsigned char)45), ((unsigned char)139)))) << (((((/* implicit */int) arr_72 [i_20] [i_20] [i_18 - 3] [i_18])) - (14430))))), (((int) (~(((/* implicit */int) var_9))))))))));
                            arr_77 [i_16] [(unsigned char)9] [i_19] [(unsigned char)9] [i_19] [i_19] = ((/* implicit */short) arr_60 [(unsigned char)21] [7]);
                        }
                        arr_78 [i_16] [i_20] [i_16] [i_16] |= ((/* implicit */_Bool) ((long long int) ((unsigned char) arr_59 [i_18 - 2])));
                        arr_79 [14LL] [14LL] [14LL] [i_19] [i_19] [10] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)24)) >> (((/* implicit */int) (_Bool)1))))) ? (min((((/* implicit */unsigned long long int) arr_66 [i_18 - 2] [i_18 + 1])), (((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */unsigned long long int) arr_65 [i_16] [i_16])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), ((+(((/* implicit */int) (unsigned char)111)))))))));
                    }
                } 
            } 
        } 
        arr_80 [i_16] [i_16] = ((/* implicit */long long int) ((int) ((((/* implicit */_Bool) min((((/* implicit */int) (unsigned char)158)), (var_5)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (((((/* implicit */long long int) var_10)) - (var_8))))));
        arr_81 [i_16] [17U] = max((((((/* implicit */int) (short)-11737)) & (((/* implicit */int) (signed char)-37)))), (((/* implicit */int) min((((/* implicit */short) var_11)), (arr_73 [2] [i_16] [i_16] [i_16])))));
        arr_82 [i_16] [(unsigned short)13] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_66 [i_16] [i_16])) ? (min((-140737488355339LL), (((/* implicit */long long int) (unsigned char)19)))) : (arr_62 [i_16] [i_16] [i_16]))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)241))) >= (3920972076618208903LL))))));
    }
    /* vectorizable */
    for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
    {
        var_41 = ((/* implicit */short) arr_71 [i_23] [i_23] [i_23] [(unsigned short)16]);
        var_42 = (-(((/* implicit */int) arr_68 [4ULL] [i_23] [i_23])));
    }
    var_43 = ((/* implicit */unsigned int) -15);
    var_44 = ((/* implicit */long long int) 1805620146U);
    var_45 = ((/* implicit */unsigned char) min(((((!(((/* implicit */_Bool) (unsigned short)19617)))) ? (min((((/* implicit */long long int) var_11)), (9223372036854775807LL))) : (((/* implicit */long long int) ((unsigned int) -3920972076618208910LL))))), (((/* implicit */long long int) (_Bool)1))));
}
