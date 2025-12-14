/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29758
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29758 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29758
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
    var_10 = ((/* implicit */unsigned char) (-((~(((/* implicit */int) var_1))))));
    /* LoopSeq 3 */
    for (signed char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_1))) ? (-4008719050938328301LL) : (((/* implicit */long long int) max((((/* implicit */int) ((_Bool) (unsigned char)255))), (((var_0) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (unsigned char)245)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned char) ((((860338045) > (((/* implicit */int) (signed char)3)))) ? (min((((/* implicit */long long int) ((((/* implicit */int) var_1)) <= (((/* implicit */int) (_Bool)1))))), (((((/* implicit */_Bool) -8088110380101825056LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)26))) : (var_8))))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_3 [i_0 + 3]))))));
        arr_5 [i_0] = ((/* implicit */unsigned char) min((((arr_3 [i_0 + 1]) << (((arr_3 [i_0 - 2]) - (9228597947899383268ULL))))), (((((/* implicit */_Bool) arr_3 [i_0 - 1])) ? (arr_3 [i_0 + 1]) : (arr_3 [i_0 - 3])))));
        var_12 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_2))))) ? (14) : (((/* implicit */int) arr_1 [i_0]))));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_9 [i_1] = ((/* implicit */int) arr_3 [i_1]);
        var_13 = ((/* implicit */long long int) var_5);
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_4 = 2; i_4 < 22; i_4 += 3) 
            {
                arr_16 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */int) min((arr_2 [12] [i_2]), (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
                var_14 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((int) var_3))) ? (((((/* implicit */_Bool) arr_10 [6LL])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) var_9)) ? (-954082788) : (((/* implicit */int) var_1))))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)88)))))));
                arr_17 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))));
            }
            for (long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                var_15 = ((4008719050938328324LL) <= (((/* implicit */long long int) ((((/* implicit */_Bool) -218308321)) ? (((/* implicit */int) (_Bool)1)) : (-793492244)))));
                arr_21 [i_2] [i_3] [i_2] [i_5] = ((/* implicit */long long int) arr_11 [i_2] [i_2]);
            }
            arr_22 [i_2] [i_3] [i_2] = ((/* implicit */_Bool) var_8);
        }
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 23; i_6 += 4) 
        {
            /* LoopSeq 2 */
            for (int i_7 = 0; i_7 < 23; i_7 += 1) 
            {
                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((_Bool) arr_11 [i_2] [i_2])))));
                arr_29 [i_2] [i_2] [i_7] [i_7] = ((/* implicit */_Bool) ((arr_19 [i_2] [i_2] [i_7] [(unsigned char)19]) + (((/* implicit */int) arr_13 [i_2] [i_2]))));
                arr_30 [6LL] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((long long int) arr_18 [i_2] [i_7] [i_7])) >> (((((((/* implicit */_Bool) -14)) ? (-1LL) : (((/* implicit */long long int) 2)))) + (55LL)))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 19; i_8 += 1) 
                {
                    for (signed char i_9 = 1; i_9 < 22; i_9 += 2) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_2] [i_7] [i_2])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_35 [i_2] [i_2] [18ULL] [i_2] [i_9] [i_9]))))) ? (((((/* implicit */_Bool) arr_0 [i_6])) ? (((/* implicit */int) (unsigned short)65513)) : (((/* implicit */int) arr_35 [i_9] [i_8] [i_7] [i_6] [16] [i_2])))) : (arr_20 [i_6] [i_7] [i_8] [i_9 + 1])));
                            arr_37 [i_2] [i_8] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((unsigned char) var_0));
                        }
                    } 
                } 
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_41 [i_2] [i_2] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (-4008719050938328301LL))))));
                arr_42 [i_2] [i_2] [i_10] [i_2] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_1)))) < (((/* implicit */int) arr_0 [i_2]))));
            }
            var_18 = ((/* implicit */unsigned char) ((unsigned short) var_1));
        }
        arr_43 [i_2] [i_2] = ((/* implicit */unsigned short) var_2);
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_11 = 0; i_11 < 23; i_11 += 3) /* same iter space */
        {
            var_19 -= ((/* implicit */_Bool) ((unsigned short) arr_36 [12LL] [i_11] [i_2] [12LL] [12LL]));
            var_20 = ((/* implicit */int) (!((_Bool)1)));
            /* LoopSeq 1 */
            for (unsigned long long int i_12 = 1; i_12 < 21; i_12 += 1) 
            {
                arr_48 [i_12] [i_2] [i_2] [i_2] = ((/* implicit */int) ((long long int) arr_31 [i_2] [i_12 - 1] [(_Bool)1] [i_12 - 1] [i_2]));
                /* LoopSeq 1 */
                for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                {
                    var_21 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    arr_51 [i_2] [i_2] [i_13] [i_13] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2] [i_2])) ? (((/* implicit */int) (unsigned char)92)) : (((/* implicit */int) (unsigned char)107))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
                    {
                        var_22 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -14))));
                        var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0)) ? (249647231) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((int) var_1))) : (((((/* implicit */_Bool) 860338045)) ? (4614794664625623808ULL) : (((/* implicit */unsigned long long int) -995059340))))));
                        arr_55 [i_2] [i_13] [i_12] [i_11] [i_2] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_49 [i_2] [i_2] [i_11] [i_13] [i_13])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_26 [(_Bool)1] [i_11] [i_12 - 1]))))));
                    }
                }
            }
        }
        for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 3) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned char i_16 = 0; i_16 < 23; i_16 += 2) 
            {
                for (int i_17 = 1; i_17 < 22; i_17 += 2) 
                {
                    {
                        var_24 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((_Bool) var_5))), (((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)38868))) ? (((((/* implicit */_Bool) 4614794664625623799ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)9))) : (13831949409083927808ULL))) : (((/* implicit */unsigned long long int) ((arr_49 [i_15] [i_2] [i_2] [i_17] [i_17]) / (((/* implicit */int) var_3)))))))));
                        var_25 = ((/* implicit */long long int) (-(((/* implicit */int) ((unsigned short) arr_57 [i_2] [i_2])))));
                    }
                } 
            } 
            arr_66 [i_2] = (-(((((/* implicit */_Bool) min((2147483647), (((/* implicit */int) (unsigned char)133))))) ? (min((637860250), (-249647217))) : (max((((/* implicit */int) var_5)), (arr_39 [i_2] [i_2] [i_15]))))));
            /* LoopNest 3 */
            for (signed char i_18 = 0; i_18 < 23; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    for (int i_20 = 1; i_20 < 19; i_20 += 3) 
                    {
                        {
                            arr_77 [i_2] [i_15] [i_15] [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) ((((arr_34 [i_20] [i_19] [i_15] [i_2]) ? (((/* implicit */int) (unsigned short)65516)) : (((/* implicit */int) var_7)))) <= (((arr_60 [i_2] [i_15] [i_15]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1)))))))));
                            var_26 = ((/* implicit */_Bool) arr_74 [i_2] [i_15] [i_20 + 3] [i_19] [(unsigned char)5] [i_20]);
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned char i_21 = 0; i_21 < 23; i_21 += 2) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */long long int) arr_79 [i_15])) > ((~(var_8)))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_22 = 4; i_22 < 22; i_22 += 1) 
                {
                    var_28 = ((/* implicit */int) ((322616625) <= (arr_79 [i_21])));
                    /* LoopSeq 1 */
                    for (int i_23 = 0; i_23 < 23; i_23 += 1) 
                    {
                        arr_84 [i_2] [i_15] [i_2] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)13368)) - (((/* implicit */int) var_4))))) ? (11525195898524990228ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_53 [i_22] [i_22 - 3] [i_21] [i_22 + 1] [i_22] [i_22 + 1] [i_21])))));
                        arr_85 [i_2] [i_22 - 4] [i_2] [i_15] [i_2] = ((/* implicit */unsigned char) ((arr_65 [i_2] [i_2] [i_22 - 2] [i_22] [i_23]) ? (((/* implicit */int) arr_65 [i_2] [i_2] [i_22 - 4] [i_15] [i_23])) : (((/* implicit */int) arr_65 [i_2] [i_15] [i_22 + 1] [i_22] [i_23]))));
                    }
                    var_29 *= ((/* implicit */signed char) arr_68 [i_15]);
                }
                for (unsigned char i_24 = 3; i_24 < 21; i_24 += 4) 
                {
                    arr_88 [i_2] [20] [i_2] = ((/* implicit */int) arr_24 [i_21] [i_2]);
                    arr_89 [i_2] [i_24] [i_21] [i_15] [i_2] = ((/* implicit */_Bool) ((long long int) ((1652050261) > (((/* implicit */int) arr_34 [i_24 - 1] [i_24] [i_24 - 1] [i_24 - 2])))));
                }
            }
            var_30 *= ((/* implicit */unsigned char) ((arr_38 [i_2] [15] [15]) ? (((((/* implicit */_Bool) 1651911754)) ? (((arr_45 [i_15] [(unsigned short)10]) ? (((/* implicit */int) (signed char)6)) : (arr_70 [i_2] [i_2] [(unsigned char)6] [i_2]))) : ((((_Bool)1) ? (((/* implicit */int) var_2)) : (arr_20 [i_2] [i_15] [i_15] [i_2]))))) : (((/* implicit */int) (signed char)7))));
        }
        var_31 = arr_57 [i_2] [i_2];
    }
    var_32 = ((/* implicit */unsigned short) -2147483647);
}
