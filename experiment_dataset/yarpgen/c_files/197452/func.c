/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197452
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197452 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197452
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
    var_16 = ((/* implicit */long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)24)) ? (((((/* implicit */int) (unsigned char)24)) & (((/* implicit */int) (unsigned char)14)))) : (((/* implicit */int) ((unsigned char) var_4)))))) <= (var_3)));
    /* LoopNest 3 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 3) 
    {
        for (unsigned char i_1 = 3; i_1 < 19; i_1 += 2) 
        {
            for (int i_2 = 2; i_2 < 22; i_2 += 4) 
            {
                {
                    var_17 = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0]))));
                    arr_8 [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)14)) ? (((/* implicit */int) (unsigned char)242)) : (((/* implicit */int) (unsigned char)14))));
                    /* LoopSeq 2 */
                    for (int i_3 = 0; i_3 < 23; i_3 += 2) 
                    {
                        arr_11 [i_0 + 2] [(signed char)7] [i_1 - 3] [16] [19LL] [i_0] = arr_1 [i_0] [i_2 - 2];
                        var_18 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)24))) : (max((((/* implicit */unsigned long long int) arr_4 [i_0 - 4])), (max((((/* implicit */unsigned long long int) (unsigned char)234)), (1718512011520810169ULL)))))));
                        /* LoopSeq 2 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((unsigned long long int) (-(((/* implicit */int) (unsigned char)251)))));
                            var_20 = ((_Bool) 6294342290401084422ULL);
                            var_21 = ((/* implicit */_Bool) arr_6 [i_0] [i_3] [i_0]);
                            var_22 ^= ((/* implicit */long long int) ((_Bool) (-(((/* implicit */int) arr_13 [i_0] [(unsigned short)12] [i_0 - 3] [15ULL] [15ULL])))));
                            arr_14 [i_0] [i_0] [(_Bool)1] [i_0] [i_3] [i_3] = ((/* implicit */signed char) arr_9 [i_1] [i_2 - 1]);
                        }
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
                        {
                            var_23 = ((/* implicit */unsigned char) max((arr_4 [(signed char)0]), (((/* implicit */signed char) arr_15 [i_0 + 2] [(signed char)0] [i_0 + 2] [i_2 + 1] [i_2 + 1] [i_0] [i_5]))));
                            var_24 |= ((/* implicit */signed char) arr_7 [i_1] [i_2 + 1] [i_3] [i_3]);
                            var_25 = ((/* implicit */unsigned char) min((var_25), (((unsigned char) (unsigned char)14))));
                        }
                    }
                    for (unsigned long long int i_6 = 1; i_6 < 21; i_6 += 3) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) max((((_Bool) ((arr_12 [(_Bool)1]) >= (((/* implicit */long long int) 50084223))))), (((((/* implicit */_Bool) (~(((/* implicit */int) arr_5 [(signed char)12] [(signed char)12] [(signed char)12] [(signed char)12]))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) / (var_11))))))));
                        var_27 = ((/* implicit */unsigned short) var_8);
                        /* LoopSeq 2 */
                        for (unsigned long long int i_7 = 0; i_7 < 23; i_7 += 2) 
                        {
                            var_28 = ((/* implicit */signed char) ((unsigned short) min((arr_3 [i_0 - 4]), (arr_3 [i_0 - 3]))));
                            arr_22 [(_Bool)1] [i_6] [i_0] [8ULL] [i_0] = ((/* implicit */signed char) max((((/* implicit */int) ((_Bool) var_9))), (((((/* implicit */_Bool) arr_5 [21] [21] [i_0] [i_0])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) ((_Bool) 50084223)))))));
                            arr_23 [i_0 + 2] [i_7] &= ((/* implicit */unsigned int) min((((/* implicit */int) arr_5 [(_Bool)1] [i_2 - 2] [(_Bool)1] [10U])), (min((arr_10 [i_0 - 3]), (((/* implicit */int) arr_17 [i_0 + 3] [i_1 + 4] [i_2 - 1] [i_6 - 1] [i_7] [i_2 - 1]))))));
                        }
                        for (unsigned long long int i_8 = 3; i_8 < 21; i_8 += 3) 
                        {
                            arr_27 [i_0 - 4] [i_0 - 4] [i_0] [15LL] [15LL] [i_0 - 4] = ((/* implicit */unsigned long long int) arr_21 [i_1] [i_6]);
                            arr_28 [i_0] [8] [i_0] [i_0] = ((/* implicit */signed char) arr_2 [i_0]);
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_9 = 0; i_9 < 12; i_9 += 4) 
    {
        var_29 = ((/* implicit */int) max((var_29), (((/* implicit */int) ((arr_24 [i_9] [i_9] [i_9] [i_9] [18ULL]) < (max((arr_24 [i_9] [i_9] [i_9] [4ULL] [i_9]), (((/* implicit */long long int) var_2)))))))));
        var_30 = ((/* implicit */unsigned char) ((max((((/* implicit */int) (unsigned char)194)), (50084223))) > (((((/* implicit */_Bool) 50084194)) ? (-1034446461) : (880725908)))));
        arr_31 [i_9] = ((/* implicit */signed char) ((((/* implicit */int) min((var_0), (((/* implicit */unsigned short) min((var_12), (((/* implicit */short) var_4)))))))) >> (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) -2159312906328248765LL)), (6294342290401084422ULL)))))));
        var_31 = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)231)) ? (arr_10 [(_Bool)1]) : (((/* implicit */int) (unsigned char)196))));
    }
    for (unsigned char i_10 = 4; i_10 < 19; i_10 += 4) 
    {
        arr_36 [(signed char)4] = ((/* implicit */unsigned int) ((unsigned long long int) 5992720509787970006ULL));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 0; i_11 < 20; i_11 += 3) 
        {
            arr_39 [i_10] [i_10] = ((/* implicit */_Bool) ((50084228) & (((/* implicit */int) (unsigned char)234))));
            /* LoopSeq 2 */
            for (unsigned long long int i_12 = 0; i_12 < 20; i_12 += 1) 
            {
                arr_44 [i_12] [16LL] = ((/* implicit */long long int) var_2);
                var_32 += ((/* implicit */_Bool) (signed char)65);
            }
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                /* LoopSeq 2 */
                for (int i_14 = 1; i_14 < 18; i_14 += 4) /* same iter space */
                {
                    arr_49 [i_13] = ((/* implicit */unsigned char) ((long long int) max((((/* implicit */long long int) 91191598)), (7701165218044786880LL))));
                    arr_50 [i_10] [(signed char)3] [i_11] [(signed char)3] [i_13] [(signed char)3] = ((/* implicit */long long int) max((((int) arr_40 [i_10 + 1] [10LL] [i_14 - 1])), (((((/* implicit */_Bool) arr_40 [i_10 - 3] [i_14] [i_14 - 1])) ? (arr_40 [i_10 + 1] [i_11] [i_14 - 1]) : (arr_40 [i_10 + 1] [i_10 + 1] [i_14 + 2])))));
                    var_33 = ((/* implicit */unsigned int) ((unsigned char) (unsigned char)228));
                }
                for (int i_15 = 1; i_15 < 18; i_15 += 4) /* same iter space */
                {
                    arr_54 [i_13] [i_13] [i_13] [i_15 - 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_11] [i_11] [i_15])) && (((/* implicit */_Bool) 12152401783308467203ULL))))), (var_3)))) ? (((/* implicit */int) (((~(arr_51 [i_10]))) > (((/* implicit */unsigned long long int) arr_48 [i_13]))))) : (((((-880725909) + (2147483647))) >> (((50084221) - (50084197)))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_16 = 0; i_16 < 20; i_16 += 2) 
                    {
                        arr_57 [i_10] [i_13] [i_13] [(_Bool)1] [i_16] = ((/* implicit */long long int) var_14);
                        arr_58 [i_10] [i_13] [i_10 - 1] = (unsigned char)236;
                        var_34 = ((/* implicit */unsigned char) arr_12 [i_15 - 1]);
                        arr_59 [i_13] = ((/* implicit */_Bool) ((unsigned long long int) min((((/* implicit */int) var_0)), (arr_40 [i_10] [i_10 - 4] [i_10 - 4]))));
                        arr_60 [i_10] [i_10] [i_10] [i_10] [i_10] [i_13] = ((/* implicit */signed char) ((((/* implicit */_Bool) 50084232)) ? (((arr_1 [i_13] [i_10 - 1]) - (arr_1 [i_13] [i_10 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) ((-50084224) >= (50084223)))))));
                    }
                    var_35 = ((/* implicit */signed char) ((2457003316273640721ULL) <= (16020652809003656143ULL)));
                    var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) ((max((arr_35 [i_10 - 3]), (((/* implicit */int) ((signed char) var_12))))) | (((((/* implicit */_Bool) 2107436257020056217ULL)) ? (((/* implicit */int) (unsigned char)33)) : (((/* implicit */int) (unsigned char)229)))))))));
                }
                var_37 += ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_3 [i_10 - 1])) ? (((/* implicit */int) arr_3 [i_10 - 2])) : (((/* implicit */int) arr_3 [i_10 - 1])))), (((/* implicit */int) ((_Bool) max((var_10), (var_3)))))));
                var_38 &= ((/* implicit */unsigned long long int) ((signed char) var_14));
            }
        }
    }
    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 4) 
    {
        var_39 = ((/* implicit */int) (~(arr_45 [(signed char)11] [i_17] [i_17])));
        /* LoopSeq 2 */
        for (unsigned int i_18 = 1; i_18 < 9; i_18 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_19 = 0; i_19 < 10; i_19 += 4) 
            {
                for (unsigned int i_20 = 3; i_20 < 6; i_20 += 2) 
                {
                    {
                        arr_71 [i_17] [i_19] [i_17] |= ((/* implicit */signed char) max((((/* implicit */unsigned short) (unsigned char)19)), ((unsigned short)33706)));
                        var_40 += ((/* implicit */signed char) ((unsigned char) ((int) ((_Bool) arr_63 [i_17] [i_17]))));
                        arr_72 [i_20] [7U] [i_19] [i_19] [i_19] = ((/* implicit */unsigned char) arr_12 [i_19]);
                        var_41 = ((/* implicit */signed char) 16020652809003656143ULL);
                    }
                } 
            } 
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned char i_21 = 0; i_21 < 10; i_21 += 1) 
            {
                arr_75 [9LL] = ((/* implicit */long long int) arr_20 [(short)22] [i_21] [i_17] [(signed char)2] [i_17]);
                arr_76 [i_17] [i_17] [i_17] = ((/* implicit */int) ((signed char) var_7));
            }
            /* vectorizable */
            for (unsigned short i_22 = 2; i_22 < 8; i_22 += 1) 
            {
                /* LoopNest 2 */
                for (unsigned char i_23 = 3; i_23 < 9; i_23 += 3) 
                {
                    for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
                    {
                        {
                            arr_85 [i_17] [5U] [8ULL] [i_23] [i_23 - 2] [5LL] = arr_43 [i_23];
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((signed char) arr_73 [i_18 + 1] [i_23 - 3])))));
                        }
                    } 
                } 
                arr_86 [i_17] [4ULL] [i_22 - 1] [1ULL] |= ((/* implicit */long long int) var_6);
                arr_87 [8ULL] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_56 [4] [i_18 + 1] [i_22 + 1] [i_17] [6LL] [i_18 + 1] [i_17]))) == (arr_79 [(signed char)5] [i_22 - 1])));
            }
            var_43 = ((/* implicit */unsigned long long int) min((var_43), (((/* implicit */unsigned long long int) arr_68 [i_17]))));
        }
        for (unsigned long long int i_25 = 1; i_25 < 9; i_25 += 4) 
        {
            arr_90 [i_25] = ((4938371462998837900ULL) | (((/* implicit */unsigned long long int) min((arr_55 [i_17] [i_17] [i_17] [i_17] [i_25 - 1]), (1547600531)))));
            /* LoopNest 3 */
            for (unsigned int i_26 = 2; i_26 < 9; i_26 += 4) 
            {
                for (unsigned long long int i_27 = 1; i_27 < 8; i_27 += 2) 
                {
                    for (signed char i_28 = 0; i_28 < 10; i_28 += 4) 
                    {
                        {
                            var_44 = ((/* implicit */_Bool) ((signed char) min((min((954760463), (((/* implicit */int) (signed char)-16)))), (((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (arr_15 [i_17] [(signed char)16] [(unsigned short)20] [i_17] [(signed char)16] [i_25] [i_17])))))));
                            var_45 = ((/* implicit */unsigned int) var_0);
                            var_46 *= max((arr_0 [i_17]), (min((12152401783308467214ULL), (((unsigned long long int) 954760463)))));
                            var_47 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (!(((/* implicit */_Bool) ((int) arr_95 [i_17] [i_25] [i_25 + 1] [i_25] [i_28])))))), ((~(((/* implicit */int) (unsigned char)19))))));
                            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) arr_21 [i_27] [i_25 + 1]))));
                        }
                    } 
                } 
            } 
            var_49 = ((/* implicit */unsigned int) ((16339307816689495398ULL) > (2426091264705895473ULL)));
            /* LoopSeq 1 */
            for (unsigned char i_29 = 0; i_29 < 10; i_29 += 4) 
            {
                /* LoopSeq 1 */
                for (signed char i_30 = 0; i_30 < 10; i_30 += 3) 
                {
                    /* LoopSeq 4 */
                    for (signed char i_31 = 3; i_31 < 8; i_31 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned int) ((unsigned long long int) -1866171476));
                        arr_103 [i_25] [i_30] = ((/* implicit */unsigned char) arr_65 [i_29] [i_17]);
                        arr_104 [i_17] [(unsigned char)1] [1LL] [i_29] [i_29] [i_25] [0] = ((/* implicit */int) ((_Bool) arr_51 [i_17]));
                    }
                    for (signed char i_32 = 3; i_32 < 8; i_32 += 4) /* same iter space */
                    {
                        arr_107 [i_17] [i_17] [i_17] [i_25] [i_17] [(signed char)1] [i_30] = ((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)228))));
                        var_51 += ((/* implicit */long long int) max((4166524915U), (((/* implicit */unsigned int) (+(((/* implicit */int) arr_52 [i_25 + 1] [i_25 + 1] [i_25 + 1] [i_29])))))));
                    }
                    for (signed char i_33 = 3; i_33 < 8; i_33 += 4) /* same iter space */
                    {
                        arr_110 [i_17] [i_25] [i_29] [i_33 - 1] = var_15;
                        var_52 = ((/* implicit */_Bool) min((var_52), (((/* implicit */_Bool) (-(((/* implicit */int) arr_32 [i_17] [i_17])))))));
                        var_53 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)50)) ? (((/* implicit */int) (unsigned char)19)) : (((/* implicit */int) (unsigned char)20))));
                        arr_111 [4LL] [4LL] [i_17] [i_17] [i_17] [i_17] [i_17] |= ((/* implicit */_Bool) min(((unsigned char)125), ((unsigned char)229)));
                    }
                    for (signed char i_34 = 3; i_34 < 8; i_34 += 4) /* same iter space */
                    {
                        arr_114 [i_30] [i_17] |= ((/* implicit */unsigned int) ((_Bool) var_6));
                        arr_115 [i_17] [2LL] [i_25] [i_30] [6] = ((/* implicit */long long int) min((var_6), (((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)229)))))));
                    }
                    arr_116 [i_17] [i_17] [i_25] [i_29] [(unsigned char)5] [i_30] = ((/* implicit */unsigned long long int) (unsigned char)220);
                    var_54 = ((/* implicit */int) max((var_54), (((/* implicit */int) max((((/* implicit */unsigned int) (unsigned char)14)), (var_11))))));
                }
                arr_117 [i_17] [i_25 - 1] [i_25] [i_29] = ((signed char) -8771330366529784907LL);
                arr_118 [i_25] [i_17] [i_17] [7ULL] = ((/* implicit */signed char) ((unsigned long long int) min((((/* implicit */unsigned long long int) ((arr_98 [i_25]) ? (((/* implicit */int) var_4)) : (arr_64 [i_17])))), (min((((/* implicit */unsigned long long int) var_1)), (12152401783308467214ULL))))));
            }
            arr_119 [i_25] = ((/* implicit */signed char) min((((/* implicit */long long int) arr_6 [i_17] [13ULL] [i_25])), (max((arr_101 [(_Bool)1] [i_25] [i_25 - 1] [i_25 + 1] [i_25 - 1]), (((/* implicit */long long int) ((signed char) arr_43 [i_25])))))));
        }
        arr_120 [i_17] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_3)) ? (arr_35 [i_17]) : (((/* implicit */int) var_4))))))));
    }
}
