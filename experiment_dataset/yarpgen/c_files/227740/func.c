/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227740
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
    var_20 = ((/* implicit */short) (!(((/* implicit */_Bool) var_12))));
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 23; i_1 += 3) 
        {
            var_21 ^= ((/* implicit */short) ((((/* implicit */int) ((signed char) 766311856U))) * (((/* implicit */int) ((6285450022708429572LL) < (((/* implicit */long long int) arr_4 [i_0] [i_0] [i_0])))))));
            arr_5 [i_0] [i_1] = ((/* implicit */signed char) (+(((((((/* implicit */int) arr_2 [i_0] [i_1 + 2])) | (2147483647))) ^ (((/* implicit */int) ((unsigned char) (unsigned short)18059)))))));
        }
        arr_6 [i_0] = ((/* implicit */unsigned char) ((int) (-(max((((/* implicit */unsigned int) var_16)), (var_15))))));
    }
    for (int i_2 = 0; i_2 < 15; i_2 += 3) 
    {
        arr_10 [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))) < (((/* implicit */int) min(((unsigned short)27830), (((/* implicit */unsigned short) arr_2 [i_2] [i_2])))))));
        /* LoopSeq 1 */
        for (unsigned short i_3 = 2; i_3 < 13; i_3 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 0; i_4 < 15; i_4 += 3) 
            {
                for (int i_5 = 1; i_5 < 14; i_5 += 2) 
                {
                    {
                        arr_20 [i_2] [(unsigned char)1] [i_4] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_13 [i_5 - 1] [i_3 + 2])) && (((/* implicit */_Bool) (signed char)117))))) < (((/* implicit */int) arr_18 [(unsigned char)4] [i_5 - 1] [i_3 - 1] [i_3] [i_3] [i_2]))));
                        var_22 = ((/* implicit */unsigned int) arr_1 [i_5]);
                        arr_21 [i_2] [(unsigned char)4] [i_2] [i_2] [i_2] = min((((/* implicit */unsigned int) max((((/* implicit */int) (short)0)), ((+(((/* implicit */int) (unsigned char)196))))))), (((unsigned int) (_Bool)1)));
                        /* LoopSeq 1 */
                        for (short i_6 = 3; i_6 < 13; i_6 += 3) 
                        {
                            var_23 = ((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_5 - 1] [i_6 - 3])) << (((var_15) - (1336939256U)))))) * (((var_13) * (((/* implicit */unsigned int) ((int) (unsigned char)15))))));
                            var_24 |= ((/* implicit */long long int) ((unsigned char) min((((/* implicit */long long int) var_8)), (max((((/* implicit */long long int) 3618387339U)), (-4343740929881023129LL))))));
                        }
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned int i_7 = 4; i_7 < 11; i_7 += 2) 
            {
                for (unsigned int i_8 = 0; i_8 < 15; i_8 += 2) 
                {
                    {
                        var_25 ^= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((unsigned int) arr_23 [0] [(_Bool)1] [i_7 + 2] [i_7 - 2] [i_7] [i_7 + 2] [i_7]))) != (max((((/* implicit */unsigned long long int) (signed char)3)), (arr_14 [i_2] [i_2] [i_7])))));
                        var_26 -= ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)23)) >= (((((/* implicit */int) var_0)) * (((/* implicit */int) var_16))))));
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) 318161279)), (var_18)))) ? (((-4552818419082115873LL) / (((/* implicit */long long int) ((/* implicit */int) (unsigned char)99))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) arr_7 [i_7 + 2]))))));
                        arr_30 [i_8] [i_3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (max((((/* implicit */long long int) (unsigned char)240)), ((~(7839679055323563058LL))))) : (((/* implicit */long long int) max((((0) % (((/* implicit */int) arr_25 [i_2] [9U] [i_2])))), (1371619659))))));
                        arr_31 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) arr_2 [i_2] [i_2]))))));
                    }
                } 
            } 
            arr_32 [i_3] [0LL] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_27 [i_2] [i_3 - 2] [(unsigned short)4] [i_3 - 2])) ? (((/* implicit */int) arr_12 [i_2] [i_3 + 2])) : (((/* implicit */int) arr_16 [i_2] [i_3 - 1] [i_2])))), ((~(((/* implicit */int) (unsigned short)21192))))));
        }
    }
    for (unsigned char i_9 = 2; i_9 < 17; i_9 += 3) 
    {
        arr_35 [i_9] = max((((/* implicit */unsigned int) arr_34 [i_9 + 1])), (min((0U), (((/* implicit */unsigned int) var_4)))));
        var_28 = ((/* implicit */unsigned long long int) ((_Bool) -2923728910440134366LL));
    }
    for (unsigned int i_10 = 0; i_10 < 15; i_10 += 2) 
    {
        var_29 = ((/* implicit */unsigned char) -1190547292);
        arr_39 [(unsigned short)6] [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_16 [i_10] [i_10] [i_10])) >= (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)26511)))))))) & (((-318161279) * (((/* implicit */int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) (unsigned char)15)))))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_11 = 0; i_11 < 13; i_11 += 3) 
    {
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 13; i_12 += 4) 
        {
            for (short i_13 = 1; i_13 < 11; i_13 += 2) 
            {
                {
                    arr_48 [i_12] |= min((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)113))) + (((((/* implicit */_Bool) 7839679055323563073LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)55))) : (0U))))), (((/* implicit */unsigned int) (unsigned char)100)));
                    var_30 = ((/* implicit */unsigned short) max((0), (min((318161279), (((/* implicit */int) var_17))))));
                    arr_49 [8U] [(unsigned char)2] [i_13] [i_11] = ((/* implicit */long long int) ((unsigned short) ((((/* implicit */int) (unsigned char)0)) != (((/* implicit */int) (unsigned char)240)))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_14 = 2; i_14 < 11; i_14 += 4) 
        {
            for (unsigned int i_15 = 0; i_15 < 13; i_15 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_16 = 1; i_16 < 10; i_16 += 3) 
                    {
                        var_31 ^= ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)80)) && (((/* implicit */_Bool) 3226772983U))))) + (((/* implicit */int) max((var_12), (var_8))))))) & (((((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) & (2364116967U)))));
                        var_32 = ((/* implicit */unsigned int) ((((/* implicit */long long int) max((728962140U), (((/* implicit */unsigned int) (short)-8636))))) / (arr_29 [i_11] [i_14] [i_14 + 1] [i_11] [i_15] [i_16])));
                    }
                    arr_59 [i_11] [i_11] [i_14 + 1] = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) <= (((/* implicit */int) arr_40 [i_14 - 2] [8U]))));
                }
            } 
        } 
        var_33 *= max((arr_58 [i_11]), (((/* implicit */unsigned int) min((((1059137469) / (((/* implicit */int) (unsigned char)241)))), (((/* implicit */int) ((((/* implicit */int) var_4)) != (((/* implicit */int) var_8)))))))));
    }
    for (signed char i_17 = 0; i_17 < 24; i_17 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_18 = 0; i_18 < 24; i_18 += 3) /* same iter space */
        {
            var_34 = ((/* implicit */unsigned int) min((var_34), (2319946292U)));
            /* LoopNest 2 */
            for (unsigned int i_19 = 2; i_19 < 22; i_19 += 2) 
            {
                for (unsigned int i_20 = 0; i_20 < 24; i_20 += 3) 
                {
                    {
                        arr_69 [i_17] [i_18] [(short)15] [1U] = ((/* implicit */long long int) (+(((var_18) + (((/* implicit */unsigned int) ((/* implicit */int) var_19)))))));
                        var_35 = ((/* implicit */int) arr_66 [i_20] [i_18] [i_17]);
                    }
                } 
            } 
            arr_70 [i_17] = ((/* implicit */unsigned char) arr_68 [i_17] [i_18] [i_18]);
            arr_71 [i_18] [i_17] [i_17] = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)108)))))) * (((((/* implicit */long long int) ((0U) >> (((((/* implicit */int) (unsigned short)49702)) - (49673)))))) & (min((-4915584299202652856LL), (((/* implicit */long long int) (unsigned char)143))))))));
        }
        for (int i_21 = 0; i_21 < 24; i_21 += 3) /* same iter space */
        {
            arr_76 [i_17] [i_17] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (unsigned char)113)), (((((/* implicit */_Bool) arr_1 [i_17])) ? (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)154))) * (3904404627U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) (unsigned short)49616))))))));
            /* LoopSeq 1 */
            for (unsigned int i_22 = 1; i_22 < 20; i_22 += 1) 
            {
                arr_81 [13LL] [i_22] = ((/* implicit */long long int) 127);
                var_36 = ((/* implicit */long long int) var_13);
                /* LoopSeq 3 */
                for (long long int i_23 = 2; i_23 < 23; i_23 += 2) 
                {
                    var_37 += ((/* implicit */int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_82 [i_23 + 1] [i_23] [i_22 + 3] [i_22 + 4])) && (((/* implicit */_Bool) arr_4 [i_17] [i_22 - 1] [i_22 + 3]))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) max((-1190547292), (((/* implicit */int) var_17))))))))));
                    var_38 ^= ((/* implicit */unsigned long long int) var_11);
                    var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 4915584299202652856LL)) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_78 [i_22 + 3] [i_23 - 2])) ? (((0U) << (((((/* implicit */int) (signed char)-114)) + (118))))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_6))))))))));
                }
                for (unsigned short i_24 = 1; i_24 < 22; i_24 += 1) 
                {
                    var_40 = var_5;
                    arr_90 [i_24] [(signed char)22] [i_21] [i_24] = ((/* implicit */unsigned char) arr_78 [(short)4] [(unsigned char)21]);
                    var_41 = ((/* implicit */unsigned short) max((((/* implicit */int) max((arr_0 [i_22 - 1]), (arr_0 [i_22 + 4])))), (((((/* implicit */int) arr_0 [i_22 + 3])) % (((/* implicit */int) var_1))))));
                    /* LoopSeq 2 */
                    for (unsigned int i_25 = 0; i_25 < 24; i_25 += 3) 
                    {
                        arr_95 [i_24] = ((/* implicit */signed char) max((((/* implicit */long long int) (!(((/* implicit */_Bool) arr_62 [i_22 + 1]))))), (((((/* implicit */_Bool) (signed char)113)) ? (-1LL) : (((/* implicit */long long int) 0U))))));
                        arr_96 [i_17] [14U] [14U] [i_22] [i_24 + 2] [i_25] [i_17] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 4294967277U)) & (arr_83 [i_25] [i_24 + 2] [i_24 + 1] [i_22 + 3] [i_22 + 2] [i_22])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 4915584299202652854LL))))) : (((/* implicit */int) ((3910243168U) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)53979))))))));
                        arr_97 [i_25] [i_25] [i_25] [(short)16] [i_24] = ((/* implicit */int) var_4);
                    }
                    for (unsigned int i_26 = 3; i_26 < 23; i_26 += 2) 
                    {
                        arr_101 [i_17] [i_21] [i_21] [i_21] [i_24] = ((/* implicit */unsigned char) var_7);
                        var_42 = ((/* implicit */long long int) var_1);
                    }
                    var_43 = ((/* implicit */int) min((((/* implicit */unsigned int) ((arr_63 [(unsigned char)9]) < (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)61331)) ? (283164915U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)30890))))))))), (max((((/* implicit */unsigned int) min((arr_94 [i_17] [i_22] [(signed char)3] [i_22] [14]), (((/* implicit */unsigned short) arr_2 [i_21] [i_21]))))), (arr_93 [i_17] [i_17] [i_21] [i_17] [i_17] [i_17] [i_17])))));
                }
                for (unsigned int i_27 = 1; i_27 < 23; i_27 += 2) 
                {
                    var_44 &= ((/* implicit */unsigned int) (~(((/* implicit */int) ((unsigned short) (+(arr_63 [10U])))))));
                    var_45 |= ((/* implicit */unsigned char) ((long long int) (signed char)80));
                }
                var_46 += ((/* implicit */short) max((((((/* implicit */_Bool) (unsigned char)60)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_98 [i_17] [i_22 + 2] [i_22]))) : (var_10))), (((/* implicit */unsigned long long int) ((var_18) * (2297747536U))))));
            }
            arr_105 [i_21] [i_17] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)231))) & (7839679055323563058LL)));
        }
        for (signed char i_28 = 3; i_28 < 21; i_28 += 1) 
        {
            var_47 = ((/* implicit */unsigned int) max((var_47), (((/* implicit */unsigned int) (unsigned short)44765))));
            /* LoopNest 3 */
            for (unsigned short i_29 = 2; i_29 < 23; i_29 += 4) 
            {
                for (signed char i_30 = 0; i_30 < 24; i_30 += 1) 
                {
                    for (unsigned short i_31 = 3; i_31 < 23; i_31 += 2) 
                    {
                        {
                            var_48 = ((/* implicit */unsigned long long int) (+(((unsigned int) 3498986298U))));
                            var_49 |= ((/* implicit */_Bool) min((((2986694608U) & (((/* implicit */unsigned int) ((/* implicit */int) ((3863739765U) > (((/* implicit */unsigned int) ((/* implicit */int) var_16))))))))), (((/* implicit */unsigned int) ((unsigned char) arr_108 [i_28 - 3] [i_28] [i_28])))));
                            var_50 = ((/* implicit */unsigned short) ((max((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_16)) && (((/* implicit */_Bool) arr_91 [i_31 - 2] [i_30] [i_28] [i_28 + 2] [(short)10]))))))) * (((/* implicit */unsigned int) ((/* implicit */int) var_16)))));
                        }
                    } 
                } 
            } 
            var_51 = ((/* implicit */unsigned short) min((var_51), (arr_94 [i_28] [(signed char)17] [i_28] [i_17] [i_17])));
        }
        arr_118 [11U] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (signed char)113))))));
    }
    var_52 = ((/* implicit */unsigned char) var_3);
}
