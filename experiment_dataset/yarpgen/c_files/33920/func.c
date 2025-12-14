/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33920
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
    var_16 = ((/* implicit */signed char) min((((/* implicit */unsigned int) var_10)), (var_13)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (signed char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        arr_10 [i_0] [i_1] [i_2] = ((/* implicit */unsigned long long int) (~((+(var_12)))));
                        /* LoopSeq 4 */
                        for (long long int i_4 = 2; i_4 < 19; i_4 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)7)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)253))) : (8388608LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_0] [i_1] [i_1] [i_3]))) : (((arr_8 [i_0] [0U] [i_2] [i_2]) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_1])))))));
                            arr_13 [i_0] [i_1] [i_2] [i_1] [i_4] = ((/* implicit */_Bool) var_4);
                            var_18 = (-(arr_0 [i_0]));
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_0] [i_2] [i_3] [i_4 + 2] [i_4] [i_4]))));
                            var_19 = ((/* implicit */signed char) (~(((/* implicit */int) ((unsigned short) arr_4 [i_0] [i_3])))));
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_20 = ((/* implicit */signed char) arr_4 [i_0] [i_0]);
                            var_21 ^= var_9;
                            arr_19 [i_0] [i_0] [i_0] [i_3] [i_5] = ((/* implicit */int) arr_9 [i_0] [i_1] [i_0] [i_3] [i_5] [i_5]);
                        }
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                        {
                            var_22 += ((/* implicit */short) (~(((/* implicit */int) arr_7 [i_0]))));
                            var_23 = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_6])) ? ((~(((/* implicit */int) var_5)))) : (((/* implicit */int) arr_11 [i_0]))));
                        }
                        for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            var_24 ^= ((/* implicit */short) ((((/* implicit */int) (unsigned char)241)) >= (((/* implicit */int) arr_8 [i_3] [i_1] [i_3] [i_1]))));
                            var_25 ^= ((/* implicit */unsigned short) (+(-1573241269482546128LL)));
                        }
                    }
                    for (unsigned char i_8 = 1; i_8 < 22; i_8 += 4) /* same iter space */
                    {
                        arr_26 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_0 [i_0])) || (((/* implicit */_Bool) (+(arr_0 [i_1])))))) && (((/* implicit */_Bool) max(((~(((/* implicit */int) arr_11 [i_8])))), ((-(((/* implicit */int) arr_7 [(unsigned char)18])))))))));
                        var_26 ^= ((/* implicit */unsigned int) var_1);
                    }
                    for (unsigned char i_9 = 1; i_9 < 22; i_9 += 4) /* same iter space */
                    {
                        arr_29 [i_0] [i_1] [i_1] [i_0] [i_0] [i_9] = (i_0 % 2 == zero) ? (((/* implicit */unsigned char) ((arr_27 [i_0] [(unsigned short)15] [i_0] [i_1] [i_2] [i_9 + 1]) << (((min((arr_2 [i_9 + 1] [i_0]), (((((/* implicit */int) (unsigned char)249)) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))) + (51682617)))))) : (((/* implicit */unsigned char) ((arr_27 [i_0] [(unsigned short)15] [i_0] [i_1] [i_2] [i_9 + 1]) << (((((min((arr_2 [i_9 + 1] [i_0]), (((((/* implicit */int) (unsigned char)249)) | (((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])))))) + (51682617))) - (51682870))))));
                        /* LoopSeq 3 */
                        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 3) 
                        {
                            var_27 = ((unsigned short) arr_1 [i_1] [i_2]);
                            arr_33 [i_0] [i_0] = ((/* implicit */unsigned char) var_2);
                            var_28 = ((/* implicit */unsigned int) (~((-((+(((/* implicit */int) arr_11 [i_2]))))))));
                            var_29 = ((/* implicit */short) max((var_29), (((/* implicit */short) ((_Bool) (~(((/* implicit */int) arr_11 [i_9]))))))));
                            var_30 = ((/* implicit */int) var_11);
                        }
                        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
                        {
                            arr_37 [(unsigned short)7] [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((unsigned short) var_3));
                            var_31 = ((/* implicit */unsigned long long int) (~(min((arr_2 [i_11 + 1] [i_0]), (((/* implicit */int) var_6))))));
                            var_32 += arr_0 [18];
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 23; i_12 += 3) 
                        {
                            var_33 = ((/* implicit */int) max((var_33), (((/* implicit */int) ((((((/* implicit */_Bool) ((754001196) / (((/* implicit */int) (unsigned char)252))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_3))) / (arr_28 [(short)14] [(short)14]))) : (((/* implicit */long long int) (-(((/* implicit */int) var_9))))))) * ((+(1573241269482546133LL))))))));
                            var_34 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((-9223372036854775804LL) + (9223372036854775807LL))) << (((/* implicit */int) (unsigned char)2))))) ^ (((unsigned long long int) arr_2 [i_1] [20U]))));
                        }
                        var_35 = ((((/* implicit */long long int) ((((/* implicit */int) var_9)) - (((/* implicit */int) arr_30 [i_9 + 1] [i_0] [i_9 - 1] [i_9 - 1] [i_9] [i_9 - 1]))))) != ((-((~(arr_32 [i_0] [i_0] [i_0] [i_1] [i_0] [(short)12] [i_9]))))));
                    }
                    /* vectorizable */
                    for (long long int i_13 = 1; i_13 < 19; i_13 += 4) 
                    {
                        var_36 = ((/* implicit */int) min((var_36), (((arr_2 [i_13 + 4] [12LL]) / (((/* implicit */int) arr_11 [i_13 + 1]))))));
                        /* LoopSeq 4 */
                        for (short i_14 = 0; i_14 < 23; i_14 += 3) 
                        {
                            arr_45 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_8 [i_0] [i_13 + 3] [i_13 + 2] [i_13 + 3])) >> (((((/* implicit */int) arr_6 [i_13 - 1])) - (12095)))));
                            var_37 = ((/* implicit */short) arr_31 [i_0]);
                            var_38 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_1))));
                            var_39 = ((/* implicit */unsigned short) var_8);
                        }
                        for (short i_15 = 0; i_15 < 23; i_15 += 4) 
                        {
                            var_40 = ((/* implicit */unsigned short) var_5);
                            var_41 = ((/* implicit */unsigned short) ((_Bool) arr_17 [i_1] [12LL] [12LL] [i_13 + 3] [i_13 + 3]));
                            var_42 = ((/* implicit */signed char) (~(arr_43 [i_13] [i_13 - 1] [i_13] [i_13 + 2] [i_13])));
                        }
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            var_43 += ((/* implicit */unsigned int) arr_2 [(signed char)6] [(signed char)6]);
                            arr_51 [i_16] [i_13] [i_0] [i_1] [i_0] = ((/* implicit */unsigned long long int) var_5);
                        }
                        for (unsigned int i_17 = 2; i_17 < 22; i_17 += 4) 
                        {
                            var_44 = ((((/* implicit */int) var_5)) <= (((/* implicit */int) arr_52 [i_17 - 2] [i_0] [i_17 - 2] [i_0] [i_2])));
                            var_45 = ((/* implicit */unsigned char) max((var_45), (((/* implicit */unsigned char) (+(((/* implicit */int) arr_39 [i_17 + 1] [i_17 - 1] [(short)0] [i_17] [i_17])))))));
                            arr_55 [i_0] = ((/* implicit */short) ((unsigned short) var_4));
                            arr_56 [i_17 - 1] [i_13 + 4] [i_0] [(signed char)5] [i_0] [i_1] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_5))) & (arr_43 [(short)4] [i_1] [i_2] [i_13] [i_17])))) ? (((/* implicit */int) var_15)) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_0] [i_0] [i_1] [i_0] [i_13]))))));
                        }
                    }
                    var_46 ^= ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_54 [1U] [15LL] [i_2] [15LL] [i_2] [i_2] [15LL]), (((/* implicit */unsigned short) ((short) (short)-18254))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (signed char i_18 = 3; i_18 < 20; i_18 += 4) 
        {
            for (short i_19 = 0; i_19 < 23; i_19 += 1) 
            {
                {
                    var_47 += ((/* implicit */unsigned int) min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)0)) != (((/* implicit */int) ((unsigned char) (unsigned short)6)))))), (-8870311621345785248LL)));
                    /* LoopSeq 4 */
                    for (short i_20 = 0; i_20 < 23; i_20 += 4) 
                    {
                        var_48 ^= ((/* implicit */long long int) max((min((((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_0] [(signed char)22] [i_19] [i_20] [i_20]))))), ((-(((/* implicit */int) (unsigned short)32767)))))), (((/* implicit */int) var_3))));
                        var_49 = arr_5 [i_18] [i_18] [i_18 + 3] [i_18 - 3];
                        var_50 = ((/* implicit */int) ((((4050594079556478362LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65525))))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 23; i_21 += 3) 
                    {
                        arr_67 [i_0] [i_18] [i_18 + 1] [i_0] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) arr_34 [i_18] [i_18 - 1] [i_18] [(short)22] [i_0])), (arr_20 [i_18] [i_18 - 1] [i_18] [i_18] [i_18 - 2] [i_21])))), ((-(5177380332091012598ULL)))));
                        arr_68 [i_0] [(unsigned char)0] [i_19] [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */long long int) max((arr_8 [i_0] [i_18] [i_18 + 3] [i_18]), (arr_8 [i_0] [i_0] [i_0] [i_18 + 2])))), (((long long int) ((((/* implicit */_Bool) (unsigned char)6)) ? (var_12) : (((/* implicit */long long int) var_4)))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_22 = 0; i_22 < 23; i_22 += 1) 
                    {
                        var_51 = ((/* implicit */unsigned int) ((_Bool) var_14));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_23 = 0; i_23 < 23; i_23 += 3) 
                        {
                            var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) (-(((/* implicit */int) arr_30 [i_18] [6LL] [6LL] [i_18 - 3] [i_18] [i_18 + 3])))))));
                            var_53 = ((/* implicit */long long int) (signed char)29);
                            var_54 = ((/* implicit */unsigned short) ((short) arr_24 [i_18 - 3] [i_18 - 1] [i_0]));
                            var_55 = ((/* implicit */unsigned short) var_13);
                        }
                        var_56 = ((/* implicit */long long int) (-(((var_0) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))));
                        var_57 = ((/* implicit */unsigned char) arr_62 [i_0] [i_0] [i_19]);
                        var_58 = ((/* implicit */_Bool) (-(3724291378722475346LL)));
                    }
                    for (long long int i_24 = 2; i_24 < 22; i_24 += 1) 
                    {
                        arr_77 [i_19] [i_0] = ((/* implicit */long long int) (-(((((/* implicit */int) arr_36 [i_0] [i_18] [i_24 - 1] [i_24] [i_24 + 1])) * (((/* implicit */int) (signed char)-27))))));
                        var_59 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */unsigned short) var_6)), (arr_38 [i_0])))), ((~(((/* implicit */int) arr_38 [i_0]))))));
                        var_60 = ((/* implicit */unsigned long long int) var_14);
                    }
                    var_61 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) -9223372036854775804LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_72 [6ULL]) >> (((/* implicit */int) (_Bool)1))))) ? (max((-9223372036854775790LL), (((/* implicit */long long int) arr_6 [19LL])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) arr_12 [i_19] [i_19] [(signed char)8] [i_19] [(signed char)8] [i_0] [i_0]))))))))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_5))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_65 [(signed char)15]))) + (arr_27 [i_0] [i_18 + 3] [i_0] [i_18 + 3] [i_18 + 3] [(_Bool)1])))))));
                    /* LoopNest 2 */
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        for (unsigned long long int i_26 = 0; i_26 < 23; i_26 += 4) 
                        {
                            {
                                var_62 = ((/* implicit */short) max((var_62), (((/* implicit */short) var_13))));
                                var_63 ^= ((/* implicit */int) arr_47 [i_0] [(short)22] [i_19] [i_26] [i_26] [i_26]);
                                arr_82 [i_0] = ((/* implicit */unsigned int) max((max((arr_17 [i_18 - 3] [i_18 - 3] [i_18 - 3] [i_18 - 3] [i_18 + 1]), (((/* implicit */unsigned long long int) arr_9 [i_0] [i_18 - 3] [i_18] [i_18 - 3] [i_18 - 3] [i_18 + 1])))), (((/* implicit */unsigned long long int) min((((/* implicit */short) arr_39 [i_18 - 3] [i_18 - 3] [i_18] [i_0] [i_18 - 1])), (var_10))))));
                                var_64 = (~(9223372036854775790LL));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
