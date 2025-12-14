/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208622
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
    var_17 = ((/* implicit */signed char) -5305770376370050808LL);
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 16; i_2 += 1) 
            {
                {
                    var_18 *= ((/* implicit */short) (unsigned short)9746);
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */long long int) ((unsigned char) (unsigned char)70));
                                var_20 += ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_13 [i_2] [i_2 - 1] [i_2 + 2] [i_2 + 2] [i_2 - 1])) ? (((/* implicit */unsigned long long int) -5305770376370050825LL)) : (((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_14)))))))));
                                var_21 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_3] [i_2 - 1] [i_1] [i_0]))) : (((((/* implicit */_Bool) var_8)) ? (18391296088348916722ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0])))))))) ? ((-(((/* implicit */int) arr_6 [i_1] [i_2])))) : (((/* implicit */int) (unsigned char)115))));
                                var_22 = ((/* implicit */signed char) min((var_22), ((signed char)92)));
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_14 [i_0] = ((/* implicit */unsigned char) var_5);
        var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((var_0), (((/* implicit */unsigned long long int) var_9)))), ((+(55447985360634901ULL)))))) ? ((-(((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned long long int) var_4)))))) : (((/* implicit */unsigned long long int) (~(arr_10 [(short)0])))))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned short i_6 = 0; i_6 < 22; i_6 += 1) 
        {
            var_24 = ((/* implicit */long long int) (~(((/* implicit */int) var_14))));
            /* LoopSeq 3 */
            for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned short i_8 = 0; i_8 < 22; i_8 += 3) 
                {
                    for (int i_9 = 3; i_9 < 19; i_9 += 1) 
                    {
                        {
                            arr_29 [i_5] [i_8] [i_7] [i_6] [i_5] = 55447985360634893ULL;
                            var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (+(((/* implicit */int) arr_23 [i_6] [i_6] [i_9])))))));
                        }
                    } 
                } 
                arr_30 [i_5] [i_6] [i_6] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) arr_21 [i_6] [i_7 + 1] [i_7 + 1])) ? (arr_21 [i_6] [i_7 + 1] [12ULL]) : (arr_21 [i_7 + 1] [i_7 + 1] [i_7 + 1])));
                var_26 -= ((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-92))));
            }
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                /* LoopSeq 4 */
                for (long long int i_11 = 2; i_11 < 20; i_11 += 1) 
                {
                    var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) 18391296088348916723ULL))));
                    var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) var_7))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) 18391296088348916730ULL)))))));
                }
                for (int i_12 = 1; i_12 < 20; i_12 += 2) /* same iter space */
                {
                    var_29 = ((/* implicit */unsigned long long int) ((((((((/* implicit */int) (short)-30615)) + (2147483647))) << (((5305770376370050802LL) - (5305770376370050802LL))))) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6] [i_10] [i_10])))))));
                    /* LoopSeq 3 */
                    for (int i_13 = 0; i_13 < 22; i_13 += 1) 
                    {
                        var_30 -= ((/* implicit */long long int) ((((/* implicit */_Bool) -5305770376370050803LL)) ? (((/* implicit */int) arr_33 [i_12 + 1] [i_12 - 1] [i_12] [i_12 + 2])) : (((/* implicit */int) (_Bool)1))));
                        var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)-30600))));
                        var_32 *= ((/* implicit */unsigned short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) * ((~(var_6)))));
                        arr_39 [i_13] [i_5] [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) var_12)) * (4400975971886053767ULL)));
                    }
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) /* same iter space */
                    {
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) 15158643763180035348ULL))));
                        arr_42 [(_Bool)1] [i_6] [i_10] [i_12 + 1] [i_6] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-30615)) ? (((/* implicit */int) (unsigned short)58172)) : (var_4)));
                    }
                    for (_Bool i_15 = 0; i_15 < 0; i_15 += 1) /* same iter space */
                    {
                        var_34 ^= ((/* implicit */int) ((((/* implicit */_Bool) 1141020663)) ? (var_3) : (arr_28 [i_12 + 2] [(unsigned char)6] [(unsigned char)6] [i_15 + 1])));
                        var_35 = ((/* implicit */unsigned int) max((var_35), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) (short)-26382)) ? (((/* implicit */int) (unsigned char)87)) : (((/* implicit */int) (unsigned short)58169)))) / (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)17353)) : (((/* implicit */int) var_15)))))))));
                        var_36 = ((/* implicit */int) max((var_36), (var_6)));
                        var_37 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)7363))));
                        arr_46 [i_5] [i_5] [4LL] [4LL] [i_5] [4LL] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_5]))));
                    }
                }
                for (int i_16 = 1; i_16 < 20; i_16 += 2) /* same iter space */
                {
                    var_38 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)178)) / (((/* implicit */int) var_8))));
                    var_39 = ((/* implicit */short) min((var_39), (arr_47 [16] [i_6] [i_6] [16])));
                }
                for (unsigned short i_17 = 3; i_17 < 20; i_17 += 2) 
                {
                    var_40 = ((/* implicit */unsigned char) (-((-(((/* implicit */int) (unsigned short)58163))))));
                    var_41 = ((/* implicit */long long int) (-((~(((/* implicit */int) (unsigned short)36831))))));
                    var_42 = ((/* implicit */short) (~(((/* implicit */int) arr_49 [i_17] [i_5]))));
                    var_43 = ((/* implicit */short) (unsigned char)77);
                }
                /* LoopNest 2 */
                for (short i_18 = 3; i_18 < 20; i_18 += 1) 
                {
                    for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
                    {
                        {
                            var_44 *= ((((/* implicit */int) arr_50 [i_5] [i_6] [i_10] [i_18 + 1] [i_19 + 1])) / (((/* implicit */int) arr_18 [2LL])));
                            arr_60 [i_5] [i_5] [i_18] [i_5] [(unsigned char)20] = ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)58161))));
                            arr_61 [i_19] [i_19] [i_5] [i_5] [i_6] [i_5] = ((/* implicit */signed char) ((short) (unsigned char)53));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_20 = 0; i_20 < 22; i_20 += 3) 
                {
                    for (short i_21 = 1; i_21 < 21; i_21 += 2) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) arr_18 [i_5]);
                            arr_67 [i_5] [i_6] = ((/* implicit */long long int) (signed char)-95);
                            arr_68 [i_5] [20U] [i_5] [i_5] [i_5] |= var_1;
                        }
                    } 
                } 
            }
            for (short i_22 = 1; i_22 < 20; i_22 += 2) 
            {
                /* LoopNest 2 */
                for (short i_23 = 0; i_23 < 22; i_23 += 2) 
                {
                    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
                    {
                        {
                            var_46 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) (unsigned short)7373)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_14)))) << ((((~(((/* implicit */int) arr_44 [i_5] [i_23] [i_22] [i_5] [i_24])))) + (116)))));
                            var_47 = ((/* implicit */long long int) var_8);
                            var_48 = ((/* implicit */int) ((((/* implicit */_Bool) arr_74 [i_24 - 1] [i_24 - 1] [(unsigned short)14] [i_24 - 1] [i_24 - 1])) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_62 [i_24 - 1] [i_24 - 1] [i_24] [i_24 - 1] [i_24 - 1])))));
                            var_49 = (+(((/* implicit */int) var_7)));
                            var_50 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)-5837))));
                        }
                    } 
                } 
                var_51 = ((/* implicit */signed char) (~(arr_35 [i_5] [i_6] [i_5])));
            }
        }
        for (short i_25 = 2; i_25 < 21; i_25 += 3) 
        {
            var_52 -= ((/* implicit */int) (unsigned short)7363);
            var_53 = ((/* implicit */short) ((min((var_3), (((/* implicit */unsigned long long int) arr_24 [i_5] [i_5] [i_25 + 1] [i_25 - 2])))) << (((((/* implicit */int) max((((/* implicit */unsigned char) arr_24 [i_25 - 1] [i_5] [i_5] [i_5])), ((unsigned char)230)))) - (218)))));
        }
        for (unsigned long long int i_26 = 3; i_26 < 20; i_26 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_27 = 1; i_27 < 20; i_27 += 3) 
            {
                /* LoopSeq 2 */
                for (unsigned int i_28 = 1; i_28 < 20; i_28 += 4) /* same iter space */
                {
                    var_54 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_26])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-5837))));
                    var_55 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_6)) : (arr_28 [i_27 + 2] [i_5] [i_27 + 2] [i_26 - 1])));
                    arr_91 [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 963267681U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_11))))) : (arr_28 [i_27 + 2] [i_5] [(short)12] [i_27 + 2])));
                }
                for (unsigned int i_29 = 1; i_29 < 20; i_29 += 4) /* same iter space */
                {
                    var_56 = ((/* implicit */_Bool) arr_81 [(signed char)2] [i_5]);
                    var_57 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)119))));
                }
                arr_94 [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_3))));
            }
            arr_95 [i_5] [i_5] [i_26] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)73))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_11))));
            var_58 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) var_7))))));
        }
        for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
        {
            var_59 = ((/* implicit */int) (~(5305770376370050805LL)));
            var_60 = ((/* implicit */short) min(((-(((/* implicit */int) var_5)))), ((-(((((/* implicit */_Bool) arr_58 [i_5] [1] [i_5] [(unsigned char)15] [i_30])) ? (((/* implicit */int) (unsigned short)7358)) : (((/* implicit */int) arr_17 [i_5]))))))));
            var_61 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) (unsigned short)7363)) ? (-5709541857624696885LL) : (-8567236101374268019LL))));
            arr_99 [i_5] = ((/* implicit */long long int) var_5);
        }
        arr_100 [i_5] = ((/* implicit */unsigned char) (-(((/* implicit */int) min((((/* implicit */unsigned char) (signed char)74)), ((unsigned char)169))))));
        var_62 = ((/* implicit */short) var_14);
    }
}
