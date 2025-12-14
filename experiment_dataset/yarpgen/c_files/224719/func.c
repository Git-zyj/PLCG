/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224719
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
    var_15 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-23))) : (var_8))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        var_16 -= ((/* implicit */signed char) (+(((/* implicit */int) min((var_9), (((/* implicit */short) var_4)))))));
        var_17 = ((/* implicit */int) arr_0 [i_0]);
    }
    for (unsigned short i_1 = 0; i_1 < 18; i_1 += 1) 
    {
        var_18 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_12))))) ? (((/* implicit */int) (unsigned char)129)) : (((/* implicit */int) arr_4 [i_1] [i_1]))));
        arr_5 [(unsigned char)3] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) (signed char)-29))))) > (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_1])))) : ((~(var_1)))))));
        /* LoopNest 3 */
        for (unsigned int i_2 = 1; i_2 < 16; i_2 += 2) 
        {
            for (unsigned int i_3 = 2; i_3 < 16; i_3 += 4) 
            {
                for (long long int i_4 = 4; i_4 < 14; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1] [i_2])))))));
                        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) ((((/* implicit */int) var_2)) > (((/* implicit */int) (short)30523)))))));
                        var_21 = ((/* implicit */unsigned long long int) (signed char)56);
                    }
                } 
            } 
        } 
        /* LoopNest 3 */
        for (signed char i_5 = 1; i_5 < 17; i_5 += 3) 
        {
            for (signed char i_6 = 0; i_6 < 18; i_6 += 3) 
            {
                for (short i_7 = 1; i_7 < 17; i_7 += 3) 
                {
                    {
                        var_22 = ((/* implicit */long long int) ((_Bool) var_6));
                        arr_24 [i_6] [i_7 + 1] &= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) arr_13 [i_5] [i_5] [i_1] [i_7] [i_1]))) && (((/* implicit */_Bool) min((707756015), (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))))))), ((+(((/* implicit */int) ((signed char) 6166919529130905934LL)))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_8 = 0; i_8 < 14; i_8 += 4) 
    {
        var_23 ^= ((/* implicit */unsigned char) min((((/* implicit */int) ((((/* implicit */int) arr_4 [i_8] [i_8])) >= (((/* implicit */int) arr_4 [i_8] [i_8]))))), ((+(((/* implicit */int) arr_4 [i_8] [i_8]))))));
        var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) ((long long int) ((unsigned int) (signed char)28))))));
        /* LoopNest 3 */
        for (signed char i_9 = 0; i_9 < 14; i_9 += 2) 
        {
            for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 2) 
            {
                for (short i_11 = 0; i_11 < 14; i_11 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_12 = 0; i_12 < 14; i_12 += 1) 
                        {
                            arr_37 [i_8] [i_12] [i_11] [i_12] = ((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */long long int) arr_35 [i_11] [i_11] [i_11] [i_11] [i_11])), (min((arr_32 [i_10] [i_12]), (((/* implicit */long long int) arr_9 [1LL] [i_11])))))));
                            var_25 ^= ((/* implicit */long long int) ((((/* implicit */int) ((short) (-9223372036854775807LL - 1LL)))) <= (((/* implicit */int) arr_8 [i_11] [i_10] [i_8]))));
                            var_26 = (~(((long long int) var_6)));
                            arr_38 [i_8] [i_12] [i_11] [i_12] = ((/* implicit */signed char) ((((4294967284U) + (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))) % (min((var_1), (((/* implicit */unsigned int) arr_0 [i_8]))))));
                        }
                        for (long long int i_13 = 0; i_13 < 14; i_13 += 2) 
                        {
                            var_27 ^= ((/* implicit */unsigned char) arr_29 [i_9] [i_9] [i_11] [i_13]);
                            arr_42 [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */signed char) 1041262290);
                            var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned int) var_4)), (arr_10 [i_8] [(signed char)0]))))) ? (((/* implicit */int) ((short) var_3))) : (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-114)), (arr_18 [i_9] [i_8] [i_10]))))));
                        }
                        var_29 |= ((((((/* implicit */_Bool) 1041262307)) ? ((~(939524096U))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_11 [i_8] [i_8])))))))) >> (((((((/* implicit */_Bool) (-(((/* implicit */int) arr_6 [i_8] [i_10] [i_11]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_8 [i_11] [i_9] [i_8])) << (((((/* implicit */int) var_14)) - (112)))))) : ((~(939524110U))))) - (1791U))));
                        var_30 = ((/* implicit */int) min(((unsigned char)192), (((/* implicit */unsigned char) var_14))));
                    }
                } 
            } 
        } 
    }
    /* vectorizable */
    for (long long int i_14 = 0; i_14 < 13; i_14 += 4) 
    {
        arr_46 [i_14] [i_14] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) 534735128U)) / (34359738367LL))))));
        /* LoopSeq 2 */
        for (long long int i_15 = 2; i_15 < 11; i_15 += 4) 
        {
            var_31 *= ((/* implicit */signed char) ((arr_1 [i_14]) >= (arr_1 [i_15 + 2])));
            var_32 = ((/* implicit */long long int) max((var_32), (((/* implicit */long long int) arr_30 [i_14] [i_15 + 1] [i_15] [i_15]))));
            var_33 ^= ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_28 [i_15 + 2] [i_15 + 2] [i_15]))));
            var_34 = ((/* implicit */unsigned int) min((var_34), (var_3)));
        }
        for (unsigned int i_16 = 4; i_16 < 11; i_16 += 4) 
        {
            var_35 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) var_3)))));
            /* LoopSeq 2 */
            for (long long int i_17 = 0; i_17 < 13; i_17 += 1) 
            {
                var_36 |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) >= ((~(2824074535U)))));
                arr_53 [i_17] [i_16] [i_14] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)119)) ? (((/* implicit */long long int) 2980032183U)) : (var_0))) * (((/* implicit */long long int) ((((/* implicit */_Bool) 1041262303)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))))));
                /* LoopNest 2 */
                for (signed char i_18 = 0; i_18 < 13; i_18 += 2) 
                {
                    for (signed char i_19 = 0; i_19 < 13; i_19 += 3) 
                    {
                        {
                            var_37 = ((((/* implicit */_Bool) (~(1041262302)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (arr_50 [i_14] [i_16 + 1]));
                            var_38 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_14))));
                            arr_59 [i_19] [12ULL] [i_18] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (arr_47 [i_19])));
                        }
                    } 
                } 
            }
            for (unsigned long long int i_20 = 1; i_20 < 10; i_20 += 3) 
            {
                /* LoopNest 2 */
                for (unsigned int i_21 = 0; i_21 < 13; i_21 += 4) 
                {
                    for (signed char i_22 = 2; i_22 < 11; i_22 += 2) 
                    {
                        {
                            arr_69 [i_22] [i_21] [i_20] [i_16] [i_14] = ((/* implicit */unsigned long long int) -6942745814926388141LL);
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_65 [i_14] [i_14] [i_16 - 3] [i_16 + 2] [i_22 - 2] [7U])) >> (((((/* implicit */int) arr_65 [i_16] [i_16] [i_16 - 3] [i_16] [i_22 + 1] [(signed char)10])) - (54)))));
                        }
                    } 
                } 
                var_40 += ((/* implicit */long long int) arr_39 [i_14] [i_14] [i_16] [i_16 - 1]);
                /* LoopSeq 2 */
                for (unsigned long long int i_23 = 0; i_23 < 13; i_23 += 4) /* same iter space */
                {
                    var_41 = ((/* implicit */long long int) min((var_41), (((/* implicit */long long int) 4294967280U))));
                    /* LoopSeq 3 */
                    for (unsigned int i_24 = 2; i_24 < 9; i_24 += 4) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_23 [i_24 - 2] [i_23] [i_16 - 3] [i_24 - 2])) || (((/* implicit */_Bool) var_6))));
                        var_43 -= ((/* implicit */unsigned int) arr_14 [i_16 - 2] [i_16 - 2] [i_16 + 1] [i_20 - 1] [i_20 + 2] [i_24 + 1]);
                        arr_75 [i_14] [i_16 - 4] [i_20] [i_20] [i_24] = ((/* implicit */long long int) ((_Bool) 2301850529U));
                        var_44 -= ((/* implicit */unsigned int) ((unsigned char) arr_8 [i_20 + 2] [i_20 + 2] [i_24 + 2]));
                        var_45 = ((/* implicit */_Bool) max((var_45), (((((/* implicit */_Bool) (~(4106694400U)))) && (((/* implicit */_Bool) var_11))))));
                    }
                    for (unsigned int i_25 = 2; i_25 < 9; i_25 += 4) /* same iter space */
                    {
                        var_46 -= arr_1 [i_16 + 2];
                        arr_78 [i_14] [i_16] [i_20] [i_23] [i_25] [i_25 - 2] &= ((/* implicit */signed char) ((short) ((331710782U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_9))))));
                    }
                    for (unsigned int i_26 = 2; i_26 < 9; i_26 += 4) /* same iter space */
                    {
                        arr_82 [i_14] [i_23] [i_14] [i_14] [i_16 + 2] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_12))));
                        var_47 ^= ((/* implicit */_Bool) ((((/* implicit */int) arr_22 [i_14] [i_20 + 1] [i_16 - 2] [i_20 + 3] [i_26 + 1])) - (((/* implicit */int) arr_39 [i_16] [i_16 + 1] [i_20 + 2] [i_26 + 4]))));
                    }
                    var_48 -= ((((/* implicit */_Bool) arr_8 [i_16 - 1] [i_16 - 2] [i_16 + 2])) ? (((/* implicit */int) arr_8 [i_16 - 2] [i_16 - 1] [i_16 + 2])) : (((/* implicit */int) var_11)));
                }
                for (unsigned long long int i_27 = 0; i_27 < 13; i_27 += 4) /* same iter space */
                {
                    arr_85 [i_20 + 1] [i_14] = ((/* implicit */unsigned short) arr_28 [i_20 + 3] [i_16 - 4] [i_14]);
                    var_49 = ((/* implicit */short) (signed char)6);
                }
            }
        }
        arr_86 [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_0 [i_14])) ? (arr_30 [i_14] [i_14] [i_14] [i_14]) : (1314935113U)));
    }
    var_50 += ((/* implicit */_Bool) var_13);
}
