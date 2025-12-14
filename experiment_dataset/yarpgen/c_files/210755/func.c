/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210755
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210755 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210755
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
    var_14 = ((/* implicit */unsigned char) min((var_14), (((/* implicit */unsigned char) ((((/* implicit */_Bool) var_0)) ? ((-((-(((/* implicit */int) var_1)))))) : (((/* implicit */int) var_0)))))));
    var_15 = ((/* implicit */int) var_13);
    /* LoopNest 2 */
    for (signed char i_0 = 2; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            {
                /* LoopSeq 3 */
                for (unsigned int i_2 = 0; i_2 < 24; i_2 += 3) 
                {
                    var_16 -= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [(_Bool)1]))))) ? (((/* implicit */int) max(((unsigned char)25), (arr_2 [(signed char)18])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_2]))))))) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65534))) <= (1704558082569454773LL))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 21; i_3 += 3) 
                    {
                        var_17 = ((((/* implicit */_Bool) 2147483646)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))) : (var_3));
                        var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) var_3))));
                        var_19 &= ((/* implicit */unsigned int) arr_2 [10LL]);
                        var_20 = ((/* implicit */long long int) (!((!(((/* implicit */_Bool) var_8))))));
                        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_3 + 1])) ? (arr_1 [i_3 + 3]) : (arr_1 [i_3 - 3])));
                    }
                    var_22 &= ((/* implicit */unsigned short) -1704558082569454760LL);
                }
                /* vectorizable */
                for (unsigned int i_4 = 1; i_4 < 23; i_4 += 3) 
                {
                    var_23 = ((/* implicit */unsigned int) arr_5 [i_0] [3U] [i_4]);
                    var_24 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_4 [(_Bool)1] [i_4 + 1] [(_Bool)1])) ? (arr_1 [i_4 + 1]) : (arr_4 [(_Bool)1] [i_4 - 1] [i_4])));
                    var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_2 [i_0])) : (((((/* implicit */_Bool) 730668442U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 1 */
                    for (long long int i_5 = 3; i_5 < 22; i_5 += 2) 
                    {
                        arr_12 [10LL] [i_0] [14] [14] [i_4] [14] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_11 [i_4 - 1] [i_4 + 1] [i_4 + 1]))));
                        arr_13 [i_0] [i_0] = ((/* implicit */int) var_3);
                        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) arr_7 [16LL] [16LL]))));
                        var_27 = ((/* implicit */signed char) (unsigned short)11);
                    }
                }
                for (unsigned short i_6 = 2; i_6 < 21; i_6 += 2) 
                {
                    var_28 -= (!(((((/* implicit */int) arr_2 [i_6])) >= (((/* implicit */int) arr_9 [i_6 + 3] [i_6 + 3] [i_0 - 1])))));
                    arr_16 [i_0] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */unsigned short) max(((unsigned char)44), (((/* implicit */unsigned char) var_4))))), ((unsigned short)20)));
                }
                var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) (-(var_11))))));
                var_30 = (((((!(((/* implicit */_Bool) var_8)))) && (((/* implicit */_Bool) var_0)))) ? (((((/* implicit */_Bool) arr_9 [i_0 - 1] [i_0 + 2] [i_0 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0 + 1] [i_0 - 1] [i_0 - 2]))) : (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_5)))))));
                /* LoopSeq 4 */
                /* vectorizable */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 4) 
                {
                    /* LoopSeq 2 */
                    for (int i_8 = 0; i_8 < 24; i_8 += 3) 
                    {
                        var_31 = ((/* implicit */int) ((var_8) & (((/* implicit */unsigned int) ((((/* implicit */_Bool) 3404576827U)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_5)))))));
                        arr_23 [i_0] = ((/* implicit */int) var_5);
                    }
                    for (unsigned int i_9 = 3; i_9 < 23; i_9 += 4) 
                    {
                        var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) (~(arr_24 [i_7] [i_0] [i_1] [i_1] [i_9 - 1] [i_9]))))));
                        var_33 -= ((/* implicit */long long int) arr_14 [i_0] [i_0] [i_7] [i_7]);
                    }
                    var_34 &= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_7] [i_7] [i_1] [i_7] [i_0])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (_Bool)1))))) + (arr_6 [i_0] [i_0] [i_0 + 2] [i_7] [i_0] [18U])));
                    /* LoopSeq 3 */
                    for (long long int i_10 = 0; i_10 < 24; i_10 += 1) 
                    {
                        var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) arr_7 [i_7] [i_7]))));
                        var_36 = ((/* implicit */int) var_1);
                        /* LoopSeq 2 */
                        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
                        {
                            var_37 -= (!(((/* implicit */_Bool) var_11)));
                            var_38 = ((/* implicit */long long int) var_10);
                        }
                        for (unsigned char i_12 = 2; i_12 < 22; i_12 += 2) 
                        {
                            arr_34 [i_12] [i_1] [i_12] [i_12] |= ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_12 - 1] [i_7] [i_7] [i_0 - 1]))) * (var_9)));
                            arr_35 [i_0] [(signed char)5] [i_7] [i_7] [i_0] [i_0] [i_1] = ((/* implicit */unsigned int) ((arr_3 [i_0]) ? (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_8 [i_0] [i_0] [(unsigned char)8])))) : (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)53)) && (((/* implicit */_Bool) (-2147483647 - 1))))))));
                            var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_28 [i_0] [i_1] [i_7] [3LL] [i_12] [(_Bool)1])) || (((((/* implicit */_Bool) 2147483633)) || (((/* implicit */_Bool) 16383))))));
                        }
                    }
                    for (int i_13 = 1; i_13 < 23; i_13 += 4) 
                    {
                        var_40 = ((/* implicit */long long int) var_5);
                        arr_40 [i_0] [18U] [i_7] [i_7] &= ((((/* implicit */_Bool) arr_0 [i_7])) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 895433585)))))) : (((var_8) ^ (var_7))));
                        var_41 -= ((/* implicit */_Bool) arr_30 [i_13 + 1] [i_13 + 1] [i_13] [i_13] [i_13] [i_13 - 1]);
                    }
                    for (unsigned int i_14 = 3; i_14 < 23; i_14 += 4) 
                    {
                        var_42 -= ((/* implicit */unsigned char) ((arr_8 [i_14] [i_7] [i_0 + 2]) ? (((/* implicit */int) arr_22 [i_1] [i_7] [(unsigned char)10] [i_7] [(_Bool)1])) : (((/* implicit */int) arr_9 [i_1] [i_1] [i_14 - 1]))));
                        var_43 = ((/* implicit */unsigned int) min((var_43), (((/* implicit */unsigned int) 1704558082569454789LL))));
                        var_44 = arr_33 [i_0 - 1] [i_0 - 2] [i_0];
                    }
                    var_45 -= ((/* implicit */long long int) arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                }
                for (int i_15 = 0; i_15 < 24; i_15 += 3) 
                {
                    var_46 |= var_6;
                    var_47 = ((/* implicit */_Bool) max((arr_28 [i_0] [i_0] [1U] [i_1] [i_0] [i_1]), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)10)) || (((var_3) >= (var_9))))))));
                    /* LoopSeq 2 */
                    for (long long int i_16 = 2; i_16 < 22; i_16 += 4) /* same iter space */
                    {
                        var_48 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_9 [i_16 + 2] [i_0 - 1] [i_0])))) != (var_11)));
                        var_49 ^= ((/* implicit */unsigned short) var_8);
                        arr_48 [i_1] [i_0] = ((/* implicit */unsigned char) (_Bool)1);
                    }
                    for (long long int i_17 = 2; i_17 < 22; i_17 += 4) /* same iter space */
                    {
                        var_50 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_3))));
                        var_51 ^= ((/* implicit */long long int) 3318759877U);
                    }
                    var_52 = arr_2 [i_0];
                }
                for (unsigned int i_18 = 2; i_18 < 23; i_18 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_19 = 0; i_19 < 24; i_19 += 1) 
                    {
                        for (unsigned short i_20 = 0; i_20 < 24; i_20 += 3) 
                        {
                            {
                                var_53 = ((arr_21 [i_1] [i_0] [i_1] [i_1]) ? (min((((/* implicit */unsigned int) var_0)), (((((/* implicit */_Bool) var_12)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))) : (var_8));
                                arr_58 [i_0] [i_0] [i_0] [16] [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_20])))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (var_3))) : ((-(var_9)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((((/* implicit */_Bool) var_9)) || (var_4))), ((!(((/* implicit */_Bool) var_9)))))))) : ((-(((((/* implicit */_Bool) var_6)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))));
                                var_54 -= ((/* implicit */unsigned int) max((var_11), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_11)))))))));
                                var_55 ^= ((/* implicit */long long int) var_13);
                                var_56 = ((/* implicit */unsigned int) (~(1960710087852943811LL)));
                            }
                        } 
                    } 
                    arr_59 [7U] [i_0] [i_18] = ((/* implicit */unsigned int) var_5);
                    arr_60 [i_0] [i_1] [i_1] [i_18 - 1] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_22 [(_Bool)1] [i_0] [i_0] [i_0] [i_18])) : (((/* implicit */int) var_0)))), (max((var_11), ((~(((/* implicit */int) var_10))))))));
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                    {
                        for (unsigned int i_23 = 1; i_23 < 22; i_23 += 2) 
                        {
                            {
                                var_57 = ((/* implicit */_Bool) arr_69 [8U] [i_23] [i_0] [i_22] [i_23] [i_22] [i_23]);
                                var_58 = ((/* implicit */signed char) min((var_58), (((/* implicit */signed char) 6393930505712603426LL))));
                            }
                        } 
                    } 
                    var_59 = ((/* implicit */_Bool) arr_39 [9U] [i_1] [i_21] [i_0]);
                    var_60 ^= ((/* implicit */long long int) ((arr_55 [i_0] [i_0] [i_1] [i_0]) == (((/* implicit */long long int) var_2))));
                    /* LoopSeq 3 */
                    for (int i_24 = 0; i_24 < 24; i_24 += 1) 
                    {
                        var_61 ^= arr_11 [i_0 + 2] [i_1] [i_21];
                        var_62 = ((/* implicit */unsigned char) max((773875672U), (((/* implicit */unsigned int) -1817491074))));
                        var_63 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -1704558082569454777LL)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_10))) : (((((/* implicit */_Bool) arr_51 [i_0] [2U] [i_0])) ? (var_7) : (var_8)))))) ? (((((/* implicit */_Bool) (-(((/* implicit */int) arr_26 [i_0] [i_0] [i_0] [9U]))))) ? ((-(arr_41 [i_0] [i_0] [23LL] [i_21] [i_24]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_15 [i_1] [i_24] [i_21])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)19677))) : (var_2)))))) : (((/* implicit */long long int) arr_69 [i_24] [i_24] [i_0] [i_21] [i_0] [i_0 - 1] [i_0 + 1]))));
                        var_64 = ((/* implicit */_Bool) var_10);
                    }
                    for (unsigned int i_25 = 0; i_25 < 24; i_25 += 4) 
                    {
                        var_65 ^= ((((/* implicit */_Bool) var_12)) ? (arr_20 [i_25] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
                        var_66 = ((/* implicit */unsigned short) (((!(var_4))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0 - 2] [i_0]))))) : (((/* implicit */int) var_5))));
                        var_67 = ((/* implicit */unsigned int) arr_54 [i_0] [18U] [18U]);
                        var_68 = ((/* implicit */unsigned char) min((var_68), (((/* implicit */unsigned char) min((((/* implicit */unsigned int) arr_5 [i_25] [i_25] [i_25])), (arr_72 [3]))))));
                    }
                    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
                    {
                        arr_77 [i_0] [i_0] [i_21] [i_26] [i_26] [2LL] &= ((/* implicit */long long int) ((var_4) ? (((/* implicit */unsigned int) ((/* implicit */int) max(((unsigned short)46268), (((/* implicit */unsigned short) var_4)))))) : ((~(4294967287U)))));
                        /* LoopSeq 2 */
                        for (_Bool i_27 = 1; i_27 < 1; i_27 += 1) /* same iter space */
                        {
                            var_69 = ((/* implicit */int) var_4);
                            var_70 = ((/* implicit */long long int) arr_37 [i_27] [i_0] [i_21]);
                            var_71 &= ((/* implicit */unsigned char) 1704558082569454788LL);
                            var_72 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [22] [i_1] [(unsigned char)22])) || (var_4)));
                            var_73 = ((/* implicit */unsigned int) arr_19 [i_0]);
                        }
                        /* vectorizable */
                        for (_Bool i_28 = 1; i_28 < 1; i_28 += 1) /* same iter space */
                        {
                            var_74 = ((/* implicit */long long int) max((var_74), (((/* implicit */long long int) (+(arr_7 [(unsigned char)8] [0U]))))));
                            var_75 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_38 [i_28] [i_28] [i_28 - 1] [i_0 + 1])) ? (((/* implicit */unsigned int) arr_82 [i_28 - 1] [4] [i_0 - 1] [4] [i_0 - 1])) : (var_2)));
                            var_76 = ((/* implicit */unsigned int) max((var_76), (((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (unsigned short)33185)))))) == (var_2))))));
                        }
                        arr_83 [i_0] [i_1] [i_21] [9] = var_2;
                        arr_84 [i_0] [i_0] [i_0] [i_21] [i_21] [i_26] = ((/* implicit */_Bool) var_6);
                    }
                }
            }
        } 
    } 
    var_77 = ((/* implicit */unsigned char) max((var_77), (((/* implicit */unsigned char) -1678308279))));
}
