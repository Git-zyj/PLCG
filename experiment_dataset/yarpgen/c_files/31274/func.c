/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31274
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) 131064ULL))));
                /* LoopSeq 2 */
                for (unsigned short i_2 = 0; i_2 < 16; i_2 += 2) 
                {
                    var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_16)))) ? (((long long int) 18446744073709420538ULL)) : (((/* implicit */long long int) ((((/* implicit */int) var_12)) | (((/* implicit */int) (short)20105))))))))));
                    /* LoopSeq 2 */
                    for (signed char i_3 = 3; i_3 < 14; i_3 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((signed char) arr_8 [i_3] [i_3 + 2] [i_3 - 2] [i_3 - 1] [i_3 - 1] [i_2]))) ? (max((arr_8 [i_3] [i_3 - 2] [i_3] [i_3 + 2] [i_3 - 1] [i_2]), (arr_8 [i_3] [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 - 3] [i_2]))) : (arr_8 [i_3] [i_3 - 2] [i_3 - 2] [i_3 + 2] [i_3 + 1] [i_2])));
                        /* LoopSeq 2 */
                        for (signed char i_4 = 0; i_4 < 16; i_4 += 2) 
                        {
                            var_20 = (unsigned short)4096;
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) ((signed char) var_9))) ^ (((var_1) & (((/* implicit */int) arr_2 [i_4])))))))));
                        }
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            var_22 = (unsigned char)241;
                            var_23 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]))) - (18446744073709420538ULL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_2] [i_2] [i_5])) ? (((/* implicit */int) ((short) arr_7 [i_1] [i_1] [i_1] [i_1]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-20103)))))))) : (arr_7 [i_0] [i_0] [i_0] [i_0])));
                        }
                        var_24 |= ((/* implicit */unsigned short) min((min((131078ULL), (max((131064ULL), (((/* implicit */unsigned long long int) arr_0 [i_2] [i_2])))))), (arr_8 [i_0] [i_0] [i_0] [i_1] [i_0] [i_2])));
                    }
                    for (unsigned char i_6 = 1; i_6 < 15; i_6 += 2) 
                    {
                        var_25 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)162)) >= (((/* implicit */int) ((unsigned char) (+(((/* implicit */int) arr_15 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0]))))))));
                        arr_16 [i_0] [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_15))) > (((((/* implicit */int) ((unsigned char) arr_6 [i_6] [i_2] [i_1] [i_0]))) ^ (((((/* implicit */int) arr_0 [i_2] [i_1])) ^ (((/* implicit */int) var_2))))))));
                        var_26 = ((/* implicit */int) (unsigned short)65534);
                        var_27 = ((/* implicit */unsigned char) min((var_27), (((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0]))))) ? (((/* implicit */int) arr_2 [i_2])) : (((/* implicit */int) ((max((var_5), (((/* implicit */long long int) var_1)))) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)5804)))))))))));
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_28 &= ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_6 + 1])) < (((/* implicit */int) arr_1 [i_6 + 1]))));
                            var_29 = ((/* implicit */unsigned char) ((long long int) (unsigned char)96));
                        }
                        for (unsigned char i_8 = 0; i_8 < 16; i_8 += 1) 
                        {
                            var_30 = ((/* implicit */short) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_15 [i_6 - 1] [i_6 - 1] [i_6 - 1] [i_6 + 1] [i_8] [i_6 - 1])), (10438521287636178944ULL)))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_10)))) : (((((/* implicit */_Bool) min((((/* implicit */signed char) var_9)), (var_14)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_8] [i_6] [i_2] [i_0] [i_0]))) : (min((((/* implicit */long long int) var_9)), (arr_9 [i_0] [i_0] [i_0] [i_0])))))));
                            var_31 = ((/* implicit */unsigned long long int) ((((var_13) && (((/* implicit */_Bool) arr_14 [i_6 - 1] [i_0] [i_1] [i_0] [i_2])))) ? (((((((/* implicit */_Bool) (unsigned short)13365)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (short)12453)))) + ((+(((/* implicit */int) var_6)))))) : (((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_3)))) * (((/* implicit */int) arr_2 [i_1]))))));
                        }
                        for (short i_9 = 0; i_9 < 16; i_9 += 1) /* same iter space */
                        {
                            var_32 = ((/* implicit */unsigned short) (unsigned char)244);
                            var_33 = ((/* implicit */unsigned char) ((long long int) (((~(arr_7 [i_0] [i_1] [i_2] [i_6 - 1]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))));
                            var_34 *= ((/* implicit */short) (((~(((/* implicit */int) arr_3 [i_6 + 1] [i_6 - 1] [i_2])))) * (((((/* implicit */_Bool) arr_3 [i_6 - 1] [i_6 + 1] [i_2])) ? (((/* implicit */int) arr_3 [i_6 - 1] [i_6 + 1] [i_2])) : (((/* implicit */int) var_9))))));
                            var_35 = ((/* implicit */_Bool) min((var_35), (arr_20 [i_0] [i_0] [i_0] [i_0] [i_0])));
                            var_36 = ((/* implicit */unsigned char) min((var_36), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((+(var_0))), (((/* implicit */unsigned long long int) arr_1 [i_6 + 1]))))))))));
                        }
                        for (short i_10 = 0; i_10 < 16; i_10 += 1) /* same iter space */
                        {
                            var_37 = ((/* implicit */_Bool) max((((/* implicit */int) (unsigned char)192)), ((~(((/* implicit */int) var_14))))));
                            arr_27 [i_10] [i_6 + 1] [i_1] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) arr_13 [i_0] [i_1] [i_2]);
                            var_38 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */int) (signed char)-82)) : (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                    }
                }
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    var_39 += ((/* implicit */_Bool) (short)14336);
                    var_40 = ((/* implicit */unsigned char) ((arr_9 [i_0] [i_0] [i_0] [i_0]) + (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned char)129))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 1) 
                    {
                        var_41 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) ((long long int) max((var_8), (((/* implicit */long long int) arr_25 [i_1]))))))));
                        var_42 ^= ((/* implicit */unsigned long long int) ((arr_9 [i_0] [i_1] [i_0] [i_0]) / (((/* implicit */long long int) ((/* implicit */int) ((signed char) (short)-9759))))));
                        var_43 += ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */int) ((arr_12 [i_11] [i_11] [i_11] [i_11] [(_Bool)1]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))), ((-(((/* implicit */int) var_10)))))));
                        var_44 = ((/* implicit */short) ((unsigned long long int) var_15));
                        var_45 = ((_Bool) ((_Bool) ((((/* implicit */int) (short)20110)) | (((/* implicit */int) arr_14 [i_0] [i_0] [i_1] [i_0] [i_0])))));
                    }
                    for (unsigned char i_13 = 0; i_13 < 16; i_13 += 3) 
                    {
                        arr_36 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) arr_9 [i_0] [i_0] [i_11] [i_13])), (arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1])));
                        arr_37 [i_1] [i_1] [i_13] [i_13] [i_1] = ((/* implicit */_Bool) (unsigned short)16384);
                        var_46 = ((/* implicit */unsigned char) ((((((((/* implicit */int) var_2)) << (((/* implicit */int) var_13)))) * (((/* implicit */int) ((-7199501300402784870LL) < (((/* implicit */long long int) ((/* implicit */int) (unsigned char)250)))))))) + (((/* implicit */int) var_4))));
                        arr_38 [i_0] [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_21 [i_0] [i_0] [i_0] [i_13] [i_1])) : ((~(((/* implicit */int) ((((/* implicit */int) (unsigned short)10231)) >= (((/* implicit */int) arr_28 [i_11] [i_11] [i_1] [i_0])))))))));
                        var_47 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) - (arr_13 [i_0] [i_0] [i_0])))) ? (((((/* implicit */_Bool) arr_8 [i_1] [i_0] [i_0] [i_0] [i_0] [i_1])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_7)))) : ((+(((/* implicit */int) arr_20 [i_1] [i_13] [i_1] [i_1] [i_0])))))) != (((/* implicit */int) (unsigned char)248))));
                    }
                    arr_39 [i_1] = ((/* implicit */unsigned char) (unsigned short)45710);
                    /* LoopSeq 2 */
                    for (int i_14 = 0; i_14 < 16; i_14 += 1) /* same iter space */
                    {
                        arr_42 [i_1] [i_1] [i_1] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) var_16)) ? (max((((/* implicit */long long int) (short)1081)), (3603816252935969352LL))) : (((/* implicit */long long int) ((((/* implicit */int) arr_20 [i_0] [i_1] [i_1] [i_0] [i_0])) + (var_1))))));
                        var_48 = ((/* implicit */unsigned short) (_Bool)1);
                        var_49 |= ((/* implicit */signed char) (~(((/* implicit */int) ((short) (signed char)16)))));
                    }
                    /* vectorizable */
                    for (int i_15 = 0; i_15 < 16; i_15 += 1) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_31 [i_0] [i_0] [i_15] [i_15] [i_15] [i_15]))));
                        /* LoopSeq 1 */
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_51 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) < (((8796093022176ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))))));
                            var_52 *= ((/* implicit */unsigned char) -3603816252935969352LL);
                            var_53 = ((/* implicit */_Bool) (unsigned char)77);
                            var_54 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) var_13)) >> (((((/* implicit */int) (unsigned char)247)) - (239)))))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) ^ (arr_8 [i_0] [i_1] [i_11] [i_0] [i_1] [i_1])))));
                            var_55 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) var_15))));
                        }
                        var_56 = ((/* implicit */_Bool) ((long long int) ((unsigned char) 1984)));
                        var_57 = ((/* implicit */long long int) ((int) (!(((/* implicit */_Bool) arr_13 [i_1] [i_1] [i_15])))));
                    }
                }
            }
        } 
    } 
    var_58 = ((/* implicit */unsigned long long int) var_5);
    var_59 = ((/* implicit */unsigned long long int) var_8);
    var_60 = (_Bool)1;
}
