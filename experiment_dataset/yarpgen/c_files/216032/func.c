/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216032
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned int i_1 = 1; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 = ((/* implicit */unsigned char) var_9);
                /* LoopSeq 2 */
                for (unsigned char i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    arr_8 [i_0] = ((/* implicit */_Bool) max((min((max((var_6), (((/* implicit */long long int) var_4)))), (((/* implicit */long long int) ((arr_5 [(unsigned short)10]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0] [i_0] [i_2])))))))), (((/* implicit */long long int) max((((((/* implicit */int) arr_2 [i_2])) % (((/* implicit */int) var_1)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_9))))))))));
                    var_12 = ((/* implicit */unsigned short) (~(min((arr_6 [i_1 + 1] [i_1 + 1] [i_1 - 1] [i_1 - 1]), (arr_0 [i_1 - 1])))));
                    var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(arr_0 [i_1 - 1])))) ? (((/* implicit */int) max((var_1), (((/* implicit */unsigned short) var_4))))) : (((/* implicit */int) ((short) (unsigned char)20)))));
                }
                for (long long int i_3 = 1; i_3 < 15; i_3 += 3) 
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_4 = 0; i_4 < 16; i_4 += 1) 
                    {
                        arr_13 [i_0] [i_0] [8U] [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) arr_11 [i_4] [i_0] [i_0] [i_1 + 1]))));
                        var_14 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_1 - 1]))));
                    }
                    var_15 = ((/* implicit */signed char) ((((((/* implicit */int) arr_4 [i_0])) + (((/* implicit */int) var_10)))) - (((/* implicit */int) max((arr_4 [i_0]), (arr_4 [i_0]))))));
                }
                var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_9 [i_1] [(signed char)6] [4LL])) && (((/* implicit */_Bool) arr_6 [(unsigned char)6] [(unsigned char)13] [i_1 - 1] [i_1]))))), (((((2893813591U) ^ (2563399643U))) * (((/* implicit */unsigned int) ((/* implicit */int) max((arr_10 [2LL]), (((/* implicit */signed char) var_4)))))))))))));
                var_17 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) 2680446084U)) ? (((((/* implicit */_Bool) (unsigned char)236)) ? (((/* implicit */int) (signed char)-108)) : (((/* implicit */int) (signed char)-84)))) : (((((/* implicit */_Bool) arr_12 [i_1 + 1] [(short)10] [i_1 + 1] [i_1 + 1] [(short)10] [i_1 - 1])) ? (((/* implicit */int) (unsigned char)236)) : (((/* implicit */int) (signed char)21))))));
            }
        } 
    } 
    /* LoopSeq 4 */
    for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
    {
        var_18 = ((((((/* implicit */_Bool) max((arr_17 [(_Bool)1]), (((/* implicit */short) arr_15 [i_5]))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_10)))) : (((((/* implicit */_Bool) arr_15 [23U])) ? (arr_16 [(_Bool)1]) : (var_6))))) < (((/* implicit */long long int) ((((/* implicit */int) var_5)) * (((((/* implicit */int) arr_15 [i_5])) << (((((/* implicit */int) arr_17 [i_5 - 1])) + (18004)))))))));
        /* LoopSeq 2 */
        for (long long int i_6 = 1; i_6 < 24; i_6 += 2) 
        {
            var_19 = ((/* implicit */signed char) max((((/* implicit */unsigned int) (unsigned short)698)), (1614521214U)));
            /* LoopNest 3 */
            for (unsigned char i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                for (unsigned int i_8 = 3; i_8 < 22; i_8 += 2) 
                {
                    for (unsigned int i_9 = 2; i_9 < 24; i_9 += 1) 
                    {
                        {
                            arr_27 [i_5] [(unsigned char)22] [i_5 + 2] [i_6] [(unsigned char)6] = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((2680446084U) & (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))))) / (((arr_26 [i_8 + 2]) + (((/* implicit */long long int) ((var_7) << (((/* implicit */int) arr_25 [i_5] [i_6] [i_8])))))))));
                            var_20 |= ((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)36)) >> (((2680446105U) - (2680446104U)))));
                            var_21 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) arr_22 [i_5] [i_7 - 1] [i_6] [(_Bool)0])), (((((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_7]))) / (var_7))))), (((unsigned int) arr_21 [(unsigned char)5] [(unsigned char)5] [i_7 + 1]))));
                        }
                    } 
                } 
            } 
            arr_28 [i_6] [(unsigned char)23] [(unsigned char)3] = ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_5] [i_5] [(unsigned char)16])) ? (((/* implicit */int) arr_22 [i_5] [(unsigned char)10] [i_6] [i_5])) : (((/* implicit */int) var_9))))), (max((1614521212U), (1879349985U))))) <= (((/* implicit */unsigned int) ((((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) (_Bool)1)))) | ((~(((/* implicit */int) var_9)))))))));
        }
        /* vectorizable */
        for (long long int i_10 = 0; i_10 < 25; i_10 += 1) 
        {
            var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) ((arr_21 [i_5 - 2] [i_5 - 1] [i_5 + 3]) ^ (arr_24 [i_5 - 2] [i_5 - 2] [i_5 + 3]))))));
            var_23 *= ((/* implicit */unsigned char) ((((/* implicit */int) arr_19 [i_5 + 2] [i_5 - 1] [i_5 - 1])) < (((/* implicit */int) arr_19 [i_5 - 2] [i_5 - 2] [i_5 + 2]))));
        }
        var_24 = ((/* implicit */unsigned char) (~(var_3)));
    }
    /* vectorizable */
    for (unsigned char i_11 = 2; i_11 < 23; i_11 += 4) /* same iter space */
    {
        arr_34 [i_11] = ((/* implicit */signed char) ((arr_30 [i_11 - 1]) / (((unsigned int) arr_20 [i_11]))));
        var_25 = ((/* implicit */short) ((unsigned short) arr_23 [(_Bool)0] [i_11 + 1] [i_11 + 1] [i_11] [16U]));
        arr_35 [i_11] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)255)) != (((/* implicit */int) (unsigned short)65535))));
        var_26 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((signed char) var_9))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_11 - 2]))) : (arr_21 [i_11 + 2] [i_11 - 1] [3U])));
        var_27 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_21 [4U] [i_11] [i_11])))));
    }
    for (unsigned char i_12 = 2; i_12 < 23; i_12 += 4) /* same iter space */
    {
        arr_40 [i_12] [i_12] &= ((/* implicit */long long int) ((((max((((/* implicit */unsigned int) var_10)), (arr_30 [i_12]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((arr_30 [12LL]) < (((/* implicit */unsigned int) ((/* implicit */int) var_9))))))))) * (max((((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) var_1))))), (((((/* implicit */_Bool) arr_22 [20U] [i_12 + 2] [i_12] [20U])) ? (arr_33 [18LL]) : (arr_21 [9LL] [i_12 - 1] [19U])))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned short i_13 = 2; i_13 < 23; i_13 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned short i_14 = 1; i_14 < 24; i_14 += 4) 
            {
                for (unsigned short i_15 = 2; i_15 < 24; i_15 += 2) 
                {
                    for (unsigned char i_16 = 0; i_16 < 25; i_16 += 1) 
                    {
                        {
                            var_28 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [(unsigned char)0] [(unsigned char)14] [i_13 + 2] [i_15 - 1] [(unsigned char)0] [(unsigned char)0]))) % (arr_21 [i_12 - 2] [i_15 - 1] [i_14 - 1])));
                            var_29 = ((/* implicit */unsigned int) ((arr_32 [i_13 + 1]) != (arr_32 [i_13 - 1])));
                            arr_50 [i_14] [(short)3] [(short)3] [i_14] [(signed char)22] [i_14] = ((/* implicit */signed char) arr_31 [i_13 - 2]);
                            var_30 = ((/* implicit */_Bool) max((var_30), (((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255))) > (1614521208U)))) / (((/* implicit */int) arr_23 [10U] [i_14] [i_14 - 1] [i_12] [10U])))))));
                        }
                    } 
                } 
            } 
            var_31 = ((/* implicit */unsigned short) var_7);
            var_32 = ((/* implicit */signed char) arr_38 [i_12]);
            arr_51 [i_12 + 2] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_23 [i_12 + 2] [i_12 + 1] [i_13 - 1] [i_13] [i_13 + 2])) % (((/* implicit */int) arr_23 [i_12 + 1] [i_12 + 2] [i_13 + 2] [i_12] [i_13 + 2]))));
        }
        for (_Bool i_17 = 1; i_17 < 1; i_17 += 1) 
        {
            var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) ((((/* implicit */_Bool) 1383330944U)) ? (1879349985U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))));
            var_34 = ((/* implicit */unsigned int) (-(((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (arr_24 [(unsigned char)20] [i_17 - 1] [(unsigned short)19])))) ^ (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) arr_23 [18U] [18U] [18U] [i_12] [10U])) : (((/* implicit */int) arr_20 [21U]))))))));
            var_35 = ((/* implicit */unsigned char) min((min((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_41 [5U]))))), (((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (3887056999U))))), (((var_2) * (max((((/* implicit */unsigned int) var_8)), (arr_30 [(unsigned char)7])))))));
            var_36 = ((/* implicit */_Bool) max((((arr_33 [i_17 - 1]) << (((arr_33 [i_17 - 1]) - (3746371367U))))), (((arr_33 [i_17 - 1]) << (((arr_33 [i_17 - 1]) - (3746371360U)))))));
            var_37 = ((/* implicit */unsigned short) ((((((((/* implicit */_Bool) arr_33 [(signed char)7])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_6))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_37 [i_12 - 2])) : (((/* implicit */int) var_1))))))) % (((/* implicit */long long int) ((0U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)65))))))));
        }
        var_38 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) arr_24 [i_12] [i_12 - 1] [i_12 + 2])) ? (arr_24 [(_Bool)1] [i_12 - 1] [i_12 + 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12] [i_12 - 1] [i_12 + 2] [i_12] [i_12 + 2] [i_12 + 2]))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_24 [i_12 - 2] [i_12 - 1] [i_12 + 2])) || (((/* implicit */_Bool) arr_24 [i_12] [i_12 - 1] [i_12 + 2])))))));
    }
    for (unsigned char i_18 = 2; i_18 < 23; i_18 += 4) /* same iter space */
    {
        var_39 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_7))))) * (((/* implicit */int) arr_39 [i_18 - 2] [(unsigned char)20]))))) >= (((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-123))) / (-288585596174673137LL))))));
        /* LoopSeq 3 */
        for (signed char i_19 = 4; i_19 < 23; i_19 += 2) /* same iter space */
        {
            var_40 = ((((/* implicit */_Bool) -9039839127399068140LL)) ? (1376530502U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)253))));
            var_41 = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)252)) % (((/* implicit */int) (unsigned short)50160))));
            var_42 = ((((unsigned int) ((arr_24 [(signed char)24] [i_18] [i_18]) >= (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) * (min((((/* implicit */unsigned int) (unsigned char)0)), (1614521212U))));
            var_43 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) arr_45 [2U] [2U] [2U] [i_18 + 2] [(_Bool)1] [(signed char)11])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_14 [i_18])))))) ? (min((max((((/* implicit */long long int) var_5)), (arr_26 [i_18]))), (((/* implicit */long long int) (+(((/* implicit */int) arr_29 [i_18] [(unsigned short)5]))))))) : (((/* implicit */long long int) ((arr_59 [i_18 - 2]) ? (arr_55 [i_19 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_59 [i_18 - 1]))))))));
            var_44 = (+(var_2));
        }
        for (signed char i_20 = 4; i_20 < 23; i_20 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (unsigned int i_21 = 0; i_21 < 25; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (long long int i_23 = 1; i_23 < 22; i_23 += 4) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((min((var_2), (((/* implicit */unsigned int) var_4)))) + (((/* implicit */unsigned int) ((((/* implicit */int) arr_48 [i_23 + 1] [(signed char)18] [(_Bool)1] [4U] [4U])) % (((/* implicit */int) var_8)))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_20 - 4] [(signed char)6] [i_23 + 3]))))))) : (((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_66 [(unsigned char)0] [(unsigned char)22])), (arr_32 [(signed char)16])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) arr_31 [i_18]))))) : (((var_6) / (((/* implicit */long long int) var_2))))))));
                            arr_75 [(_Bool)1] [i_18 - 1] [i_22] [7U] [i_22] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_67 [i_21] [i_21] [i_18]))) != (arr_38 [i_18 - 2])));
                            var_46 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_70 [(signed char)19] [(signed char)19] [i_21] [(signed char)19] [i_22])) / (((((/* implicit */_Bool) ((signed char) arr_19 [i_21] [(signed char)19] [i_18 - 2]))) ? (((/* implicit */long long int) ((/* implicit */int) arr_18 [i_22]))) : (((var_6) / (((/* implicit */long long int) ((/* implicit */int) arr_20 [i_23])))))))));
                        }
                    } 
                } 
            } 
            arr_76 [i_18] [(unsigned char)1] = ((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_53 [(unsigned char)7] [18U] [(signed char)6])) : (((/* implicit */int) var_8)))) <= (((((/* implicit */int) arr_43 [i_18])) | (((/* implicit */int) arr_18 [i_20])))))) ? (((((/* implicit */unsigned int) (+(((/* implicit */int) var_5))))) ^ (var_3))) : (((/* implicit */unsigned int) ((/* implicit */int) ((short) 2952427990U)))));
            var_47 = ((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_18 [i_18])) % (((/* implicit */int) arr_18 [i_20]))))), ((~(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) % (arr_54 [i_18] [(unsigned char)14])))))));
        }
        for (signed char i_24 = 4; i_24 < 23; i_24 += 2) /* same iter space */
        {
            var_48 |= ((/* implicit */signed char) ((max((((/* implicit */unsigned int) (unsigned short)0)), (3651081151U))) | (max((((/* implicit */unsigned int) ((((/* implicit */int) arr_68 [10U] [21LL] [4LL])) == (((/* implicit */int) var_10))))), (((arr_70 [i_18] [i_18] [0U] [i_18] [i_24]) * (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))))));
            var_49 *= ((/* implicit */long long int) (((-(((/* implicit */int) arr_20 [i_18 - 1])))) != (((/* implicit */int) ((unsigned short) arr_20 [i_18])))));
        }
    }
}
