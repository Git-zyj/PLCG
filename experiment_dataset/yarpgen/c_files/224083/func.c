/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224083
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
    var_17 = ((/* implicit */short) ((((/* implicit */long long int) -340315934)) >= (9223372036854775807LL)));
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_2))))) != ((~(var_6)))))), (var_16)));
    /* LoopSeq 3 */
    for (int i_0 = 2; i_0 < 21; i_0 += 2) 
    {
        var_19 = ((/* implicit */signed char) 11350393184351728187ULL);
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_0 [i_0] [i_0])))))) ? (max((((/* implicit */unsigned long long int) 16383)), (7096350889357823450ULL))) : (((/* implicit */unsigned long long int) ((((((/* implicit */long long int) var_6)) - (1152921229728940032LL))) + (((/* implicit */long long int) ((var_8) + (((/* implicit */unsigned int) var_7))))))))));
        arr_2 [i_0 + 2] [i_0 - 1] = ((/* implicit */unsigned long long int) ((((unsigned int) var_7)) % (((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0] [i_0 - 2])))) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_0 + 2] [i_0])) && (((/* implicit */_Bool) var_3))))))))));
        /* LoopSeq 3 */
        for (signed char i_1 = 2; i_1 < 21; i_1 += 2) 
        {
            var_21 = ((/* implicit */unsigned int) ((arr_3 [i_1 + 2] [i_0] [i_0]) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_15)), (arr_5 [i_1 - 1] [i_0 - 2]))))) : (((long long int) arr_0 [i_0] [i_1 + 2]))));
            var_22 = ((/* implicit */unsigned long long int) var_7);
        }
        for (unsigned long long int i_2 = 0; i_2 < 23; i_2 += 1) 
        {
            arr_8 [i_0] [i_0] = ((/* implicit */short) var_11);
            var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) var_10))));
        }
        for (signed char i_3 = 0; i_3 < 23; i_3 += 1) 
        {
            arr_12 [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) arr_7 [i_0 - 1] [i_0 + 1] [i_0 + 1]))) ? (((/* implicit */int) ((short) var_16))) : ((~(arr_7 [i_0 - 2] [i_0 - 2] [i_0 + 1])))));
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (int i_5 = 2; i_5 < 21; i_5 += 2) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_6 = 2; i_6 < 21; i_6 += 2) /* same iter space */
                        {
                            var_24 = ((/* implicit */unsigned char) ((((int) max((((/* implicit */unsigned long long int) var_6)), (7096350889357823444ULL)))) > (((/* implicit */int) ((short) max((((/* implicit */unsigned long long int) 9223372036854775807LL)), (11350393184351728187ULL)))))));
                            arr_22 [i_3] [i_6] [i_3] [i_4] [i_3] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)45)) || (((/* implicit */_Bool) 3734563605U))));
                            var_25 = ((unsigned char) max((((/* implicit */unsigned char) ((arr_3 [3U] [i_4] [i_6]) && (((/* implicit */_Bool) arr_0 [i_0] [i_0]))))), ((unsigned char)245)));
                            arr_23 [i_0] [i_0] [i_0] [i_3] [(_Bool)1] = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) 19)) ? (arr_7 [i_5 - 1] [i_3] [11ULL]) : (((/* implicit */int) arr_20 [i_3] [i_3])))));
                            arr_24 [i_3] [i_3] [i_4] [i_4] [i_5] [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (var_5) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 1])))))) ? ((~(arr_7 [i_3] [i_4 + 1] [i_5 + 2]))) : (((((/* implicit */_Bool) arr_7 [i_0] [i_3] [7])) ? (((/* implicit */int) (unsigned short)16946)) : (arr_7 [i_3] [i_4 + 1] [i_5])))));
                        }
                        /* vectorizable */
                        for (unsigned int i_7 = 2; i_7 < 21; i_7 += 2) /* same iter space */
                        {
                            var_26 ^= ((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) (unsigned char)239)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_11 [i_0] [i_0] [i_7]))) : (5U))));
                            var_27 = (-(((/* implicit */int) ((((/* implicit */int) (unsigned short)58908)) > (-102435706)))));
                        }
                        arr_27 [i_0 + 1] [i_0 - 2] [i_0 + 1] [(unsigned char)13] [i_4] [i_3] = ((/* implicit */long long int) (~((+(min((-837732279), (((/* implicit */int) (unsigned char)10))))))));
                        var_28 = ((/* implicit */_Bool) (-(((/* implicit */int) ((((((/* implicit */_Bool) -1451758366020964396LL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (-3062052957160997395LL))) > (((/* implicit */long long int) ((((/* implicit */int) arr_5 [i_3] [i_5])) + (arr_7 [(signed char)14] [i_3] [i_0])))))))));
                    }
                } 
            } 
            var_29 -= ((/* implicit */signed char) ((((/* implicit */int) max((((/* implicit */signed char) ((arr_15 [i_0] [i_0] [i_0] [16U] [9LL] [i_3]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))), (arr_11 [i_0] [i_0] [i_0])))) * (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))));
            arr_28 [i_3] [i_3] = ((/* implicit */unsigned int) ((long long int) min((((((/* implicit */_Bool) 1260405451484456559LL)) ? (((/* implicit */int) (short)-11132)) : (((/* implicit */int) (unsigned char)17)))), (((/* implicit */int) var_1)))));
        }
    }
    for (signed char i_8 = 2; i_8 < 10; i_8 += 2) 
    {
        arr_32 [i_8 + 1] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) + ((+(((/* implicit */int) var_3))))))) & ((((!(((/* implicit */_Bool) var_13)))) ? (var_12) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (4294967295U) : (((/* implicit */unsigned int) var_14)))))))));
        /* LoopNest 3 */
        for (unsigned long long int i_9 = 2; i_9 < 8; i_9 += 1) 
        {
            for (short i_10 = 0; i_10 < 12; i_10 += 3) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        arr_40 [i_9] [(signed char)2] [i_11] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((long long int) var_11)) / (((((/* implicit */_Bool) -8620223599967309177LL)) ? (-7868881632837974486LL) : (((/* implicit */long long int) -2058267862)))))))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) max((6087937037025892578LL), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_8 - 2] [i_9 + 1] [i_8])) ? (3008968101U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)14)))))))))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_8] [i_8 + 2])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_8] [i_8 - 2])))))) ? (min((((/* implicit */int) (signed char)-41)), (max((((/* implicit */int) arr_29 [i_8 - 1])), (1589886880))))) : (((((/* implicit */int) var_15)) % ((~(((/* implicit */int) (short)16383))))))));
        var_32 = ((/* implicit */short) max((var_32), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) arr_30 [i_8] [i_8])) && (((/* implicit */_Bool) arr_20 [i_8] [i_8])))) || (((/* implicit */_Bool) 1781180419)))))) + (var_13))))));
        var_33 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26534))) > (16676339880484949970ULL)));
    }
    for (unsigned short i_12 = 1; i_12 < 21; i_12 += 3) 
    {
        var_34 ^= ((/* implicit */unsigned char) var_7);
        /* LoopSeq 1 */
        for (unsigned long long int i_13 = 0; i_13 < 24; i_13 += 3) 
        {
            /* LoopSeq 4 */
            for (int i_14 = 3; i_14 < 21; i_14 += 2) /* same iter space */
            {
                var_35 = ((/* implicit */short) max((var_35), (((/* implicit */short) (~(((/* implicit */int) max((((((/* implicit */_Bool) 0LL)) && (((/* implicit */_Bool) 9223372036854775807LL)))), ((!(((/* implicit */_Bool) (short)10167))))))))))));
                var_36 = ((/* implicit */long long int) var_8);
            }
            for (int i_15 = 3; i_15 < 21; i_15 += 2) /* same iter space */
            {
                arr_51 [i_12 + 2] [i_12] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) arr_41 [i_12])) < (var_12)));
                var_37 = ((/* implicit */unsigned long long int) arr_45 [i_13] [6]);
                var_38 |= ((/* implicit */unsigned short) var_8);
            }
            for (int i_16 = 3; i_16 < 21; i_16 += 2) /* same iter space */
            {
                arr_55 [i_12] [i_13] [i_12] = ((/* implicit */unsigned int) ((arr_54 [i_12] [i_13]) < (((/* implicit */unsigned long long int) (~(((((/* implicit */int) (unsigned short)60896)) / (var_14))))))));
                arr_56 [(unsigned char)4] [i_12] [i_16] = ((/* implicit */unsigned int) ((signed char) max((((/* implicit */unsigned long long int) 3360598629924905183LL)), (15239620911133241533ULL))));
            }
            /* vectorizable */
            for (int i_17 = 3; i_17 < 21; i_17 += 2) /* same iter space */
            {
                var_39 = ((/* implicit */int) (unsigned char)240);
                var_40 |= ((/* implicit */int) var_13);
                var_41 = ((/* implicit */long long int) min((var_41), (((long long int) (~(-804673082))))));
                /* LoopSeq 2 */
                for (short i_18 = 0; i_18 < 24; i_18 += 4) /* same iter space */
                {
                    arr_61 [i_12] [i_13] [i_12] [i_13] = ((/* implicit */short) (~(arr_54 [i_12] [i_13])));
                    var_42 |= ((/* implicit */signed char) ((_Bool) arr_43 [i_12 + 2] [i_12 + 2]));
                    var_43 = ((/* implicit */long long int) max((var_43), (((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) arr_42 [i_13] [(signed char)20]))))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_19 = 0; i_19 < 24; i_19 += 4) 
                    {
                        var_44 = (+(((/* implicit */int) arr_53 [i_13])));
                        var_45 = ((/* implicit */_Bool) var_11);
                    }
                    for (int i_20 = 0; i_20 < 24; i_20 += 4) 
                    {
                        var_46 = ((/* implicit */long long int) var_13);
                        arr_67 [3ULL] [i_13] [i_12] [15U] [i_20] = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_12 - 1] [i_12 - 1])))));
                        arr_68 [(_Bool)1] [i_13] [1U] [i_12] [i_20] = arr_66 [i_12] [i_12] [i_17] [20U] [i_18] [i_20];
                        var_47 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned short)40726)) : (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)-26517)) : (((/* implicit */int) arr_60 [4] [i_18] [i_17 + 3] [i_13] [i_12]))))) : ((+(var_6)))));
                    }
                    arr_69 [i_12 + 1] [i_13] [i_13] [i_12] [(_Bool)1] = ((/* implicit */unsigned int) ((short) arr_60 [i_12 + 1] [i_12 + 3] [i_17] [i_17] [i_17 - 1]));
                }
                for (short i_21 = 0; i_21 < 24; i_21 += 4) /* same iter space */
                {
                    var_48 = ((/* implicit */unsigned int) max((var_48), (((/* implicit */unsigned int) var_14))));
                    arr_72 [i_12] [i_13] [i_17 + 2] [i_21] |= ((/* implicit */int) ((var_6) & (((/* implicit */unsigned int) (~(var_7))))));
                    var_49 = ((/* implicit */unsigned short) max((var_49), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((long long int) var_10)) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_64 [i_17] [i_17])) ? (((/* implicit */unsigned int) arr_47 [i_17] [i_21] [i_17])) : (arr_57 [i_21] [i_21] [i_17] [i_21])))))))));
                }
            }
            arr_73 [i_12] = ((/* implicit */short) min((-1692619217), (((((((/* implicit */_Bool) arr_42 [(short)1] [i_13])) ? (var_14) : (((/* implicit */int) var_10)))) & (((arr_64 [i_12] [i_12]) & (arr_65 [i_12])))))));
        }
    }
}
