/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210761
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
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 19; i_0 += 1) /* same iter space */
    {
        var_18 = ((/* implicit */short) (+(min((var_10), (min((var_11), (arr_0 [i_0] [i_0])))))));
        arr_2 [i_0] = ((/* implicit */short) arr_1 [i_0]);
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 19; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_1] [i_1]) : (13U))));
        var_20 = ((/* implicit */signed char) (~(0U)));
        /* LoopSeq 3 */
        for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_3 = 3; i_3 < 17; i_3 += 3) 
            {
                var_21 = ((/* implicit */short) ((_Bool) ((unsigned char) -2147483630)));
                var_22 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 876909092U))));
                var_23 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3418058212U)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (arr_4 [i_1 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-25069)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_12)))))));
            }
            for (unsigned char i_4 = 2; i_4 < 19; i_4 += 4) 
            {
                arr_14 [11ULL] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((/* implicit */int) arr_1 [i_1 + 1])) : (((/* implicit */int) arr_1 [i_1 + 1]))));
                var_24 = ((/* implicit */unsigned long long int) arr_5 [i_2]);
                var_25 += ((/* implicit */long long int) ((unsigned char) arr_10 [i_1 - 1]));
            }
            arr_15 [i_1] [14] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (var_11) : (876909089U)));
            arr_16 [(_Bool)1] [i_1] = (-(((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) arr_9 [i_2])))));
        }
        for (unsigned char i_5 = 1; i_5 < 19; i_5 += 3) 
        {
            /* LoopSeq 1 */
            for (int i_6 = 0; i_6 < 20; i_6 += 2) 
            {
                arr_21 [i_1] [i_5] [i_1] = ((/* implicit */unsigned short) var_3);
                arr_22 [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_3))))) ? (((/* implicit */unsigned int) ((1290208743) & (((/* implicit */int) var_6))))) : (arr_0 [i_1 - 2] [i_1])));
                var_26 = ((/* implicit */unsigned char) (-((+(18446744073709551615ULL)))));
                arr_23 [i_1] [16] [i_6] = ((/* implicit */_Bool) ((unsigned short) (signed char)108));
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 19; i_7 += 2) 
                {
                    /* LoopSeq 4 */
                    for (short i_8 = 0; i_8 < 20; i_8 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_1 - 2] [i_5 + 1] [i_1])) == (((/* implicit */int) arr_7 [i_1 - 1] [i_5 - 1] [i_1]))));
                        var_28 = ((/* implicit */unsigned char) (-((+(arr_0 [i_1] [i_1])))));
                        var_29 *= ((/* implicit */signed char) ((var_5) >> (((((((/* implicit */_Bool) arr_3 [i_6])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)1)))) - (69)))));
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (short)20811)) : (-682996212)))) ? (((/* implicit */int) ((short) var_10))) : (((/* implicit */int) var_15))));
                    }
                    for (int i_9 = 2; i_9 < 18; i_9 += 3) 
                    {
                        arr_32 [i_1] [i_5 + 1] [i_6] = ((/* implicit */long long int) var_13);
                        arr_33 [18] [18] [i_1] [i_7 - 2] [i_9 - 1] [i_7] [i_1] = ((/* implicit */short) (-2147483647 - 1));
                    }
                    for (unsigned char i_10 = 0; i_10 < 20; i_10 += 3) 
                    {
                        arr_37 [i_1] = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_17 [i_1] [i_1])) ? (-3721260369219585448LL) : (((/* implicit */long long int) ((/* implicit */int) var_17)))))));
                        arr_38 [i_10] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_11 [i_1 + 1])) ? (((/* implicit */unsigned int) arr_11 [i_1 + 1])) : (var_7)));
                    }
                    for (unsigned int i_11 = 1; i_11 < 17; i_11 += 4) 
                    {
                        arr_42 [i_11] [i_1] [i_7 + 1] [(_Bool)1] [i_1] [i_1] = var_10;
                        var_31 = (short)-32374;
                    }
                    arr_43 [i_1] [i_5 + 1] [i_6] [i_1] = ((/* implicit */int) ((long long int) arr_19 [i_7] [i_7 - 3] [i_7 - 1]));
                    var_32 += ((/* implicit */int) 16U);
                    var_33 = (_Bool)1;
                }
                for (int i_12 = 2; i_12 < 17; i_12 += 1) 
                {
                    var_34 = ((/* implicit */short) min((var_34), (((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) 2147483642)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_17))) : (var_10)))))));
                    /* LoopSeq 4 */
                    for (unsigned short i_13 = 0; i_13 < 20; i_13 += 1) 
                    {
                        arr_49 [i_1] [i_1] [i_5 + 1] [i_5 + 1] [i_12 - 2] [9U] [i_12 - 2] = ((/* implicit */long long int) arr_45 [i_1]);
                        var_35 = ((/* implicit */signed char) max((var_35), (((/* implicit */signed char) ((((/* implicit */int) arr_26 [i_13] [i_6])) | (((/* implicit */int) arr_26 [i_1 - 1] [i_6])))))));
                        arr_50 [i_6] [10] [i_6] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)192)) ? (((((/* implicit */_Bool) arr_5 [i_1 - 1])) ? (((/* implicit */long long int) var_11)) : (arr_29 [(unsigned short)8] [(short)18] [i_6] [i_12] [i_13] [i_13]))) : (((/* implicit */long long int) -2147483643))));
                        arr_51 [i_13] [i_6] [i_1] [i_1] [i_5] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_5)) - (arr_41 [i_13] [i_12 - 2] [i_1 + 1] [i_1] [i_1])));
                        var_36 = ((/* implicit */unsigned int) arr_36 [i_13] [i_6] [i_5] [i_1]);
                    }
                    for (signed char i_14 = 1; i_14 < 19; i_14 += 1) 
                    {
                        arr_55 [i_1 - 1] [(unsigned char)16] [i_6] [11ULL] [(unsigned char)11] [i_1] [2LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_39 [i_14] [1ULL] [i_6] [i_1] [i_1]))))) : (arr_34 [i_1 - 2] [i_12 - 2] [i_14 - 1])));
                        var_37 += ((/* implicit */short) (!(((/* implicit */_Bool) arr_54 [i_1 + 1] [i_5 + 1] [i_12 + 2] [i_12 + 2] [i_14 - 1]))));
                        arr_56 [14] [14] [14] [i_1] = ((/* implicit */short) ((unsigned char) var_11));
                    }
                    for (unsigned short i_15 = 1; i_15 < 18; i_15 += 1) 
                    {
                        var_38 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-7188)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (arr_0 [i_1] [i_1]))))));
                        arr_60 [i_1] [(unsigned short)19] [i_5] [i_12 + 2] [(signed char)5] = (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 16U)) ? (arr_34 [i_12] [i_6] [16LL]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_40 [i_1] [i_5 + 1] [(_Bool)1] [i_6] [i_12 + 3] [i_1] [9LL])))))));
                        arr_61 [i_1 - 2] [i_5] [(unsigned char)14] [i_1] = ((((/* implicit */_Bool) arr_7 [i_12] [i_5 - 1] [i_1])) ? (((((/* implicit */_Bool) var_11)) ? (var_5) : (((/* implicit */int) var_16)))) : (((/* implicit */int) arr_40 [i_15] [i_1] [i_15] [i_12] [(unsigned char)19] [i_1] [i_1 - 1])));
                    }
                    for (signed char i_16 = 0; i_16 < 20; i_16 += 1) 
                    {
                        var_39 = ((/* implicit */long long int) ((short) ((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (_Bool)1)))));
                        arr_66 [i_1] [i_1] [i_1] [i_5] [10ULL] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 763429596U)) ? (var_7) : (((/* implicit */unsigned int) arr_31 [i_16] [i_12] [(unsigned char)14] [(unsigned short)9] [15U] [(unsigned char)5])))))));
                        var_40 += ((/* implicit */signed char) arr_57 [i_6] [i_12] [i_6] [i_5] [0U]);
                    }
                    /* LoopSeq 4 */
                    for (int i_17 = 0; i_17 < 20; i_17 += 1) 
                    {
                        arr_70 [i_1 - 2] [i_5] [i_1] [(unsigned char)1] [i_12] [i_17] = ((/* implicit */unsigned long long int) ((var_8) < (arr_52 [i_5 + 1] [i_12] [i_6] [i_12 + 2] [i_17])));
                        var_41 = ((/* implicit */_Bool) var_14);
                        arr_71 [i_1] [i_1] [(unsigned short)14] [i_1] [i_17] = ((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_6] [i_1])) ? (((((/* implicit */unsigned long long int) 9223372036854775807LL)) / (arr_13 [i_1] [i_5 - 1] [i_6] [i_12 - 2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2108927008))))));
                        var_42 = ((/* implicit */int) (signed char)-1);
                        var_43 = ((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_4))));
                    }
                    for (signed char i_18 = 1; i_18 < 17; i_18 += 1) 
                    {
                        arr_76 [i_1 - 2] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) arr_4 [(unsigned short)1]);
                        var_44 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))) ? (((/* implicit */int) arr_72 [i_1 + 1] [i_1] [i_1])) : (((/* implicit */int) var_3))));
                        var_45 = ((/* implicit */short) min((var_45), (((/* implicit */short) -682996212))));
                    }
                    for (long long int i_19 = 0; i_19 < 20; i_19 += 3) 
                    {
                        arr_80 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)4152)) < (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)4817)) : (((/* implicit */int) (_Bool)1))))));
                        var_46 -= ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) arr_46 [i_6])) ? (arr_0 [i_6] [i_6]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                        var_47 = ((/* implicit */unsigned int) (~(((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) arr_25 [i_1] [i_1] [i_1] [i_1] [i_1])))))));
                    }
                    for (short i_20 = 0; i_20 < 20; i_20 += 4) 
                    {
                        arr_83 [i_1] [i_5 + 1] [i_6] [i_1] [i_5 + 1] = ((/* implicit */short) (-(((((/* implicit */int) arr_48 [i_1] [i_5] [i_6] [i_12 + 3] [i_12 + 3])) / (((/* implicit */int) (_Bool)1))))));
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (signed char)35)) ? (var_13) : (((/* implicit */int) ((_Bool) arr_48 [i_1] [i_5] [i_1] [i_12] [8])))));
                        arr_84 [i_1] [i_5] [12ULL] [12ULL] [i_1] = ((/* implicit */int) (~(arr_27 [i_12 - 2] [(signed char)12] [i_5 + 1] [i_5])));
                        arr_85 [i_1] [i_1] [i_5] [i_1] = ((/* implicit */signed char) ((unsigned char) (-(((/* implicit */int) (unsigned char)146)))));
                    }
                    var_49 -= ((/* implicit */_Bool) (~((~(arr_52 [i_1] [10U] [i_5] [(unsigned char)18] [(unsigned char)18])))));
                }
            }
            arr_86 [i_1 + 1] [i_1] = ((/* implicit */long long int) arr_26 [i_1 + 1] [i_1]);
        }
        for (unsigned char i_21 = 0; i_21 < 20; i_21 += 4) 
        {
            var_50 -= ((/* implicit */unsigned int) ((arr_28 [i_1 + 1] [i_1 - 1] [i_21] [i_1 + 1] [i_1 - 1] [i_1 + 1] [i_1 - 1]) ? (((/* implicit */int) arr_28 [i_1 + 1] [i_1 + 1] [i_21] [i_1 + 1] [i_1 - 2] [i_1 + 1] [i_1 + 1])) : (var_5)));
            arr_90 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1)) ? (0LL) : (arr_36 [14ULL] [i_21] [14ULL] [i_1 + 1])))) ? (((/* implicit */int) arr_57 [i_1] [i_1] [i_1] [i_1] [i_1])) : (((/* implicit */int) var_12)));
            var_51 = ((((/* implicit */_Bool) arr_17 [i_1 - 2] [i_1])) ? (arr_20 [i_1] [i_1 + 1] [i_1 + 1] [i_1 - 2]) : (((/* implicit */unsigned int) -1558254131)));
            arr_91 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_15))));
            var_52 += ((/* implicit */long long int) (((_Bool)1) ? (((int) arr_41 [i_1] [i_1] [i_1] [i_21] [i_21])) : (((((/* implicit */_Bool) var_3)) ? (arr_52 [i_1] [17LL] [i_1 - 1] [i_1] [i_1]) : (((/* implicit */int) (short)29683))))));
        }
        arr_92 [i_1] [i_1] = (~(((((/* implicit */_Bool) var_1)) ? (3108566677U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_1] [(signed char)7] [(short)14]))))));
    }
    /* LoopSeq 1 */
    for (int i_22 = 0; i_22 < 21; i_22 += 2) 
    {
        var_53 = ((/* implicit */int) min((var_53), (((/* implicit */int) ((unsigned char) ((((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) / (((/* implicit */int) ((unsigned char) (_Bool)1)))))))));
        var_54 *= ((/* implicit */short) arr_94 [i_22]);
        arr_95 [i_22] |= ((/* implicit */int) ((((max((17889394115925239777ULL), (18446744073709551611ULL))) - (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_9))))))) * (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_93 [i_22] [(unsigned char)6])), (((((/* implicit */_Bool) 14171047078484096643ULL)) ? (((/* implicit */int) arr_93 [i_22] [i_22])) : (((/* implicit */int) arr_94 [i_22])))))))));
    }
}
