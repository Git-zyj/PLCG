/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202810
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202810 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202810
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (var_0)))));
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))))))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0] [i_0])) | (((/* implicit */int) arr_0 [(_Bool)1] [i_0]))))), ((~(11019402371205727483ULL))))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 4) /* same iter space */
    {
        var_16 = ((/* implicit */signed char) -1063104696);
        /* LoopSeq 3 */
        for (int i_2 = 1; i_2 < 17; i_2 += 1) 
        {
            var_17 = arr_6 [14];
            var_18 = ((/* implicit */unsigned short) max((((/* implicit */long long int) arr_5 [i_1] [i_2 - 1])), (arr_6 [i_2 + 1])));
            arr_7 [(short)12] [i_1] = ((/* implicit */unsigned int) var_2);
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            var_19 &= ((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))));
            arr_11 [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_3] [i_3])) ? (arr_3 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_3])))))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_3])) ? (((/* implicit */int) (short)21059)) : (((/* implicit */int) arr_8 [i_1] [i_3])))) : (((/* implicit */int) max((arr_8 [i_1] [i_3]), (arr_8 [i_1] [i_3]))))));
        }
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 18; i_5 += 1) 
            {
                for (unsigned int i_6 = 0; i_6 < 18; i_6 += 4) 
                {
                    {
                        var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) arr_4 [i_4]))))));
                        arr_19 [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) ((signed char) max((((/* implicit */int) var_2)), (var_12))))) >> (((((/* implicit */int) ((unsigned short) (((_Bool)1) ? (((/* implicit */unsigned int) var_12)) : (arr_5 [i_1] [i_1]))))) - (44960)))));
                        var_21 = ((/* implicit */_Bool) (unsigned char)139);
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (short i_7 = 0; i_7 < 18; i_7 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_8 = 0; i_8 < 18; i_8 += 1) 
                {
                    var_22 *= ((/* implicit */signed char) arr_3 [i_1] [i_8]);
                    var_23 *= ((/* implicit */short) (~((-(774475628744949832LL)))));
                    arr_26 [i_4] [i_4] = ((/* implicit */unsigned char) ((short) ((long long int) max((var_11), (((/* implicit */unsigned int) arr_12 [i_4] [i_4]))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    arr_30 [i_4] [i_9] [i_9] [i_4] [i_9] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_16 [i_1] [i_9])) ? (arr_9 [i_1] [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_1] [i_4])))));
                    var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_9] [i_7] [i_7] [i_4] [i_1]))) : (var_7)))) ? (((/* implicit */int) arr_8 [i_4] [i_4])) : (((var_2) ? (var_0) : (var_9)))));
                    var_25 = ((/* implicit */unsigned short) (signed char)-2);
                    var_26 = ((/* implicit */int) arr_9 [i_1] [i_4]);
                }
                arr_31 [i_1] [i_4] [i_4] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((int) min((((/* implicit */unsigned short) (unsigned char)143)), (arr_17 [i_1] [i_1] [i_1])))))));
                arr_32 [i_4] [i_4] [i_7] = ((/* implicit */signed char) arr_22 [i_1] [i_4] [i_4] [i_4]);
            }
            /* vectorizable */
            for (int i_10 = 0; i_10 < 18; i_10 += 3) 
            {
                var_27 = ((/* implicit */signed char) (~(((/* implicit */int) var_2))));
                var_28 = ((/* implicit */long long int) max((var_28), (774475628744949830LL)));
                /* LoopSeq 1 */
                for (int i_11 = 0; i_11 < 18; i_11 += 4) 
                {
                    var_29 *= ((/* implicit */_Bool) ((long long int) arr_28 [i_1] [i_1] [(signed char)12] [i_11] [i_10] [i_11]));
                    /* LoopSeq 2 */
                    for (unsigned short i_12 = 0; i_12 < 18; i_12 += 2) /* same iter space */
                    {
                        var_30 -= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_12) : (((/* implicit */int) var_1)))))));
                        arr_39 [i_4] [i_4] [i_4] [6LL] [i_11] [i_4] = ((/* implicit */int) arr_35 [i_4] [i_4] [i_10] [i_4]);
                    }
                    for (unsigned short i_13 = 0; i_13 < 18; i_13 += 2) /* same iter space */
                    {
                        var_31 = ((/* implicit */long long int) min((var_31), (((/* implicit */long long int) arr_13 [i_13]))));
                        var_32 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_33 [i_11] [i_11])) ? (((/* implicit */int) (!(((/* implicit */_Bool) 1048064))))) : ((~(((/* implicit */int) arr_35 [i_1] [i_4] [i_4] [i_4]))))));
                        var_33 = ((/* implicit */long long int) (~(arr_12 [i_4] [i_4])));
                    }
                }
            }
            arr_42 [i_4] [i_1] [i_4] = ((/* implicit */unsigned char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -8)))))) != (((unsigned long long int) var_4)))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483637)) ? (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_1] [i_1] [i_1] [i_4] [i_4]))) : (arr_6 [i_1])))) ? (((/* implicit */int) arr_40 [i_4] [i_4] [i_4] [i_1] [i_4])) : (((/* implicit */int) ((short) var_4)))))) : ((+(((((/* implicit */_Bool) 774475628744949830LL)) ? (arr_36 [i_4]) : (((/* implicit */long long int) ((/* implicit */int) arr_35 [i_4] [i_4] [i_4] [i_4])))))))));
            /* LoopSeq 2 */
            for (unsigned int i_14 = 0; i_14 < 18; i_14 += 3) 
            {
                arr_46 [i_4] [i_14] = ((long long int) min((((/* implicit */int) ((_Bool) arr_45 [i_14] [i_1] [i_4] [i_1]))), ((+(((/* implicit */int) (_Bool)1))))));
                /* LoopSeq 2 */
                for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                {
                    var_34 = ((/* implicit */unsigned long long int) min((max(((~(((/* implicit */int) arr_40 [i_4] [i_14] [i_14] [i_14] [i_14])))), (((/* implicit */int) max((((/* implicit */signed char) var_2)), ((signed char)24)))))), (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_22 [i_1] [i_1] [i_1] [i_1])) >= (max((((/* implicit */unsigned long long int) arr_24 [i_1] [i_4] [i_14])), (arr_41 [i_1] [i_14] [i_4] [i_1]))))))));
                    var_35 = ((/* implicit */int) ((min((min((4294967284U), (((/* implicit */unsigned int) var_10)))), (((/* implicit */unsigned int) ((arr_20 [i_1]) & (((/* implicit */int) arr_8 [i_4] [i_4]))))))) == (((/* implicit */unsigned int) ((/* implicit */int) var_6)))));
                    var_36 = ((/* implicit */signed char) arr_44 [i_4]);
                    /* LoopSeq 1 */
                    for (unsigned short i_16 = 2; i_16 < 16; i_16 += 2) 
                    {
                        var_37 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) max((arr_4 [i_4]), (((/* implicit */unsigned long long int) var_1))))) ? (((var_10) ? (var_8) : (((/* implicit */int) var_10)))) : (arr_38 [12] [i_4] [3U] [i_15] [14] [2ULL])))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_6 [i_16 - 2]) : (arr_6 [i_16 + 1])))) ? (((/* implicit */long long int) ((unsigned int) arr_6 [i_16 - 2]))) : (((((/* implicit */_Bool) var_1)) ? (arr_6 [i_16 - 2]) : (arr_6 [i_16 - 1])))));
                        var_39 = ((/* implicit */unsigned int) max((-1LL), (((/* implicit */long long int) -1096662011))));
                        var_40 = ((/* implicit */unsigned int) arr_8 [i_4] [i_4]);
                        var_41 = ((/* implicit */unsigned short) ((_Bool) arr_20 [i_14]));
                    }
                    var_42 = (~((~((-(var_7))))));
                }
                for (long long int i_17 = 1; i_17 < 16; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_43 *= ((/* implicit */_Bool) var_7);
                        var_44 = ((arr_21 [i_17 + 1] [i_4] [i_1] [i_17]) ? (((arr_21 [i_17 + 1] [i_4] [i_17 + 1] [i_17 + 1]) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_21 [i_17 + 1] [i_4] [i_17 + 1] [16ULL])))) : ((-(((/* implicit */int) var_6)))));
                        arr_58 [i_14] [i_4] [i_4] [i_1] [(_Bool)1] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_45 [10] [i_14] [i_4] [i_1]))));
                        arr_59 [i_18] [i_4] [i_17] [i_4] [i_4] [i_4] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_13 [i_4]))))))) ? (((/* implicit */long long int) var_0)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_4 [i_1]) : (((/* implicit */unsigned long long int) var_12))))) ? (max((((/* implicit */long long int) var_8)), (arr_43 [i_1]))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_35 [i_4] [i_4] [i_17] [i_17]), (((/* implicit */unsigned short) var_10))))))))));
                    }
                    for (long long int i_19 = 1; i_19 < 17; i_19 += 2) 
                    {
                        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) arr_33 [i_1] [i_19])) ? (7749073609882500689LL) : (arr_33 [i_1] [(_Bool)1])))))));
                        var_46 *= ((/* implicit */_Bool) ((short) (~(((arr_55 [i_1] [i_1]) ? (((/* implicit */int) arr_23 [i_4] [i_4] [i_4] [i_4] [i_4])) : (((/* implicit */int) arr_60 [i_1] [i_14])))))));
                        var_47 *= ((/* implicit */short) (-(((/* implicit */int) arr_52 [i_19 + 1] [i_19 + 1] [i_19 + 1] [i_1] [i_19] [i_19 + 1] [i_19]))));
                    }
                    var_48 -= ((_Bool) ((max((var_6), (var_6))) ? (min((arr_15 [i_1] [i_4] [i_14] [i_1]), (((/* implicit */long long int) var_8)))) : (((((/* implicit */_Bool) var_3)) ? (var_3) : (((/* implicit */long long int) 16U))))));
                }
                arr_62 [i_1] [i_4] [i_1] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_54 [i_1] [i_1] [i_1] [i_1] [i_1] [i_4])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) ? ((~(((/* implicit */int) arr_25 [i_1] [i_1] [i_4] [i_4])))) : (((/* implicit */int) arr_8 [i_14] [i_4]))))) : (((unsigned long long int) arr_28 [i_1] [i_4] [i_4] [i_4] [i_14] [i_14]))));
            }
            for (int i_20 = 0; i_20 < 18; i_20 += 3) 
            {
                var_49 = ((((/* implicit */_Bool) 0)) ? (((((/* implicit */_Bool) arr_33 [i_4] [i_20])) ? (max((((/* implicit */long long int) 5U)), (-3568083150647381638LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_44 [i_4])) ? (arr_18 [i_1] [i_1] [i_1] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) : (((long long int) var_8)));
                arr_67 [i_4] [i_4] [12] = ((/* implicit */signed char) ((((((/* implicit */_Bool) min((arr_41 [i_1] [i_1] [i_20] [i_4]), (((/* implicit */unsigned long long int) var_4))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (arr_12 [i_4] [i_4])))) : (((((/* implicit */_Bool) 1965333965317672810ULL)) ? (1965333965317672804ULL) : (((/* implicit */unsigned long long int) 1LL)))))) % ((-(((unsigned long long int) var_11))))));
            }
        }
    }
    /* vectorizable */
    for (short i_21 = 0; i_21 < 18; i_21 += 4) /* same iter space */
    {
        arr_70 [i_21] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(0U)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((/* implicit */int) arr_24 [i_21] [i_21] [i_21]))));
        var_50 = ((/* implicit */_Bool) 576179277326712832LL);
    }
    var_51 = ((/* implicit */short) 947374264);
    var_52 = ((/* implicit */unsigned char) ((((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)-119)) : (((/* implicit */int) var_10))))) ? (2147483616) : ((-(((((/* implicit */_Bool) var_5)) ? (var_8) : (var_12)))))));
    var_53 = ((/* implicit */short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) ((_Bool) max((((/* implicit */long long int) var_11)), (var_3)))))) : (var_7)));
}
