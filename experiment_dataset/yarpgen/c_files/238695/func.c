/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238695
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238695 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238695
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
    var_19 = ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 2; i_0 < 22; i_0 += 4) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 2) /* same iter space */
        {
            var_20 = ((/* implicit */signed char) min((var_20), (((/* implicit */signed char) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (var_15))))));
            var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (var_8)));
        }
        for (unsigned short i_2 = 0; i_2 < 23; i_2 += 2) /* same iter space */
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (signed char i_3 = 0; i_3 < 23; i_3 += 3) 
            {
                /* LoopSeq 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_23 = ((/* implicit */short) var_16);
                    /* LoopSeq 1 */
                    for (signed char i_5 = 2; i_5 < 20; i_5 += 4) 
                    {
                        var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_3))) / (543347180U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_18)))));
                        arr_17 [i_0] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */long long int) var_8);
                        var_25 += ((/* implicit */unsigned char) (~(((/* implicit */int) var_4))));
                        var_26 = ((/* implicit */unsigned char) min((var_26), (((/* implicit */unsigned char) ((var_5) >> (((var_15) - (1073053155U))))))));
                        arr_18 [i_0] [i_5 - 2] [i_3] [i_4] [i_5] = ((/* implicit */short) ((var_11) >> (((((/* implicit */int) var_3)) + (75)))));
                    }
                    arr_19 [i_3] = (_Bool)1;
                    var_27 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_1)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                }
                for (unsigned long long int i_6 = 0; i_6 < 23; i_6 += 1) 
                {
                    var_28 += ((/* implicit */short) ((((/* implicit */long long int) var_8)) / (var_11)));
                    arr_24 [21ULL] [i_3] [i_3] = ((/* implicit */int) (-(2262833196U)));
                    /* LoopSeq 1 */
                    for (long long int i_7 = 0; i_7 < 23; i_7 += 3) 
                    {
                        var_29 = ((/* implicit */long long int) (~((+(((/* implicit */int) var_3))))));
                        arr_29 [i_0] [i_7] [i_3] [i_6] [i_6] [i_3] [i_3] = ((/* implicit */long long int) (+(((/* implicit */int) (unsigned short)44169))));
                        var_30 = ((/* implicit */int) ((var_12) != (var_16)));
                        var_31 = ((/* implicit */int) var_10);
                        arr_30 [i_2] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_15)) ? (var_5) : (var_15)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned char i_8 = 0; i_8 < 23; i_8 += 3) /* same iter space */
                    {
                        var_32 *= ((/* implicit */signed char) var_9);
                        var_33 = ((((/* implicit */_Bool) 8231426808823177992ULL)) ? (-928807763) : (((/* implicit */int) var_3)));
                    }
                    for (unsigned char i_9 = 0; i_9 < 23; i_9 += 3) /* same iter space */
                    {
                        arr_35 [i_0] [i_0 + 1] [i_0] [i_0 + 1] [i_3] = ((/* implicit */unsigned char) (-(var_0)));
                        var_34 += ((/* implicit */unsigned short) ((((/* implicit */int) (signed char)-6)) % (((/* implicit */int) (unsigned short)21358))));
                        var_35 = ((/* implicit */long long int) var_10);
                    }
                    for (unsigned int i_10 = 0; i_10 < 23; i_10 += 3) 
                    {
                        var_36 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_10))));
                        var_37 = ((/* implicit */unsigned short) (-(((6279706946638559598ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                        var_38 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)9))));
                    }
                }
                for (unsigned char i_11 = 1; i_11 < 19; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
                    {
                        var_39 += ((/* implicit */unsigned short) (+(var_12)));
                        arr_44 [i_3] = ((/* implicit */_Bool) (-(((/* implicit */int) var_1))));
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)-9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (var_5)));
                    }
                    /* LoopSeq 4 */
                    for (signed char i_13 = 0; i_13 < 23; i_13 += 3) 
                    {
                        var_41 += ((/* implicit */signed char) ((var_16) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                        arr_47 [i_3] [i_2] [i_3] [i_11] [i_2] = ((/* implicit */int) var_14);
                    }
                    for (signed char i_14 = 0; i_14 < 23; i_14 += 4) 
                    {
                        var_42 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_11))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)34)) - (((/* implicit */int) var_18))));
                    }
                    for (unsigned long long int i_15 = 0; i_15 < 23; i_15 += 2) 
                    {
                        arr_52 [i_0 - 1] [i_2] [i_3] [i_11] [i_3] = ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) - (var_6)))));
                        var_44 = ((/* implicit */unsigned short) var_15);
                        arr_53 [i_0] [i_2] [i_3] [i_3] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7))) + (var_13)));
                    }
                    for (short i_16 = 0; i_16 < 23; i_16 += 3) 
                    {
                        arr_57 [i_3] = ((/* implicit */int) ((var_16) + (2147450880ULL)));
                        arr_58 [i_0] [i_3] [i_3] [i_11 + 1] [i_11 + 4] [i_16] [i_16] = ((/* implicit */unsigned char) ((((/* implicit */int) var_3)) <= (((/* implicit */int) (signed char)11))));
                        var_45 = (+(((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */int) var_18)))));
                    }
                    arr_59 [i_3] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((var_13) != (((/* implicit */unsigned int) ((/* implicit */int) var_2))))))) > ((+(var_6)))));
                }
                var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) var_15)) : (var_11)));
            }
            /* LoopSeq 4 */
            for (unsigned char i_17 = 3; i_17 < 22; i_17 += 2) 
            {
                var_47 = ((/* implicit */unsigned long long int) (!(var_4)));
                arr_62 [i_17] [i_2] [i_0 - 1] = ((/* implicit */unsigned int) max((max((((/* implicit */unsigned long long int) ((var_8) + (var_8)))), (var_6))), (((((/* implicit */unsigned long long int) ((/* implicit */int) max((var_3), (var_2))))) | (var_6)))));
            }
            /* vectorizable */
            for (signed char i_18 = 0; i_18 < 23; i_18 += 4) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_19 = 0; i_19 < 23; i_19 += 2) 
                {
                    var_48 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) var_15)) + (var_16)));
                    var_49 = var_14;
                    var_50 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 16073476735512432338ULL))));
                }
                var_51 *= ((/* implicit */signed char) (~(var_0)));
            }
            for (long long int i_20 = 3; i_20 < 22; i_20 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_21 = 1; i_21 < 21; i_21 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        var_52 = ((/* implicit */unsigned long long int) min((var_52), (((/* implicit */unsigned long long int) (((-(var_15))) - (((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) var_17)) : (3751620115U))) << (((((/* implicit */int) var_3)) + (71))))))))));
                        var_53 = ((/* implicit */int) max((min((var_10), (var_13))), (min((((/* implicit */unsigned int) (_Bool)1)), (var_15)))));
                        var_54 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)177))) > (2147483632LL)));
                    }
                    for (signed char i_23 = 1; i_23 < 21; i_23 += 1) 
                    {
                        var_55 += ((/* implicit */short) min((((((/* implicit */_Bool) (signed char)-10)) ? (((/* implicit */long long int) var_8)) : (-9220980886544613316LL))), (((/* implicit */long long int) var_8))));
                        var_56 += ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((/* implicit */unsigned short) var_2)), ((unsigned short)44169)))), (((((/* implicit */_Bool) var_8)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2)))))))), ((-(max((((/* implicit */unsigned long long int) var_1)), (var_6)))))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_24 = 0; i_24 < 23; i_24 += 1) 
                    {
                        var_57 ^= ((/* implicit */short) (!(((/* implicit */_Bool) max((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_3)))), ((+(((/* implicit */int) var_7)))))))));
                        var_58 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) : ((+(((/* implicit */int) var_1))))))) ? (var_8) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (3751620115U)))))))));
                        var_59 = ((/* implicit */_Bool) var_10);
                        arr_84 [(unsigned short)1] [i_20] [i_20] [i_20] [i_20] = ((/* implicit */_Bool) (-(max((var_8), (((/* implicit */int) var_7))))));
                    }
                    /* vectorizable */
                    for (short i_25 = 0; i_25 < 23; i_25 += 2) 
                    {
                        arr_87 [i_0] [i_20] = ((/* implicit */unsigned int) (~((-9223372036854775807LL - 1LL))));
                        var_60 = ((/* implicit */int) var_7);
                        var_61 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15))) / (var_12)));
                    }
                    arr_88 [i_0] [i_20] [i_21] [i_2] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) ((18446744073709551615ULL) | (4042455134597052980ULL))))));
                }
                /* vectorizable */
                for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_27 = 0; i_27 < 23; i_27 += 3) 
                    {
                        var_62 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))));
                        var_63 *= ((/* implicit */unsigned int) ((var_11) + (((/* implicit */long long int) ((/* implicit */int) var_18)))));
                        var_64 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
                    }
                    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
                    {
                        var_65 *= ((/* implicit */signed char) var_5);
                        var_66 = ((/* implicit */long long int) var_10);
                        var_67 ^= ((/* implicit */signed char) 1097816418U);
                        var_68 += ((/* implicit */unsigned long long int) var_1);
                    }
                    for (unsigned short i_29 = 0; i_29 < 23; i_29 += 2) 
                    {
                        var_69 = (signed char)-6;
                        arr_98 [i_20] [i_2] [(_Bool)1] [i_26] [i_26] [i_26] [i_29] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 65528)) ? (((/* implicit */unsigned long long int) var_5)) : (var_6)));
                        arr_99 [i_29] [i_29] [i_20] [i_20] [i_20] [i_0] [i_0 - 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) var_18))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (((var_6) << (((var_12) - (5002173883051448581ULL)))))));
                        var_70 = ((/* implicit */unsigned short) min((var_70), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_9)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32752))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))));
                        var_71 = ((/* implicit */int) ((var_10) >> (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-9))) < (2435847475U))))));
                    }
                    var_72 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))));
                }
                var_73 += ((/* implicit */long long int) (~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30313))) % (var_10)))));
                var_74 = ((/* implicit */signed char) (_Bool)1);
            }
            /* vectorizable */
            for (unsigned short i_30 = 3; i_30 < 19; i_30 += 2) 
            {
                /* LoopSeq 1 */
                for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
                {
                    arr_104 [i_2] [9LL] [i_30] [i_31] [i_31] [i_31] = ((/* implicit */long long int) ((((/* implicit */int) var_14)) < (var_0)));
                    var_75 = ((/* implicit */long long int) (~(var_17)));
                    var_76 = ((/* implicit */short) min((var_76), (((/* implicit */short) ((((/* implicit */_Bool) 3ULL)) ? (((/* implicit */int) var_14)) : (var_17))))));
                }
                arr_105 [i_0] [i_0] [i_0 - 2] = ((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) ((var_6) == (((/* implicit */unsigned long long int) ((/* implicit */int) var_9))))))) : (var_10)));
                var_77 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (13639193077059645954ULL) : (var_12)));
                var_78 = ((/* implicit */signed char) ((((/* implicit */long long int) var_8)) >= (var_11)));
            }
            var_79 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) 3197150881U)), (5499542734673441790LL)))) && (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_17)), (var_6))))));
        }
        var_80 = ((/* implicit */_Bool) (-(min((((/* implicit */int) var_1)), (var_0)))));
        var_81 = ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5))))))) < (((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (signed char)-33))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_32 = 0; i_32 < 23; i_32 += 1) 
        {
            var_82 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (var_5) : (((/* implicit */unsigned int) var_17))));
            /* LoopSeq 2 */
            for (unsigned int i_33 = 3; i_33 < 22; i_33 += 3) 
            {
                var_83 = ((/* implicit */signed char) var_10);
                arr_114 [i_0] [i_32] [i_33] = ((/* implicit */signed char) var_17);
            }
            for (short i_34 = 1; i_34 < 21; i_34 += 2) 
            {
                var_84 += ((/* implicit */unsigned short) var_0);
                var_85 = ((/* implicit */_Bool) ((var_5) + (((/* implicit */unsigned int) var_8))));
                var_86 += ((/* implicit */unsigned short) (unsigned char)130);
            }
        }
    }
    for (unsigned int i_35 = 0; i_35 < 14; i_35 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_36 = 0; i_36 < 14; i_36 += 3) 
        {
            var_87 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_17)))) ? (3606847505100493078LL) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) var_3)) < (((/* implicit */int) var_7))))))));
            var_88 += ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2))));
        }
        arr_123 [i_35] = ((/* implicit */unsigned short) (signed char)77);
    }
    var_89 += var_10;
    var_90 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_15))));
}
