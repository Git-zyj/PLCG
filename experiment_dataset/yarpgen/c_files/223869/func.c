/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223869
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
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_15 += ((/* implicit */unsigned short) 3U);
        /* LoopNest 3 */
        for (short i_1 = 2; i_1 < 7; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 11; i_2 += 4) 
            {
                for (signed char i_3 = 4; i_3 < 9; i_3 += 4) 
                {
                    {
                        var_16 |= ((/* implicit */long long int) -2083356938);
                        var_17 += ((/* implicit */short) ((((/* implicit */_Bool) ((90137466071078285LL) + (((/* implicit */long long int) ((((/* implicit */int) var_4)) - (((/* implicit */int) arr_4 [i_0] [i_1 - 2] [i_2])))))))) ? (((/* implicit */int) min((((/* implicit */short) (_Bool)1)), (min(((short)-12343), (((/* implicit */short) arr_2 [i_0]))))))) : (((/* implicit */int) (short)18257))));
                        arr_9 [i_0] [i_1] = ((/* implicit */short) (-(((min((-4496061889639069748LL), (((/* implicit */long long int) arr_7 [i_3] [i_1] [(signed char)9] [i_1] [i_1] [i_0])))) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) 7U)) ? (arr_8 [i_0] [i_0] [i_0] [i_1] [i_2] [(_Bool)1]) : (((/* implicit */int) (unsigned short)3900)))))))));
                        var_18 = ((/* implicit */unsigned int) (unsigned short)61666);
                    }
                } 
            } 
        } 
        var_19 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned char)138))));
        arr_10 [i_0] [5LL] = ((/* implicit */int) ((short) arr_0 [i_0]));
    }
    for (unsigned short i_4 = 0; i_4 < 18; i_4 += 1) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_12 [i_4]);
        arr_14 [i_4] = min((min((((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)126))))), (((unsigned int) (unsigned short)3893)))), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_4]))))));
    }
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((short) var_12)))) / (var_1)));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 8; i_5 += 2) 
    {
        arr_17 [(unsigned short)1] = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1437465281653303489LL))));
        /* LoopNest 2 */
        for (unsigned short i_6 = 0; i_6 < 10; i_6 += 4) 
        {
            for (int i_7 = 1; i_7 < 8; i_7 += 1) 
            {
                {
                    var_22 += ((/* implicit */signed char) 4689141581669978147LL);
                    /* LoopSeq 2 */
                    for (signed char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)0))));
                        var_23 = ((/* implicit */long long int) max((var_23), (((/* implicit */long long int) (-(((/* implicit */int) (unsigned char)143)))))));
                    }
                    for (signed char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        arr_29 [i_5] [i_5 + 2] [i_5] [i_5] = ((/* implicit */int) var_10);
                        var_24 = ((/* implicit */unsigned long long int) min((var_24), (((unsigned long long int) (~(((/* implicit */int) (short)-32765)))))));
                        /* LoopSeq 3 */
                        for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((/* implicit */unsigned char) ((unsigned long long int) var_11)))));
                            var_26 = ((/* implicit */_Bool) ((long long int) arr_4 [i_5 + 1] [i_5] [i_5 - 1]));
                            var_27 *= ((/* implicit */short) ((2764689821402462622LL) ^ (((/* implicit */long long int) (+(((/* implicit */int) (unsigned char)252)))))));
                            var_28 = ((/* implicit */short) (unsigned char)108);
                        }
                        for (unsigned long long int i_11 = 1; i_11 < 6; i_11 += 1) /* same iter space */
                        {
                            var_29 = ((/* implicit */unsigned char) min((var_29), (((/* implicit */unsigned char) (+((+(67108863ULL))))))));
                            arr_35 [i_11 + 3] [i_11] [i_11] [i_5] = ((/* implicit */long long int) (short)-32749);
                        }
                        for (unsigned long long int i_12 = 1; i_12 < 6; i_12 += 1) /* same iter space */
                        {
                            var_30 = ((/* implicit */signed char) arr_34 [i_6] [i_6] [i_6] [5LL] [i_12] [i_9] [i_6]);
                            var_31 = ((/* implicit */unsigned int) var_3);
                            arr_39 [i_5] [i_6] [(unsigned char)8] [i_7] [i_7] [(unsigned short)2] [i_12 + 3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((short) 1437465281653303490LL))) ? (2626651593U) : (((/* implicit */unsigned int) var_5))));
                        }
                    }
                    /* LoopNest 2 */
                    for (unsigned short i_13 = 3; i_13 < 9; i_13 += 3) 
                    {
                        for (long long int i_14 = 0; i_14 < 10; i_14 += 1) 
                        {
                            {
                                var_32 = arr_7 [i_5 + 2] [i_6] [i_6] [i_13] [i_5 + 1] [i_7 + 1];
                                arr_47 [i_13] = ((/* implicit */short) ((signed char) (unsigned char)246));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_33 &= ((/* implicit */signed char) arr_36 [i_5 + 1] [i_5 + 1] [i_5] [i_5]);
        /* LoopNest 2 */
        for (unsigned int i_15 = 0; i_15 < 10; i_15 += 4) 
        {
            for (long long int i_16 = 0; i_16 < 10; i_16 += 2) 
            {
                {
                    var_34 = ((/* implicit */short) (-(((/* implicit */int) var_10))));
                    /* LoopNest 2 */
                    for (unsigned short i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        for (unsigned long long int i_18 = 0; i_18 < 10; i_18 += 3) 
                        {
                            {
                                var_35 = ((/* implicit */short) min((var_35), (((/* implicit */short) (+(1668315680U))))));
                                var_36 = ((/* implicit */int) (signed char)-77);
                                arr_56 [i_5] [i_17] [i_5] [i_17] [i_17] [i_5 + 2] = ((/* implicit */unsigned int) arr_49 [4ULL] [i_15] [i_15]);
                                arr_57 [(short)9] [2LL] [i_17] [i_17] [(unsigned short)1] [(unsigned short)1] = ((/* implicit */unsigned int) arr_3 [i_5] [i_15] [i_16]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (long long int i_19 = 0; i_19 < 10; i_19 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_20 = 1; i_20 < 9; i_20 += 1) 
        {
            for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 4) 
            {
                for (signed char i_22 = 1; i_22 < 7; i_22 += 4) 
                {
                    {
                        arr_68 [i_22] [i_22] [i_22] [i_19] = ((/* implicit */unsigned char) ((unsigned short) arr_42 [(_Bool)1] [i_20 + 1] [(_Bool)1] [i_22 + 2] [i_22] [i_22]));
                        var_37 ^= ((/* implicit */signed char) var_3);
                        var_38 = ((long long int) ((long long int) ((((/* implicit */int) (unsigned char)3)) << (((-136754351265309672LL) + (136754351265309698LL))))));
                        /* LoopSeq 1 */
                        for (signed char i_23 = 1; i_23 < 9; i_23 += 2) 
                        {
                            arr_71 [i_22] [i_23] = ((/* implicit */signed char) (unsigned char)0);
                            var_39 = ((/* implicit */short) min((var_39), (((/* implicit */short) (~(((/* implicit */int) ((unsigned char) 261888))))))));
                        }
                        var_40 = ((/* implicit */short) ((int) ((unsigned short) min((var_7), (((/* implicit */long long int) (signed char)120))))));
                    }
                } 
            } 
        } 
        var_41 = ((/* implicit */long long int) min((((/* implicit */int) (!(((((/* implicit */int) arr_43 [i_19] [i_19])) < (((/* implicit */int) (unsigned char)174))))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (arr_60 [i_19] [i_19]) : (17570039282835382591ULL)))) ? (((/* implicit */int) (short)27583)) : (((((/* implicit */_Bool) 768513044898804989LL)) ? (((/* implicit */int) (unsigned short)4551)) : (((/* implicit */int) (signed char)-120))))))));
        var_42 = ((/* implicit */short) 18241727212122329733ULL);
        var_43 *= ((/* implicit */long long int) (+(min((((/* implicit */unsigned long long int) (_Bool)1)), (64500556701392366ULL)))));
    }
    /* LoopNest 3 */
    for (short i_24 = 1; i_24 < 24; i_24 += 4) 
    {
        for (long long int i_25 = 0; i_25 < 25; i_25 += 1) 
        {
            for (signed char i_26 = 3; i_26 < 23; i_26 += 4) 
            {
                {
                    var_44 = ((/* implicit */int) ((((/* implicit */_Bool) ((-136754351265309655LL) | (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) < (6224537092052403979ULL)))))))) ? (((unsigned long long int) ((long long int) var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0)))));
                    arr_78 [(unsigned char)20] [(unsigned char)20] |= ((/* implicit */signed char) ((long long int) arr_74 [20]));
                    var_45 += ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)32757))));
                    var_46 = ((/* implicit */long long int) ((short) arr_73 [i_25] [i_25]));
                    var_47 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((var_3), (((/* implicit */unsigned short) arr_76 [i_25])))), (((/* implicit */unsigned short) ((_Bool) 661074348686853059LL)))))) ? (((/* implicit */int) (unsigned short)0)) : (var_5)));
                }
            } 
        } 
    } 
    var_48 = ((/* implicit */long long int) (short)-32766);
}
