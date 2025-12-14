/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249601
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249601 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249601
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_1 [i_0] [i_0]))))) ? (((/* implicit */int) arr_0 [i_0])) : (((((/* implicit */int) arr_1 [i_0] [i_0])) << (((((((/* implicit */int) arr_1 [i_0] [i_0])) * (((/* implicit */int) var_3)))) - (5269)))))));
        arr_3 [i_0] = ((/* implicit */unsigned short) (~(((unsigned int) (-(var_2))))));
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) max((((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0]))))), (min((arr_0 [i_0]), (arr_0 [i_0]))))))));
        var_12 = ((long long int) ((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (-3610098333860707017LL)));
    }
    /* vectorizable */
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 ^= (~((~(arr_4 [i_1]))));
        arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) (signed char)80)) : (((int) var_0))));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_14 = ((/* implicit */long long int) min((var_14), (arr_7 [(_Bool)1] [(_Bool)1])));
        var_15 ^= ((/* implicit */unsigned int) (-((~(((/* implicit */int) arr_1 [i_2] [i_2]))))));
        var_16 &= ((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)99)) : (((/* implicit */int) (_Bool)1))));
        arr_11 [i_2] = ((/* implicit */unsigned int) ((unsigned short) (+(((/* implicit */int) arr_0 [i_2])))));
        var_17 = ((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_2]))));
    }
    var_18 = ((/* implicit */unsigned char) ((unsigned int) var_6));
    /* LoopSeq 3 */
    for (long long int i_3 = 2; i_3 < 24; i_3 += 1) 
    {
        arr_15 [i_3] = max((((/* implicit */long long int) ((((/* implicit */_Bool) arr_13 [i_3 + 1])) ? (arr_13 [i_3 - 2]) : (arr_13 [i_3 + 1])))), (((long long int) arr_14 [i_3 - 2])));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_4 = 1; i_4 < 24; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 24; i_5 += 2) 
            {
                for (unsigned int i_6 = 1; i_6 < 24; i_6 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_3] [i_3])))))) ? (((/* implicit */unsigned int) arr_13 [i_3])) : (var_10)));
                        var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) var_2))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_7 = 1; i_7 < 24; i_7 += 3) 
            {
                for (short i_8 = 2; i_8 < 24; i_8 += 2) 
                {
                    {
                        var_21 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_26 [i_7 - 1] [i_4] [i_4] [i_7 - 1]))));
                        arr_29 [i_8] [i_4] [i_3] [i_3] [i_3] [i_8] = ((/* implicit */unsigned short) (+(((long long int) var_3))));
                    }
                } 
            } 
            arr_30 [i_3] [i_3] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_12 [i_3]))));
        }
    }
    /* vectorizable */
    for (short i_9 = 0; i_9 < 10; i_9 += 3) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned int i_10 = 0; i_10 < 10; i_10 += 4) 
        {
            /* LoopNest 3 */
            for (unsigned int i_11 = 1; i_11 < 8; i_11 += 1) 
            {
                for (long long int i_12 = 0; i_12 < 10; i_12 += 3) 
                {
                    for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((unsigned int) 1486730909885001950ULL)))));
                            var_23 = ((/* implicit */unsigned int) max((var_23), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) arr_40 [i_9] [i_10] [i_10] [i_10] [i_13])) && (((/* implicit */_Bool) var_1)))) || (((/* implicit */_Bool) arr_22 [i_9] [i_11] [i_9] [i_11 - 1] [i_10] [i_13 + 1])))))));
                            arr_42 [i_12] [i_11] = ((/* implicit */unsigned char) ((short) arr_26 [i_9] [i_10] [i_11] [i_9]));
                            arr_43 [i_9] [i_11] [i_11] [i_9] [i_13] = ((/* implicit */short) arr_18 [i_11] [i_13]);
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */long long int) max((var_24), (((/* implicit */long long int) (~(((/* implicit */int) arr_18 [i_9] [i_9])))))));
            /* LoopSeq 4 */
            for (short i_14 = 0; i_14 < 10; i_14 += 3) 
            {
                var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) var_9))) ? (((unsigned int) arr_26 [i_14] [i_14] [i_10] [i_9])) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (var_6) : (((/* implicit */int) arr_32 [i_10] [i_9])))))));
                /* LoopSeq 2 */
                for (unsigned short i_15 = 2; i_15 < 7; i_15 += 3) 
                {
                    arr_51 [i_9] [i_14] [i_10] [i_14] [i_9] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_18 [i_15 + 2] [i_15 - 1]))));
                    arr_52 [i_14] [i_14] = ((unsigned char) arr_46 [i_9] [i_14]);
                    var_26 = ((/* implicit */short) (!(((((/* implicit */_Bool) 2475950087U)) || ((_Bool)1)))));
                }
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    arr_56 [i_14] [i_10] = ((/* implicit */unsigned char) (+(((/* implicit */int) var_3))));
                    var_27 ^= ((/* implicit */short) ((unsigned int) var_4));
                }
                /* LoopSeq 4 */
                for (long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                {
                    arr_59 [i_14] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (short)-11490)) || (((/* implicit */_Bool) var_4)))));
                    var_28 = ((/* implicit */_Bool) arr_0 [i_9]);
                }
                for (short i_18 = 0; i_18 < 10; i_18 += 2) 
                {
                    arr_62 [i_14] [i_14] = ((/* implicit */unsigned int) ((arr_50 [i_9] [i_10] [i_14] [i_14]) ? (((/* implicit */int) arr_50 [i_18] [i_18] [i_9] [i_14])) : (((/* implicit */int) var_4))));
                    /* LoopSeq 2 */
                    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
                    {
                        arr_67 [i_9] [i_14] [i_18] [i_14] [i_14] [i_9] = arr_66 [i_19];
                        arr_68 [i_9] [i_10] [i_10] [i_10] [i_14] [i_18] [i_14] = ((/* implicit */short) ((arr_53 [i_14]) ? (((/* implicit */int) arr_53 [i_14])) : (((/* implicit */int) arr_31 [i_9]))));
                    }
                    for (unsigned long long int i_20 = 3; i_20 < 9; i_20 += 2) 
                    {
                        var_29 = ((/* implicit */_Bool) ((unsigned int) var_4));
                        arr_72 [i_14] [i_20] = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
                    }
                }
                for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) /* same iter space */
                {
                    var_30 ^= ((/* implicit */unsigned int) (!(var_9)));
                    arr_75 [i_9] [i_9] [i_14] [i_14] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_35 [i_14] [i_10] [i_10] [i_21])) / (((/* implicit */int) arr_35 [i_14] [i_10] [i_14] [i_14]))));
                    var_31 &= ((/* implicit */unsigned char) ((unsigned long long int) arr_16 [i_9] [i_9]));
                    var_32 -= ((/* implicit */unsigned int) ((short) (unsigned short)65520));
                    arr_76 [i_14] = ((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_58 [i_14] [i_14] [i_14] [i_14])) && (((/* implicit */_Bool) var_7)))));
                }
                for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 3) /* same iter space */
                {
                    arr_79 [i_9] [i_9] [i_10] [i_10] [i_9] &= arr_64 [i_9] [i_9] [i_9] [i_9] [i_9];
                    arr_80 [i_10] [i_10] [i_14] = ((/* implicit */unsigned short) (((~(var_7))) == (((unsigned long long int) var_4))));
                    var_33 = (+(arr_21 [i_14] [i_14] [i_22]));
                    /* LoopSeq 1 */
                    for (signed char i_23 = 0; i_23 < 10; i_23 += 2) 
                    {
                        var_34 = ((/* implicit */short) var_5);
                        arr_85 [i_23] [i_14] [i_9] [i_14] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))) : (((/* implicit */int) ((_Bool) var_1)))));
                    }
                    var_35 |= ((/* implicit */short) (+(1819017209U)));
                }
            }
            for (_Bool i_24 = 0; i_24 < 1; i_24 += 1) 
            {
                /* LoopSeq 2 */
                for (signed char i_25 = 0; i_25 < 10; i_25 += 1) 
                {
                    var_36 = ((/* implicit */unsigned short) (~((~(((/* implicit */int) (_Bool)1))))));
                    arr_90 [i_9] [i_9] [i_9] [i_25] = ((/* implicit */short) ((((/* implicit */int) arr_89 [i_9] [i_25])) / (((/* implicit */int) arr_89 [i_25] [i_25]))));
                }
                for (unsigned short i_26 = 3; i_26 < 9; i_26 += 3) 
                {
                    arr_95 [i_9] [i_10] [i_26] [i_26] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)89))));
                    var_37 ^= ((/* implicit */unsigned short) ((long long int) ((long long int) var_10)));
                    arr_96 [i_9] [i_9] [i_26] [i_9] = ((/* implicit */short) (-(((/* implicit */int) (short)13005))));
                }
                /* LoopNest 2 */
                for (unsigned int i_27 = 0; i_27 < 10; i_27 += 3) 
                {
                    for (unsigned int i_28 = 0; i_28 < 10; i_28 += 2) 
                    {
                        {
                            var_38 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_6))));
                            var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) var_4)))));
                        }
                    } 
                } 
            }
            for (unsigned short i_29 = 0; i_29 < 10; i_29 += 2) 
            {
                var_40 = ((/* implicit */short) max((var_40), (arr_16 [i_9] [i_9])));
                /* LoopNest 2 */
                for (short i_30 = 0; i_30 < 10; i_30 += 2) 
                {
                    for (long long int i_31 = 1; i_31 < 7; i_31 += 3) 
                    {
                        {
                            var_41 = ((/* implicit */_Bool) (~(var_1)));
                            var_42 = (!(((/* implicit */_Bool) arr_44 [i_31] [i_30] [i_30] [i_31 + 1])));
                            arr_110 [i_9] [i_10] [i_10] [i_10] [i_31] = ((/* implicit */short) ((unsigned short) arr_107 [i_31 - 1] [i_31 + 2] [i_31 + 3]));
                            var_43 ^= var_5;
                            arr_111 [i_9] [i_9] [i_9] = ((/* implicit */unsigned short) ((_Bool) var_3));
                        }
                    } 
                } 
            }
            for (unsigned short i_32 = 0; i_32 < 10; i_32 += 1) 
            {
                var_44 -= ((/* implicit */long long int) ((((/* implicit */_Bool) (~(2965683099U)))) ? (((unsigned long long int) (unsigned short)15)) : (((/* implicit */unsigned long long int) var_6))));
                arr_114 [i_9] = ((/* implicit */unsigned int) var_6);
                var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) var_8))));
            }
        }
        /* LoopSeq 2 */
        for (int i_33 = 1; i_33 < 9; i_33 += 1) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_34 = 0; i_34 < 10; i_34 += 3) 
            {
                var_46 = ((/* implicit */signed char) max((var_46), (var_4)));
                var_47 = ((/* implicit */unsigned short) arr_8 [i_9] [i_33]);
            }
            for (unsigned long long int i_35 = 0; i_35 < 10; i_35 += 4) 
            {
                arr_122 [i_9] [i_33] [i_33] [i_9] = ((/* implicit */unsigned short) (~(arr_14 [i_33 + 1])));
                arr_123 [i_33] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)64238))) : (18446744073709551588ULL)));
            }
            arr_124 [i_9] [i_33] = ((/* implicit */short) ((unsigned short) var_7));
        }
        for (long long int i_36 = 0; i_36 < 10; i_36 += 3) 
        {
            arr_127 [i_9] [i_9] [i_9] = ((/* implicit */_Bool) ((long long int) (~(((/* implicit */int) (_Bool)0)))));
            var_48 = arr_64 [i_9] [i_9] [i_9] [i_36] [i_9];
            var_49 = ((/* implicit */unsigned int) max((var_49), (((/* implicit */unsigned int) ((var_9) ? (var_5) : (((/* implicit */unsigned long long int) var_1)))))));
        }
        var_50 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_61 [i_9] [i_9] [i_9] [i_9]))));
    }
    for (short i_37 = 0; i_37 < 10; i_37 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned int i_38 = 0; i_38 < 10; i_38 += 4) 
        {
            for (unsigned long long int i_39 = 0; i_39 < 10; i_39 += 1) 
            {
                {
                    arr_135 [i_37] [i_38] [i_37] [i_37] = ((/* implicit */unsigned long long int) ((short) max((arr_132 [i_37] [i_37]), (arr_132 [i_37] [i_38]))));
                    /* LoopSeq 3 */
                    for (unsigned int i_40 = 0; i_40 < 10; i_40 += 3) 
                    {
                        var_51 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_134 [i_37] [i_37] [i_37])))) ? (((/* implicit */int) min((arr_99 [i_38] [i_40] [i_40] [i_40] [i_38] [i_38]), (((/* implicit */short) arr_103 [i_37] [i_38] [i_39] [i_40]))))) : (((/* implicit */int) max((arr_99 [i_37] [i_38] [i_38] [i_40] [i_40] [i_39]), (arr_99 [i_37] [i_37] [i_37] [i_37] [i_37] [i_37]))))));
                        var_52 = ((/* implicit */unsigned char) arr_65 [i_37] [i_38] [i_37] [i_38] [i_39] [i_38]);
                        arr_138 [i_37] [i_37] [i_37] = ((/* implicit */_Bool) ((unsigned char) (unsigned short)65520));
                    }
                    /* vectorizable */
                    for (_Bool i_41 = 0; i_41 < 1; i_41 += 1) 
                    {
                        arr_142 [i_37] [i_37] [i_37] = (~(((/* implicit */int) arr_32 [i_37] [i_37])));
                        var_53 = ((short) (+(((/* implicit */int) (short)22551))));
                    }
                    for (unsigned char i_42 = 2; i_42 < 9; i_42 += 1) 
                    {
                        var_54 = ((/* implicit */short) max((var_54), (((/* implicit */short) var_0))));
                        var_55 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_7))) ? (((/* implicit */int) ((min((((/* implicit */unsigned long long int) arr_21 [i_37] [i_38] [i_42])), (arr_125 [i_37] [i_38] [i_39]))) == (((/* implicit */unsigned long long int) ((/* implicit */int) arr_82 [i_37] [i_37] [i_37])))))) : (((((/* implicit */_Bool) arr_137 [i_42 - 1])) ? (((/* implicit */int) arr_137 [i_42 - 2])) : (((/* implicit */int) var_0))))));
                        arr_145 [i_37] [i_42] [i_42] = ((/* implicit */long long int) arr_92 [i_37] [i_37] [i_37] [i_42]);
                    }
                }
            } 
        } 
        arr_146 [i_37] = ((/* implicit */long long int) var_8);
    }
    var_56 = (-(var_10));
}
