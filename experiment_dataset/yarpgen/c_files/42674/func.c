/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42674
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42674 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42674
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_13 = ((/* implicit */int) min((((/* implicit */long long int) max((((/* implicit */int) (short)32767)), ((-2147483647 - 1))))), (((var_6) + (var_2)))));
        var_14 = ((/* implicit */unsigned int) max((max((((/* implicit */long long int) var_12)), (var_0))), (((/* implicit */long long int) max((2458384816U), (((/* implicit */unsigned int) (short)32767)))))));
        /* LoopNest 3 */
        for (unsigned char i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            for (unsigned char i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                for (short i_3 = 0; i_3 < 14; i_3 += 4) 
                {
                    {
                        arr_8 [i_0 + 1] [i_0] [i_1] [i_2] [i_3] [i_2] = max((max((var_9), (((/* implicit */long long int) var_7)))), (((/* implicit */long long int) ((var_3) < (var_2)))));
                        arr_9 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1] = ((/* implicit */short) ((((/* implicit */int) (short)-32750)) * (((/* implicit */int) (_Bool)0))));
                        var_15 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)236)) - (((/* implicit */int) (short)-5078))))) > (var_2))))) != (var_11)));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 3) 
        {
            for (int i_5 = 2; i_5 < 12; i_5 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    for (long long int i_6 = 0; i_6 < 14; i_6 += 3) 
                    {
                        /* LoopSeq 2 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            arr_21 [i_0] [i_0] [i_5] [i_5] [i_6] = ((/* implicit */long long int) ((((/* implicit */int) var_12)) - (((/* implicit */int) (unsigned short)4))));
                            var_16 = var_10;
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (short)4032)), (1836582465U)));
                            var_18 = ((/* implicit */unsigned char) var_8);
                            var_19 += ((/* implicit */unsigned char) ((var_2) % (((/* implicit */long long int) ((1799434562U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-56))))))));
                            arr_26 [i_0] [i_6] = ((/* implicit */unsigned short) var_5);
                        }
                        var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) var_3))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 14; i_9 += 1) 
                    {
                        var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((min((var_9), (((/* implicit */long long int) var_1)))) & (max((var_2), (((/* implicit */long long int) var_8)))))))));
                        var_22 += ((/* implicit */unsigned short) var_6);
                    }
                    for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) var_12)), (var_2))) | (((/* implicit */long long int) ((var_8) - (((/* implicit */unsigned int) ((/* implicit */int) var_4))))))));
                        arr_32 [i_0] [i_4] [i_4 + 2] [i_5] [i_5] [i_10] = ((var_7) != (((/* implicit */int) ((var_9) != (var_9)))));
                        arr_33 [i_0] [i_4] [i_4] [i_5] [i_10] = ((/* implicit */long long int) min((var_7), (((/* implicit */int) ((max((var_9), (((/* implicit */long long int) var_11)))) != (((((/* implicit */long long int) var_8)) ^ (var_2))))))));
                        arr_34 [i_0] [i_4] [i_4] [i_5] [(unsigned short)3] = ((/* implicit */long long int) max((1050175407U), (((/* implicit */unsigned int) (unsigned short)47582))));
                    }
                    /* vectorizable */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        var_24 = ((/* implicit */unsigned char) ((2038493059835901918LL) < (((/* implicit */long long int) ((/* implicit */int) (short)-5086)))));
                        var_25 = ((var_6) | (var_0));
                    }
                    arr_37 [(_Bool)1] [i_4] [i_0 - 2] = ((/* implicit */unsigned char) ((var_3) * (((/* implicit */long long int) ((/* implicit */int) ((max((((/* implicit */long long int) var_12)), (var_9))) == (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) == (var_9)))))))))));
                    arr_38 [i_0 + 1] [i_0 + 1] [i_0] = ((/* implicit */unsigned char) var_11);
                }
            } 
        } 
    }
    for (unsigned char i_12 = 3; i_12 < 22; i_12 += 1) 
    {
        var_26 *= ((/* implicit */signed char) var_6);
        var_27 = ((/* implicit */unsigned char) var_6);
        var_28 = ((/* implicit */short) max((((/* implicit */long long int) (short)-5078)), (-5557992886322398763LL)));
        var_29 = ((/* implicit */short) min((((/* implicit */long long int) var_8)), (var_3)));
    }
    for (unsigned int i_13 = 0; i_13 < 22; i_13 += 2) 
    {
        var_30 = ((/* implicit */_Bool) ((((/* implicit */long long int) 3911314848U)) ^ (-9077223535271022281LL)));
        arr_44 [i_13] = ((/* implicit */unsigned long long int) var_6);
        arr_45 [i_13] [i_13] = ((/* implicit */long long int) ((var_6) == (var_6)));
        /* LoopNest 2 */
        for (short i_14 = 0; i_14 < 22; i_14 += 3) 
        {
            for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
            {
                {
                    var_31 = ((/* implicit */unsigned int) ((var_9) ^ (((/* implicit */long long int) var_8))));
                    arr_50 [i_13] [i_14] [i_15] = ((3244791907U) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)-6229))));
                    arr_51 [i_15] [i_14] [i_13] [i_13] = ((/* implicit */_Bool) var_6);
                }
            } 
        } 
    }
    var_32 = ((min((((/* implicit */unsigned int) var_1)), (min((var_11), (((/* implicit */unsigned int) var_5)))))) + (var_11));
    /* LoopSeq 3 */
    for (unsigned char i_16 = 0; i_16 < 13; i_16 += 1) 
    {
        var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) var_8))));
        var_34 = ((/* implicit */int) min((((((/* implicit */long long int) var_7)) % (var_2))), (((/* implicit */long long int) ((var_6) == (var_9))))));
    }
    /* vectorizable */
    for (long long int i_17 = 0; i_17 < 20; i_17 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned int i_18 = 0; i_18 < 20; i_18 += 1) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_19 = 1; i_19 < 17; i_19 += 3) 
            {
                arr_60 [i_17] [i_18] [i_19] = ((/* implicit */unsigned char) var_1);
                var_35 |= ((((/* implicit */long long int) var_8)) != (var_9));
            }
            for (unsigned short i_20 = 0; i_20 < 20; i_20 += 1) 
            {
                /* LoopSeq 1 */
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_36 |= ((/* implicit */unsigned int) var_12);
                    var_37 = ((/* implicit */long long int) var_4);
                    arr_68 [10LL] [i_20] [i_20] [i_20] = ((/* implicit */short) var_8);
                }
                var_38 ^= ((/* implicit */short) ((((/* implicit */int) var_12)) << (((var_3) - (7358089710053416346LL)))));
            }
            /* LoopSeq 3 */
            for (unsigned char i_22 = 2; i_22 < 18; i_22 += 2) 
            {
                var_39 = ((/* implicit */_Bool) ((var_6) ^ (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                var_40 = ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) var_5))));
                arr_71 [7LL] [i_18] = ((/* implicit */unsigned char) var_7);
            }
            for (unsigned char i_23 = 1; i_23 < 19; i_23 += 2) 
            {
                var_41 = ((/* implicit */short) min((var_41), (((/* implicit */short) ((var_2) + (((/* implicit */long long int) ((/* implicit */int) var_10))))))));
                /* LoopNest 2 */
                for (signed char i_24 = 3; i_24 < 19; i_24 += 2) 
                {
                    for (_Bool i_25 = 0; i_25 < 1; i_25 += 1) 
                    {
                        {
                            var_42 = ((/* implicit */unsigned int) ((((/* implicit */long long int) var_8)) > (var_9)));
                            arr_80 [i_17] [i_23] [4] [i_17] [i_25] = ((((/* implicit */long long int) var_11)) + (var_3));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned char i_26 = 0; i_26 < 20; i_26 += 4) 
                {
                    for (short i_27 = 0; i_27 < 20; i_27 += 1) 
                    {
                        {
                            arr_86 [i_17] [i_18] [i_23] [i_26] [i_23] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) != (var_11)));
                            arr_87 [i_23] [i_23] = ((/* implicit */short) ((var_9) < (((/* implicit */long long int) ((/* implicit */int) var_5)))));
                            var_43 += ((/* implicit */long long int) var_11);
                            arr_88 [i_23] [i_18] [i_23 + 1] [i_26] [i_26] [(signed char)2] = ((/* implicit */short) ((var_11) < (((/* implicit */unsigned int) var_7))));
                            var_44 = ((/* implicit */_Bool) ((((/* implicit */int) var_4)) | (((/* implicit */int) var_4))));
                        }
                    } 
                } 
            }
            for (unsigned char i_28 = 1; i_28 < 16; i_28 += 2) 
            {
                /* LoopSeq 2 */
                for (long long int i_29 = 1; i_29 < 19; i_29 += 1) 
                {
                    var_45 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) var_3))));
                    var_46 = ((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_7)));
                    /* LoopSeq 3 */
                    for (unsigned int i_30 = 4; i_30 < 19; i_30 += 1) 
                    {
                        var_47 -= ((/* implicit */signed char) ((var_7) | (((/* implicit */int) var_10))));
                        var_48 = ((/* implicit */_Bool) ((((/* implicit */int) var_10)) + (var_7)));
                        arr_96 [i_30] [i_28] [i_28 + 1] [i_28] [i_17] = ((/* implicit */long long int) ((((((/* implicit */int) var_4)) | (((/* implicit */int) var_4)))) - (((/* implicit */int) ((var_2) < (((/* implicit */long long int) ((/* implicit */int) var_4))))))));
                    }
                    for (unsigned long long int i_31 = 0; i_31 < 20; i_31 += 4) 
                    {
                        var_49 = var_2;
                        var_50 = ((var_2) - (var_2));
                        var_51 = ((/* implicit */_Bool) var_9);
                        var_52 = ((/* implicit */_Bool) max((var_52), (((/* implicit */_Bool) var_12))));
                        var_53 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) | (var_9)));
                    }
                    for (short i_32 = 0; i_32 < 20; i_32 += 3) 
                    {
                        arr_102 [i_29] [i_18] [i_28] [i_29] [i_28] [i_18] [(unsigned char)19] = ((/* implicit */short) var_6);
                        arr_103 [i_32] [i_28] [i_28] [i_28] [i_17] = ((/* implicit */unsigned char) var_5);
                    }
                }
                for (unsigned int i_33 = 2; i_33 < 19; i_33 += 1) 
                {
                    var_54 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_12))));
                    var_55 = ((/* implicit */unsigned char) ((((/* implicit */int) var_5)) <= (((/* implicit */int) var_12))));
                    arr_108 [i_17] [i_18] [i_28] [i_33] = ((/* implicit */unsigned long long int) var_11);
                    arr_109 [i_28] [i_18] [i_18] [i_33] = ((/* implicit */unsigned short) var_5);
                }
                arr_110 [i_28] [i_28] [i_17] = ((/* implicit */_Bool) var_0);
            }
            var_56 = ((/* implicit */long long int) var_12);
        }
        for (unsigned int i_34 = 0; i_34 < 20; i_34 += 1) /* same iter space */
        {
            arr_115 [(short)6] [(short)6] [i_34] = ((/* implicit */_Bool) var_12);
            var_57 = var_0;
            arr_116 [i_17] [18LL] [(short)6] = ((/* implicit */unsigned char) ((((/* implicit */long long int) var_11)) <= (var_0)));
        }
        for (unsigned int i_35 = 0; i_35 < 20; i_35 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (_Bool i_36 = 1; i_36 < 1; i_36 += 1) 
            {
                for (unsigned int i_37 = 0; i_37 < 20; i_37 += 1) 
                {
                    {
                        arr_125 [6] [i_35] [i_36 - 1] [i_37] &= ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_5))));
                        var_58 = ((/* implicit */signed char) max((var_58), (((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_11)))))));
                    }
                } 
            } 
            var_59 -= ((/* implicit */unsigned short) ((var_0) * (((/* implicit */long long int) ((/* implicit */int) var_1)))));
            var_60 &= ((/* implicit */int) var_11);
        }
        var_61 &= ((((/* implicit */int) var_12)) - (((/* implicit */int) var_5)));
    }
    for (_Bool i_38 = 0; i_38 < 1; i_38 += 1) 
    {
        arr_128 [i_38] = ((/* implicit */unsigned char) ((((/* implicit */int) min((var_1), (var_1)))) * (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_10)), (var_0)))) && (((/* implicit */_Bool) var_10)))))));
        arr_129 [i_38] [i_38] = ((/* implicit */short) ((max((((/* implicit */int) var_5)), (var_7))) != (((/* implicit */int) ((((/* implicit */_Bool) -5557992886322398763LL)) || (((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))));
        var_62 = ((/* implicit */long long int) var_5);
    }
    var_63 = ((/* implicit */short) var_11);
}
