/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5189
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5189 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5189
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
    var_13 = ((/* implicit */unsigned int) min((var_13), (((/* implicit */unsigned int) min((((var_2) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-32755))))), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-33))) > (7466908918286278945ULL)))))))));
    var_14 -= ((/* implicit */short) var_8);
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_15 = ((/* implicit */unsigned int) (unsigned char)85);
        var_16 &= ((/* implicit */int) (!(((/* implicit */_Bool) var_6))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) max((var_0), (((/* implicit */long long int) min((((/* implicit */unsigned int) (short)-32755)), (((arr_0 [i_0]) >> (((/* implicit */int) (_Bool)0)))))))));
        var_17 -= ((/* implicit */unsigned long long int) ((((arr_0 [i_0]) <= (((((/* implicit */_Bool) var_7)) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))))))) && (((/* implicit */_Bool) (short)28148))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 2) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) min((((unsigned char) var_6)), (((/* implicit */unsigned char) max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))))))));
        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), (arr_3 [i_1] [i_1])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1] [i_1]))) : (arr_0 [i_1])));
    }
    for (unsigned int i_2 = 4; i_2 < 13; i_2 += 1) 
    {
        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) var_10)), (arr_9 [i_2 + 1])))) || (((/* implicit */_Bool) arr_9 [i_2 - 3])))))));
        arr_10 [i_2] = ((/* implicit */signed char) max((min((((/* implicit */long long int) var_5)), (((var_0) - (var_2))))), (((/* implicit */long long int) max((4019103446U), (((/* implicit */unsigned int) (short)32754)))))));
        /* LoopSeq 4 */
        for (signed char i_3 = 0; i_3 < 14; i_3 += 4) 
        {
            var_21 = ((/* implicit */unsigned int) max((var_21), (((/* implicit */unsigned int) (signed char)33))));
            var_22 = ((/* implicit */unsigned char) ((short) arr_6 [i_2 - 3]));
        }
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 3) 
        {
            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) arr_0 [i_2])) / (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85))) : (arr_0 [i_4])))));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_2 + 1])) && (((/* implicit */_Bool) arr_16 [i_2 - 1]))));
        }
        /* vectorizable */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            var_25 = ((/* implicit */long long int) ((((unsigned int) arr_0 [i_2])) >> (((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_5] [i_5] [i_5])) && (((/* implicit */_Bool) var_8)))))));
            var_26 += ((/* implicit */unsigned int) ((((/* implicit */int) (short)-32755)) + (((/* implicit */int) (signed char)31))));
            arr_22 [i_2] [i_5] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 - 3] [i_2 - 3] [i_2]))) & (var_6)));
            var_27 = ((/* implicit */short) ((((var_0) + (9223372036854775807LL))) << (((var_11) - (3909134374U)))));
        }
        for (short i_6 = 0; i_6 < 14; i_6 += 4) 
        {
            var_28 = ((/* implicit */short) ((max((((/* implicit */long long int) arr_14 [i_6] [i_6])), (arr_24 [i_2 - 4]))) << (((((/* implicit */int) (unsigned char)189)) - (185)))));
            arr_25 [i_2] = ((/* implicit */signed char) (-((~(((/* implicit */int) (short)32743))))));
            var_29 = ((/* implicit */short) arr_9 [i_2 - 1]);
        }
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned int i_7 = 0; i_7 < 14; i_7 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                arr_30 [i_2] [i_7] [i_8] &= ((/* implicit */unsigned long long int) ((-3843678990295571557LL) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                /* LoopSeq 2 */
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                {
                    arr_33 [i_7] [i_9] [i_9] = ((/* implicit */int) ((arr_28 [i_2] [i_7] [i_7] [i_9]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 3) /* same iter space */
                    {
                        var_30 *= ((/* implicit */unsigned long long int) (+(arr_14 [i_8] [i_8])));
                        arr_36 [i_7] [i_9] [(short)8] [(short)8] [i_7] [i_7] |= ((/* implicit */signed char) ((unsigned long long int) var_0));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 14; i_11 += 3) /* same iter space */
                    {
                        arr_40 [i_2] [i_2] [i_9] [i_2] [i_2] [i_11] [i_11] = arr_6 [i_9];
                        arr_41 [i_9] = ((/* implicit */_Bool) (+(arr_35 [i_2 - 2] [i_7] [i_8] [i_7] [i_2 - 2])));
                        arr_42 [i_9] [i_9] [i_8] [i_9] [i_9] [i_11] = ((/* implicit */short) arr_13 [i_2] [i_2] [i_2]);
                        var_31 += ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)120))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
                    {
                        arr_46 [i_2] [i_9] [i_9] = ((/* implicit */unsigned char) ((signed char) ((unsigned short) arr_35 [i_2] [i_7] [i_8] [i_9] [i_9])));
                        arr_47 [i_9] [i_8] = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (var_2)));
                    }
                    for (unsigned long long int i_13 = 0; i_13 < 14; i_13 += 3) /* same iter space */
                    {
                        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) (((+(var_1))) >= (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_9 [i_13]))))))))));
                        var_33 = ((/* implicit */short) min((var_33), (arr_26 [i_2 - 3])));
                        var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 978071635U)))))) - (17878141554371370190ULL)));
                    }
                    var_35 -= ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-98))) * (var_6))) % (((/* implicit */unsigned int) -1579810695))));
                    var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (var_7) : (arr_0 [i_2 + 1])));
                }
                for (short i_14 = 0; i_14 < 14; i_14 += 2) 
                {
                    var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) arr_35 [i_2] [i_7] [i_8] [i_2] [i_8]))));
                    var_38 = ((/* implicit */unsigned char) var_3);
                    arr_55 [7] [i_7] [i_8] [7] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_3))));
                    var_39 = ((/* implicit */long long int) ((unsigned char) arr_53 [i_2 - 4] [i_2 - 3] [i_2 - 3] [i_2 + 1]));
                    var_40 = ((/* implicit */unsigned short) var_9);
                }
            }
            var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) ((arr_44 [i_2] [i_2 + 1] [i_2] [i_2 - 3]) + (((/* implicit */int) arr_19 [i_2] [i_2 - 3])))))));
            arr_56 [i_2] [i_7] [i_7] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) var_0)) == (7180791103198345655ULL)));
            var_42 &= var_5;
            /* LoopNest 2 */
            for (unsigned int i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                for (signed char i_16 = 0; i_16 < 14; i_16 += 3) 
                {
                    {
                        var_43 = ((/* implicit */long long int) min((var_43), (((/* implicit */long long int) var_5))));
                        var_44 -= ((/* implicit */unsigned int) 12809045302813156484ULL);
                        var_45 += ((/* implicit */signed char) ((((/* implicit */int) arr_58 [i_2 + 1] [i_7])) + (((/* implicit */int) ((((/* implicit */int) arr_15 [i_2] [i_7] [i_16])) <= (((/* implicit */int) arr_62 [i_2] [i_7] [i_15] [i_16] [i_7])))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (unsigned short i_17 = 0; i_17 < 14; i_17 += 3) 
        {
            var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) arr_6 [i_2]))));
            arr_67 [i_2] [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_57 [i_2 - 4])) < (((/* implicit */int) (short)-19124))));
        }
        for (signed char i_18 = 3; i_18 < 13; i_18 += 3) 
        {
            arr_72 [i_18] [i_2 - 3] [i_18] = ((/* implicit */long long int) arr_59 [i_2] [i_18] [i_18]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (int i_19 = 0; i_19 < 14; i_19 += 4) 
            {
                arr_75 [i_18] [i_18] = ((/* implicit */signed char) var_4);
                var_47 = ((/* implicit */signed char) max((var_47), (((/* implicit */signed char) ((((/* implicit */_Bool) arr_28 [i_18 - 1] [i_19] [i_2 - 3] [i_19])) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_11 [i_2] [i_2])) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) arr_61 [i_19] [i_2] [i_2] [i_2] [i_2])))))))));
                arr_76 [i_2] [i_18] = ((/* implicit */unsigned int) 6917529027641081856ULL);
            }
            /* vectorizable */
            for (signed char i_20 = 0; i_20 < 14; i_20 += 1) /* same iter space */
            {
                var_48 *= ((/* implicit */short) (unsigned short)20);
                var_49 = ((/* implicit */unsigned long long int) (short)0);
            }
            /* vectorizable */
            for (signed char i_21 = 0; i_21 < 14; i_21 += 1) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_22 = 2; i_22 < 13; i_22 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_23 = 2; i_23 < 13; i_23 += 4) 
                    {
                        arr_86 [1ULL] [1ULL] [i_18] = (!(((/* implicit */_Bool) (short)32754)));
                        var_50 = ((/* implicit */_Bool) max((var_50), (((/* implicit */_Bool) arr_21 [i_22]))));
                    }
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) var_9);
                        arr_89 [i_2] [i_18 - 3] [i_21] [i_22] [i_22] [i_18] [i_24] = ((/* implicit */long long int) (short)(-32767 - 1));
                        arr_90 [i_2 + 1] [i_18] [i_2 + 1] [i_18] [i_18] [i_18] [i_21] = arr_62 [1U] [1U] [i_18 - 2] [i_22] [i_18];
                    }
                    var_52 ^= ((unsigned int) arr_35 [i_22 - 1] [(unsigned short)13] [i_21] [i_22 - 1] [i_22]);
                }
                /* LoopSeq 2 */
                for (unsigned long long int i_25 = 0; i_25 < 14; i_25 += 4) /* same iter space */
                {
                    arr_95 [i_21] [i_18] [i_18] [i_25] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) < (arr_88 [i_2 - 4] [i_2 - 4] [i_2 - 4] [i_18 + 1] [i_21])));
                    var_53 = ((/* implicit */long long int) max((var_53), (((((/* implicit */_Bool) arr_87 [i_25] [i_18] [i_18] [i_18 + 1] [i_25] [i_18 - 2])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_4)))));
                    arr_96 [i_18] [i_25] = ((/* implicit */signed char) ((((/* implicit */int) arr_54 [i_2] [i_18 - 1] [i_25] [i_2 - 4] [i_25])) != (((/* implicit */int) var_10))));
                }
                for (unsigned long long int i_26 = 0; i_26 < 14; i_26 += 4) /* same iter space */
                {
                    var_54 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 624574516U)) ? (-27LL) : (((/* implicit */long long int) ((/* implicit */int) (short)18069)))));
                    var_55 = ((/* implicit */short) arr_45 [i_2] [i_2] [i_18] [i_21] [i_21] [i_26] [i_18]);
                }
            }
            var_56 = var_8;
        }
        for (long long int i_27 = 3; i_27 < 12; i_27 += 4) 
        {
            arr_102 [i_27] = ((/* implicit */short) var_11);
            var_57 = ((/* implicit */long long int) max((var_57), (((/* implicit */long long int) ((((/* implicit */int) arr_8 [i_2] [i_27])) != (((/* implicit */int) arr_50 [i_2] [i_2] [i_2] [i_2] [i_2] [i_27 + 2])))))));
            var_58 = ((/* implicit */unsigned int) max((var_58), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_27] [i_27 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) arr_48 [i_2 + 1] [i_27 - 1]))))) ? (max((((/* implicit */unsigned long long int) arr_1 [i_2] [i_27 - 1])), (var_1))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_2] [i_27 - 1]))))))));
            var_59 = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_27 [i_2 - 3] [i_27 - 3])) ? (((/* implicit */int) arr_27 [i_2 - 3] [i_27 - 3])) : (((/* implicit */int) arr_27 [i_2 + 1] [i_27 - 1])))) <= ((~(((/* implicit */int) arr_27 [i_2 - 4] [i_27 + 2]))))));
        }
    }
}
