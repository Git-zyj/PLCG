/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242662
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242662 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242662
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
    var_11 = ((/* implicit */_Bool) max((var_11), (((/* implicit */_Bool) ((signed char) ((((/* implicit */int) ((-440248036) > (((/* implicit */int) (_Bool)1))))) < (((/* implicit */int) var_5))))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_0)) : (var_1)))))) ? (((/* implicit */unsigned int) (+((~(((/* implicit */int) var_5))))))) : (((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)(-127 - 1))) : (-376087982)))) ? (((((/* implicit */_Bool) var_7)) ? (3358541911U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))));
        var_12 = ((/* implicit */short) (((~(((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), (var_5)))))) <= (min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) min((((/* implicit */short) (signed char)76)), (var_4))))))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */unsigned int) ((((long long int) ((((/* implicit */_Bool) arr_4 [i_1])) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))) > (((/* implicit */long long int) arr_5 [i_1] [i_1]))));
        /* LoopNest 3 */
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 22; i_4 += 4) 
                {
                    {
                        var_14 ^= ((/* implicit */long long int) min(((-((+(((/* implicit */int) (short)-32767)))))), ((-(((/* implicit */int) arr_11 [i_1] [i_1] [i_2] [(short)6] [i_2]))))));
                        var_15 = ((/* implicit */short) ((((((/* implicit */int) var_6)) == (((/* implicit */int) arr_12 [i_3] [i_3] [i_1] [i_3])))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_1] [i_2] [i_1] [i_4])) + (((/* implicit */int) arr_12 [i_1] [i_4] [i_1] [i_4]))))) : (((((/* implicit */_Bool) (short)-32753)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))) : (15743332120418482060ULL)))));
                        arr_13 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */long long int) min((var_4), (min((arr_8 [i_1] [i_1] [i_3]), (((/* implicit */short) ((signed char) arr_10 [i_1] [i_2])))))));
                    }
                } 
            } 
        } 
        var_16 = ((/* implicit */signed char) ((((/* implicit */long long int) arr_5 [i_1] [i_1])) / (max((((((/* implicit */_Bool) arr_8 [i_1] [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_12 [i_1] [i_1] [i_1] [i_1]))) : (arr_10 [i_1] [i_1]))), (((/* implicit */long long int) var_8))))));
        arr_14 [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) > (max((((/* implicit */unsigned int) max((var_1), (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1]))))), (((unsigned int) (signed char)-123))))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        /* LoopSeq 3 */
        for (int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            /* LoopSeq 2 */
            /* vectorizable */
            for (long long int i_7 = 1; i_7 < 20; i_7 += 1) /* same iter space */
            {
                var_17 = ((/* implicit */unsigned long long int) ((((-57536933489591945LL) + (9223372036854775807LL))) << (((var_9) - (2848024006U)))));
                var_18 = ((/* implicit */unsigned int) (_Bool)1);
                arr_25 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) (-(((/* implicit */int) var_8))));
                arr_26 [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_23 [i_5])) ? (((/* implicit */int) arr_16 [i_5] [i_7 + 1])) : (((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_15 [i_7 + 3])))))));
            }
            for (long long int i_8 = 1; i_8 < 20; i_8 += 1) /* same iter space */
            {
                var_19 = ((/* implicit */long long int) arr_22 [i_5] [i_6]);
                arr_29 [i_6] [i_6] = ((/* implicit */short) arr_23 [i_5]);
                arr_30 [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */int) (_Bool)0)) >> (0LL)));
            }
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((3982625740837280901ULL), (((/* implicit */unsigned long long int) ((long long int) (short)-1021)))))))))));
        }
        for (long long int i_9 = 0; i_9 < 23; i_9 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                arr_36 [i_5] [i_9] [i_10] = ((/* implicit */_Bool) var_10);
                var_21 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_27 [i_5] [i_5] [i_5])) ? (((((/* implicit */_Bool) 12U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5] [i_9] [i_5] [i_9]))) : (arr_20 [i_10] [i_5] [i_10]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((var_8) && (((/* implicit */_Bool) (short)-32767))))))));
            }
            arr_37 [i_5] = ((/* implicit */short) ((long long int) (+(((/* implicit */int) (signed char)-55)))));
            arr_38 [i_5] = var_0;
        }
        /* vectorizable */
        for (int i_11 = 0; i_11 < 23; i_11 += 4) 
        {
            var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) (+(arr_20 [i_5] [i_11] [i_11]))))));
            var_23 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 5190374959579176956LL)) ? (((/* implicit */int) (!(((/* implicit */_Bool) 18LL))))) : (((((/* implicit */int) var_8)) >> (((var_7) - (16426379307727362825ULL)))))));
            arr_42 [i_5] [i_5] = ((/* implicit */int) (signed char)-51);
        }
        /* LoopSeq 1 */
        for (short i_12 = 0; i_12 < 23; i_12 += 2) 
        {
            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) arr_34 [i_5] [i_12] [i_12]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned short i_13 = 1; i_13 < 22; i_13 += 1) 
            {
                var_25 = ((arr_39 [i_13 - 1] [i_13 - 1]) | (((/* implicit */int) var_5)));
                var_26 = ((/* implicit */signed char) (~(((arr_32 [i_12]) ? (arr_34 [i_5] [i_12] [i_13]) : (((/* implicit */long long int) 3282695794U))))));
            }
            /* vectorizable */
            for (unsigned char i_14 = 0; i_14 < 23; i_14 += 1) 
            {
                arr_50 [i_14] [i_14] [i_14] [i_5] = ((/* implicit */short) arr_46 [i_5] [i_12] [i_5] [i_14]);
                arr_51 [i_14] = ((/* implicit */signed char) ((((unsigned int) (signed char)0)) << ((((~(-4932916126489836156LL))) - (4932916126489836153LL)))));
            }
            arr_52 [i_5] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) var_1)) % (arr_46 [i_12] [i_12] [i_12] [i_5]))))) != (((/* implicit */int) (_Bool)0))));
            var_27 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (unsigned char)174)) : (((/* implicit */int) arr_41 [i_5])))))), (((((/* implicit */_Bool) arr_46 [i_12] [i_5] [i_5] [i_5])) ? (arr_40 [i_12]) : (var_2)))));
            /* LoopSeq 2 */
            for (unsigned char i_15 = 0; i_15 < 23; i_15 += 3) 
            {
                arr_55 [i_15] [i_12] = ((/* implicit */_Bool) ((long long int) min((-4932916126489836164LL), (((/* implicit */long long int) arr_47 [i_12])))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (signed char i_16 = 0; i_16 < 23; i_16 += 3) 
                {
                    var_28 = ((/* implicit */unsigned long long int) arr_28 [i_16] [i_12] [i_15] [i_16]);
                    /* LoopSeq 1 */
                    for (signed char i_17 = 0; i_17 < 23; i_17 += 3) 
                    {
                        var_29 = ((/* implicit */short) ((((/* implicit */int) arr_27 [i_5] [i_12] [i_15])) ^ (((/* implicit */int) arr_27 [i_5] [i_5] [i_15]))));
                        arr_61 [i_5] [i_12] [i_15] [i_16] = ((/* implicit */signed char) ((((3301480336U) >= (0U))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_10)) <= (arr_40 [i_5]))))) : (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_2)))));
                        arr_62 [i_15] [i_12] [i_15] [i_16] [i_17] = ((((/* implicit */_Bool) arr_49 [i_5] [i_12] [i_15] [i_17])) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) arr_17 [i_5]))));
                        arr_63 [i_5] [i_12] [i_12] [i_16] [i_17] = ((((/* implicit */unsigned int) ((((((/* implicit */int) var_0)) + (2147483647))) >> (((((/* implicit */int) arr_41 [i_15])) + (101)))))) <= (arr_33 [i_5] [i_15]));
                    }
                }
                /* vectorizable */
                for (signed char i_18 = 0; i_18 < 23; i_18 += 3) /* same iter space */
                {
                    arr_66 [i_5] [i_12] [i_12] [i_18] = ((/* implicit */unsigned int) -7LL);
                    arr_67 [i_18] [i_12] [i_12] [i_18] = ((/* implicit */signed char) (+(((/* implicit */int) arr_43 [i_5] [(_Bool)1] [i_15]))));
                }
                for (signed char i_19 = 0; i_19 < 23; i_19 += 3) /* same iter space */
                {
                    arr_70 [i_5] [i_5] [i_5] [i_5] [i_15] [i_19] = ((/* implicit */signed char) -82371922735137861LL);
                    arr_71 [i_19] [i_15] [i_5] [i_5] = ((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (var_10)))) >> (((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))))) - (((((/* implicit */long long int) ((((/* implicit */unsigned int) 2147483647)) - (arr_46 [i_5] [i_12] [i_15] [i_19])))) - (((long long int) 8411522442774230462ULL)))));
                }
                /* vectorizable */
                for (signed char i_20 = 0; i_20 < 23; i_20 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        var_30 = ((/* implicit */short) (!(var_8)));
                        var_31 = ((/* implicit */int) max((var_31), (((((arr_20 [i_15] [i_15] [i_21]) == (arr_35 [i_15] [6ULL]))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_64 [i_5] [i_5] [i_5] [i_20]))) >= (arr_79 [i_5] [i_15] [i_15] [i_15] [i_21])))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))));
                    }
                    arr_80 [i_5] [i_5] [i_5] [(signed char)7] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */int) (short)24576)) + (var_1)))) * (((((/* implicit */long long int) arr_35 [i_5] [i_5])) ^ (0LL)))));
                    /* LoopSeq 2 */
                    for (_Bool i_22 = 0; i_22 < 0; i_22 += 1) /* same iter space */
                    {
                        var_32 = ((/* implicit */short) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-20))) < (var_9))))));
                        var_33 = ((/* implicit */long long int) max((var_33), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_22 + 1]))) < (var_7))))));
                        arr_85 [i_5] [i_22] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_65 [i_22 + 1] [i_22] [i_22 + 1] [i_22] [i_22 + 1] [i_20])) && (((/* implicit */_Bool) var_7))));
                        var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_83 [i_5] [i_5] [i_15] [i_20] [i_22]))))) ? (((/* implicit */long long int) ((((/* implicit */int) var_3)) + (((/* implicit */int) var_0))))) : (arr_74 [i_5] [i_22] [i_15] [i_22] [i_22 + 1])));
                        arr_86 [i_5] [i_12] [i_15] [i_12] [i_22] &= ((/* implicit */signed char) (+(((/* implicit */int) ((((/* implicit */unsigned int) -2147483647)) > (852129041U))))));
                    }
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) /* same iter space */
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_5] [i_5] [i_15] [i_20])) > (((/* implicit */int) arr_54 [i_23 + 1] [i_23 + 1] [i_23 + 1]))));
                        arr_89 [i_5] [i_12] [i_15] [i_15] [i_15] [i_5] = ((/* implicit */int) arr_83 [i_5] [i_12] [i_20] [i_12] [i_23]);
                        arr_90 [(signed char)8] [i_12] [i_23] = ((/* implicit */int) arr_32 [i_20]);
                    }
                }
                var_36 = ((/* implicit */long long int) max((var_36), (((/* implicit */long long int) min((((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_64 [i_5] [i_5] [(signed char)5] [i_5])), (arr_21 [i_5])))) ? (((/* implicit */int) ((((/* implicit */long long int) arr_58 [i_15] [i_12] [i_5] [i_5])) > (arr_18 [i_5])))) : (((/* implicit */int) var_8)))), ((~(((((/* implicit */int) (short)32766)) - (((/* implicit */int) (_Bool)1)))))))))));
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                arr_93 [i_12] [i_12] [i_12] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)0)), (arr_19 [i_12])))) ? (((((/* implicit */_Bool) arr_19 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-34))) : (arr_74 [i_5] [i_12] [i_5] [i_12] [i_5]))) : (((arr_74 [i_5] [i_5] [i_24] [i_5] [i_12]) - (((/* implicit */long long int) var_1))))));
                /* LoopSeq 1 */
                for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                {
                    var_37 *= ((/* implicit */_Bool) (~(9223372036854775807LL)));
                    var_38 = ((/* implicit */_Bool) max((((((((/* implicit */int) arr_53 [i_5] [i_5] [i_5] [i_5])) | (((/* implicit */int) arr_44 [i_5])))) ^ (((((((/* implicit */int) arr_17 [i_5])) + (2147483647))) >> (((arr_20 [i_5] [i_24] [i_25]) - (1401765028U))))))), (((/* implicit */int) (_Bool)1))));
                    arr_97 [i_5] [i_12] [i_5] = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_65 [i_5] [i_5] [i_5] [i_5] [10U] [i_24])) ? (arr_39 [i_5] [i_12]) : (var_1)))) ? (arr_81 [i_5] [i_12] [i_24] [i_24] [(_Bool)1] [i_25]) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) (short)22573)))))), (max((arr_56 [i_5] [i_12] [i_24] [i_25] [i_25] [i_12]), (arr_56 [18U] [i_12] [i_5] [i_5] [i_5] [i_5])))));
                    var_39 = ((((((/* implicit */_Bool) max((arr_65 [i_25] [i_25] [i_5] [i_12] [i_5] [i_5]), (((/* implicit */unsigned long long int) 3446698177U))))) ? (arr_79 [i_24] [i_24] [i_24] [i_24] [3U]) : (((arr_81 [i_12] [i_25] [i_12] [i_12] [i_12] [i_5]) + (arr_82 [i_5] [i_12] [i_5] [i_24] [i_25]))))) < (((/* implicit */unsigned int) ((/* implicit */int) ((var_10) == (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_54 [i_5] [i_5] [i_25])))))))))));
                }
                var_40 -= ((/* implicit */unsigned long long int) 2147483615);
            }
        }
        arr_98 [i_5] [i_5] = ((/* implicit */long long int) (-((-(((((/* implicit */int) var_8)) / (((/* implicit */int) (short)-32767))))))));
    }
}
