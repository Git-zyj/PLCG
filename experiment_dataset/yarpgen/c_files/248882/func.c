/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248882
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248882 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248882
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    var_11 ^= ((/* implicit */unsigned long long int) min((arr_4 [9U]), (((/* implicit */unsigned int) (short)-11025))));
                    arr_9 [i_0] = ((((/* implicit */int) arr_2 [i_1])) >> (((((/* implicit */int) (unsigned short)52731)) - (52718))));
                    arr_10 [i_0] [i_1] [i_1] [i_1] |= ((/* implicit */unsigned short) var_10);
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_3 = 0; i_3 < 12; i_3 += 1) /* same iter space */
    {
        /* LoopSeq 4 */
        for (unsigned short i_4 = 0; i_4 < 12; i_4 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_5 = 1; i_5 < 11; i_5 += 3) 
            {
                for (unsigned short i_6 = 0; i_6 < 12; i_6 += 1) 
                {
                    {
                        var_12 += ((/* implicit */long long int) arr_8 [i_3] [i_4] [i_5] [i_6]);
                        arr_21 [i_3] [i_4] [i_3] [i_5] [i_4] = ((/* implicit */long long int) arr_6 [i_5 - 1] [i_5 + 1] [i_5 - 1]);
                    }
                } 
            } 
            arr_22 [i_4] [i_3] [i_3] = ((/* implicit */int) var_2);
            var_13 = ((/* implicit */unsigned int) var_1);
            var_14 = ((/* implicit */unsigned short) (signed char)40);
            /* LoopNest 2 */
            for (long long int i_7 = 3; i_7 < 9; i_7 += 3) 
            {
                for (unsigned short i_8 = 0; i_8 < 12; i_8 += 3) 
                {
                    {
                        var_15 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_6 [i_7 + 3] [i_7 + 3] [i_7 - 3]))));
                        var_16 = ((/* implicit */long long int) ((((/* implicit */int) arr_12 [i_7 - 1] [i_7 - 1])) & (((/* implicit */int) arr_12 [i_7 - 3] [i_7 - 2]))));
                        arr_29 [i_3] [i_3] [10] [i_7] [i_3] [i_8] = ((/* implicit */short) ((unsigned short) arr_17 [2] [2]));
                    }
                } 
            } 
        }
        for (unsigned short i_9 = 0; i_9 < 12; i_9 += 3) 
        {
            arr_34 [i_3] [i_3] [i_9] = ((/* implicit */unsigned short) arr_4 [i_9]);
            var_17 = ((((/* implicit */unsigned int) ((/* implicit */int) (short)-9829))) | (0U));
            /* LoopSeq 3 */
            for (unsigned short i_10 = 0; i_10 < 12; i_10 += 2) 
            {
                var_18 = ((/* implicit */unsigned short) arr_26 [i_3] [i_9]);
                var_19 = ((/* implicit */short) var_8);
            }
            for (signed char i_11 = 1; i_11 < 11; i_11 += 4) /* same iter space */
            {
                arr_39 [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_9] [i_9] [i_9])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3] [i_3] [i_11] [i_11]))) : (0U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) arr_14 [i_3] [i_9] [i_11])))) : (((65535ULL) / (((/* implicit */unsigned long long int) var_10))))));
                /* LoopNest 2 */
                for (unsigned short i_12 = 0; i_12 < 12; i_12 += 3) 
                {
                    for (long long int i_13 = 3; i_13 < 9; i_13 += 1) 
                    {
                        {
                            var_20 = ((((/* implicit */int) arr_7 [i_9] [i_12])) - (((/* implicit */int) arr_7 [i_9] [i_12])));
                            arr_47 [i_3] [i_9] [i_3] = ((/* implicit */long long int) ((((((/* implicit */long long int) arr_35 [i_3] [i_9] [i_9])) > (arr_41 [i_3]))) ? (((/* implicit */unsigned long long int) arr_26 [(signed char)5] [(short)8])) : (arr_30 [i_9] [i_3] [i_13 + 1])));
                            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_7 [i_9] [i_12])) & (((/* implicit */int) arr_33 [i_3] [i_3] [i_11]))));
                        }
                    } 
                } 
                var_22 = ((/* implicit */int) ((unsigned long long int) arr_14 [i_11 + 1] [i_11] [i_11 - 1]));
                var_23 -= ((/* implicit */unsigned short) arr_45 [i_11]);
            }
            for (signed char i_14 = 1; i_14 < 11; i_14 += 4) /* same iter space */
            {
                var_24 = ((/* implicit */unsigned short) arr_13 [i_3] [(unsigned char)2]);
                var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_23 [1U] [i_9]))))))));
                arr_51 [i_3] [(signed char)11] [i_9] = ((((((((/* implicit */int) arr_18 [i_3] [i_3] [i_3])) + (2147483647))) >> (((var_0) - (2845070090U))))) % (((/* implicit */int) arr_25 [i_14 + 1] [i_14 - 1] [i_14 - 1] [i_14 + 1])));
            }
        }
        for (unsigned long long int i_15 = 3; i_15 < 11; i_15 += 4) /* same iter space */
        {
            var_26 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1680751168U))));
            /* LoopSeq 1 */
            for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) arr_30 [i_16] [i_16] [i_16]);
                /* LoopNest 2 */
                for (unsigned int i_17 = 0; i_17 < 12; i_17 += 4) 
                {
                    for (int i_18 = 3; i_18 < 9; i_18 += 1) 
                    {
                        {
                            var_28 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_24 [i_3] [(_Bool)1] [i_16])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_17] [i_15 - 2]))) : (0U)));
                            var_29 += ((/* implicit */short) ((long long int) arr_37 [i_17] [i_15] [i_15]));
                        }
                    } 
                } 
                arr_64 [i_16] [i_16] [i_3] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_15 - 1] [i_15 - 1] [i_3])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_57 [i_3]))))) ? (((/* implicit */int) arr_45 [i_3])) : (((((/* implicit */_Bool) arr_32 [i_3] [i_3] [i_16])) ? (((/* implicit */int) arr_25 [(unsigned short)5] [(unsigned short)6] [i_16] [i_16])) : (2005288874)))));
                var_30 &= ((/* implicit */unsigned short) ((((/* implicit */int) arr_17 [(_Bool)1] [(_Bool)1])) / (((/* implicit */int) arr_17 [(unsigned short)10] [(unsigned short)10]))));
            }
        }
        for (unsigned long long int i_19 = 3; i_19 < 11; i_19 += 4) /* same iter space */
        {
            /* LoopNest 2 */
            for (unsigned short i_20 = 1; i_20 < 11; i_20 += 4) 
            {
                for (int i_21 = 0; i_21 < 12; i_21 += 4) 
                {
                    {
                        var_31 = ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_20])) ? (((arr_69 [(unsigned short)7] [(short)10] [(unsigned short)7]) / (((/* implicit */int) arr_25 [i_3] [i_19 - 1] [i_19 - 1] [i_21])))) : (((/* implicit */int) (signed char)40))));
                        var_32 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_20 [i_3] [i_20] [i_19])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_27 [i_19 - 1] [i_19 - 1] [i_21] [i_21] [i_19]))) : (((((/* implicit */unsigned int) ((/* implicit */int) arr_59 [6LL] [i_19] [i_20] [i_20]))) & (arr_26 [i_3] [i_19])))));
                        arr_74 [i_20] [i_21] = arr_59 [6ULL] [6ULL] [i_20 + 1] [i_20];
                        arr_75 [i_3] [i_19] [(unsigned char)1] [i_3] [i_20] = ((/* implicit */unsigned short) arr_33 [i_3] [i_3] [i_3]);
                    }
                } 
            } 
            arr_76 [i_3] = ((/* implicit */int) arr_14 [i_3] [i_19] [i_19]);
            arr_77 [i_3] [i_19] [i_19] = ((/* implicit */int) ((((/* implicit */int) var_1)) >= (((/* implicit */int) arr_68 [i_19] [i_19 - 3] [i_19 + 1]))));
            var_33 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_8 [i_3] [i_3] [i_3] [i_3])) ? (((/* implicit */int) arr_8 [i_3] [i_3] [i_3] [i_19])) : (((/* implicit */int) var_1))));
            /* LoopNest 2 */
            for (int i_22 = 0; i_22 < 12; i_22 += 3) 
            {
                for (unsigned int i_23 = 3; i_23 < 10; i_23 += 4) 
                {
                    {
                        var_34 = ((/* implicit */signed char) arr_2 [i_19]);
                        var_35 = ((/* implicit */int) arr_59 [(signed char)11] [i_3] [i_19 - 1] [i_23]);
                        var_36 = ((/* implicit */unsigned short) var_7);
                        var_37 = ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) (signed char)-110)) ? (arr_41 [i_22]) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                    }
                } 
            } 
        }
        var_38 = ((/* implicit */int) ((((/* implicit */int) arr_68 [i_3] [i_3] [i_3])) < (((/* implicit */int) arr_5 [i_3]))));
    }
    for (short i_24 = 0; i_24 < 12; i_24 += 1) /* same iter space */
    {
        var_39 = ((/* implicit */long long int) arr_65 [(unsigned short)8] [(unsigned short)8] [i_24]);
        /* LoopNest 3 */
        for (int i_25 = 1; i_25 < 10; i_25 += 3) 
        {
            for (unsigned int i_26 = 3; i_26 < 8; i_26 += 3) 
            {
                for (signed char i_27 = 0; i_27 < 12; i_27 += 1) 
                {
                    {
                        var_40 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((arr_15 [i_25]) - (((/* implicit */int) (signed char)-40))))))) ? (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_62 [i_24] [i_24] [i_26] [i_26] [i_24]))) - (arr_24 [i_24] [0ULL] [i_27])))) ? (((/* implicit */long long int) ((/* implicit */int) (short)18401))) : ((~(var_10))))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((int) arr_86 [5ULL] [5ULL] [5ULL]))) > (((1221654212500963072LL) >> (((2248645383499333278LL) - (2248645383499333238LL)))))))))));
                        var_41 = ((/* implicit */signed char) var_3);
                        arr_92 [i_25] [i_24] = ((/* implicit */_Bool) ((((((/* implicit */int) arr_27 [i_24] [i_25] [0LL] [i_27] [i_26])) + (2147483647))) << (((((/* implicit */int) max((((((/* implicit */long long int) var_5)) != (arr_84 [i_25] [i_24]))), (((((/* implicit */_Bool) arr_70 [0LL] [i_26 - 2] [i_27])) || (((/* implicit */_Bool) (signed char)40))))))) - (1)))));
                    }
                } 
            } 
        } 
    }
    for (_Bool i_28 = 0; i_28 < 1; i_28 += 1) 
    {
        var_42 = ((/* implicit */signed char) max((var_42), (((/* implicit */signed char) arr_93 [i_28]))));
        var_43 = ((/* implicit */_Bool) ((arr_94 [i_28] [i_28]) & (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)62721)) ^ (((/* implicit */int) (signed char)40))))) ? (arr_94 [i_28] [i_28]) : (((((/* implicit */_Bool) (unsigned short)62743)) ? (var_4) : (arr_93 [i_28])))))));
        /* LoopNest 2 */
        for (int i_29 = 2; i_29 < 16; i_29 += 3) 
        {
            for (int i_30 = 1; i_30 < 17; i_30 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_31 = 1; i_31 < 15; i_31 += 3) 
                    {
                        for (short i_32 = 1; i_32 < 15; i_32 += 2) 
                        {
                            {
                                var_44 = ((/* implicit */signed char) var_3);
                                var_45 = ((/* implicit */signed char) max((var_45), (((/* implicit */signed char) min((arr_100 [i_32 + 3]), (((arr_100 [i_32 + 3]) / (arr_100 [i_32 - 1]))))))));
                                var_46 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_102 [i_28] [i_29 - 2] [i_31] [i_32])) * (((((/* implicit */int) arr_97 [i_31 + 3] [i_30 + 1] [i_29 + 1])) * (((((/* implicit */_Bool) arr_95 [i_29] [i_31])) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) arr_97 [(signed char)8] [i_30] [i_31]))))))));
                            }
                        } 
                    } 
                    var_47 = ((/* implicit */unsigned char) ((signed char) arr_102 [i_30] [i_29] [1U] [i_28]));
                }
            } 
        } 
    }
    var_48 = ((((/* implicit */unsigned int) ((/* implicit */int) ((var_9) < ((+(var_3))))))) != (var_5));
    var_49 = ((/* implicit */long long int) min((var_49), (((/* implicit */long long int) var_8))));
    var_50 = ((/* implicit */short) var_0);
}
