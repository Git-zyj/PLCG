/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192467
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192467 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192467
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
    var_18 ^= ((/* implicit */long long int) min((var_5), (((((((/* implicit */int) var_8)) / (((/* implicit */int) var_14)))) | ((~(((/* implicit */int) (short)-7))))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            var_19 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : ((+(((/* implicit */int) var_6))))));
            arr_8 [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) >> (((/* implicit */int) var_13))))) ? (((/* implicit */int) ((var_5) > (((/* implicit */int) var_2))))) : (var_5)));
        }
        arr_9 [i_0] = ((/* implicit */signed char) (~(((/* implicit */int) max((max((var_14), (((/* implicit */unsigned short) var_10)))), (((/* implicit */unsigned short) (!(var_13)))))))));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 1) 
    {
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                for (unsigned char i_5 = 3; i_5 < 21; i_5 += 3) 
                {
                    {
                        arr_20 [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */int) (short)-7)), ((~(((/* implicit */int) (unsigned short)18))))))) ? (((((/* implicit */_Bool) min(((short)6), ((short)-7)))) ? ((~(((/* implicit */int) var_7)))) : (((/* implicit */int) var_1)))) : (max((((/* implicit */int) min(((unsigned char)21), ((unsigned char)252)))), ((+(((/* implicit */int) var_6))))))));
                        arr_21 [i_5 - 3] [i_3] [i_3] [i_2] = ((/* implicit */unsigned short) (+(min((max((var_0), (((/* implicit */long long int) var_14)))), (((/* implicit */long long int) var_16))))));
                        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) var_9)) : (var_0)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : ((~(var_17)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                for (unsigned short i_7 = 2; i_7 < 22; i_7 += 4) 
                {
                    {
                        var_21 ^= ((/* implicit */signed char) min(((~(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (var_14)))))), (max(((~(((/* implicit */int) var_10)))), (((/* implicit */int) max((var_10), (var_11))))))));
                        arr_27 [i_2] [i_2] [i_2] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
                        /* LoopSeq 2 */
                        for (int i_8 = 1; i_8 < 22; i_8 += 1) 
                        {
                            arr_31 [i_6] [i_6] [i_3] [13LL] [11U] [i_6] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */int) (signed char)63)) : (((/* implicit */int) (unsigned short)9219))))) ? (((/* implicit */int) min((var_14), (var_2)))) : ((+(((/* implicit */int) (_Bool)1)))))) >= ((~(((/* implicit */int) (_Bool)1))))));
                            arr_32 [i_6] [i_3] [i_2] = ((/* implicit */int) max((max((((/* implicit */long long int) (+(((/* implicit */int) var_11))))), (var_17))), (((/* implicit */long long int) var_5))));
                            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */long long int) var_11)), ((~(((((/* implicit */_Bool) var_7)) ? (var_17) : (((/* implicit */long long int) ((/* implicit */int) var_3))))))))))));
                            arr_33 [i_2] [i_3] [i_6] [i_7] [i_3] = ((/* implicit */signed char) var_13);
                            arr_34 [i_3] [i_7] [2] [i_3] [i_3] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3)))))))));
                        }
                        for (signed char i_9 = 1; i_9 < 21; i_9 += 4) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) min(((unsigned short)58005), ((unsigned short)65519)));
                            var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? ((((_Bool)0) ? (32768U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-7))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))))) ? (max((((/* implicit */int) max((var_7), (((/* implicit */unsigned short) var_12))))), ((~(((/* implicit */int) var_14)))))) : (((((/* implicit */int) max((((/* implicit */unsigned short) var_13)), (var_7)))) / ((~(((/* implicit */int) var_8))))))));
                            arr_38 [i_3] [i_3] = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) var_2)), (var_17)))) ? ((~(((/* implicit */int) var_15)))) : (((((/* implicit */int) var_15)) - (((/* implicit */int) var_3))))))), ((~((+(var_0)))))));
                        }
                    }
                } 
            } 
            arr_39 [i_2] [(unsigned short)13] [i_3] = ((/* implicit */unsigned short) var_12);
            var_25 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_0)))) ? (((var_6) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)10))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_12)) > (((/* implicit */int) var_10))))))))) ? (min((((/* implicit */long long int) min((var_8), (((/* implicit */unsigned short) var_6))))), (max((var_17), (((/* implicit */long long int) var_7)))))) : (((/* implicit */long long int) var_9))));
            /* LoopSeq 1 */
            for (unsigned char i_10 = 1; i_10 < 22; i_10 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_11 = 0; i_11 < 24; i_11 += 4) 
                {
                    var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) var_9))));
                    arr_45 [i_3] [i_10 + 1] [(short)20] = ((/* implicit */long long int) (+(1604336033U)));
                    arr_46 [i_3] [i_2] [(unsigned short)16] [i_3] [(signed char)18] [14] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned char) var_3))))) ? (((/* implicit */int) var_3)) : ((+(((/* implicit */int) var_1))))));
                }
                var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) var_15))));
                var_28 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) min((var_14), (((/* implicit */unsigned short) var_11)))))))));
            }
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            var_29 = ((/* implicit */_Bool) max((var_17), (min((-1LL), (((/* implicit */long long int) ((677947448U) % (((/* implicit */unsigned int) (-2147483647 - 1))))))))));
            arr_49 [i_12] [(_Bool)0] = ((/* implicit */_Bool) (+(min(((~(((/* implicit */int) var_10)))), ((+(var_5)))))));
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 24; i_13 += 1) 
            {
                for (int i_14 = 0; i_14 < 24; i_14 += 1) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_15 = 3; i_15 < 20; i_15 += 4) 
                        {
                            arr_57 [20U] [i_14] [i_15 - 3] = ((((/* implicit */int) var_6)) << ((((~(((/* implicit */int) max((var_3), (var_11)))))) + (30))));
                            var_30 ^= ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((/* implicit */_Bool) (+(var_9)))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_3))))), (min(((+(var_0))), (((/* implicit */long long int) ((var_15) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_13)))))))));
                            arr_58 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned int) (~(((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (min((var_1), (var_2))))))));
                            var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) (!(var_15))))));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            arr_61 [i_12] [i_16] |= ((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) (short)25)), ((unsigned short)6097)));
                            var_32 *= ((/* implicit */int) (!(((/* implicit */_Bool) (+(3207049391U))))));
                            arr_62 [i_16] [i_14] [i_13] [i_12] [i_2] = ((((/* implicit */_Bool) var_4)) ? ((~(((/* implicit */int) (unsigned short)2145)))) : (((/* implicit */int) min((var_10), ((!(((/* implicit */_Bool) var_12))))))));
                        }
                        for (unsigned short i_17 = 0; i_17 < 24; i_17 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) min((var_33), (((/* implicit */unsigned short) (((~(max((var_9), (((/* implicit */unsigned int) var_2)))))) << ((((~(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (signed char)-104)))))) + (21))))))));
                            var_34 = ((/* implicit */unsigned short) min((var_34), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(((((/* implicit */int) var_11)) + (((/* implicit */int) var_14))))))))))));
                            var_35 = ((/* implicit */unsigned short) max(((~(((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)))))), (((var_10) ? (((var_5) & (((/* implicit */int) var_8)))) : (((/* implicit */int) var_8))))));
                            var_36 = ((/* implicit */_Bool) (~((+(((((/* implicit */_Bool) var_17)) ? (((/* implicit */long long int) ((/* implicit */int) var_14))) : (var_17)))))));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_18 = 3; i_18 < 23; i_18 += 2) 
                        {
                            arr_68 [(_Bool)1] [i_12] [i_13] [i_14] [i_18 + 1] |= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */unsigned short) var_3))))) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ^ (max((min((var_17), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (~(((/* implicit */int) var_15)))))))));
                            var_37 += ((/* implicit */short) ((((/* implicit */_Bool) (+((+(var_9)))))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_16)))), (((/* implicit */int) var_14)))) : (((/* implicit */int) var_12))));
                        }
                        var_38 += ((/* implicit */unsigned char) (!(var_3)));
                    }
                } 
            } 
        }
        var_39 = ((/* implicit */_Bool) min((var_39), (((/* implicit */_Bool) (((+(((/* implicit */int) var_10)))) << (((max((((/* implicit */long long int) (~(((/* implicit */int) var_12))))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (var_17))))) - (22685LL))))))));
        /* LoopNest 2 */
        for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
        {
            for (unsigned short i_20 = 0; i_20 < 24; i_20 += 1) 
            {
                {
                    var_40 = ((/* implicit */unsigned int) var_8);
                    /* LoopSeq 1 */
                    for (unsigned short i_21 = 0; i_21 < 24; i_21 += 2) 
                    {
                        /* LoopSeq 3 */
                        for (int i_22 = 3; i_22 < 23; i_22 += 2) 
                        {
                            arr_82 [i_21] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_11))))) && (var_10)));
                            arr_83 [i_19] [i_19] [i_19] [i_19] [i_19] = ((/* implicit */unsigned int) min(((((~(7997700520871956300ULL))) | (((/* implicit */unsigned long long int) (~(var_17)))))), (((/* implicit */unsigned long long int) max((max((var_6), (var_10))), (((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) var_9)))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) /* same iter space */
                        {
                            arr_86 [(_Bool)1] [21ULL] [i_19] [i_20] [i_21] [i_23] = ((((/* implicit */_Bool) (+(((/* implicit */int) var_10))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_17))))) : (((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (signed char)116)))));
                            var_41 = ((((/* implicit */_Bool) ((var_3) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))) ? ((+(((/* implicit */int) var_16)))) : (((/* implicit */int) var_12)));
                            var_42 = ((/* implicit */int) min((var_42), ((+((+(((/* implicit */int) var_3))))))));
                        }
                        for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) /* same iter space */
                        {
                            arr_91 [i_21] [i_20] [i_21] |= ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
                            var_43 *= ((/* implicit */unsigned short) max(((!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)36032))))))), (var_11)));
                            var_44 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) min((var_0), (((/* implicit */long long int) var_13))))) ? ((+(((/* implicit */int) var_8)))) : ((~(((/* implicit */int) var_11)))))), ((((+(((/* implicit */int) var_14)))) + ((~(var_5)))))));
                            var_45 = ((/* implicit */int) ((((/* implicit */int) var_12)) >= (((((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) var_1)))) ? (((((/* implicit */int) var_7)) & (((/* implicit */int) var_14)))) : ((+(((/* implicit */int) var_16))))))));
                        }
                        var_46 = ((/* implicit */int) var_14);
                    }
                    var_47 = ((/* implicit */long long int) min((var_47), (((/* implicit */long long int) var_2))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        var_48 *= ((/* implicit */unsigned short) (((~(((/* implicit */int) var_11)))) * ((+(((/* implicit */int) var_13))))));
                        /* LoopSeq 2 */
                        for (_Bool i_26 = 1; i_26 < 1; i_26 += 1) 
                        {
                            var_49 = ((/* implicit */unsigned short) var_0);
                            arr_96 [i_2] [i_25] [i_19] [i_25] [i_26] = ((/* implicit */unsigned short) (~((~(var_0)))));
                        }
                        for (long long int i_27 = 1; i_27 < 20; i_27 += 4) 
                        {
                            var_50 = ((/* implicit */int) min((var_50), (((/* implicit */int) var_4))));
                            arr_100 [i_2] [i_19] [i_20] [i_25] [i_27 + 1] = ((/* implicit */int) var_0);
                            arr_101 [i_19] = var_6;
                            arr_102 [i_2] [i_2] [i_2] [i_19] [i_2] = ((/* implicit */_Bool) (~(((/* implicit */int) var_11))));
                            arr_103 [i_19] [i_19] [15U] = ((/* implicit */unsigned int) var_2);
                        }
                    }
                    /* vectorizable */
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned long long int i_29 = 2; i_29 < 22; i_29 += 3) 
                        {
                            arr_110 [i_2] [i_19] [i_20] [i_19] [i_29] [i_29] [i_29 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))) ? (var_17) : (((/* implicit */long long int) (~(((/* implicit */int) var_14)))))));
                            var_51 += ((/* implicit */unsigned int) ((((/* implicit */long long int) var_5)) >= (var_17)));
                            arr_111 [i_2] [i_19] [i_20] [i_28] [i_29] [0] = ((/* implicit */int) var_3);
                            arr_112 [i_19] [i_19] = ((/* implicit */unsigned short) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_14)))))));
                        }
                        for (unsigned int i_30 = 0; i_30 < 24; i_30 += 2) /* same iter space */
                        {
                            arr_117 [i_30] [i_19] [i_19] [i_2] = (~(((((/* implicit */int) var_15)) / (((/* implicit */int) var_8)))));
                            var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 1591878626))));
                            var_53 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (var_9)))) / (var_0)));
                        }
                        for (unsigned int i_31 = 0; i_31 < 24; i_31 += 2) /* same iter space */
                        {
                            arr_120 [i_31] [(unsigned short)8] [i_28] [i_2] [4LL] &= ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_7)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))));
                            arr_121 [i_19] [(short)18] [i_31] |= ((/* implicit */_Bool) var_8);
                            var_54 = ((((/* implicit */_Bool) ((var_11) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) var_1)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (var_10)))));
                        }
                        arr_122 [i_19] [(unsigned short)5] [i_19] [i_19] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_14))))) ? (((/* implicit */long long int) var_9)) : ((~(-1LL))));
                    }
                }
            } 
        } 
    }
    /* vectorizable */
    for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
    {
        arr_125 [i_32] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? ((+(201798269))) : ((~(((/* implicit */int) var_6))))));
        var_55 -= ((/* implicit */long long int) (((+(((/* implicit */int) var_10)))) % (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_2))))));
    }
}
