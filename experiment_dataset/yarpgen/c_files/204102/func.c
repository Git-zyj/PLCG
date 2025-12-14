/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204102
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
    for (unsigned char i_0 = 3; i_0 < 22; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_3 = 0; i_3 < 25; i_3 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
                    {
                        arr_10 [i_2] [i_2] [i_0] [i_2] [i_2] = ((/* implicit */unsigned char) var_8);
                        arr_11 [i_0] [(unsigned char)24] [i_0] [i_0] [i_0] = ((/* implicit */short) (+(var_1)));
                    }
                    /* LoopSeq 3 */
                    for (unsigned short i_5 = 1; i_5 < 23; i_5 += 1) 
                    {
                        arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_3] [(unsigned char)23] = ((/* implicit */unsigned int) var_5);
                        var_16 = ((/* implicit */short) var_14);
                        var_17 = ((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_15)))))));
                    }
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
                    {
                        arr_18 [(unsigned char)16] [i_3] [i_2] [i_2] [i_2] [i_1 + 1] &= ((/* implicit */long long int) (-(((/* implicit */int) var_15))));
                        var_18 = ((/* implicit */long long int) var_12);
                    }
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) /* same iter space */
                    {
                        arr_21 [i_0] [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) var_3))));
                        var_19 = ((/* implicit */signed char) (~((+(((/* implicit */int) var_15))))));
                        arr_22 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */int) var_4);
                    }
                    var_20 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_10))))));
                }
                arr_23 [i_0] [i_0] = var_11;
            }
            /* LoopNest 3 */
            for (unsigned long long int i_8 = 1; i_8 < 22; i_8 += 2) 
            {
                for (unsigned short i_9 = 1; i_9 < 24; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */unsigned short) min((min(((-(((/* implicit */int) var_3)))), (((/* implicit */int) var_12)))), (((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_13))))), (var_7))))));
                            var_22 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) max((((/* implicit */int) var_12)), (var_10)))), (var_9)))));
                            var_23 = ((/* implicit */short) (~((-((+(((/* implicit */int) var_13))))))));
                            var_24 = ((/* implicit */int) max((max((((/* implicit */long long int) (-(((/* implicit */int) var_11))))), (max((var_9), (var_0))))), (((/* implicit */long long int) var_5))));
                        }
                    } 
                } 
            } 
        }
        var_25 = ((/* implicit */long long int) min((var_5), (var_5)));
    }
    for (signed char i_11 = 0; i_11 < 25; i_11 += 1) 
    {
        var_26 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */long long int) var_14))));
        /* LoopNest 2 */
        for (short i_12 = 0; i_12 < 25; i_12 += 1) 
        {
            for (signed char i_13 = 0; i_13 < 25; i_13 += 1) 
            {
                {
                    arr_39 [i_11] = ((/* implicit */signed char) var_4);
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
                    {
                        var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) var_13))));
                        arr_43 [i_11] [(unsigned short)20] [i_11] [i_12] [i_13] [i_11] = ((/* implicit */unsigned int) (~((~(var_10)))));
                        var_28 ^= ((/* implicit */unsigned int) var_5);
                    }
                    /* vectorizable */
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_16 = 4; i_16 < 23; i_16 += 4) 
                        {
                            var_29 *= ((/* implicit */unsigned int) (-(var_9)));
                            arr_49 [i_11] [i_11] [i_11] = ((/* implicit */_Bool) (~((-(var_0)))));
                            var_30 ^= ((/* implicit */unsigned char) var_12);
                            var_31 = ((/* implicit */unsigned int) var_15);
                        }
                        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 1) 
                        {
                            arr_54 [i_11] [(unsigned short)14] [i_13] = ((/* implicit */_Bool) (~(((/* implicit */int) var_15))));
                            arr_55 [(unsigned short)11] [i_12] [(unsigned short)11] [i_11] [i_17] = ((/* implicit */short) var_14);
                        }
                        arr_56 [(unsigned char)24] [(unsigned char)24] [i_13] [i_15] [i_11] = ((/* implicit */signed char) var_9);
                        var_32 = ((/* implicit */unsigned int) (+(var_5)));
                    }
                    /* LoopNest 2 */
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 4) 
                    {
                        for (long long int i_19 = 0; i_19 < 25; i_19 += 4) 
                        {
                            {
                                var_33 = ((/* implicit */unsigned char) (+((+((-(var_9)))))));
                                var_34 ^= ((/* implicit */unsigned char) var_13);
                            }
                        } 
                    } 
                }
            } 
        } 
        var_35 = ((/* implicit */unsigned char) var_3);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned long long int i_20 = 0; i_20 < 25; i_20 += 4) 
        {
            /* LoopSeq 1 */
            for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
            {
                /* LoopSeq 1 */
                for (unsigned int i_22 = 0; i_22 < 25; i_22 += 2) 
                {
                    arr_68 [(_Bool)0] [i_20] [i_21] [4] [i_11] = ((/* implicit */unsigned long long int) var_3);
                    var_36 = ((/* implicit */int) var_0);
                    arr_69 [i_11] = ((/* implicit */unsigned long long int) var_5);
                    arr_70 [i_11] [14LL] [i_22] [14LL] &= ((/* implicit */unsigned short) var_0);
                }
                arr_71 [i_11] [(short)14] [i_21] = ((/* implicit */unsigned short) (-((+(((/* implicit */int) var_2))))));
            }
            var_37 = (-((~(((/* implicit */int) var_11)))));
        }
        for (short i_23 = 1; i_23 < 21; i_23 += 2) /* same iter space */
        {
            var_38 = ((/* implicit */short) (~(((/* implicit */int) var_11))));
            /* LoopNest 3 */
            for (unsigned int i_24 = 0; i_24 < 25; i_24 += 4) 
            {
                for (unsigned long long int i_25 = 2; i_25 < 23; i_25 += 2) 
                {
                    for (unsigned int i_26 = 0; i_26 < 25; i_26 += 2) 
                    {
                        {
                            arr_84 [i_11] [i_11] = ((/* implicit */_Bool) var_5);
                            arr_85 [i_26] [i_23] [i_11] [i_26] [11LL] [i_25 - 1] [i_11] = ((/* implicit */_Bool) max(((~(((/* implicit */int) var_8)))), (min((((/* implicit */int) min((var_3), (var_13)))), ((+(((/* implicit */int) var_15))))))));
                            arr_86 [(_Bool)1] [i_23] [19] [i_11] [i_26] = ((/* implicit */unsigned int) var_0);
                        }
                    } 
                } 
            } 
            var_39 = ((/* implicit */int) (~(var_1)));
        }
        /* vectorizable */
        for (short i_27 = 1; i_27 < 21; i_27 += 2) /* same iter space */
        {
            /* LoopNest 3 */
            for (signed char i_28 = 0; i_28 < 25; i_28 += 1) 
            {
                for (long long int i_29 = 0; i_29 < 25; i_29 += 4) 
                {
                    for (unsigned long long int i_30 = 0; i_30 < 25; i_30 += 2) 
                    {
                        {
                            var_40 = ((/* implicit */short) max((var_40), (((/* implicit */short) (+(((/* implicit */int) var_14)))))));
                            arr_98 [i_11] [i_29] [i_28] [i_27 + 3] [i_11] = (~(((/* implicit */int) var_14)));
                        }
                    } 
                } 
            } 
            /* LoopSeq 2 */
            for (_Bool i_31 = 0; i_31 < 1; i_31 += 1) 
            {
                arr_102 [i_11] [i_11] [(unsigned short)16] |= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))));
                var_41 = ((/* implicit */unsigned int) var_4);
                var_42 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                var_43 ^= ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
            }
            for (_Bool i_32 = 0; i_32 < 1; i_32 += 1) 
            {
                var_44 = ((/* implicit */_Bool) (-(((/* implicit */int) var_8))));
                arr_106 [i_11] [(short)6] [i_11] = ((/* implicit */unsigned char) var_2);
            }
            var_45 = ((/* implicit */unsigned long long int) (~(var_9)));
        }
        /* LoopSeq 2 */
        for (unsigned int i_33 = 0; i_33 < 25; i_33 += 2) 
        {
            var_46 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) max((min((var_6), (var_6))), (max((var_6), (((/* implicit */unsigned short) var_3))))))), (max((((/* implicit */unsigned long long int) var_10)), (var_1)))));
            var_47 = min((min((((/* implicit */int) var_3)), (var_10))), ((-(((/* implicit */int) var_3)))));
            /* LoopSeq 2 */
            for (unsigned short i_34 = 0; i_34 < 25; i_34 += 4) 
            {
                var_48 = var_9;
                var_49 = ((/* implicit */unsigned char) (-(var_4)));
                /* LoopNest 2 */
                for (int i_35 = 1; i_35 < 24; i_35 += 4) 
                {
                    for (signed char i_36 = 1; i_36 < 24; i_36 += 1) 
                    {
                        {
                            arr_117 [i_11] [i_11] [i_34] [i_11] [11U] [i_35] = ((/* implicit */_Bool) (+(max((var_0), (((/* implicit */long long int) (!(((/* implicit */_Bool) 576460752236314624LL)))))))));
                            var_50 = ((/* implicit */unsigned long long int) max((var_50), (((/* implicit */unsigned long long int) max((((/* implicit */long long int) max((((/* implicit */int) var_2)), (min((var_5), (((/* implicit */int) var_3))))))), (var_0))))));
                        }
                    } 
                } 
            }
            for (_Bool i_37 = 0; i_37 < 1; i_37 += 1) 
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned long long int i_38 = 1; i_38 < 23; i_38 += 2) 
                {
                    var_51 = (!(((/* implicit */_Bool) var_13)));
                    /* LoopSeq 1 */
                    for (long long int i_39 = 0; i_39 < 25; i_39 += 4) 
                    {
                        var_52 = ((/* implicit */short) min((var_52), (var_13)));
                        arr_125 [i_11] [i_11] = ((/* implicit */_Bool) (+((~(((/* implicit */int) var_8))))));
                        var_53 = ((/* implicit */signed char) (+(((/* implicit */int) var_6))));
                        var_54 = ((/* implicit */unsigned long long int) (!(var_2)));
                    }
                }
                var_55 = var_11;
            }
        }
        for (long long int i_40 = 0; i_40 < 25; i_40 += 2) 
        {
            var_56 = ((/* implicit */int) var_15);
            /* LoopSeq 2 */
            for (unsigned long long int i_41 = 0; i_41 < 25; i_41 += 2) /* same iter space */
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_42 = 1; i_42 < 23; i_42 += 4) 
                {
                    var_57 ^= ((/* implicit */unsigned short) var_5);
                    arr_135 [i_11] [i_40] [i_11] [(short)14] [i_40] [(unsigned short)21] = ((/* implicit */short) (~((+(var_5)))));
                    arr_136 [19ULL] [19ULL] [i_42] [i_42 + 1] [i_11] = ((/* implicit */_Bool) (~((+(((/* implicit */int) var_15))))));
                    arr_137 [i_40] [i_11] = ((/* implicit */int) var_12);
                }
                /* vectorizable */
                for (long long int i_43 = 0; i_43 < 25; i_43 += 1) 
                {
                    arr_141 [i_40] [i_40] [i_41] [i_11] = (!(((/* implicit */_Bool) var_6)));
                    arr_142 [i_11] [i_40] [i_41] [i_11] = ((/* implicit */int) var_9);
                    var_58 = ((/* implicit */signed char) var_0);
                    var_59 = ((/* implicit */unsigned int) max((var_59), (((/* implicit */unsigned int) var_15))));
                }
                arr_143 [i_11] [i_40] [i_40] [i_41] = ((/* implicit */unsigned long long int) max(((~((-(((/* implicit */int) var_8)))))), (((/* implicit */int) var_8))));
                arr_144 [i_11] = ((/* implicit */unsigned int) max((max(((+(((/* implicit */int) var_12)))), (((/* implicit */int) (!(((/* implicit */_Bool) var_1))))))), (((/* implicit */int) (!((!(((/* implicit */_Bool) var_1)))))))));
                var_60 = ((/* implicit */int) var_8);
                arr_145 [i_11] [i_41] = (-((+((-(var_5))))));
            }
            for (unsigned long long int i_44 = 0; i_44 < 25; i_44 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_45 = 0; i_45 < 25; i_45 += 1) 
                {
                    for (unsigned char i_46 = 0; i_46 < 25; i_46 += 1) 
                    {
                        {
                            var_61 = ((/* implicit */long long int) var_7);
                            var_62 = ((/* implicit */unsigned long long int) var_4);
                            var_63 += ((/* implicit */int) min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_14)), ((+(((/* implicit */int) var_13))))))), (var_1)));
                            var_64 &= ((/* implicit */short) var_12);
                        }
                    } 
                } 
                var_65 = ((/* implicit */_Bool) var_0);
                arr_153 [i_11] [i_44] = min((var_7), (var_7));
            }
            var_66 = ((/* implicit */unsigned int) var_9);
            var_67 += ((/* implicit */signed char) max((((/* implicit */unsigned long long int) max((((/* implicit */int) var_13)), ((~(((/* implicit */int) var_13))))))), (min((((/* implicit */unsigned long long int) max((var_10), (var_10)))), ((~(var_1)))))));
        }
    }
    var_68 = ((/* implicit */_Bool) (~(((/* implicit */int) var_8))));
}
