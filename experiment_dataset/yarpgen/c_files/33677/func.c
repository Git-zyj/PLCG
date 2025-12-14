/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33677
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33677 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33677
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
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_11 |= ((/* implicit */unsigned long long int) (_Bool)0);
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                arr_7 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned char) (unsigned short)30095);
                var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_2])) ? (((/* implicit */int) arr_6 [i_0] [(unsigned short)3] [i_2])) : (((/* implicit */int) (unsigned short)30104))));
            }
            /* LoopSeq 2 */
            for (unsigned short i_3 = 3; i_3 < 20; i_3 += 4) /* same iter space */
            {
                var_13 = (~(((/* implicit */int) min(((unsigned short)35432), (((/* implicit */unsigned short) (unsigned char)127))))));
                arr_12 [i_0] [i_1] [i_3 - 3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_2 [i_3 + 2] [i_3 - 1] [i_3 + 3])))) ? ((~(((/* implicit */int) (unsigned short)30104)))) : (arr_2 [i_3 - 1] [i_3 - 1] [i_3 - 1])));
                var_14 = ((/* implicit */unsigned char) (-(((((/* implicit */_Bool) max((((/* implicit */long long int) arr_2 [i_0] [8U] [i_3])), (var_3)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (1125891316908032LL) : (((/* implicit */long long int) -46265060))))) : (((((/* implicit */_Bool) var_1)) ? (14275083939820186042ULL) : (14275083939820186048ULL)))))));
                arr_13 [i_0] [i_3] [i_3 + 1] = ((/* implicit */unsigned int) ((unsigned long long int) (+(((/* implicit */int) var_6)))));
            }
            /* vectorizable */
            for (unsigned short i_4 = 3; i_4 < 20; i_4 += 4) /* same iter space */
            {
                arr_17 [i_4 + 1] [(unsigned char)0] [i_0] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)39862)) ? ((-(((/* implicit */int) arr_5 [i_1])))) : (((/* implicit */int) (unsigned char)219))));
                arr_18 [i_0] = ((/* implicit */long long int) (unsigned short)35419);
                var_15 &= ((/* implicit */long long int) ((((/* implicit */_Bool) 4682878319093837828ULL)) ? (arr_10 [i_1]) : (((/* implicit */unsigned long long int) var_5))));
                /* LoopNest 2 */
                for (unsigned short i_5 = 3; i_5 < 20; i_5 += 3) 
                {
                    for (short i_6 = 0; i_6 < 23; i_6 += 1) 
                    {
                        {
                            var_16 = ((/* implicit */short) 9002801208229888ULL);
                            var_17 ^= ((/* implicit */unsigned short) 4682878319093837828ULL);
                            var_18 |= (unsigned short)35446;
                        }
                    } 
                } 
            }
            var_19 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (((/* implicit */unsigned int) -46265060)) : (4294967288U)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_0] [i_0]))) : (arr_10 [i_1])))) ? ((~((~(1966214219))))) : ((~(((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_0]))))));
        }
    }
    for (unsigned long long int i_7 = 1; i_7 < 10; i_7 += 3) 
    {
        var_20 = ((/* implicit */unsigned long long int) arr_5 [i_7]);
        var_21 &= ((/* implicit */unsigned int) (unsigned short)6144);
    }
    /* LoopNest 3 */
    for (unsigned short i_8 = 1; i_8 < 23; i_8 += 1) 
    {
        for (unsigned int i_9 = 0; i_9 < 25; i_9 += 2) 
        {
            for (long long int i_10 = 4; i_10 < 23; i_10 += 4) 
            {
                {
                    arr_31 [i_8] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((-3316805070233478769LL), (((/* implicit */long long int) -1401073508))))) ? (((((/* implicit */_Bool) 46265056)) ? (((/* implicit */int) arr_28 [i_10] [i_10 - 4] [i_10])) : (((/* implicit */int) (short)16368)))) : (((/* implicit */int) arr_28 [i_10] [i_10 - 1] [i_10]))));
                    arr_32 [i_8] [i_9] [i_8] [i_8] = min((-46265068), (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_26 [i_10]))))))));
                    var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3164369519U)) ? (((unsigned long long int) 17965063444492611878ULL)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_9] [i_9] [i_9])) ? (((/* implicit */int) (unsigned char)244)) : (((/* implicit */int) (unsigned short)3689))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)1536))))) : (var_2)))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned int i_11 = 2; i_11 < 6; i_11 += 1) 
    {
        arr_35 [i_11] [3ULL] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)39862)))))));
        arr_36 [1U] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(arr_15 [i_11] [i_11] [21ULL]))))));
        /* LoopNest 2 */
        for (unsigned short i_12 = 0; i_12 < 10; i_12 += 4) 
        {
            for (signed char i_13 = 2; i_13 < 8; i_13 += 4) 
            {
                {
                    /* LoopSeq 3 */
                    for (int i_14 = 0; i_14 < 10; i_14 += 4) 
                    {
                        arr_45 [i_11] [(signed char)6] [i_11] [(unsigned short)8] |= ((/* implicit */long long int) arr_41 [i_11] [i_11 + 3]);
                        var_23 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) arr_15 [i_13 + 2] [i_13 - 1] [i_13 + 1])) ? (arr_15 [i_14] [i_13 - 1] [i_11 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)54))))), (((((/* implicit */_Bool) -5719947156247790814LL)) ? (((/* implicit */unsigned long long int) -1LL)) : (arr_15 [i_13] [i_13 - 1] [i_13 + 2])))));
                        /* LoopSeq 1 */
                        for (signed char i_15 = 2; i_15 < 7; i_15 += 2) 
                        {
                            var_24 = ((((/* implicit */_Bool) ((unsigned int) (unsigned short)35869))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535))) : (arr_10 [i_13]));
                            var_25 |= ((/* implicit */short) (~(((arr_30 [i_13 - 1] [i_15] [4U]) ? (((/* implicit */int) (unsigned short)20861)) : (((/* implicit */int) arr_30 [i_13 - 1] [i_13] [2]))))));
                            arr_49 [i_11] [i_12] [5U] [i_14] [i_15 - 2] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 8930937549265289427ULL))));
                        }
                    }
                    for (int i_16 = 1; i_16 < 8; i_16 += 4) 
                    {
                        arr_54 [i_11] [(signed char)6] [i_13 - 2] [i_16] = ((/* implicit */long long int) max((((((/* implicit */_Bool) (short)-24367)) ? (((/* implicit */int) arr_6 [i_13 - 1] [15] [i_11 + 1])) : (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) arr_14 [i_13 - 2] [i_13] [i_13 - 2])) ? (((/* implicit */int) (unsigned char)128)) : (((/* implicit */int) var_6))))));
                        arr_55 [2ULL] [i_12] [i_16] [i_16] [(unsigned short)0] [i_16] = ((/* implicit */short) (!(arr_3 [i_11 + 4])));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 10; i_17 += 1) 
                    {
                        var_26 = -1LL;
                        var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) 7U)) ? (((/* implicit */long long int) ((unsigned int) arr_16 [i_13 - 2] [(signed char)17] [i_13 + 1]))) : (-565221968668160038LL))))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned int i_18 = 2; i_18 < 9; i_18 += 2) /* same iter space */
                    {
                        arr_60 [i_12] = ((/* implicit */_Bool) (short)48);
                        var_28 *= ((/* implicit */unsigned short) -7020111838071865415LL);
                        var_29 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_59 [i_18] [i_18] [i_18 - 2] [i_18 + 1])) ? (-730563222) : (((/* implicit */int) (unsigned short)35880))))), (((((/* implicit */_Bool) arr_8 [i_11] [i_13] [i_11] [i_18 - 2])) ? (6329185684927532375LL) : (((/* implicit */long long int) arr_59 [i_12] [5ULL] [(signed char)4] [i_18 - 1]))))));
                        arr_61 [i_11 + 4] [i_12] [0ULL] [i_18 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (short)24366))));
                    }
                    /* vectorizable */
                    for (unsigned int i_19 = 2; i_19 < 9; i_19 += 2) /* same iter space */
                    {
                        var_30 = ((arr_3 [i_11 + 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)35894))) : (4294967277U));
                        var_31 *= arr_20 [i_11 + 2] [i_11 + 1] [i_11 + 1] [i_13 - 2];
                        var_32 |= ((/* implicit */unsigned char) ((long long int) var_6));
                        var_33 += ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)32861))));
                    }
                    arr_65 [i_11 + 1] [i_12] [i_13] [i_13] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)133))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_11]))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30085))) : (16685034213969633507ULL)))))) ? (((/* implicit */unsigned long long int) (~(arr_1 [i_11])))) : (((((/* implicit */_Bool) (short)-4529)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_11] [i_12])) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (-7020111838071865415LL)))) : (10796411385060199137ULL))));
                    /* LoopSeq 3 */
                    for (_Bool i_20 = 0; i_20 < 1; i_20 += 1) 
                    {
                        var_34 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) (unsigned char)165)) ? (var_1) : (((/* implicit */unsigned long long int) var_0))))));
                        var_35 = ((/* implicit */int) ((unsigned short) arr_42 [i_11] [i_12] [i_13] [i_12]));
                    }
                    for (unsigned long long int i_21 = 0; i_21 < 10; i_21 += 3) 
                    {
                        arr_71 [(_Bool)1] [i_13] [i_11] [i_11] = ((/* implicit */signed char) 3790444326U);
                        var_36 |= ((/* implicit */unsigned short) var_4);
                        var_37 = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (~(arr_40 [i_13 - 1] [i_21] [i_21])))), (min((arr_10 [i_13]), (arr_10 [i_12])))));
                        var_38 = ((/* implicit */unsigned short) max(((~(((/* implicit */int) (unsigned short)32674)))), (((/* implicit */int) ((_Bool) var_0)))));
                    }
                    for (unsigned long long int i_22 = 0; i_22 < 10; i_22 += 2) 
                    {
                        arr_74 [i_11] [i_11 - 2] [i_11] [i_11] [i_11 + 4] = ((/* implicit */int) (unsigned char)25);
                        arr_75 [i_11] [i_12] [i_12] [i_22] |= max((((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)24418)), (-1216259673)))) ? (((((/* implicit */_Bool) var_1)) ? (arr_37 [i_11] [i_12] [i_13]) : (-1LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 1216259668)) ? (((/* implicit */int) (unsigned short)10)) : (((/* implicit */int) (_Bool)1))))))), (min((((/* implicit */long long int) arr_38 [i_22] [i_12] [i_11])), (min((4841264823908913135LL), (((/* implicit */long long int) (_Bool)1)))))));
                    }
                }
            } 
        } 
    }
    for (int i_23 = 0; i_23 < 12; i_23 += 2) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_24 = 0; i_24 < 12; i_24 += 2) 
        {
            arr_81 [i_23] = ((/* implicit */_Bool) var_5);
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_25 = 2; i_25 < 8; i_25 += 3) 
            {
                var_39 ^= -12LL;
                var_40 = ((/* implicit */int) max((var_40), (((/* implicit */int) var_6))));
                var_41 = ((/* implicit */unsigned short) ((_Bool) var_8));
            }
        }
        var_42 = ((/* implicit */unsigned short) var_0);
        var_43 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_27 [i_23] [8U] [i_23]), (((/* implicit */unsigned long long int) (unsigned char)41))))) ? (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) arr_8 [i_23] [i_23] [i_23] [i_23])) ? (((/* implicit */int) (short)30015)) : (2)))))) : (((((/* implicit */_Bool) 1334449038U)) ? (((/* implicit */unsigned long long int) 5042928406946747328LL)) : (18200979805771770408ULL)))));
        /* LoopSeq 1 */
        for (unsigned int i_26 = 2; i_26 < 8; i_26 += 4) 
        {
            var_44 ^= ((/* implicit */int) arr_27 [i_26] [(unsigned short)0] [i_26]);
            var_45 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_85 [i_26 + 2] [i_26 + 4]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_23] [i_26 - 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [9ULL])))))))) ? (((((/* implicit */_Bool) (unsigned short)7021)) ? (((/* implicit */long long int) 857736240U)) : (5042928406946747328LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((/* implicit */int) arr_28 [i_23] [i_23] [(_Bool)1])) : (((/* implicit */int) var_6)))))));
        }
        var_46 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned short)13291))))), (((((/* implicit */_Bool) ((unsigned char) var_1))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)224)) ? (((/* implicit */int) var_4)) : (-1)))) : (arr_1 [i_23])))));
    }
    for (signed char i_27 = 1; i_27 < 15; i_27 += 2) 
    {
        var_47 = ((/* implicit */unsigned int) ((unsigned long long int) max(((-2147483647 - 1)), (((/* implicit */int) (_Bool)1)))));
        var_48 ^= max((((/* implicit */unsigned long long int) var_4)), (0ULL));
        arr_93 [i_27] |= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)1))))) ? ((~(4294967288U))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_0))))))));
    }
}
