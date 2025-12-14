/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23044
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23044 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23044
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
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        for (short i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 23; i_2 += 2) 
            {
                {
                    var_20 -= ((/* implicit */short) ((signed char) ((var_3) / (((/* implicit */long long int) ((/* implicit */int) ((short) var_3)))))));
                    var_21 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)2016)) << (((/* implicit */int) (signed char)18)))))));
                    var_22 -= ((/* implicit */signed char) ((((((/* implicit */int) arr_6 [i_1 + 1] [i_1 - 2])) + (((/* implicit */int) (short)-25303)))) % ((+(((/* implicit */int) var_5))))));
                    arr_8 [i_0] &= (-((~(((2826607354U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)6))))))));
                    arr_9 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned char) (-(((/* implicit */int) var_6))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned short i_3 = 0; i_3 < 17; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_4 = 4; i_4 < 15; i_4 += 3) 
        {
            arr_14 [i_4] = ((((/* implicit */int) (!(((/* implicit */_Bool) var_16))))) >> (((/* implicit */int) (((!(((/* implicit */_Bool) var_7)))) && (((/* implicit */_Bool) ((var_15) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-18))))))))));
            var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (+(((/* implicit */int) var_9)))))));
            /* LoopSeq 1 */
            for (unsigned short i_5 = 1; i_5 < 16; i_5 += 2) 
            {
                var_24 = ((/* implicit */int) min((var_24), (((/* implicit */int) ((((((/* implicit */_Bool) (signed char)18)) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)18))) - (2675454788U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 1294848313)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)80))))))) * (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_6 = 0; i_6 < 17; i_6 += 3) 
                {
                    /* LoopSeq 1 */
                    for (short i_7 = 0; i_7 < 17; i_7 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned long long int) min((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_11)) - (((/* implicit */int) var_14)))))));
                        var_26 = ((/* implicit */unsigned short) min((var_26), (((/* implicit */unsigned short) (-(2532521198939067159LL))))));
                    }
                    arr_24 [i_3] [i_3] = ((var_14) ? ((~(8388352LL))) : (((/* implicit */long long int) ((/* implicit */int) var_5))));
                }
            }
        }
        /* LoopSeq 2 */
        for (signed char i_8 = 0; i_8 < 17; i_8 += 2) 
        {
            arr_29 [i_8] [i_3] = ((/* implicit */unsigned short) var_17);
            arr_30 [i_3] [i_8] = ((/* implicit */signed char) var_14);
            /* LoopSeq 2 */
            /* vectorizable */
            for (short i_9 = 1; i_9 < 15; i_9 += 2) 
            {
                /* LoopSeq 2 */
                for (unsigned long long int i_10 = 3; i_10 < 14; i_10 += 2) /* same iter space */
                {
                    /* LoopSeq 2 */
                    for (int i_11 = 0; i_11 < 17; i_11 += 2) /* same iter space */
                    {
                        arr_37 [i_3] [i_8] [i_10] |= ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
                        var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) ((var_14) ? ((+(var_12))) : (((/* implicit */unsigned long long int) (~(-1294848313)))))))));
                        var_28 = var_18;
                    }
                    for (int i_12 = 0; i_12 < 17; i_12 += 2) /* same iter space */
                    {
                        var_29 = ((/* implicit */unsigned long long int) (+((-(1972680662U)))));
                        var_30 = ((/* implicit */short) (-(((/* implicit */int) var_7))));
                        var_31 = ((/* implicit */short) (~(((/* implicit */int) (signed char)42))));
                    }
                    arr_41 [3U] [i_8] [i_9] [i_10] |= ((/* implicit */unsigned int) var_14);
                    arr_42 [i_3] [i_8] [i_9] [i_10] [i_10] = ((/* implicit */signed char) ((((8243194570644245760ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-23731))))) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_9 - 1] [i_9])))));
                }
                for (unsigned long long int i_13 = 3; i_13 < 14; i_13 += 2) /* same iter space */
                {
                    arr_47 [i_3] [i_3] [i_3] = ((/* implicit */signed char) (-(var_12)));
                    var_32 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))) / (var_3)));
                    var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) (~((~(var_2))))))));
                    var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (signed char)3))));
                }
                arr_48 [i_3] [i_8] [i_9] = ((/* implicit */signed char) var_5);
            }
            for (signed char i_14 = 0; i_14 < 17; i_14 += 2) 
            {
                var_35 = ((/* implicit */int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))))), (var_12)));
                arr_53 [(unsigned char)12] [i_8] [i_14] = ((/* implicit */short) var_0);
            }
        }
        for (short i_15 = 2; i_15 < 16; i_15 += 2) 
        {
            arr_58 [5LL] = ((/* implicit */_Bool) var_12);
            /* LoopSeq 2 */
            /* vectorizable */
            for (_Bool i_16 = 1; i_16 < 1; i_16 += 1) 
            {
                /* LoopSeq 3 */
                for (short i_17 = 0; i_17 < 17; i_17 += 2) 
                {
                    arr_65 [i_3] [i_15] [(unsigned short)2] [i_17] = ((/* implicit */unsigned int) var_9);
                    arr_66 [i_17] [i_16 - 1] [(_Bool)0] [i_3] = ((/* implicit */short) 2311463853U);
                }
                for (unsigned long long int i_18 = 3; i_18 < 13; i_18 += 3) 
                {
                    /* LoopSeq 3 */
                    for (int i_19 = 0; i_19 < 17; i_19 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) (+(((/* implicit */int) var_5))));
                        var_37 = ((/* implicit */unsigned short) min((var_37), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_18 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))) : (var_0))))));
                        var_38 += ((/* implicit */unsigned short) var_4);
                    }
                    for (_Bool i_20 = 1; i_20 < 1; i_20 += 1) 
                    {
                        var_39 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)7)) : (((/* implicit */int) (signed char)119))))) ? (-1294848313) : ((-(((/* implicit */int) var_5))))));
                        arr_74 [i_20] [(signed char)5] [i_18] [i_18] [i_18] [i_15] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) var_14))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)118)) < (((/* implicit */int) (signed char)-126)))))) : (var_15)));
                        var_40 = ((/* implicit */long long int) var_8);
                        var_41 = ((/* implicit */short) (-((+(var_0)))));
                        var_42 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_16)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))) / (arr_18 [i_18 - 2] [i_20 - 1])));
                    }
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_43 = ((/* implicit */unsigned int) (+(((/* implicit */int) arr_36 [i_16 - 1] [i_16] [i_16] [i_16 - 1] [i_16]))));
                        var_44 = ((/* implicit */signed char) (+(((/* implicit */int) var_11))));
                        var_45 = ((/* implicit */signed char) ((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        var_46 = ((/* implicit */short) (_Bool)1);
                        var_47 = ((/* implicit */_Bool) ((((/* implicit */long long int) 2634719511U)) | ((+(var_3)))));
                    }
                    var_48 = ((/* implicit */short) (((-(((/* implicit */int) var_6)))) << (((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)244)))) + (53)))));
                    var_49 -= ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) (signed char)18))))));
                }
                for (signed char i_22 = 0; i_22 < 17; i_22 += 3) 
                {
                    /* LoopSeq 3 */
                    for (short i_23 = 0; i_23 < 17; i_23 += 3) 
                    {
                        arr_86 [i_23] [i_22] [i_16 - 1] [i_22] [i_3] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_16))));
                        var_50 -= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_17))));
                        arr_87 [i_22] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) var_7)) << (((var_15) - (1781583973U))))))));
                        var_51 = ((/* implicit */long long int) min((var_51), (((/* implicit */long long int) ((short) arr_59 [i_16 - 1] [i_15 - 1] [i_16] [4LL])))));
                        var_52 = ((/* implicit */long long int) ((unsigned char) (~(var_8))));
                    }
                    for (_Bool i_24 = 0; i_24 < 0; i_24 += 1) 
                    {
                        var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((short) var_8)))));
                        arr_92 [i_3] [i_22] [i_24 + 1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) - (arr_60 [i_15 - 2])));
                        var_54 = ((/* implicit */unsigned short) ((unsigned int) arr_88 [i_3] [i_15 - 2] [i_24 + 1] [i_24 + 1] [i_24]));
                        var_55 += ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                    }
                    for (int i_25 = 0; i_25 < 17; i_25 += 3) 
                    {
                        var_56 = (!(((/* implicit */_Bool) ((var_8) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)18)))))));
                        var_57 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_19))));
                    }
                    var_58 = ((/* implicit */_Bool) max((var_58), (((/* implicit */_Bool) var_4))));
                    var_59 = ((/* implicit */signed char) min((var_59), (((/* implicit */signed char) 1294848337))));
                }
                var_60 = ((/* implicit */_Bool) max((var_60), ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) 140187732541440LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_9)))))))));
                var_61 = ((/* implicit */short) min((var_61), (((/* implicit */short) (((+(284350253U))) > (((((/* implicit */_Bool) 1294848312)) ? (1468359942U) : (((/* implicit */unsigned int) 1294848337)))))))));
                /* LoopSeq 2 */
                for (long long int i_26 = 3; i_26 < 13; i_26 += 3) 
                {
                    var_62 ^= ((/* implicit */long long int) ((short) var_18));
                    var_63 = ((/* implicit */_Bool) max((var_63), (((((/* implicit */int) (short)-18746)) <= (((/* implicit */int) (signed char)18))))));
                }
                for (int i_27 = 0; i_27 < 17; i_27 += 2) 
                {
                    var_64 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                    var_65 &= ((/* implicit */signed char) (~(((/* implicit */int) arr_21 [i_16 - 1]))));
                }
            }
            for (unsigned long long int i_28 = 0; i_28 < 17; i_28 += 2) 
            {
                arr_104 [i_28] = ((((/* implicit */_Bool) (signed char)-16)) ? ((-(1170098977U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_16))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (long long int i_29 = 3; i_29 < 16; i_29 += 2) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_30 = 2; i_30 < 14; i_30 += 2) 
                    {
                        var_66 &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_14))));
                        var_67 = ((/* implicit */short) min((var_67), (((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) -1815890071664467060LL))))))))));
                    }
                    var_68 = ((/* implicit */unsigned int) max((var_68), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)32440)))))));
                    arr_109 [i_3] [i_15] [i_28] = ((/* implicit */_Bool) var_13);
                }
                for (long long int i_31 = 1; i_31 < 16; i_31 += 2) 
                {
                    arr_114 [(_Bool)1] [(_Bool)1] [(_Bool)1] [i_31] = ((/* implicit */long long int) (~(((unsigned int) (~(var_3))))));
                    var_69 = ((/* implicit */signed char) min((var_69), (((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)-22142))))) ? (((/* implicit */long long int) ((/* implicit */int) (short)-28546))) : (-140187732541441LL))))));
                    var_70 = ((/* implicit */unsigned char) ((min((-1294848313), (((/* implicit */int) arr_62 [i_31 + 1] [i_15 - 1] [i_15 + 1])))) / (max((1294848340), (((/* implicit */int) (_Bool)1))))));
                    arr_115 [i_3] [i_15] [i_28] [i_31] = ((/* implicit */short) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */int) var_13)) >= (((/* implicit */int) var_4))))))))));
                }
            }
        }
        /* LoopSeq 1 */
        for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
        {
            var_71 = ((/* implicit */signed char) ((min((var_2), (((/* implicit */unsigned int) var_1)))) > (((/* implicit */unsigned int) ((((/* implicit */_Bool) 16U)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (_Bool)0)))))));
            var_72 = ((/* implicit */long long int) max((var_72), (((/* implicit */long long int) (~(min((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-9707)) : (1307142819))), (((/* implicit */int) min((((/* implicit */signed char) var_14)), (var_4)))))))))));
            var_73 = ((/* implicit */short) max((var_73), (((/* implicit */short) (signed char)33))));
            var_74 *= ((/* implicit */short) max((((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_8))))), (var_19)))), (var_2)));
        }
        arr_118 [i_3] [i_3] = ((/* implicit */short) (signed char)-18);
    }
    for (_Bool i_33 = 1; i_33 < 1; i_33 += 1) 
    {
        var_75 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))), (((long long int) max((((/* implicit */long long int) (signed char)-61)), (var_3))))));
        arr_122 [i_33] = ((/* implicit */unsigned int) ((((((/* implicit */int) (short)0)) * ((+(((/* implicit */int) (_Bool)1)))))) > ((+(((/* implicit */int) arr_16 [(unsigned char)13] [i_33] [(unsigned char)13]))))));
        /* LoopNest 2 */
        for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
        {
            for (short i_35 = 2; i_35 < 14; i_35 += 2) 
            {
                {
                    var_76 &= ((long long int) var_4);
                    arr_128 [i_33] [i_34] = ((short) 1U);
                }
            } 
        } 
    }
    for (unsigned int i_36 = 0; i_36 < 11; i_36 += 2) 
    {
        var_77 = ((/* implicit */signed char) min((var_77), (((/* implicit */signed char) (((_Bool)1) ? (((/* implicit */int) ((short) var_14))) : ((-2147483647 - 1)))))));
        arr_131 [i_36] = ((/* implicit */unsigned char) (-((~(((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) ^ (var_17)))))));
        arr_132 [i_36] = ((/* implicit */unsigned long long int) max((min((((/* implicit */unsigned int) var_18)), (var_2))), (max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (133523363U))), (var_0)))));
    }
    var_78 = ((/* implicit */unsigned int) min((var_78), (((/* implicit */unsigned int) var_7))));
}
