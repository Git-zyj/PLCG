/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20514
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
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) (~(((/* implicit */int) (!((_Bool)1))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 11; i_1 += 1) /* same iter space */
        {
            arr_4 [i_0] = ((/* implicit */unsigned int) ((short) 4168379530071312435ULL));
            var_13 = ((/* implicit */int) ((_Bool) ((int) 14278364543638239170ULL)));
            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) ((_Bool) (_Bool)1)))));
            /* LoopSeq 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                var_15 = ((/* implicit */unsigned short) arr_0 [i_0]);
                var_16 = ((/* implicit */unsigned int) ((int) (!(((/* implicit */_Bool) ((unsigned int) arr_0 [i_0]))))));
                arr_8 [i_0] = ((_Bool) 14766813371081897735ULL);
                arr_9 [i_0] [i_1] = ((/* implicit */unsigned short) ((unsigned int) (~(((/* implicit */int) ((unsigned short) 4168379530071312445ULL))))));
            }
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                var_17 += ((/* implicit */signed char) -6448537833697387160LL);
                var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) ((unsigned short) arr_7 [(unsigned char)0] [i_1] [i_1]))) >> (((((unsigned long long int) arr_5 [i_3] [0] [i_0])) - (4573949523912405243ULL))))))))));
            }
        }
        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) /* same iter space */
        {
            var_19 = ((/* implicit */int) (+((-((+(arr_14 [i_0] [i_0])))))));
            var_20 &= ((/* implicit */unsigned long long int) 2147483647);
            /* LoopNest 3 */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
            {
                for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                {
                    for (int i_7 = 3; i_7 < 10; i_7 += 4) 
                    {
                        {
                            var_21 |= ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_0 [i_6])))) && (((/* implicit */_Bool) ((unsigned int) (!(((/* implicit */_Bool) arr_22 [i_6] [i_4] [2ULL] [i_6] [i_7]))))))));
                            var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) 3993780405U)) || (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-96))))) || (((/* implicit */_Bool) 14534206989293524108ULL)))))))));
                        }
                    } 
                } 
            } 
        }
        for (long long int i_8 = 0; i_8 < 11; i_8 += 1) 
        {
            var_23 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_6 [i_8] [i_0] [i_0])))));
            var_24 = arr_18 [i_0] [i_8] [i_0] [i_8];
        }
        var_25 ^= ((/* implicit */long long int) ((signed char) (+(2189539664U))));
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((short) arr_10 [i_0] [i_0] [i_0] [8])))));
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        /* LoopSeq 2 */
        for (int i_10 = 0; i_10 < 12; i_10 += 4) 
        {
            arr_30 [i_9] [i_9] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_29 [i_9])) || (((/* implicit */_Bool) arr_27 [(unsigned char)0]))));
            /* LoopSeq 2 */
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
            {
                var_27 += ((/* implicit */_Bool) ((int) 32767ULL));
                var_28 = ((/* implicit */unsigned long long int) max((var_28), (((/* implicit */unsigned long long int) ((int) arr_28 [i_11] [i_10] [i_9])))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned char) max((var_29), (((/* implicit */unsigned char) (short)22520))));
                /* LoopNest 2 */
                for (unsigned char i_13 = 0; i_13 < 12; i_13 += 4) 
                {
                    for (unsigned char i_14 = 0; i_14 < 12; i_14 += 4) 
                    {
                        {
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 9ULL))));
                            arr_41 [i_14] = ((/* implicit */short) (signed char)-42);
                            var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) 4168379530071312466ULL))));
                            var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) ((int) arr_31 [i_13] [i_13] [1ULL])))));
                        }
                    } 
                } 
                arr_42 [i_10] [i_10] [i_9] = ((/* implicit */unsigned char) ((unsigned long long int) arr_28 [i_9] [i_10] [i_12]));
                var_33 = ((int) arr_40 [i_9] [i_9] [i_12] [i_12] [i_10]);
            }
            arr_43 [(unsigned short)9] [i_10] [i_10] = ((/* implicit */unsigned int) ((unsigned short) 2U));
        }
        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
        {
            arr_47 [i_15] [i_15] = ((/* implicit */unsigned int) ((arr_39 [(unsigned char)6]) == (((/* implicit */unsigned long long int) 209341977U))));
            var_34 = ((/* implicit */_Bool) arr_37 [i_9]);
            var_35 = ((/* implicit */_Bool) arr_32 [i_9]);
            /* LoopSeq 1 */
            for (unsigned int i_16 = 4; i_16 < 9; i_16 += 1) 
            {
                var_36 ^= 4168379530071312466ULL;
                arr_50 [i_15] [i_16] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (signed char)123)))) != (11ULL)));
                /* LoopNest 2 */
                for (_Bool i_17 = 0; i_17 < 1; i_17 += 1) 
                {
                    for (signed char i_18 = 1; i_18 < 11; i_18 += 4) 
                    {
                        {
                            var_37 = ((/* implicit */unsigned long long int) ((unsigned int) arr_49 [i_16 - 4] [i_15]));
                            arr_58 [(short)0] [i_15] [i_15] [i_16] [(short)0] [i_18] = ((/* implicit */_Bool) arr_40 [i_18] [i_18 - 1] [i_18 + 1] [i_18 - 1] [i_18]);
                        }
                    } 
                } 
            }
            arr_59 [i_15] [i_15] [i_9] = ((/* implicit */unsigned short) (short)-5535);
        }
        var_38 = ((/* implicit */short) max((var_38), (((/* implicit */short) ((-1) != (((/* implicit */int) arr_40 [i_9] [i_9] [i_9] [i_9] [i_9])))))));
        arr_60 [i_9] [i_9] = ((/* implicit */unsigned int) ((unsigned char) arr_55 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]));
    }
    /* vectorizable */
    for (unsigned char i_19 = 0; i_19 < 14; i_19 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */unsigned long long int) ((unsigned char) (-(((/* implicit */int) arr_63 [i_19])))));
        arr_64 [i_19] = ((/* implicit */unsigned int) arr_61 [i_19]);
    }
    /* vectorizable */
    for (unsigned char i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
    {
        arr_67 [i_20] = ((/* implicit */unsigned int) 11ULL);
        /* LoopNest 2 */
        for (unsigned long long int i_21 = 0; i_21 < 14; i_21 += 1) 
        {
            for (int i_22 = 2; i_22 < 12; i_22 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_23 = 1; i_23 < 1; i_23 += 1) 
                    {
                        for (unsigned long long int i_24 = 0; i_24 < 14; i_24 += 1) 
                        {
                            {
                                arr_77 [i_21] [i_21] [10] [i_20] [i_22] = ((/* implicit */_Bool) arr_72 [i_22 - 2] [i_23 - 1] [(signed char)1] [i_22]);
                                var_40 = ((/* implicit */short) arr_62 [i_20]);
                                var_41 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */long long int) ((/* implicit */int) arr_75 [i_20] [i_21] [i_21] [i_23 - 1] [i_21] [i_22]))) != (arr_65 [i_20]))));
                            }
                        } 
                    } 
                    var_42 = ((/* implicit */int) min((var_42), (((/* implicit */int) ((unsigned char) ((((/* implicit */long long int) 0U)) != (arr_65 [i_20])))))));
                    var_43 = ((/* implicit */int) arr_75 [(_Bool)1] [i_22 - 2] [i_22 + 2] [i_20] [i_20] [i_21]);
                }
            } 
        } 
    }
    var_44 = ((/* implicit */int) var_3);
    /* LoopNest 2 */
    for (unsigned short i_25 = 0; i_25 < 15; i_25 += 1) 
    {
        for (unsigned long long int i_26 = 4; i_26 < 13; i_26 += 4) 
        {
            {
                arr_84 [i_25] [i_25] = ((/* implicit */unsigned short) (~(((long long int) arr_83 [i_25] [i_26 - 4] [i_25]))));
                arr_85 [i_25] [i_25] [i_26] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_83 [i_26 + 2] [i_26 + 2] [i_26 - 3])) || (((/* implicit */_Bool) arr_80 [i_26 + 1] [i_26 + 2])))))) > (((unsigned long long int) arr_80 [i_25] [i_26 + 1]))));
                arr_86 [i_25] [i_26] [i_26] |= ((/* implicit */_Bool) arr_78 [(unsigned short)7]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (int i_27 = 1; i_27 < 19; i_27 += 1) 
    {
        for (unsigned long long int i_28 = 3; i_28 < 16; i_28 += 4) 
        {
            {
                var_45 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (+(arr_88 [i_28] [i_28])))))) / (((arr_87 [i_27 - 1]) / (arr_87 [i_28 + 3]))));
                arr_93 [i_27 - 1] [i_27] = arr_90 [i_28] [i_27] [i_27];
                /* LoopSeq 1 */
                for (int i_29 = 0; i_29 < 20; i_29 += 4) 
                {
                    arr_96 [i_27] = ((/* implicit */unsigned int) ((long long int) arr_91 [i_27 + 1] [i_28 + 2] [i_27 - 1]));
                    arr_97 [i_29] [i_28] [i_27] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */int) arr_90 [i_27 + 1] [i_27 + 1] [i_28 + 3])) != (((/* implicit */int) arr_90 [i_27 + 1] [i_27 + 1] [i_28 + 1])))));
                }
                /* LoopNest 2 */
                for (int i_30 = 1; i_30 < 16; i_30 += 4) 
                {
                    for (int i_31 = 0; i_31 < 20; i_31 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */int) ((long long int) ((arr_102 [i_30 + 3] [i_27 + 1] [i_30] [i_31] [i_28 - 1]) == (arr_102 [i_30 + 1] [i_27 - 1] [i_30] [i_30] [i_28 - 1]))));
                            var_47 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 499677169)) || (((/* implicit */_Bool) (+(((/* implicit */int) ((unsigned short) arr_98 [i_27] [i_28 + 2] [4U]))))))));
                            var_48 = ((/* implicit */_Bool) ((signed char) ((signed char) ((unsigned short) arr_99 [i_31] [i_30] [i_28] [i_27]))));
                            var_49 = ((/* implicit */_Bool) min((var_49), (((/* implicit */_Bool) arr_98 [i_28 + 3] [i_31] [(signed char)6]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_50 += ((/* implicit */signed char) var_0);
}
