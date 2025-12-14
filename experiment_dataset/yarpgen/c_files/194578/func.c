/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194578
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194578 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194578
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
    var_13 = ((/* implicit */unsigned short) min((((/* implicit */long long int) (unsigned char)54)), (max((max((3141901676728479965LL), (((/* implicit */long long int) (unsigned char)54)))), (((/* implicit */long long int) max(((unsigned char)68), (var_7))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 1) 
            {
                for (long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4] = ((/* implicit */long long int) ((((/* implicit */int) (signed char)-114)) ^ (((/* implicit */int) (unsigned char)164))));
                            var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((signed char) 9011214959147771526LL)))));
                            var_15 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) var_12)) % (-7999419803915009241LL))) ^ (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 93166374U))))));
                            arr_11 [i_2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) 16492674416640ULL);
                            var_16 = ((/* implicit */signed char) 4743129862623798655LL);
                        }
                        for (unsigned int i_5 = 0; i_5 < 12; i_5 += 4) 
                        {
                            var_17 = ((/* implicit */long long int) var_1);
                            var_18 |= ((/* implicit */unsigned long long int) ((unsigned char) var_8));
                            var_19 = ((/* implicit */long long int) ((unsigned int) var_10));
                        }
                        /* LoopSeq 1 */
                        for (unsigned int i_6 = 0; i_6 < 12; i_6 += 2) 
                        {
                            arr_16 [i_3] [i_6] = ((/* implicit */unsigned char) var_5);
                            var_20 = ((/* implicit */long long int) var_4);
                            var_21 -= ((/* implicit */_Bool) 3225437567163280166LL);
                            arr_17 [i_6] [i_0] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */long long int) var_12);
                        }
                    }
                } 
            } 
        } 
        var_22 -= ((((long long int) var_9)) == (((/* implicit */long long int) ((((/* implicit */int) var_3)) << (((18446727581035134976ULL) - (18446727581035134961ULL)))))));
        /* LoopSeq 4 */
        for (unsigned long long int i_7 = 0; i_7 < 12; i_7 += 4) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) / (var_1)));
            var_24 &= ((/* implicit */long long int) ((unsigned int) var_11));
        }
        for (unsigned long long int i_8 = 0; i_8 < 12; i_8 += 4) /* same iter space */
        {
            arr_26 [i_8] = ((/* implicit */unsigned int) var_3);
            var_25 = ((/* implicit */signed char) ((_Bool) var_10));
            arr_27 [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) var_1)) <= (var_0)));
            var_26 = (unsigned char)117;
        }
        for (unsigned long long int i_9 = 1; i_9 < 11; i_9 += 1) 
        {
            arr_30 [i_0] &= ((/* implicit */int) var_11);
            /* LoopNest 2 */
            for (unsigned int i_10 = 2; i_10 < 11; i_10 += 2) 
            {
                for (long long int i_11 = 0; i_11 < 12; i_11 += 1) 
                {
                    {
                        var_27 *= ((unsigned int) var_1);
                        var_28 -= ((((/* implicit */long long int) ((/* implicit */int) var_7))) | (var_5));
                        arr_37 [i_0] [i_9 + 1] [i_10 - 1] [i_0] = ((/* implicit */unsigned short) ((unsigned long long int) (unsigned short)0));
                        var_29 = ((/* implicit */long long int) 16492674416640ULL);
                    }
                } 
            } 
        }
        for (long long int i_12 = 1; i_12 < 10; i_12 += 2) 
        {
            /* LoopSeq 2 */
            for (long long int i_13 = 0; i_13 < 12; i_13 += 4) 
            {
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0))));
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned short i_15 = 1; i_15 < 10; i_15 += 1) 
                    {
                        {
                            var_31 -= ((/* implicit */unsigned int) ((long long int) var_4));
                            var_32 -= ((/* implicit */long long int) ((var_4) > (((/* implicit */unsigned int) ((/* implicit */int) var_7)))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */signed char) max((var_33), (((/* implicit */signed char) var_2))));
                var_34 = var_7;
            }
            for (unsigned char i_16 = 0; i_16 < 12; i_16 += 4) 
            {
                /* LoopSeq 3 */
                for (unsigned long long int i_17 = 0; i_17 < 12; i_17 += 2) 
                {
                    var_35 -= ((/* implicit */_Bool) var_12);
                    var_36 = ((/* implicit */long long int) ((unsigned long long int) (unsigned char)54));
                }
                for (unsigned int i_18 = 0; i_18 < 12; i_18 += 1) 
                {
                    var_37 = ((/* implicit */unsigned char) var_8);
                    arr_60 [i_0 - 1] [i_0 - 1] [i_12] [i_0 - 1] = ((/* implicit */signed char) ((unsigned long long int) var_1));
                    /* LoopSeq 3 */
                    for (signed char i_19 = 0; i_19 < 12; i_19 += 4) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) min((var_38), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) / (((/* implicit */int) (unsigned char)255)))))));
                        var_39 = ((/* implicit */_Bool) var_7);
                        var_40 = ((/* implicit */signed char) ((var_9) >= (0ULL)));
                    }
                    for (signed char i_20 = 0; i_20 < 12; i_20 += 4) /* same iter space */
                    {
                        var_41 -= ((/* implicit */unsigned long long int) ((unsigned char) ((var_11) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)68))))));
                        arr_66 [i_0 - 1] [i_12] [i_16] [i_18] [i_12] [i_20] [i_20] = ((/* implicit */long long int) var_3);
                        var_42 = ((/* implicit */unsigned int) ((unsigned long long int) ((signed char) 5442645193475735656LL)));
                    }
                    for (signed char i_21 = 0; i_21 < 12; i_21 += 4) /* same iter space */
                    {
                        var_43 &= ((/* implicit */unsigned long long int) (unsigned char)32);
                        var_44 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned char)107)) <= (((/* implicit */int) var_8))));
                        var_45 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) var_7)))) % (((unsigned int) 4019660698255425114LL))));
                        var_46 = (signed char)123;
                        var_47 = ((/* implicit */unsigned char) ((var_5) * (((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_7))))));
                    }
                    var_48 = ((/* implicit */_Bool) ((unsigned char) var_10));
                    var_49 = ((/* implicit */signed char) ((long long int) 1328643670U));
                }
                for (unsigned char i_22 = 1; i_22 < 9; i_22 += 4) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_23 = 0; i_23 < 12; i_23 += 2) 
                    {
                        arr_77 [i_12] [i_12] = ((/* implicit */unsigned long long int) var_10);
                        arr_78 [i_12] [i_12] [i_16] [i_16] [i_16] [i_16] [i_23] = ((/* implicit */unsigned char) 16492674416640ULL);
                        var_50 = ((/* implicit */long long int) ((signed char) var_6));
                        arr_79 [i_0] [i_12] [i_16] [i_12] [i_23] [i_23] [i_0] = ((/* implicit */unsigned int) var_5);
                    }
                    for (unsigned long long int i_24 = 0; i_24 < 12; i_24 += 1) 
                    {
                        var_51 = ((/* implicit */long long int) var_12);
                        arr_82 [i_0] [i_0] [i_12] [i_22 + 1] [i_0] [i_12] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_6)) - (var_9)));
                        arr_83 [i_0 - 1] [i_16] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0] [i_0] &= ((/* implicit */unsigned int) -7922882865641848562LL);
                    }
                    var_52 = ((/* implicit */unsigned char) (unsigned short)6756);
                    var_53 = ((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (unsigned short)32818)))) / (var_11)));
                }
                var_54 = ((/* implicit */signed char) ((unsigned int) var_7));
                var_55 = ((/* implicit */_Bool) max((var_55), (((/* implicit */_Bool) ((var_0) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0))))))));
                /* LoopSeq 4 */
                for (long long int i_25 = 0; i_25 < 12; i_25 += 1) 
                {
                    /* LoopSeq 2 */
                    for (signed char i_26 = 4; i_26 < 9; i_26 += 4) 
                    {
                        var_56 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) || (((/* implicit */_Bool) var_7))));
                        var_57 = ((/* implicit */unsigned char) min((var_57), (((/* implicit */unsigned char) var_2))));
                        var_58 = ((/* implicit */unsigned int) ((long long int) var_12));
                    }
                    for (unsigned char i_27 = 0; i_27 < 12; i_27 += 1) 
                    {
                        var_59 = ((/* implicit */unsigned short) var_0);
                        var_60 = ((/* implicit */long long int) (unsigned char)54);
                    }
                    /* LoopSeq 1 */
                    for (unsigned char i_28 = 1; i_28 < 10; i_28 += 1) 
                    {
                        arr_93 [i_28 + 2] [i_12] [i_0 - 1] [i_12] [i_0 - 1] = ((var_5) % (var_2));
                        var_61 = ((/* implicit */unsigned char) 18446727581035134976ULL);
                        var_62 = ((/* implicit */unsigned char) ((var_5) % (var_11)));
                    }
                    var_63 = ((/* implicit */signed char) ((-5442645193475735657LL) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)58779)))));
                    var_64 = ((/* implicit */long long int) (unsigned short)32718);
                }
                for (unsigned char i_29 = 0; i_29 < 12; i_29 += 2) 
                {
                    arr_97 [i_16] [i_12] [i_16] [i_12] [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) var_2));
                    arr_98 [i_29] [i_29] [i_29] [i_29] [i_0] [i_0 - 1] |= ((/* implicit */unsigned char) ((var_5) / (-1772767818078261595LL)));
                }
                for (long long int i_30 = 0; i_30 < 12; i_30 += 4) 
                {
                    var_65 = var_11;
                    /* LoopSeq 1 */
                    for (unsigned int i_31 = 0; i_31 < 12; i_31 += 1) 
                    {
                        var_66 = ((/* implicit */_Bool) var_1);
                        var_67 -= ((/* implicit */long long int) 16492674416640ULL);
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_32 = 0; i_32 < 12; i_32 += 2) 
                    {
                        var_68 = ((/* implicit */signed char) ((-4019660698255425114LL) | (((/* implicit */long long int) ((/* implicit */int) (unsigned short)11430)))));
                        arr_110 [i_16] [i_16] [i_16] [i_12] [i_16] [i_16] = ((/* implicit */unsigned char) var_1);
                        var_69 &= ((/* implicit */long long int) var_10);
                        arr_111 [i_12] [i_30] [i_16] [i_12] [i_12] = ((/* implicit */unsigned char) ((long long int) 9223372036854775807LL));
                        arr_112 [i_0 - 1] [i_12] [i_12] [i_12] [i_12] [i_32] [i_32] = ((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL));
                    }
                    for (unsigned long long int i_33 = 0; i_33 < 12; i_33 += 1) 
                    {
                        var_70 = ((/* implicit */unsigned int) var_7);
                        var_71 -= var_0;
                    }
                }
                for (_Bool i_34 = 1; i_34 < 1; i_34 += 1) 
                {
                    var_72 = ((/* implicit */long long int) max((var_72), (((/* implicit */long long int) var_9))));
                    var_73 ^= ((/* implicit */long long int) var_7);
                    var_74 -= ((/* implicit */unsigned short) ((unsigned char) var_0));
                    arr_119 [i_0] [i_12] [i_12] [i_34 - 1] [i_12] [i_12] = ((/* implicit */unsigned short) ((1772767818078261594LL) / (var_6)));
                }
            }
            arr_120 [i_12] = ((0ULL) | (((/* implicit */unsigned long long int) ((unsigned int) var_3))));
            var_75 *= ((/* implicit */unsigned char) 11711687557593917317ULL);
            var_76 = ((long long int) ((_Bool) 9223372036854775807LL));
        }
        arr_121 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)255);
    }
    for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
    {
        var_77 ^= ((/* implicit */unsigned short) var_3);
        arr_124 [i_35] [i_35] &= ((long long int) var_4);
    }
    var_78 |= ((/* implicit */signed char) min((((/* implicit */unsigned int) ((max((((/* implicit */long long int) var_4)), (209835415547909795LL))) >= (((/* implicit */long long int) ((((/* implicit */int) var_8)) + (((/* implicit */int) (unsigned char)43)))))))), (max((var_10), (((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)54))) < (9223372036854775807LL))))))));
    /* LoopSeq 1 */
    for (unsigned int i_36 = 0; i_36 < 16; i_36 += 2) 
    {
        var_79 &= ((/* implicit */unsigned short) max((((((/* implicit */long long int) var_12)) / (((long long int) var_6)))), (max((((long long int) var_9)), (max((var_2), (var_2)))))));
        arr_127 [i_36] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) ((signed char) -1))), (max((var_9), (((/* implicit */unsigned long long int) max((var_5), (((/* implicit */long long int) (signed char)0)))))))));
        var_80 -= ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) var_1)), (var_6))), (((/* implicit */long long int) ((((/* implicit */int) var_8)) * (((/* implicit */int) var_7)))))));
    }
    /* LoopNest 3 */
    for (signed char i_37 = 0; i_37 < 21; i_37 += 4) 
    {
        for (unsigned char i_38 = 0; i_38 < 21; i_38 += 1) 
        {
            for (unsigned char i_39 = 0; i_39 < 21; i_39 += 1) 
            {
                {
                    var_81 = var_11;
                    arr_138 [i_39] [i_38] [i_37] = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((var_3), ((signed char)124)))), (((var_2) + (2443039681630620199LL)))));
                    var_82 -= 2961682740U;
                }
            } 
        } 
    } 
}
