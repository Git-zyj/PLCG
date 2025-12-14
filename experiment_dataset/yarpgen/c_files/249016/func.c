/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249016
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
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        for (unsigned int i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            {
                var_11 = ((/* implicit */int) min((var_11), (((/* implicit */int) arr_4 [i_0] [i_1 + 1]))));
                var_12 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_0 [i_0]))))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_2 = 3; i_2 < 18; i_2 += 2) 
    {
        var_13 = ((/* implicit */short) (((!(var_6))) ? (((/* implicit */int) (unsigned short)8)) : (((/* implicit */int) (_Bool)1))));
        /* LoopSeq 2 */
        for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) (+(var_1)));
            arr_10 [i_2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_2 - 2])) ? (((((/* implicit */_Bool) arr_7 [i_2 + 1])) ? (((/* implicit */unsigned int) var_4)) : (arr_5 [i_2 + 3]))) : (((/* implicit */unsigned int) ((/* implicit */int) max((arr_7 [i_2 + 1]), (arr_7 [i_2 + 3])))))));
            var_15 |= ((/* implicit */unsigned short) var_7);
            var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(var_7)))) ? (arr_6 [i_2]) : (((/* implicit */long long int) ((((_Bool) (_Bool)1)) ? (((((/* implicit */_Bool) (short)-590)) ? (((/* implicit */unsigned int) arr_9 [i_2] [i_2] [i_3])) : (arr_5 [i_2]))) : (((unsigned int) (signed char)-116))))))))));
        }
        for (unsigned char i_4 = 0; i_4 < 21; i_4 += 3) 
        {
            arr_13 [i_2 + 1] = ((/* implicit */short) ((((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) >= (9223372036854775807LL))))) >= (((((/* implicit */_Bool) arr_9 [i_2] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_2]))) : (arr_5 [i_4]))))) ? ((+(max((arr_5 [i_4]), (((/* implicit */unsigned int) (unsigned short)12)))))) : (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)56800)))))));
            /* LoopNest 2 */
            for (signed char i_5 = 0; i_5 < 21; i_5 += 4) 
            {
                for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    {
                        var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_6])) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)8735))))) : (((((/* implicit */_Bool) arr_6 [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4294967264U)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(arr_15 [i_2] [i_4] [i_5] [i_6]))))) : (max(((((_Bool)1) ? (((/* implicit */unsigned int) arr_14 [i_2] [i_2] [i_2 + 2])) : (3545026809U))), (((/* implicit */unsigned int) ((((((/* implicit */int) arr_12 [i_5])) + (2147483647))) >> (((/* implicit */int) arr_15 [i_6] [i_4] [i_5] [i_6]))))))));
                        var_18 = ((/* implicit */short) max(((~(((/* implicit */int) arr_7 [i_2])))), (((((/* implicit */int) arr_15 [i_2 + 3] [i_5] [i_5] [i_5])) % (((/* implicit */int) arr_15 [i_2 + 1] [i_6] [i_2 + 1] [i_6]))))));
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) arr_14 [i_2] [i_2] [i_2])) : (arr_11 [i_2]))), (((/* implicit */unsigned long long int) ((unsigned char) var_7)))))) ? ((-(arr_5 [i_2]))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_5 [i_2 + 1]))))));
                            var_20 = ((/* implicit */unsigned char) arr_15 [i_2 - 2] [i_2 - 2] [i_6] [i_7 + 1]);
                            arr_20 [i_6] = ((/* implicit */_Bool) (+(var_1)));
                            var_21 ^= ((/* implicit */unsigned long long int) ((arr_14 [i_2] [i_2] [i_2]) + ((-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-28318)))))))));
                            var_22 = ((/* implicit */short) ((((((/* implicit */_Bool) (+(((/* implicit */int) var_5))))) ? (((/* implicit */int) (_Bool)1)) : (((int) arr_19 [i_2] [i_2 - 3] [i_2] [i_2] [i_2] [i_2 - 3])))) >= (((/* implicit */int) arr_12 [i_2 + 2]))));
                        }
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            arr_23 [i_2] [i_2] [i_2] [i_5] [i_6] [i_2] [i_8] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((unsigned short) var_9)))));
                            var_23 *= ((/* implicit */short) (+(((/* implicit */int) ((_Bool) arr_9 [i_5] [i_4] [i_2])))));
                        }
                        for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            arr_26 [i_2 + 2] [i_2 + 1] [i_2] [i_2 + 3] [i_6] = ((/* implicit */short) ((unsigned short) max((((unsigned int) (unsigned short)5)), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) arr_19 [i_2 + 2] [i_2] [i_2] [i_2] [i_2] [i_2])), ((unsigned short)26058)))))));
                            arr_27 [i_2] [i_2] [i_2] [i_6] [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)23833))));
                        }
                        /* vectorizable */
                        for (int i_10 = 2; i_10 < 18; i_10 += 1) 
                        {
                            var_24 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_24 [i_2] [i_5] [i_2] [i_2 + 2] [i_2] [i_2] [i_2]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19405))) : (8388607U)));
                            arr_31 [i_2 + 1] [i_6] [i_5] [i_6] [i_6] = ((/* implicit */long long int) (~(arr_11 [i_5])));
                            arr_32 [i_2] [i_6] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_12 [i_2 - 2]);
                            arr_33 [i_2] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */short) ((arr_5 [i_2 - 1]) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2]))))))));
                        }
                        for (short i_11 = 2; i_11 < 18; i_11 += 4) 
                        {
                            var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2309071695U)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)56815))))) ? (var_1) : ((-(arr_29 [i_2 + 2] [i_2 + 2] [i_2] [i_2] [i_2 + 1] [i_2 + 2])))))) : ((+(((long long int) 9742362473210331845ULL)))))))));
                            var_26 = ((/* implicit */unsigned long long int) max((var_26), ((((!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_2 - 1] [i_2 - 2] [i_2 - 3] [i_2 - 2] [i_2] [i_2]))) * (arr_5 [i_6])))))) ? (((((/* implicit */_Bool) 2698503969502003253ULL)) ? (arr_17 [i_2 - 3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_2 - 3]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_2 + 1]))))))))));
                            var_27 &= ((/* implicit */unsigned short) max((max((((0ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_2] [i_2] [i_6]))))), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) var_5)), (arr_30 [i_2] [i_2] [i_2] [i_2] [i_11])))))), ((~(max((arr_25 [i_2] [i_4] [i_5] [i_5] [i_2] [i_11]), (((/* implicit */unsigned long long int) arr_16 [i_4]))))))));
                            var_28 *= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_25 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) ((arr_34 [i_5] [i_4] [i_5] [i_5] [i_11] [i_11]) <= (arr_5 [i_11])))))))));
                        }
                        /* LoopSeq 3 */
                        for (unsigned long long int i_12 = 2; i_12 < 18; i_12 += 2) 
                        {
                            var_29 = ((/* implicit */unsigned int) max((var_29), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 11845104630915165915ULL)) ? (((/* implicit */int) max((((/* implicit */unsigned short) ((short) arr_19 [i_2] [i_2] [i_4] [i_2] [i_6] [i_12]))), ((unsigned short)39111)))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (arr_9 [i_2] [i_4] [i_5]))))))));
                            arr_40 [i_2] [i_2] [i_2] [i_2] [i_6] = ((/* implicit */long long int) arr_8 [i_2]);
                            var_30 = ((/* implicit */int) min((var_30), (((/* implicit */int) max((((/* implicit */unsigned int) max((arr_29 [i_12 - 1] [i_12 + 2] [i_12] [i_12] [i_12] [i_12]), (((/* implicit */int) (!(((/* implicit */_Bool) arr_36 [i_2 + 2] [i_5] [i_5])))))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) (short)-32244))) * (arr_39 [i_5] [i_6] [i_5] [i_4] [i_5]))), (((unsigned int) (_Bool)1)))))))));
                        }
                        for (unsigned char i_13 = 0; i_13 < 21; i_13 += 2) 
                        {
                            var_31 = ((/* implicit */unsigned char) max((var_31), (arr_41 [i_6])));
                            arr_44 [i_6] [i_6] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_4]))) / (arr_5 [i_2]))))))));
                            arr_45 [i_2] [i_4] [i_5] [i_6] [i_6] = ((/* implicit */unsigned short) (((~(((((/* implicit */_Bool) arr_36 [i_2] [i_4] [i_6])) ? (((/* implicit */unsigned long long int) 4294967295U)) : (arr_11 [i_2]))))) >> ((((-(((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */unsigned long long int) 4294967252U)) : (arr_25 [i_2] [i_4] [i_5] [i_6] [i_4] [i_5]))))) - (18446744069414584330ULL)))));
                            var_32 = ((/* implicit */int) -5306228323627071242LL);
                        }
                        for (unsigned char i_14 = 0; i_14 < 21; i_14 += 2) 
                        {
                            var_33 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_15 [i_2 - 1] [i_2 - 2] [i_2 - 1] [i_2]) ? (((/* implicit */int) (short)1023)) : (((/* implicit */int) arr_12 [i_2 - 1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((arr_12 [i_2 + 3]), (((/* implicit */short) (_Bool)1)))))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_2 + 2] [i_2 - 3] [i_2 + 2] [i_2 + 2]))) / (arr_39 [i_5] [i_2] [i_2] [i_2 + 1] [i_2 + 2])))));
                            var_34 ^= ((/* implicit */unsigned short) ((((_Bool) max((arr_21 [i_14] [i_4] [i_5] [i_6] [i_14]), (var_6)))) ? (max((((/* implicit */int) ((short) (_Bool)1))), ((-(((/* implicit */int) arr_12 [i_6])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_42 [i_5] [i_5] [i_5] [i_5] [i_14] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_34 [i_5] [i_4] [i_4] [i_4] [i_4] [i_4])))))))));
                        }
                    }
                } 
            } 
            var_35 = ((/* implicit */unsigned int) min((var_35), (((unsigned int) (-(arr_22 [i_2 - 2] [i_2 - 1] [i_2 - 1]))))));
        }
        arr_48 [i_2] = ((/* implicit */signed char) arr_6 [i_2]);
        var_36 = ((/* implicit */_Bool) ((short) (~(var_1))));
    }
    /* vectorizable */
    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
    {
        var_37 = ((/* implicit */short) max((var_37), (((/* implicit */short) ((unsigned int) 171607951U)))));
        var_38 ^= ((/* implicit */_Bool) (unsigned short)56844);
        var_39 = ((((/* implicit */int) ((((/* implicit */int) (signed char)90)) > (((/* implicit */int) arr_41 [i_15]))))) * ((~(((/* implicit */int) (unsigned short)56786)))));
    }
    for (unsigned int i_16 = 0; i_16 < 14; i_16 += 1) 
    {
        arr_54 [i_16] = ((/* implicit */short) max((((/* implicit */unsigned long long int) var_3)), (arr_53 [i_16] [i_16])));
        arr_55 [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [i_16])) ? (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_35 [i_16] [i_16] [i_16] [i_16])) : (arr_14 [i_16] [i_16] [i_16]))), (((/* implicit */int) ((short) arr_29 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])))))) : (((((_Bool) arr_17 [i_16])) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)0)) < (var_4)))))))));
        arr_56 [i_16] = ((/* implicit */short) ((_Bool) ((((/* implicit */_Bool) arr_25 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) arr_42 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) : (((((/* implicit */_Bool) arr_42 [i_16] [i_16] [i_16] [i_16] [i_16] [i_16] [i_16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_16] [i_16] [i_16]))) : (arr_11 [i_16]))))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_17 = 1; i_17 < 22; i_17 += 2) 
    {
        arr_59 [i_17] [i_17] = ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) ((unsigned short) arr_57 [i_17]))) : (((/* implicit */int) arr_57 [i_17]))));
        arr_60 [(unsigned short)22] [(unsigned short)22] |= ((/* implicit */unsigned int) arr_58 [i_17 + 1]);
    }
    for (unsigned long long int i_18 = 0; i_18 < 25; i_18 += 3) /* same iter space */
    {
        arr_64 [i_18] = ((/* implicit */long long int) arr_61 [i_18]);
        /* LoopNest 3 */
        for (long long int i_19 = 1; i_19 < 24; i_19 += 1) 
        {
            for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
            {
                for (short i_21 = 0; i_21 < 25; i_21 += 2) 
                {
                    {
                        var_40 = ((/* implicit */unsigned short) max((var_40), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max((((/* implicit */unsigned int) arr_69 [i_21] [i_20] [i_20] [i_19] [i_18])), (arr_61 [i_18])))) ? (((/* implicit */int) max((arr_70 [i_21] [i_20] [i_18] [i_18]), (((/* implicit */unsigned short) (short)3))))) : (((/* implicit */int) arr_66 [i_20 + 1])))) / (((/* implicit */int) max(((short)5594), (((/* implicit */short) (!(((/* implicit */_Bool) 4294967271U)))))))))))));
                        var_41 += ((/* implicit */unsigned char) ((unsigned long long int) ((unsigned char) 7U)));
                        arr_71 [i_18] [i_18] [i_18] [i_20] [i_20] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_70 [i_18] [i_19] [i_18] [i_21])) ? (((((((/* implicit */_Bool) arr_63 [i_19])) ? (2726374250U) : (32U))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) arr_70 [i_21] [i_19] [i_20] [i_21]))))))) : (arr_62 [i_20 + 1] [i_21])));
                        arr_72 [i_20] [i_18] [i_18] [i_21] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (+(((/* implicit */int) (signed char)74)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((arr_65 [i_18] [i_19] [i_21]) != (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (var_4)))))))) : (var_0)));
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_22 = 0; i_22 < 25; i_22 += 3) /* same iter space */
    {
        arr_75 [i_22] [i_22] = ((/* implicit */_Bool) var_3);
        var_42 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+((~(((/* implicit */int) (unsigned short)23413)))))))));
        var_43 = ((/* implicit */short) arr_73 [i_22]);
    }
}
