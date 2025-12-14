/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39820
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39820 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39820
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
    var_18 = (+(-363969661));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_19 -= ((/* implicit */int) (unsigned char)23);
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0]))))) ? (((((arr_1 [i_0]) + (2147483647))) >> (((-9173208702489663525LL) + (9173208702489663527LL))))) : ((+(((/* implicit */int) (unsigned char)242))))))) ? (((((/* implicit */_Bool) (short)15)) ? (arr_1 [i_0]) : ((+(var_14))))) : (((int) arr_0 [i_0]))));
        arr_3 [i_0] [i_0] = arr_1 [i_0];
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 1) 
        {
            var_20 -= ((unsigned char) -781910485);
            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [i_1 - 2])) ? (((/* implicit */int) var_1)) : (arr_4 [i_1 - 1])));
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [(unsigned char)0] [i_1])) ? (((/* implicit */int) (short)33)) : (-1943384837))))));
            arr_6 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((((/* implicit */_Bool) (unsigned char)11)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) var_1)))) - ((+(((/* implicit */int) var_5))))));
        }
    }
    for (int i_2 = 0; i_2 < 22; i_2 += 2) 
    {
        var_23 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((-24173431) + (2147483647))) >> (((((/* implicit */int) arr_8 [i_2])) - (168)))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) (unsigned char)233)) : (((/* implicit */int) (unsigned char)9))))) ? (((((/* implicit */_Bool) arr_8 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_8 [i_2]))) : (8945049002385001240LL))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)135)) <= (1423787009)))))))));
        var_24 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) ((unsigned char) arr_8 [i_2])))))) ? (((/* implicit */int) (short)591)) : ((~((~((-2147483647 - 1))))))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) arr_8 [i_2]))));
    }
    var_26 *= ((/* implicit */short) var_17);
    /* LoopSeq 1 */
    for (unsigned char i_3 = 0; i_3 < 21; i_3 += 2) 
    {
        /* LoopSeq 1 */
        for (int i_4 = 3; i_4 < 20; i_4 += 2) 
        {
            arr_13 [i_3] [i_3] [i_4] = ((/* implicit */long long int) arr_8 [i_4]);
            /* LoopSeq 4 */
            /* vectorizable */
            for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 21; i_6 += 3) 
                {
                    arr_18 [i_3] [i_4] [9] [i_5] [i_6] = arr_17 [i_3] [i_4] [i_5] [i_3] [i_3] [13LL];
                    var_27 = ((((/* implicit */_Bool) arr_16 [(short)10] [i_4] [i_4 + 1] [i_4] [i_4])) ? (arr_16 [i_4] [i_4 - 2] [i_4 + 1] [i_4] [i_6]) : ((-9223372036854775807LL - 1LL)));
                    var_28 *= ((/* implicit */short) var_2);
                    arr_19 [i_4] = ((/* implicit */int) ((arr_16 [i_4 - 1] [i_4] [i_4 + 1] [i_4] [i_4 + 1]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) (short)1920)) ? (((/* implicit */int) (unsigned char)22)) : (arr_9 [i_3] [i_6]))))));
                }
                arr_20 [i_3] [i_3] [i_4] [i_5] = (~((~(-1423787009))));
                var_29 = (-(((((/* implicit */int) (unsigned char)254)) * (((/* implicit */int) (short)20)))));
                var_30 = ((/* implicit */int) max((var_30), (((((/* implicit */int) (short)7112)) / (((/* implicit */int) (unsigned char)135))))));
                var_31 = ((/* implicit */unsigned char) ((((arr_15 [i_3] [i_3] [i_4 - 2] [i_5]) + (2147483647))) << ((((~(arr_12 [i_5]))) - (7592877233987728138LL)))));
            }
            for (long long int i_7 = 2; i_7 < 19; i_7 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (long long int i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (int i_9 = 0; i_9 < 21; i_9 += 1) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)121))) - (((((/* implicit */_Bool) ((short) arr_28 [i_3] [i_4] [(short)9]))) ? (((/* implicit */long long int) var_8)) : (((((/* implicit */_Bool) arr_21 [i_3] [i_3] [i_7] [i_8])) ? (-4227800517742022605LL) : (arr_10 [i_4 - 3] [i_8])))))));
                            var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) (~(-1247166957))))));
                            var_34 -= arr_7 [i_3] [i_4];
                            var_35 = ((/* implicit */unsigned char) ((arr_29 [i_3] [i_7] [i_8] [i_3] [i_9]) != (770093252)));
                            arr_30 [i_9] [i_9] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) ((arr_16 [i_7 + 1] [i_4 + 1] [i_7] [4] [i_9]) + (((/* implicit */long long int) ((/* implicit */int) arr_14 [i_7 + 2])))))) ? (((/* implicit */long long int) (~(((int) var_5))))) : (arr_11 [i_3] [i_4 - 1])));
                        }
                    } 
                } 
                arr_31 [i_3] [i_4] [i_7 + 1] [i_4] = ((/* implicit */int) (+((+(arr_12 [i_7 + 2])))));
            }
            /* vectorizable */
            for (long long int i_10 = 2; i_10 < 19; i_10 += 2) /* same iter space */
            {
                arr_34 [i_3] [i_4] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) (~(1583470621)))) ? (arr_26 [i_10 - 2] [i_4 + 1]) : (((((/* implicit */_Bool) 716605336835978592LL)) ? (((/* implicit */int) (short)20515)) : (arr_15 [i_3] [i_4] [i_10] [i_3])))));
                var_36 = ((/* implicit */int) (unsigned char)248);
            }
            for (long long int i_11 = 2; i_11 < 19; i_11 += 2) /* same iter space */
            {
                arr_37 [i_3] [i_4 - 1] |= ((/* implicit */unsigned char) var_0);
                arr_38 [i_3] [i_4 + 1] [i_11] = ((/* implicit */int) ((((/* implicit */_Bool) (+(arr_16 [i_4 + 1] [i_4 + 1] [i_11 - 2] [i_11 + 1] [i_11])))) ? (((arr_16 [i_4 - 1] [i_4 - 1] [i_4] [i_11 - 1] [i_11]) / (arr_16 [i_4 - 1] [i_4 - 1] [i_4 - 1] [i_11 + 1] [i_11]))) : ((+(arr_16 [i_4 + 1] [i_11] [i_11] [i_11 + 1] [i_11 + 1])))));
                arr_39 [i_3] [(short)12] [i_11 - 1] [i_3] = ((/* implicit */unsigned char) arr_22 [i_3] [i_4 - 1] [i_4 - 1]);
                var_37 = ((/* implicit */long long int) max((var_37), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)234)) << (((((/* implicit */int) arr_36 [i_4 + 1] [i_4 + 1])) - (16761)))))) ? (((/* implicit */long long int) var_9)) : (((((arr_10 [i_11 + 2] [i_4 - 2]) + (9223372036854775807LL))) << (((((arr_10 [i_4 - 2] [i_11 + 1]) + (157029518060167359LL))) - (8LL)))))))));
                /* LoopNest 2 */
                for (short i_12 = 0; i_12 < 21; i_12 += 3) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 1) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) arr_29 [i_3] [i_4] [i_11] [i_4 - 1] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) ((var_2) != (((/* implicit */long long int) var_10)))))) : (arr_16 [i_4] [i_4] [i_4 - 1] [i_4] [i_11 + 1]))));
                            var_39 = (~(((((/* implicit */_Bool) min((1373380220), (-1365679351)))) ? (((/* implicit */int) ((arr_22 [i_13] [i_12] [i_11]) <= (((/* implicit */long long int) 1423787008))))) : ((~(((/* implicit */int) (short)-591)))))));
                        }
                    } 
                } 
            }
        }
        arr_44 [i_3] [i_3] = ((((/* implicit */_Bool) min((arr_25 [i_3] [i_3]), (arr_25 [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_25 [i_3] [i_3])) ? (-8472834537070461027LL) : (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_3] [i_3]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_25 [i_3] [i_3]))))));
        var_40 = ((/* implicit */short) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_32 [(short)1])) ? (716605336835978592LL) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_3] [i_3])))))) ? (arr_22 [i_3] [i_3] [i_3]) : ((+(arr_22 [i_3] [i_3] [i_3])))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_14 = 0; i_14 < 21; i_14 += 1) 
        {
            var_41 ^= ((/* implicit */short) (+(arr_12 [i_3])));
            /* LoopSeq 2 */
            for (short i_15 = 0; i_15 < 21; i_15 += 1) 
            {
                arr_50 [i_14] [8] [8] = ((/* implicit */int) (~(var_16)));
                /* LoopNest 2 */
                for (short i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    for (int i_17 = 0; i_17 < 21; i_17 += 1) 
                    {
                        {
                            arr_55 [i_3] [i_14] [i_15] [2] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)107)) ? ((+(var_16))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (arr_15 [10LL] [i_14] [i_15] [i_17]) : (((/* implicit */int) (short)30336)))))));
                            var_42 = ((/* implicit */short) min((var_42), ((short)7)));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (int i_18 = 3; i_18 < 17; i_18 += 1) 
                {
                    arr_58 [i_3] [i_14] [i_3] [i_14] = ((/* implicit */int) (short)13459);
                    var_43 = ((/* implicit */int) var_5);
                    var_44 *= ((/* implicit */short) (+((~(((/* implicit */int) (short)15))))));
                }
                for (int i_19 = 0; i_19 < 21; i_19 += 1) 
                {
                    arr_63 [i_3] [20] [i_14] [i_19] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_11 [i_3] [i_14])) ? (arr_17 [i_3] [i_3] [i_14] [i_15] [i_15] [i_19]) : (((/* implicit */int) (short)11892))));
                    var_45 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (unsigned char)5)) >= (arr_21 [i_3] [i_14] [i_3] [i_19]))))));
                    arr_64 [i_3] [0] [i_14] = ((((arr_22 [i_19] [i_14] [i_3]) ^ (arr_62 [i_3] [i_3] [i_14] [(short)15]))) / (((/* implicit */long long int) (~(((/* implicit */int) arr_56 [i_14] [i_14] [11LL] [15]))))));
                    arr_65 [0LL] [i_14] [i_19] = ((/* implicit */short) (~(arr_46 [i_3] [i_15] [i_19])));
                }
                var_46 -= ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? ((~(((/* implicit */int) (unsigned char)114)))) : ((+(arr_57 [i_3] [i_3] [i_15] [12] [i_3])))));
                var_47 += ((/* implicit */short) ((((((/* implicit */_Bool) arr_46 [i_3] [i_14] [i_15])) ? (2435000093542502791LL) : (var_12))) <= (arr_10 [i_15] [i_14])));
            }
            for (unsigned char i_20 = 1; i_20 < 19; i_20 += 1) 
            {
                arr_69 [i_20] [i_14] [i_14] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)112)) * (((/* implicit */int) arr_48 [i_14] [i_14]))));
                arr_70 [i_20] [i_14] [i_14] [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) arr_49 [i_3] [i_14] [i_20] [i_20 - 1])) ? (((/* implicit */long long int) arr_9 [i_14] [i_20 - 1])) : (((((/* implicit */_Bool) -716605336835978592LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-11897))) : (arr_22 [i_20 - 1] [i_14] [i_3])))));
                var_48 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_42 [i_20 - 1] [i_20 - 1] [i_20] [i_3] [i_3] [i_3])) ? (arr_40 [i_20 + 2] [i_14] [i_14] [i_3] [(short)6]) : (arr_46 [i_20 + 1] [i_14] [i_14])));
            }
            var_49 ^= ((/* implicit */long long int) (!(((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) (short)-9703))))));
        }
        /* LoopNest 3 */
        for (short i_21 = 1; i_21 < 18; i_21 += 4) 
        {
            for (long long int i_22 = 3; i_22 < 20; i_22 += 4) 
            {
                for (short i_23 = 0; i_23 < 21; i_23 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_24 = 0; i_24 < 21; i_24 += 1) /* same iter space */
                        {
                            arr_81 [i_3] [i_22] [i_22] [i_23] [i_24] = (+(((/* implicit */int) arr_42 [i_22 + 1] [i_22 - 3] [i_22 - 3] [i_21 - 1] [i_21 + 3] [i_21 + 2])));
                            arr_82 [i_3] [i_22] [i_22] = (short)13459;
                        }
                        /* vectorizable */
                        for (short i_25 = 0; i_25 < 21; i_25 += 1) /* same iter space */
                        {
                            var_50 = ((/* implicit */long long int) max((var_50), (arr_16 [i_21 - 1] [i_21 + 2] [6] [i_21] [i_22 - 2])));
                            arr_87 [i_3] [i_22] [i_23] [i_25] = ((/* implicit */short) ((((/* implicit */_Bool) (~(2029330852414416145LL)))) ? (((((/* implicit */_Bool) var_5)) ? (-5172123900820395349LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)199))))) : (((/* implicit */long long int) ((/* implicit */int) arr_33 [i_21] [i_21] [19] [i_21 + 1])))));
                            arr_88 [(short)15] [i_22] [i_22 - 3] [i_22 - 3] [i_22] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) var_8)) ? (((((/* implicit */_Bool) (short)9683)) ? (-2029330852414416145LL) : (((/* implicit */long long int) ((/* implicit */int) (short)8064))))) : (((/* implicit */long long int) (~(((/* implicit */int) (unsigned char)116)))))));
                            var_51 = ((/* implicit */int) ((((/* implicit */_Bool) arr_57 [i_3] [i_22] [i_22] [i_23] [i_25])) ? (-4570789421266549779LL) : (((/* implicit */long long int) arr_57 [i_25] [i_22] [i_22 - 2] [i_22] [i_3]))));
                        }
                        var_52 = ((/* implicit */int) (unsigned char)144);
                        var_53 = ((/* implicit */short) ((((((((/* implicit */_Bool) (~(16)))) ? (arr_22 [i_23] [i_22] [i_3]) : (((/* implicit */long long int) (+(arr_76 [i_22] [(unsigned char)5] [i_22] [i_23])))))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) arr_56 [i_22] [i_21] [i_21] [i_23])))) + (245)))));
                        var_54 = ((/* implicit */short) ((((/* implicit */_Bool) ((-2147483634) + (((/* implicit */int) (short)8085))))) ? (((((/* implicit */_Bool) arr_60 [i_21 - 1] [i_22])) ? (((/* implicit */int) arr_60 [i_21 - 1] [i_22])) : (((/* implicit */int) arr_60 [i_21 + 3] [i_22])))) : ((-(((/* implicit */int) arr_60 [i_21 + 3] [i_22]))))));
                    }
                } 
            } 
        } 
    }
}
