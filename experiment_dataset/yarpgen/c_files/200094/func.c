/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200094
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
    var_18 = ((/* implicit */long long int) var_9);
    var_19 = ((/* implicit */signed char) var_7);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 3) 
    {
        var_20 |= ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */int) var_14)) << (((arr_2 [10U]) + (152586504)))))) | ((-(9223372036854775807LL)))));
        var_21 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(_Bool)1])) ? (((/* implicit */long long int) arr_2 [22LL])) : (arr_1 [(short)22])))) ? (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned long long int) arr_0 [i_0]))))) ? ((-(arr_1 [(signed char)4]))) : (((/* implicit */long long int) (~(arr_2 [(short)20])))))) : (((((/* implicit */_Bool) arr_2 [22])) ? (((-1911138849237144400LL) / (((/* implicit */long long int) ((/* implicit */int) var_7))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [(short)6])) ? (arr_2 [(signed char)2]) : (((/* implicit */int) arr_0 [i_0])))))))));
        /* LoopNest 2 */
        for (long long int i_1 = 2; i_1 < 21; i_1 += 3) 
        {
            for (signed char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    arr_7 [i_0] [0U] [i_1 + 1] [14LL] |= ((/* implicit */long long int) ((arr_4 [8LL]) & (max((arr_4 [(signed char)2]), (var_13)))));
                    var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max(((unsigned char)31), (((/* implicit */unsigned char) (signed char)10)))))));
                    arr_8 [i_0] [i_0] = ((/* implicit */signed char) max((((((/* implicit */int) var_6)) == (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_0] [i_0]))))))), ((!(((/* implicit */_Bool) ((unsigned long long int) var_4)))))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 3; i_3 < 22; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_23 = ((/* implicit */unsigned short) min((var_23), (((/* implicit */unsigned short) ((16494072903613430514ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-82))))))));
                                arr_16 [i_0] [i_1] [i_2] [i_0] [i_3] [i_4] = ((/* implicit */signed char) min((max((max((5375540810464994676ULL), (17087919791860569540ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)-82)), (1356450278U)))))), (((min((arr_13 [i_0] [(_Bool)1] [i_0] [i_0 + 1] [i_0 - 3] [i_0 + 1]), (((/* implicit */unsigned long long int) var_11)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) 4796508550104783028ULL)))))))));
                                arr_17 [i_0] [i_1] [i_4] [i_3 - 2] [18LL] |= ((/* implicit */int) ((max((((((/* implicit */long long int) ((/* implicit */int) var_15))) == (arr_1 [i_4]))), (var_4))) ? (((/* implicit */long long int) ((arr_9 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]) << (((/* implicit */int) ((((/* implicit */_Bool) arr_14 [i_1] [i_2] [i_4])) && (((/* implicit */_Bool) var_17)))))))) : (min((((/* implicit */long long int) max((((/* implicit */signed char) (_Bool)0)), ((signed char)5)))), ((+(arr_1 [i_4])))))));
                                var_24 -= ((/* implicit */int) max((9223372036854775807LL), (((/* implicit */long long int) 0U))));
                            }
                        } 
                    } 
                }
            } 
        } 
        /* LoopSeq 2 */
        for (long long int i_5 = 0; i_5 < 23; i_5 += 2) 
        {
            var_25 = ((/* implicit */signed char) ((min((arr_13 [i_0] [i_0] [i_0 - 2] [i_0 - 2] [i_0 - 4] [i_5]), (arr_13 [i_0] [i_0] [i_0 - 2] [i_0 + 1] [i_0 + 2] [i_5]))) + (((((/* implicit */_Bool) arr_13 [i_0] [i_0 + 2] [i_0 - 2] [i_0 + 2] [i_0 + 2] [i_5])) ? (arr_13 [i_0] [i_0 + 1] [i_0 + 1] [i_0 - 4] [i_0 - 2] [i_0]) : (arr_13 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0 + 2] [i_0 - 1] [i_5])))));
            arr_21 [18ULL] [i_0] [i_5] = ((/* implicit */unsigned short) arr_18 [i_0] [i_0] [i_5]);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
            {
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) (-(arr_13 [i_0] [i_5] [i_5] [i_5] [12U] [i_6])))) ? (arr_25 [i_0 - 4] [i_5] [i_6]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 2; i_7 < 22; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 23; i_8 += 2) 
                    {
                        {
                            var_27 = ((/* implicit */_Bool) arr_0 [i_7]);
                            var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_20 [i_6 + 2] [i_6 + 2] [i_7 - 2]))));
                            arr_32 [i_0] [17LL] [i_6] = ((/* implicit */signed char) var_16);
                            arr_33 [i_0] [4U] [i_6] = ((/* implicit */signed char) arr_10 [i_7 - 1] [i_7 - 1] [i_6 + 1] [i_7] [i_6 + 1] [11LL]);
                            var_29 = ((/* implicit */_Bool) (+(3082848596U)));
                        }
                    } 
                } 
                arr_34 [i_0 - 4] [i_5] [i_0] = ((/* implicit */short) arr_20 [i_6] [i_0 + 1] [i_0]);
                var_30 = ((/* implicit */signed char) max((var_30), (var_12)));
            }
            /* LoopNest 3 */
            for (long long int i_9 = 3; i_9 < 22; i_9 += 3) 
            {
                for (unsigned long long int i_10 = 0; i_10 < 23; i_10 += 1) 
                {
                    for (unsigned char i_11 = 1; i_11 < 21; i_11 += 3) 
                    {
                        {
                            var_31 *= ((/* implicit */unsigned long long int) ((((((((/* implicit */_Bool) arr_20 [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned long long int) arr_14 [i_0] [i_0 + 1] [9LL])) : (810377004394221683ULL))) << (((var_16) - (2130474961))))) == (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) (signed char)-82))))));
                            arr_42 [i_5] [i_5] [i_0] [i_10] = ((/* implicit */_Bool) arr_30 [i_0] [17LL] [9LL] [9LL] [i_9] [i_10] [i_11]);
                        }
                    } 
                } 
            } 
        }
        for (unsigned short i_12 = 3; i_12 < 21; i_12 += 2) 
        {
            var_32 = (i_0 % 2 == 0) ? (((/* implicit */signed char) min(((((((~(2478986655504475562LL))) + (9223372036854775807LL))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12] [i_12 - 2] [i_0] [i_0 - 4]))) ^ (var_1))) - (3476874438452047274LL))))), (((/* implicit */long long int) (((+(((/* implicit */int) arr_46 [i_12] [i_12] [i_0 + 1])))) >> (((((((/* implicit */unsigned long long int) arr_41 [i_0] [i_0 + 2] [i_0] [i_0] [i_12] [i_12])) | (arr_18 [i_0] [i_0] [i_0]))) - (17426352061750181609ULL))))))))) : (((/* implicit */signed char) min(((((((~(2478986655504475562LL))) + (9223372036854775807LL))) << (((((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_12] [i_12 - 2] [i_0] [i_0 - 4]))) ^ (var_1))) - (3476874438452047274LL))))), (((/* implicit */long long int) (((+(((/* implicit */int) arr_46 [i_12] [i_12] [i_0 + 1])))) >> (((((((((/* implicit */unsigned long long int) arr_41 [i_0] [i_0 + 2] [i_0] [i_0] [i_12] [i_12])) | (arr_18 [i_0] [i_0] [i_0]))) - (17426352061750181609ULL))) - (18444396612896653294ULL)))))))));
            var_33 = ((/* implicit */unsigned short) (-(-5151952971343504044LL)));
            /* LoopSeq 1 */
            for (unsigned long long int i_13 = 2; i_13 < 20; i_13 += 3) 
            {
                var_34 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_44 [i_0])) ? (((/* implicit */long long int) arr_44 [i_0])) : (6137496059421032980LL))), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) ^ (arr_44 [i_0]))))));
                /* LoopSeq 2 */
                for (unsigned int i_14 = 3; i_14 < 22; i_14 += 3) 
                {
                    arr_53 [i_0] [i_13 + 1] [i_12] [i_12 - 1] [i_12 + 1] [i_0] = ((/* implicit */signed char) ((-8751556983577935368LL) / (((/* implicit */long long int) ((/* implicit */int) (signed char)7)))));
                    var_35 = ((/* implicit */unsigned short) min((var_35), (((/* implicit */unsigned short) var_4))));
                }
                for (short i_15 = 1; i_15 < 19; i_15 += 1) 
                {
                    var_36 -= ((((/* implicit */_Bool) arr_26 [i_0] [i_0 + 1] [i_0] [i_13] [2U] [2U])) ? (((/* implicit */long long int) ((((/* implicit */int) (short)18895)) | (((/* implicit */int) (short)-4313))))) : (max((((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)65535))))), (((((/* implicit */long long int) ((/* implicit */int) var_4))) | (var_1))))));
                    /* LoopSeq 2 */
                    for (long long int i_16 = 1; i_16 < 20; i_16 += 3) 
                    {
                        var_37 = ((/* implicit */long long int) max((var_37), (((/* implicit */long long int) arr_49 [i_0 - 4] [i_0] [i_0 + 2]))));
                        var_38 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_52 [i_16 + 2] [i_15] [i_12] [i_0 + 2]))) / (((arr_18 [i_0] [i_13] [i_16]) * (((3099406160057699092ULL) * (((/* implicit */unsigned long long int) arr_36 [i_0] [i_12 - 3] [i_0] [i_15]))))))));
                        var_39 -= ((/* implicit */int) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_35 [i_12 + 1] [i_13 + 3] [i_16 + 3]))))), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_16))))), (((unsigned long long int) arr_54 [(short)2] [(short)2] [(short)2] [i_0]))))));
                        arr_59 [22ULL] |= ((/* implicit */unsigned long long int) (short)-18896);
                    }
                    for (long long int i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        var_40 = ((/* implicit */int) (~(max((((/* implicit */long long int) arr_56 [14ULL] [i_12] [i_13 + 1] [i_15] [i_17])), (arr_45 [i_0 - 1] [i_0])))));
                        var_41 |= ((/* implicit */int) var_14);
                    }
                }
                arr_62 [i_0] [i_12 - 3] [i_13] = ((/* implicit */_Bool) ((1208121364569292697ULL) >> ((((+(min((((/* implicit */unsigned long long int) arr_22 [i_0 - 1] [15LL] [i_13])), (var_17))))) - (2220439579085824448ULL)))));
            }
            /* LoopNest 2 */
            for (unsigned char i_18 = 1; i_18 < 22; i_18 += 3) 
            {
                for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                {
                    {
                        var_42 = ((/* implicit */short) max((var_42), (((/* implicit */short) arr_41 [i_0] [i_12] [(_Bool)1] [i_18 + 1] [i_0] [i_19]))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_20 = 0; i_20 < 23; i_20 += 3) 
                        {
                            arr_72 [i_0] [(_Bool)1] |= min((arr_41 [i_0] [i_12 - 1] [18] [i_12 - 1] [i_20] [i_0 + 2]), (((/* implicit */long long int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned short)1))))));
                            var_43 ^= ((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) | (((/* implicit */int) (!(((/* implicit */_Bool) arr_28 [(unsigned char)18] [i_18] [(unsigned char)18]))))))) < (((((/* implicit */_Bool) (-(((/* implicit */int) (short)-18895))))) ? (((/* implicit */int) ((((/* implicit */int) arr_66 [i_0] [i_0] [i_0 - 2] [14LL])) < (((/* implicit */int) var_3))))) : ((+(arr_39 [(_Bool)1] [i_19] [i_20])))))));
                            var_44 = ((/* implicit */unsigned int) arr_64 [15ULL] [i_12] [i_12]);
                        }
                        for (signed char i_21 = 4; i_21 < 22; i_21 += 3) 
                        {
                            var_45 *= ((/* implicit */unsigned int) min(((!(((/* implicit */_Bool) ((long long int) var_12))))), (((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) ((unsigned short) var_15)))))));
                            var_46 ^= ((/* implicit */short) (~(max((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_66 [(short)10] [i_19] [i_18] [(short)10])), (arr_3 [i_0] [i_0 - 3])))), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-30452))) | (var_0)))))));
                            arr_76 [i_12 - 3] [(_Bool)1] [(_Bool)1] [i_19] [18] |= ((/* implicit */signed char) max((((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_18 - 1] [i_12] [i_18]))))), ((+(((/* implicit */int) arr_22 [i_18 - 1] [i_18 - 1] [i_18]))))));
                        }
                        for (signed char i_22 = 0; i_22 < 23; i_22 += 3) 
                        {
                            arr_79 [i_0 + 1] [i_12] [i_18] [i_19] [i_0] = ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */_Bool) ((arr_57 [i_0 + 1] [i_0]) ? (((/* implicit */int) arr_22 [i_12] [i_12] [i_18 + 1])) : (((/* implicit */int) arr_24 [i_19] [i_18] [i_12] [i_0]))))) && (((arr_13 [i_12] [i_12] [i_12] [i_12 - 1] [i_12 + 1] [i_12 + 1]) < (var_13))))))));
                            arr_80 [i_0] [i_12 - 2] [i_0] [i_19] [i_22] [i_0] [i_18] = ((/* implicit */unsigned long long int) max(((-(((/* implicit */int) ((signed char) 1952671170096121110ULL))))), ((-(((/* implicit */int) ((short) (signed char)-96)))))));
                            arr_81 [(signed char)4] [i_0] [i_0] [i_19] [i_19] [(_Bool)1] [(signed char)4] = -3874169547634123691LL;
                            var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) (+(((unsigned long long int) 1952671170096121101ULL)))))));
                        }
                        for (short i_23 = 0; i_23 < 23; i_23 += 3) 
                        {
                            var_48 -= ((/* implicit */signed char) (~((((-(var_0))) | (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_52 [i_0 - 3] [(_Bool)1] [i_0] [i_0 + 2])))))))));
                            var_49 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_68 [i_0 + 1] [i_0] [i_0] [(short)12]))));
                            var_50 = ((/* implicit */short) var_0);
                            arr_84 [11LL] [i_12 - 2] [i_0] [i_19] [i_23] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)19269)), (0U)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (arr_15 [i_0 - 3] [i_12] [i_18 - 1] [i_12 + 1] [i_18 - 1] [i_19])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_47 [i_12]), (((/* implicit */signed char) var_4)))))) == (((arr_3 [i_23] [i_18]) | (arr_44 [i_0])))))) : (((/* implicit */int) var_14))));
                        }
                        var_51 *= ((/* implicit */unsigned long long int) 2708522357U);
                        arr_85 [i_0] [2U] [i_12 - 2] [i_0] [i_18 + 1] [i_18 + 1] = ((/* implicit */unsigned short) (+(((unsigned long long int) min((var_5), (var_9))))));
                        var_52 = ((/* implicit */short) arr_65 [i_0] [i_12] [i_0]);
                    }
                } 
            } 
        }
    }
    for (unsigned char i_24 = 0; i_24 < 17; i_24 += 1) 
    {
        arr_90 [8ULL] = ((/* implicit */long long int) ((((_Bool) var_7)) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) -3874577651006531400LL)) & (arr_83 [i_24] [i_24] [i_24] [i_24] [i_24] [i_24] [i_24]))))));
        arr_91 [i_24] &= ((/* implicit */signed char) arr_3 [18] [i_24]);
    }
    for (unsigned short i_25 = 0; i_25 < 24; i_25 += 3) 
    {
        arr_96 [i_25] = ((/* implicit */unsigned short) ((((/* implicit */int) (short)30435)) == (-325422711)));
        arr_97 [i_25] = ((/* implicit */signed char) min((((-393395654) ^ (((/* implicit */int) (unsigned short)1)))), (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(arr_93 [i_25]))))) != (((arr_93 [i_25]) ? (arr_94 [i_25]) : (arr_94 [i_25]))))))));
        /* LoopSeq 3 */
        for (long long int i_26 = 1; i_26 < 22; i_26 += 1) 
        {
            arr_100 [i_25] = ((/* implicit */unsigned short) arr_99 [i_25] [i_25] [i_26]);
            arr_101 [i_25] = ((/* implicit */signed char) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_4)), (arr_94 [i_25]))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) var_12))))))))));
        }
        for (unsigned int i_27 = 1; i_27 < 22; i_27 += 3) 
        {
            var_53 = ((/* implicit */unsigned char) min((var_53), (((/* implicit */unsigned char) (~((-(((/* implicit */int) arr_102 [i_27 + 1] [i_27 + 1] [i_27 - 1])))))))));
            arr_105 [17ULL] [17ULL] [i_27 + 2] = ((/* implicit */unsigned long long int) ((_Bool) ((unsigned long long int) arr_102 [i_25] [i_25] [i_25])));
        }
        for (unsigned long long int i_28 = 0; i_28 < 24; i_28 += 1) 
        {
            /* LoopNest 2 */
            for (short i_29 = 0; i_29 < 24; i_29 += 2) 
            {
                for (_Bool i_30 = 1; i_30 < 1; i_30 += 1) 
                {
                    {
                        arr_113 [i_30] [(_Bool)1] [(_Bool)1] [i_29] [i_30] = ((/* implicit */unsigned short) var_5);
                        var_54 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_109 [i_30 - 1] [i_30] [i_30 - 1] [i_30]), (arr_109 [i_29] [0LL] [i_30 - 1] [i_30 - 1])))) ? (((/* implicit */unsigned long long int) ((arr_103 [i_30 - 1] [i_30 - 1] [i_30 - 1]) ? (((/* implicit */int) arr_106 [i_30 - 1])) : (((/* implicit */int) (short)-19265))))) : (((var_17) << (((/* implicit */int) arr_109 [i_25] [i_25] [i_30 - 1] [22LL]))))));
                    }
                } 
            } 
            arr_114 [i_25] [i_28] [i_28] |= ((_Bool) arr_102 [i_25] [i_25] [i_25]);
        }
        arr_115 [i_25] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min((var_14), (((/* implicit */short) arr_103 [i_25] [i_25] [i_25]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (max((var_5), (((/* implicit */unsigned long long int) var_6)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_95 [i_25])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_103 [i_25] [i_25] [i_25]))) : (var_17)))) ? (arr_108 [i_25] [i_25] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_110 [i_25] [i_25]))))))));
    }
    var_55 = ((/* implicit */signed char) min(((-(((((/* implicit */_Bool) 2U)) ? (((/* implicit */int) (short)-30452)) : (((/* implicit */int) (signed char)-82)))))), (((/* implicit */int) var_7))));
    var_56 = var_4;
}
