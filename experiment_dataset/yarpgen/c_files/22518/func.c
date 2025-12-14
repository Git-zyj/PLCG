/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22518
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
    var_15 = ((/* implicit */int) (((_Bool)0) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */int) (short)-26455))))) : (18446744073709551612ULL)));
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        var_16 = arr_0 [4ULL] [i_0];
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 16; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (int i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
                {
                    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_0])) ? (arr_2 [i_0] [i_1] [i_3]) : (((arr_4 [i_0] [i_1] [i_3]) & (3063062707570658362ULL)))));
                    var_18 = ((((/* implicit */_Bool) var_8)) ? (max((7ULL), (min((17ULL), (((/* implicit */unsigned long long int) arr_3 [i_0])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_4 [i_0] [5ULL] [i_2]) <= (var_8))))));
                    var_19 = ((/* implicit */short) (-(((((/* implicit */_Bool) 18446744073709551614ULL)) ? (18446744073709551604ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))));
                    arr_9 [i_0] [i_2] = (+((-(max((0), (((/* implicit */int) var_11)))))));
                }
                for (int i_4 = 0; i_4 < 16; i_4 += 4) /* same iter space */
                {
                    arr_13 [i_0] [i_2] [i_1] [i_2] [i_4] = ((/* implicit */short) ((((18446744073709551598ULL) / (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_4] [i_2])))) < (((/* implicit */unsigned long long int) var_14))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_5 = 0; i_5 < 16; i_5 += 3) 
                    {
                        var_20 = (~(var_6));
                        var_21 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 3ULL)) ? (18446744073709551609ULL) : (0ULL))) % (7631051235370950517ULL)));
                        arr_17 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) & (((arr_4 [i_0] [i_1] [(unsigned char)0]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_2])))))));
                    }
                    for (unsigned long long int i_6 = 0; i_6 < 16; i_6 += 4) 
                    {
                        arr_20 [i_2] [i_2] [i_2] = (+((-((((_Bool)0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) : (18446744073709551615ULL))))));
                        arr_21 [i_2] [i_1] = ((/* implicit */long long int) max(((~(arr_18 [i_0] [i_2] [11ULL] [i_2] [i_4] [i_6]))), (max((3ULL), (((/* implicit */unsigned long long int) var_13))))));
                        arr_22 [i_0] [i_2] [i_0] [i_0] [i_0] [i_2] [13LL] = ((/* implicit */_Bool) max((18446744073709551612ULL), (((((/* implicit */unsigned long long int) var_3)) / (4207601233923114608ULL)))));
                        var_22 = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_7)), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_2] [i_6])) ? (((/* implicit */int) var_4)) : (max((arr_15 [(unsigned short)13] [i_1] [i_2] [i_4] [i_6] [i_4] [(unsigned short)13]), (((/* implicit */int) var_12))))))));
                    }
                    var_23 = ((/* implicit */unsigned short) (-(((/* implicit */int) var_9))));
                    arr_23 [i_4] [i_2] [(short)12] [i_1] [i_2] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_0] [i_1] [i_1] [i_1] [i_2] [i_4] [i_1])) / (((/* implicit */int) (unsigned short)31031))));
                }
                arr_24 [i_2] = ((/* implicit */unsigned short) (unsigned char)0);
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_7 = 1; i_7 < 12; i_7 += 3) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        arr_29 [i_0] [i_0] [i_2] [i_7 + 2] [i_0] [i_7 + 2] [i_8] = ((/* implicit */_Bool) (-(arr_0 [i_2] [i_0])));
                        arr_30 [i_1] [i_2] [i_2] = ((/* implicit */int) ((1835953547671662626ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))));
                        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_1] [i_1] [i_2] [i_2] [i_7] [i_8])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)7))) : (arr_7 [i_2] [i_1])))) ? (((((/* implicit */_Bool) -625689898)) ? (7363864472289348786ULL) : (7363864472289348781ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
                        arr_31 [i_2] [i_2] [i_2] [i_7 + 4] [i_2] = ((/* implicit */signed char) (-(4ULL)));
                        var_25 = (-(((/* implicit */int) (!(((/* implicit */_Bool) var_13))))));
                    }
                    for (unsigned long long int i_9 = 2; i_9 < 12; i_9 += 2) 
                    {
                        arr_35 [i_0] [15] [i_2] [4ULL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (arr_10 [i_7 - 1] [i_7 + 3] [i_9 + 2] [i_9 - 2] [i_2]) : (((/* implicit */int) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [i_0] [i_0] [i_2])) || (((/* implicit */_Bool) 12ULL)))))));
                        arr_36 [i_2] [i_9] = (+(17ULL));
                        arr_37 [8ULL] [i_1] [i_1] [i_1] [i_7 + 1] [i_2] [i_2] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((var_6) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)17))))))));
                    }
                    /* LoopSeq 2 */
                    for (short i_10 = 0; i_10 < 16; i_10 += 1) 
                    {
                        arr_41 [i_0] [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */_Bool) var_0);
                        arr_42 [i_2] [i_2] [7LL] [7LL] [i_10] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((var_6) % (var_1)))) ? (((/* implicit */int) (signed char)106)) : (((/* implicit */int) arr_14 [i_7] [i_7] [i_7] [i_7] [i_2]))));
                    }
                    for (short i_11 = 0; i_11 < 16; i_11 += 3) 
                    {
                        arr_45 [i_0] [i_2] [i_0] [i_0] [i_0] = ((/* implicit */int) var_1);
                        arr_46 [i_0] [i_1] [i_2] [i_7] [i_7] [i_11] = ((/* implicit */short) ((var_7) ? (((/* implicit */unsigned long long int) arr_26 [i_7] [i_1] [i_2] [i_1] [i_7 + 1] [i_1])) : (18446744073709551612ULL)));
                        arr_47 [i_0] [i_0] [i_0] [i_7] [i_2] [i_11] [i_11] = ((/* implicit */_Bool) (-(((/* implicit */int) var_9))));
                    }
                }
            }
            for (unsigned short i_12 = 1; i_12 < 13; i_12 += 3) 
            {
                arr_50 [i_12] [i_1] [(unsigned char)4] [i_12 + 2] = ((/* implicit */_Bool) ((((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)36)), (var_6))), (((/* implicit */unsigned long long int) arr_32 [i_0] [i_1] [i_12 + 2] [i_12] [i_12]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_44 [i_0])), (0ULL)))))))) : (max((min((((/* implicit */unsigned long long int) (_Bool)0)), (arr_39 [i_0] [(_Bool)1] [i_0] [i_0] [i_12]))), (min((((/* implicit */unsigned long long int) -22LL)), (4406716666348473011ULL)))))));
                /* LoopSeq 4 */
                for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    arr_54 [i_12] [i_1] = ((((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned short)4828))))) - (max((((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_12] [i_1])), (0ULL))));
                    arr_55 [(short)4] [i_12] [(unsigned short)4] [i_12] = ((/* implicit */unsigned long long int) max((((/* implicit */short) (_Bool)1)), ((short)32232)));
                    /* LoopSeq 1 */
                    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                    {
                        arr_58 [i_0] [i_1] [i_12] [i_13] [i_12] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_4))));
                        arr_59 [12LL] [i_1] [i_12] [i_1] [i_12] = ((/* implicit */short) ((((((/* implicit */_Bool) -22LL)) ? ((-(var_2))) : (((/* implicit */int) min((((/* implicit */signed char) var_12)), ((signed char)125)))))) / ((-((+(((/* implicit */int) (signed char)98))))))));
                        arr_60 [i_0] [i_0] [i_0] [i_0] [i_12] = ((/* implicit */short) ((((/* implicit */int) var_10)) & (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_1] [i_12] [i_12] [i_14] [i_14]))))));
                    }
                }
                for (signed char i_15 = 2; i_15 < 15; i_15 += 3) 
                {
                    arr_63 [i_15] [(_Bool)1] [i_12] [i_0] [i_0] = ((/* implicit */signed char) arr_44 [(_Bool)1]);
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned long long int i_16 = 3; i_16 < 15; i_16 += 2) 
                    {
                        var_26 = ((/* implicit */_Bool) arr_51 [i_12 + 3] [i_16] [i_16 - 2] [(unsigned short)3]);
                        var_27 = ((/* implicit */long long int) (+(((/* implicit */int) (short)-32530))));
                    }
                    for (int i_17 = 2; i_17 < 15; i_17 += 4) 
                    {
                        var_28 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (var_1)))) ? (max((var_1), (9ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_13), (arr_51 [i_17] [i_15 - 2] [i_1] [i_0])))))));
                        arr_68 [i_12] = ((/* implicit */unsigned short) (-2147483647 - 1));
                        arr_69 [i_0] [i_0] [i_12] [i_0] [i_0] [i_0] = ((/* implicit */short) max((var_8), (((/* implicit */unsigned long long int) var_14))));
                        var_29 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (var_14) : ((-(((/* implicit */int) arr_51 [i_12 + 2] [i_12] [i_12 - 1] [i_12 + 3]))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_18 = 1; i_18 < 13; i_18 += 1) 
                    {
                        var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) || (((/* implicit */_Bool) arr_62 [i_12 + 1] [i_12 + 1] [i_12] [i_12] [i_18 + 2]))));
                        var_31 = ((/* implicit */_Bool) ((((/* implicit */int) (short)96)) * (((/* implicit */int) (signed char)-91))));
                        var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_53 [i_15 - 2] [i_12] [i_1]))));
                        arr_72 [i_0] [i_1] [i_12] [i_12] [i_18] = ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)98))) > (arr_33 [i_12 + 1] [i_15 - 1] [i_18 - 1] [i_18] [i_18]));
                        var_33 = ((/* implicit */short) 4ULL);
                    }
                }
                for (signed char i_19 = 0; i_19 < 16; i_19 += 2) 
                {
                    arr_75 [i_12] [i_1] [i_12] [i_19] [i_19] = ((/* implicit */_Bool) var_10);
                    /* LoopSeq 1 */
                    for (unsigned long long int i_20 = 0; i_20 < 16; i_20 += 3) 
                    {
                        arr_78 [i_0] [i_1] [i_12] [i_0] [i_12] = ((/* implicit */short) max((var_8), (((/* implicit */unsigned long long int) (+((~(-22LL))))))));
                        var_34 = ((/* implicit */_Bool) var_5);
                    }
                }
                for (unsigned long long int i_21 = 3; i_21 < 14; i_21 += 2) 
                {
                    arr_83 [i_0] [i_1] [i_12 + 2] [i_12] [i_21] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_12 + 2] [i_21 - 1] [i_21 - 1] [i_12 + 2] [i_12])) ? ((-(var_2))) : ((+(((/* implicit */int) arr_5 [i_0]))))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_76 [i_21 - 2] [i_12] [i_12] [i_12] [i_12 + 3]))))) : ((~(17897133280615648282ULL)))));
                    arr_84 [9ULL] [i_12] [9ULL] [2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_56 [i_1] [i_12 + 3] [i_12 + 3] [i_12 + 2] [i_12 + 2] [i_21 - 3] [i_21 + 1])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)32232))))) ? ((-(((/* implicit */int) (signed char)98)))) : (var_5)));
                    arr_85 [i_12] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) 888970418);
                    var_35 = min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_71 [5ULL] [i_1] [5ULL] [i_21 + 1] [i_12 - 1])))), (arr_34 [i_0] [i_0] [(_Bool)1] [i_21 - 3] [i_12]));
                }
                arr_86 [i_12 + 2] [i_12] [i_0] = ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) 888970417)), (arr_2 [i_12 - 1] [i_12 + 2] [i_12 + 1])))) ? (((((/* implicit */_Bool) (short)-4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6))) : (18446744073709551596ULL))) : (((/* implicit */unsigned long long int) ((-4338213217565177079LL) ^ (((/* implicit */long long int) -888970435))))));
            }
            arr_87 [i_0] [i_0] = ((/* implicit */unsigned short) var_2);
        }
    }
}
