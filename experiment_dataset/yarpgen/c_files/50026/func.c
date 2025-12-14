/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50026
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
    var_12 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) (unsigned char)153)), (((((/* implicit */_Bool) ((short) var_2))) ? (((var_11) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))));
    var_13 = ((/* implicit */short) 414796327U);
    var_14 = ((/* implicit */short) ((((/* implicit */int) (signed char)87)) != (((((/* implicit */int) var_7)) >> (((var_2) - (13183135918199989080ULL)))))));
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        {
                            arr_12 [i_0] [(_Bool)1] [i_0] [i_0] [i_1] [4U] = ((/* implicit */int) (((-(((/* implicit */int) arr_0 [i_0] [i_2])))) >= (((/* implicit */int) ((((/* implicit */int) arr_0 [i_2] [i_2])) < (((/* implicit */int) arr_11 [i_1] [i_2])))))));
                            var_15 = ((/* implicit */int) ((long long int) (+(((/* implicit */int) arr_11 [i_3] [i_1])))));
                        }
                    } 
                } 
                var_16 = ((((/* implicit */_Bool) (-(((/* implicit */int) var_10))))) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned int) (+(((/* implicit */int) ((8938105829351954199ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)90))))))))));
                arr_13 [i_1] = ((/* implicit */signed char) ((3880170971U) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)67)))));
                /* LoopNest 2 */
                for (signed char i_4 = 0; i_4 < 14; i_4 += 3) 
                {
                    for (unsigned char i_5 = 1; i_5 < 12; i_5 += 3) 
                    {
                        {
                            arr_22 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_5] [i_0] [i_4] [i_4] [i_1] [i_0])) ? (((/* implicit */int) ((((/* implicit */int) (signed char)-98)) > (max((((/* implicit */int) (signed char)-67)), (-2147483628)))))) : (min((((/* implicit */int) ((((/* implicit */_Bool) (short)-28662)) && (((/* implicit */_Bool) var_2))))), ((-(((/* implicit */int) (unsigned short)53236))))))));
                            var_17 = ((/* implicit */unsigned short) arr_6 [i_1]);
                            arr_23 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_9)) ? (arr_20 [i_0] [i_1] [i_1] [i_4] [i_5]) : (((/* implicit */int) max(((short)(-32767 - 1)), (((/* implicit */short) ((signed char) arr_6 [i_1]))))))));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 4 */
    for (int i_6 = 0; i_6 < 10; i_6 += 2) 
    {
        /* LoopNest 2 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (int i_8 = 4; i_8 < 9; i_8 += 3) 
            {
                {
                    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)81)) ? (-1) : (((/* implicit */int) (short)16384))));
                    var_19 |= ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */int) arr_6 [i_6])) : (((/* implicit */int) min((arr_6 [i_6]), (arr_6 [i_6]))))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)88)) - (max((((arr_3 [11ULL]) << (((((/* implicit */int) var_8)) - (63906))))), (((((/* implicit */_Bool) arr_7 [i_8 - 2])) ? (((/* implicit */int) arr_11 [i_6] [i_7])) : (-660611341)))))));
                    /* LoopNest 2 */
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        for (long long int i_10 = 1; i_10 < 9; i_10 += 1) 
                        {
                            {
                                arr_35 [i_8] [i_7] [(short)4] [i_9] [i_10] [i_10 - 1] = ((/* implicit */int) arr_28 [i_6] [(short)9] [i_8]);
                                arr_36 [i_6] [i_6] [i_6] [i_9] [i_10 + 1] |= ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(4294967295U)))) ? (((((((/* implicit */int) (short)-15959)) + (2147483647))) << (((-2147483647) - (-2147483647))))) : (((/* implicit */int) ((((/* implicit */_Bool) -1)) || (((/* implicit */_Bool) var_4)))))))) % ((-(((unsigned long long int) arr_21 [i_10] [i_9] [i_7] [i_6])))));
                                var_21 = ((/* implicit */unsigned int) (short)-20510);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_22 = ((/* implicit */short) 3880170969U);
    }
    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_12 = 0; i_12 < 19; i_12 += 4) 
        {
            arr_45 [i_12] = ((/* implicit */long long int) (+(-1019516708)));
            arr_46 [i_11] = ((/* implicit */unsigned long long int) (short)-3726);
            /* LoopNest 3 */
            for (short i_13 = 0; i_13 < 19; i_13 += 4) 
            {
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned long long int i_15 = 0; i_15 < 19; i_15 += 2) 
                    {
                        {
                            var_23 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_44 [(short)10])) ? (var_6) : (((/* implicit */unsigned long long int) var_9)))) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)94)) << (((((/* implicit */int) var_1)) - (12857))))))));
                            var_24 = ((/* implicit */_Bool) (-(1753336791)));
                        }
                    } 
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_16 = 0; i_16 < 19; i_16 += 1) 
        {
            for (unsigned long long int i_17 = 1; i_17 < 18; i_17 += 1) 
            {
                {
                    arr_58 [i_11] [i_16] [i_16] [i_11] = ((/* implicit */signed char) max((((/* implicit */int) ((signed char) var_4))), (min((((/* implicit */int) arr_48 [i_17 - 1] [i_17 - 1] [i_17] [i_17 - 1])), (arr_55 [i_17 - 1] [i_17] [i_17 - 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_18 = 0; i_18 < 19; i_18 += 2) 
                    {
                        arr_63 [i_11] [i_16] [i_17 + 1] [i_16] [i_18] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) (short)28587)) : (var_9)))));
                        var_25 = ((/* implicit */signed char) (short)511);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_19 = 0; i_19 < 19; i_19 += 3) 
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 19; i_20 += 1) 
            {
                for (unsigned long long int i_21 = 1; i_21 < 18; i_21 += 4) 
                {
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        {
                            var_26 = ((/* implicit */short) max((var_26), (((/* implicit */short) (-(2147483647))))));
                            arr_74 [i_11] [i_11] [i_11] [i_11] [i_11] [i_11] = ((/* implicit */short) -1019516708);
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_23 = 0; i_23 < 19; i_23 += 1) 
            {
                for (unsigned long long int i_24 = 0; i_24 < 19; i_24 += 3) 
                {
                    {
                        arr_81 [i_11] [13ULL] [i_23] [6ULL] = ((/* implicit */int) ((((((/* implicit */int) ((arr_38 [i_23]) > (((/* implicit */int) (short)-15959))))) + ((+(arr_55 [i_11] [i_11] [i_11]))))) < (((((/* implicit */_Bool) (signed char)126)) ? (((/* implicit */int) (unsigned short)57716)) : (((/* implicit */int) (unsigned char)223))))));
                        var_27 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned short) var_1)), (arr_37 [18])))), (arr_78 [i_11] [i_11] [i_11] [i_11])))) ? (max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_56 [(signed char)15] [i_23] [i_23] [i_24])) >> (((((/* implicit */int) var_10)) - (28)))))), ((+(var_6))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_70 [(signed char)16] [i_19] [i_19] [i_19] [i_19])))))));
                        arr_82 [i_11] [4] [i_11] [i_11] &= (_Bool)1;
                    }
                } 
            } 
        }
        /* LoopNest 2 */
        for (short i_25 = 0; i_25 < 19; i_25 += 2) 
        {
            for (signed char i_26 = 0; i_26 < 19; i_26 += 2) 
            {
                {
                    arr_87 [i_26] [i_25] [i_11] = min((18446744073709551615ULL), (min((((/* implicit */unsigned long long int) min((arr_54 [i_11] [i_11] [i_11]), (((/* implicit */unsigned int) (_Bool)0))))), (min((6359729151628623586ULL), (((/* implicit */unsigned long long int) arr_65 [i_11] [(signed char)17] [i_26])))))));
                    /* LoopNest 2 */
                    for (short i_27 = 0; i_27 < 19; i_27 += 4) 
                    {
                        for (unsigned int i_28 = 3; i_28 < 17; i_28 += 1) 
                        {
                            {
                                arr_94 [i_11] [i_11] [i_11] [i_11] [i_11] [18ULL] [i_11] = ((/* implicit */signed char) min((((((((/* implicit */_Bool) var_4)) ? (268435455U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63))))) - (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (var_11)));
                                var_28 ^= ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (signed char)-82))))));
                            }
                        } 
                    } 
                    var_29 = ((/* implicit */unsigned long long int) ((680906798U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)12335)))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (int i_29 = 0; i_29 < 15; i_29 += 1) 
    {
        arr_97 [i_29] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (arr_72 [i_29] [7U] [7U] [7U] [i_29]) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_91 [i_29])) : (((/* implicit */int) arr_42 [i_29]))))));
        arr_98 [i_29] [i_29] = ((/* implicit */unsigned long long int) arr_40 [i_29]);
        var_30 = ((/* implicit */short) max((var_30), (((/* implicit */short) ((arr_78 [i_29] [i_29] [i_29] [i_29]) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_76 [i_29]))))))));
    }
    for (unsigned long long int i_30 = 1; i_30 < 18; i_30 += 1) 
    {
        var_31 = ((/* implicit */int) min((arr_99 [i_30]), (((/* implicit */long long int) max((3939183503U), (4026531841U))))));
        arr_102 [i_30] &= ((/* implicit */short) ((((/* implicit */int) ((unsigned short) min((((/* implicit */short) var_10)), ((short)25472))))) + (((/* implicit */int) ((unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57153))) - (0ULL)))))));
        var_32 = ((/* implicit */int) (+(min((((var_11) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)126))))), (((/* implicit */unsigned int) ((var_9) / (((/* implicit */int) (signed char)-103)))))))));
    }
}
