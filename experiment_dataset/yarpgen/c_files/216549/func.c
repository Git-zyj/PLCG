/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216549
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_17 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (var_5)))), (var_14))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) ? (0LL) : (var_5))) >= (((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_9))))))))));
        var_18 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_1) > (((/* implicit */unsigned long long int) var_8)))))) : (0LL))))));
        arr_3 [15LL] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((var_5) == (((/* implicit */long long int) var_8)))) ? (((/* implicit */long long int) var_6)) : (((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) (short)27652))) : (1LL)))))) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-22084)))));
        var_19 ^= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))) <= (-1LL)))), (((unsigned long long int) arr_0 [i_0]))));
        var_20 ^= ((/* implicit */signed char) max((max((((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-120)) | (1645169244)))), (var_8))), (((/* implicit */unsigned int) (+(((/* implicit */int) max((arr_2 [i_0]), (var_2)))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 12; i_1 += 4) 
    {
        var_21 &= ((/* implicit */unsigned long long int) ((unsigned int) ((((((/* implicit */int) (_Bool)1)) << (((/* implicit */int) (unsigned short)1)))) / (((/* implicit */int) min((var_2), (((/* implicit */short) arr_0 [i_1]))))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) (~(arr_4 [i_1])));
    }
    for (int i_2 = 1; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            for (long long int i_4 = 0; i_4 < 20; i_4 += 2) 
            {
                for (long long int i_5 = 2; i_5 < 19; i_5 += 4) 
                {
                    {
                        arr_19 [i_2] [4LL] [i_3] [(short)8] [i_2] = (+(max((((((/* implicit */_Bool) arr_15 [(short)7] [i_3] [i_4] [i_2])) ? (var_14) : (var_14))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (var_10) : (((/* implicit */unsigned int) 1885379795))))))));
                        arr_20 [i_2] [i_4] [(signed char)10] [i_2] = ((/* implicit */int) var_5);
                    }
                } 
            } 
        } 
        arr_21 [i_2] = ((((/* implicit */int) (!(((/* implicit */_Bool) 4294967290U))))) * (((((/* implicit */int) arr_16 [i_2] [i_2 + 1] [i_2] [i_2] [i_2 - 1])) & (((/* implicit */int) arr_16 [(signed char)6] [i_2 - 1] [10] [13U] [i_2 - 1])))));
        var_22 ^= ((/* implicit */unsigned int) ((((/* implicit */long long int) (~(((/* implicit */int) ((4182888509U) == (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [11LL] [11LL] [i_2]))))))))) < (((((/* implicit */_Bool) ((var_14) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((((var_15) + (9223372036854775807LL))) >> (3U))) : (min((((/* implicit */long long int) 112078804U)), (-4680649386618337778LL)))))));
        /* LoopNest 3 */
        for (long long int i_6 = 0; i_6 < 20; i_6 += 2) 
        {
            for (unsigned short i_7 = 3; i_7 < 19; i_7 += 2) 
            {
                for (long long int i_8 = 0; i_8 < 20; i_8 += 2) 
                {
                    {
                        var_23 = ((/* implicit */signed char) (~(18U)));
                        arr_32 [i_2] [i_2] = (i_2 % 2 == 0) ? (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((0LL), (((/* implicit */long long int) arr_9 [i_2])))) : ((+(14LL)))))) | (min((((/* implicit */unsigned long long int) var_3)), (((5867709800184071696ULL) >> (((((/* implicit */int) arr_15 [i_2] [i_7] [(short)14] [i_2])) - (23129)))))))))) : (((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (min((0LL), (((/* implicit */long long int) arr_9 [i_2])))) : ((+(14LL)))))) | (min((((/* implicit */unsigned long long int) var_3)), (((5867709800184071696ULL) >> (((((((/* implicit */int) arr_15 [i_2] [i_7] [(short)14] [i_2])) - (23129))) - (18658))))))))));
                    }
                } 
            } 
        } 
        arr_33 [i_2] = ((/* implicit */unsigned char) (~(arr_17 [3LL] [8U] [i_2] [4] [4])));
    }
    /* LoopSeq 3 */
    for (unsigned int i_9 = 4; i_9 < 17; i_9 += 2) 
    {
        /* LoopNest 2 */
        for (long long int i_10 = 0; i_10 < 19; i_10 += 2) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 19; i_11 += 2) 
            {
                {
                    arr_41 [i_9 - 3] [i_10] [i_10] = ((/* implicit */unsigned int) max((((/* implicit */short) (!(((/* implicit */_Bool) ((2649085566152502926LL) | (((/* implicit */long long int) ((/* implicit */int) (signed char)99))))))))), (max((((/* implicit */short) (signed char)8)), (var_16)))));
                    var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (signed char)-40)) ? (((long long int) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */unsigned long long int) var_10)) : (2735292267370834764ULL)))) : (arr_26 [(short)18] [i_10] [i_9]))))));
                    /* LoopSeq 1 */
                    for (int i_12 = 0; i_12 < 19; i_12 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_13 = 0; i_13 < 19; i_13 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned char) max((-6527593555382624156LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_12] [i_9 - 1] [i_11] [i_10])) || (((/* implicit */_Bool) var_12)))))));
                            var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) var_12))));
                            arr_47 [i_9] [i_10] [i_11] [i_12] [i_9] = ((/* implicit */short) min((((/* implicit */unsigned int) arr_0 [i_11])), (var_3)));
                            arr_48 [(short)6] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_15)) & (arr_22 [i_9 - 4] [i_10] [i_9 + 2])))) || (((/* implicit */_Bool) ((unsigned int) ((long long int) var_1))))));
                        }
                        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((((((/* implicit */_Bool) (signed char)54)) ? (((/* implicit */unsigned long long int) 0U)) : (12579034273525479937ULL))) / (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_2 [(unsigned char)17])), (var_7))))))) - (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) min((var_10), (((/* implicit */unsigned int) (short)-10899))))))))))));
                    }
                    var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(3348418246081183194LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_9 - 3] [i_9] [i_9 - 2] [i_9])) ? (((-3632258835502693535LL) & (arr_37 [i_11] [i_10]))) : (((/* implicit */long long int) min((arr_39 [(short)6] [(short)6] [i_11]), (((/* implicit */int) var_11))))))))));
                }
            } 
        } 
        var_29 = ((/* implicit */short) ((unsigned short) arr_28 [i_9] [i_9 + 1] [i_9] [i_9]));
        arr_49 [i_9] [11] = ((/* implicit */int) 5867709800184071707ULL);
        /* LoopNest 2 */
        for (unsigned short i_14 = 0; i_14 < 19; i_14 += 4) 
        {
            for (int i_15 = 2; i_15 < 18; i_15 += 2) 
            {
                {
                    var_30 = ((((/* implicit */_Bool) (-(((int) 3632258835502693564LL))))) ? (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_2)), (var_7)))) ? (var_15) : (((/* implicit */long long int) ((unsigned int) arr_52 [i_9]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)83)) ? (((/* implicit */unsigned long long int) 4294967281U)) : (var_14)))) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), (var_2)))))))));
                    var_31 &= ((/* implicit */int) arr_26 [i_9] [(signed char)7] [(signed char)7]);
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (+((+(arr_17 [18U] [i_9] [14LL] [14U] [i_15]))))))));
                }
            } 
        } 
    }
    for (short i_16 = 0; i_16 < 19; i_16 += 2) 
    {
        var_33 = ((/* implicit */int) min((var_33), (((/* implicit */int) ((((unsigned int) (short)30976)) > (((/* implicit */unsigned int) ((/* implicit */int) var_7))))))));
        /* LoopNest 2 */
        for (short i_17 = 1; i_17 < 17; i_17 += 4) 
        {
            for (unsigned int i_18 = 1; i_18 < 16; i_18 += 4) 
            {
                {
                    var_34 = ((/* implicit */short) arr_22 [i_18 + 2] [i_18] [i_16]);
                    /* LoopNest 2 */
                    for (int i_19 = 1; i_19 < 17; i_19 += 4) 
                    {
                        for (long long int i_20 = 0; i_20 < 19; i_20 += 4) 
                        {
                            {
                                arr_71 [i_18] [i_18 + 1] [i_18] [i_18] = ((/* implicit */signed char) ((((-8191804471155615994LL) + (9223372036854775807LL))) >> (((((/* implicit */int) (signed char)-40)) + (91)))));
                                arr_72 [i_18] [i_18] = ((/* implicit */int) var_0);
                                arr_73 [i_16] [i_18] = ((((-6791591343562354888LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned short)65535)) - (65535))));
                                arr_74 [i_16] [i_18] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((-9223372036854775799LL), (((/* implicit */long long int) arr_2 [i_18 + 1]))))) ? (((var_3) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)22258))))))) : (((/* implicit */unsigned int) ((((((((/* implicit */_Bool) 2182800841U)) ? (((/* implicit */int) (signed char)-35)) : (((/* implicit */int) (_Bool)0)))) + (2147483647))) >> (((/* implicit */int) (!(((/* implicit */_Bool) (short)293))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 *= ((/* implicit */signed char) ((long long int) 4294967290U));
    }
    for (long long int i_21 = 0; i_21 < 21; i_21 += 2) 
    {
        var_36 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_1)) ? (var_1) : (((/* implicit */unsigned long long int) arr_77 [i_21]))))))) ? ((((!(((/* implicit */_Bool) 1276286154448712031LL)))) ? (((/* implicit */int) var_7)) : (1920576917))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_76 [i_21] [i_21])) && (((var_13) > (((/* implicit */long long int) 4294967290U)))))))));
        var_37 = ((/* implicit */int) (-((-(min((((/* implicit */long long int) arr_78 [i_21])), (arr_77 [13ULL])))))));
    }
    /* LoopNest 3 */
    for (short i_22 = 0; i_22 < 20; i_22 += 4) 
    {
        for (unsigned short i_23 = 1; i_23 < 19; i_23 += 4) 
        {
            for (short i_24 = 0; i_24 < 20; i_24 += 4) 
            {
                {
                    arr_86 [(unsigned short)2] [i_23] [i_22] = ((/* implicit */unsigned short) ((unsigned int) arr_22 [i_23 + 1] [i_22] [4U]));
                    var_38 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_11))));
                    /* LoopNest 2 */
                    for (unsigned int i_25 = 1; i_25 < 18; i_25 += 2) 
                    {
                        for (_Bool i_26 = 0; i_26 < 0; i_26 += 1) 
                        {
                            {
                                var_39 = ((((/* implicit */_Bool) 2112166437U)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) ((-1684990464907642289LL) & (((/* implicit */long long int) ((/* implicit */int) var_16)))))) || ((!(((/* implicit */_Bool) arr_13 [i_22] [i_23] [1LL])))))))) : (var_3));
                                var_40 = min((max((3145916941222247259LL), (((/* implicit */long long int) arr_15 [i_26 + 1] [i_25 + 2] [(unsigned short)14] [i_24])))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [14LL] [i_22] [i_22] [i_23]))))) ? (max((var_4), (((/* implicit */long long int) (unsigned char)235)))) : (((/* implicit */long long int) ((/* implicit */int) var_11))))));
                                arr_93 [i_22] [i_23] [i_22] = arr_11 [i_24] [i_25] [i_23];
                            }
                        } 
                    } 
                    arr_94 [i_23] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-32758)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) 2593800522U)), (13391001291359551813ULL)))))) : (((unsigned long long int) ((1684990464907642297LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned short)55241))))))));
                }
            } 
        } 
    } 
    var_41 = ((/* implicit */short) var_12);
    var_42 = ((/* implicit */unsigned int) var_1);
}
