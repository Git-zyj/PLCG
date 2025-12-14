/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237805
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
    /* LoopSeq 4 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_13 += ((/* implicit */unsigned int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned short) ((signed char) 1155478520U))), ((unsigned short)23006))))));
        var_14 ^= ((/* implicit */unsigned int) var_7);
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (~(((/* implicit */int) min((var_5), (((/* implicit */unsigned short) ((signed char) var_2)))))))))));
        arr_4 [i_1] [i_1] &= ((/* implicit */signed char) var_11);
        var_16 = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) : (((((/* implicit */_Bool) (signed char)123)) ? (arr_3 [i_1]) : (arr_3 [i_1]))))), (((((/* implicit */_Bool) var_1)) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) % (var_12))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7618)))))));
        arr_5 [i_1] = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) min((var_2), (((/* implicit */unsigned short) arr_2 [i_1]))))) ? (((/* implicit */int) min(((signed char)-70), ((signed char)-110)))) : (((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) arr_2 [(unsigned short)7])) : (((/* implicit */int) (signed char)-87))))))), (max((((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_1]))))), (arr_3 [i_1])))));
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_8 [i_2] [i_2] |= ((/* implicit */signed char) (unsigned short)8191);
        /* LoopNest 2 */
        for (unsigned short i_3 = 4; i_3 < 22; i_3 += 1) 
        {
            for (signed char i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                {
                    arr_14 [i_3] [i_3] [i_4] = (unsigned short)53652;
                    /* LoopSeq 1 */
                    for (unsigned short i_5 = 0; i_5 < 24; i_5 += 4) 
                    {
                        arr_18 [i_2] [i_3] [i_3] [i_3] [(unsigned short)18] [i_3 - 1] = ((/* implicit */unsigned short) (((~((~(((/* implicit */int) (unsigned short)13838)))))) >> (((((/* implicit */int) min((min((var_5), ((unsigned short)41263))), ((unsigned short)57900)))) - (3980)))));
                        var_17 |= ((/* implicit */unsigned short) var_9);
                    }
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned short i_6 = 2; i_6 < 23; i_6 += 4) 
        {
            arr_21 [i_2] [i_6] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (unsigned short)53636)))) ? ((~(((/* implicit */int) (unsigned short)57931)))) : (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_2] [i_2] [i_2] [i_6]))) >= (arr_3 [i_2]))))));
            var_18 ^= ((/* implicit */unsigned short) (signed char)-124);
            var_19 = var_2;
            var_20 = ((/* implicit */unsigned short) max((var_20), (var_11)));
        }
        /* LoopSeq 1 */
        for (unsigned short i_7 = 0; i_7 < 24; i_7 += 1) 
        {
            var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) ((unsigned int) var_8))) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_2 [i_2])), (var_8))))) : (4294967289U)))))));
            /* LoopNest 2 */
            for (unsigned int i_8 = 0; i_8 < 24; i_8 += 3) 
            {
                for (signed char i_9 = 2; i_9 < 23; i_9 += 4) 
                {
                    {
                        var_22 = ((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned short) arr_28 [i_9 + 1] [i_7] [(unsigned short)18] [i_9] [i_9 - 1] [i_2])))));
                        var_23 += ((/* implicit */unsigned short) (-(min((((/* implicit */unsigned int) (unsigned short)0)), (var_12)))));
                        arr_29 [i_2] [i_7] [i_8] [i_2] [i_7] = (~(((((/* implicit */_Bool) var_0)) ? (arr_26 [i_7]) : (var_0))));
                        var_24 = ((/* implicit */unsigned short) ((unsigned int) var_1));
                    }
                } 
            } 
        }
        arr_30 [i_2] = ((/* implicit */unsigned int) var_6);
    }
    /* vectorizable */
    for (unsigned short i_10 = 3; i_10 < 23; i_10 += 4) 
    {
        var_25 = var_10;
        /* LoopSeq 4 */
        for (unsigned short i_11 = 2; i_11 < 22; i_11 += 2) /* same iter space */
        {
            var_26 *= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)10541))) / (arr_31 [i_10 - 3])));
            /* LoopSeq 1 */
            for (unsigned short i_12 = 2; i_12 < 24; i_12 += 4) 
            {
                var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1073676288U)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_34 [i_11 + 3]))));
                arr_41 [i_12] [i_11] |= ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
                arr_42 [i_10] [i_10] [i_10 + 2] [i_10 - 1] = ((/* implicit */signed char) (~((-(((/* implicit */int) arr_32 [(unsigned short)10]))))));
            }
        }
        for (unsigned short i_13 = 2; i_13 < 22; i_13 += 2) /* same iter space */
        {
            var_28 = ((/* implicit */unsigned short) (signed char)112);
            arr_46 [i_13] = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_36 [i_13 - 1] [i_13 - 2] [i_10 - 2]))) == (var_0)));
        }
        for (unsigned short i_14 = 2; i_14 < 22; i_14 += 2) /* same iter space */
        {
            /* LoopSeq 3 */
            for (signed char i_15 = 0; i_15 < 25; i_15 += 2) /* same iter space */
            {
                var_29 = ((/* implicit */unsigned int) arr_43 [i_14 - 2] [i_10 - 2]);
                arr_53 [i_10] = ((/* implicit */unsigned int) var_1);
                arr_54 [i_10] [i_14] [i_14] [i_15] = ((unsigned short) var_10);
            }
            for (signed char i_16 = 0; i_16 < 25; i_16 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned short i_17 = 0; i_17 < 25; i_17 += 4) 
                {
                    for (signed char i_18 = 0; i_18 < 25; i_18 += 3) 
                    {
                        {
                            var_30 += ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)20482)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_48 [i_10 - 3] [i_10 + 2]))));
                            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : (152003533U)))) ? ((-(((/* implicit */int) var_10)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 1884666242U)))))));
                        }
                    } 
                } 
                arr_63 [i_10] [i_14] [i_14] [i_16] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (signed char)-53)) : (((/* implicit */int) arr_57 [i_10] [i_10] [i_10 - 2] [i_10]))));
            }
            for (signed char i_19 = 0; i_19 < 25; i_19 += 2) /* same iter space */
            {
                var_32 = ((/* implicit */unsigned int) arr_61 [i_14 - 2] [i_14 - 2] [i_14 + 2] [i_10] [i_10]);
                /* LoopSeq 1 */
                for (unsigned int i_20 = 0; i_20 < 25; i_20 += 3) 
                {
                    var_33 = ((/* implicit */unsigned int) var_4);
                    var_34 += ((/* implicit */unsigned short) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_8))) + (var_9)))));
                }
            }
            arr_69 [i_10] [i_14] [(signed char)3] = ((/* implicit */unsigned short) var_0);
            var_35 &= ((/* implicit */unsigned short) ((unsigned int) var_5));
        }
        for (unsigned short i_21 = 2; i_21 < 22; i_21 += 2) /* same iter space */
        {
            var_36 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_10))));
            /* LoopNest 2 */
            for (signed char i_22 = 3; i_22 < 24; i_22 += 4) 
            {
                for (unsigned short i_23 = 3; i_23 < 24; i_23 += 2) 
                {
                    {
                        var_37 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_49 [i_22] [i_23 + 1])) : (((/* implicit */int) var_11)))) == (((((/* implicit */_Bool) (signed char)-44)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)63))))));
                        arr_76 [i_10] [i_21] [i_22 - 3] [i_23] [i_23] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_4))));
                    }
                } 
            } 
        }
    }
    /* LoopSeq 2 */
    for (unsigned short i_24 = 0; i_24 < 16; i_24 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_25 = 0; i_25 < 16; i_25 += 3) 
        {
            /* LoopSeq 2 */
            for (unsigned short i_26 = 4; i_26 < 12; i_26 += 2) 
            {
                var_38 = ((unsigned int) ((((/* implicit */_Bool) arr_75 [i_26 + 3] [i_26 - 1] [i_26 - 1] [i_26 - 2])) ? (((/* implicit */int) arr_75 [i_26 + 1] [i_26 - 3] [6U] [i_26 + 1])) : (((/* implicit */int) arr_75 [i_26 + 1] [i_26 - 2] [i_26 - 1] [i_26 + 4]))));
                var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((var_9) != (((((/* implicit */_Bool) var_8)) ? (2188027112U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)7936))))))))));
                var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) ((((/* implicit */_Bool) max((var_4), (((/* implicit */unsigned short) arr_57 [i_26 - 4] [i_25] [12U] [i_24]))))) ? (((/* implicit */int) arr_57 [i_26 + 1] [i_25] [i_26 + 3] [i_25])) : ((-(((/* implicit */int) var_1)))))))));
                var_41 *= ((/* implicit */signed char) (~(arr_71 [i_24] [i_25])));
            }
            for (signed char i_27 = 3; i_27 < 15; i_27 += 2) 
            {
                arr_87 [(unsigned short)2] [i_25] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (1606115388U))))))) ? ((~(((/* implicit */int) (unsigned short)17686)))) : ((-(((/* implicit */int) (unsigned short)49713))))));
                /* LoopSeq 3 */
                for (unsigned int i_28 = 3; i_28 < 14; i_28 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_29 = 4; i_29 < 15; i_29 += 1) 
                    {
                        var_42 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned short) var_0))) ? (((/* implicit */int) ((((/* implicit */int) arr_13 [i_25] [(unsigned short)10] [i_28] [i_29 - 2])) != (((/* implicit */int) (unsigned short)58074))))) : (((/* implicit */int) ((unsigned short) 4108052323U)))))) ? ((~((-(256U))))) : (4108052323U)));
                        var_43 = ((/* implicit */unsigned short) ((((/* implicit */int) min((min((((/* implicit */unsigned short) var_1)), ((unsigned short)11899))), (min((var_5), (((/* implicit */unsigned short) (signed char)44))))))) >> ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))));
                        var_44 = arr_23 [i_24] [i_25] [i_29];
                    }
                    var_45 = ((/* implicit */unsigned int) min((var_45), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_12)))))));
                }
                /* vectorizable */
                for (unsigned int i_30 = 3; i_30 < 14; i_30 += 1) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_31 = 1; i_31 < 15; i_31 += 4) 
                    {
                        arr_99 [i_24] [i_27] = ((unsigned short) ((((/* implicit */_Bool) 262143U)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) var_5))));
                        var_46 = ((/* implicit */signed char) arr_61 [i_27 - 3] [i_27 - 3] [i_30] [i_31 - 1] [i_30]);
                    }
                    arr_100 [i_24] [i_24] [i_24] [i_24] [i_24] [(unsigned short)11] = (unsigned short)65535;
                    arr_101 [i_24] [i_24] [i_24] [i_27] [i_30] = arr_0 [i_24];
                }
                for (unsigned int i_32 = 2; i_32 < 15; i_32 += 3) 
                {
                    var_47 = ((/* implicit */unsigned short) min((var_47), (((/* implicit */unsigned short) (-((-(4294967286U))))))));
                    var_48 = ((/* implicit */unsigned int) var_10);
                    arr_105 [i_24] = ((/* implicit */unsigned int) arr_35 [i_24]);
                    var_49 = ((/* implicit */unsigned short) ((((/* implicit */int) ((unsigned short) (-(((/* implicit */int) arr_13 [i_32] [i_32] [i_32 - 2] [i_32])))))) & (((((/* implicit */int) ((var_12) >= (((/* implicit */unsigned int) ((/* implicit */int) var_2)))))) % (((/* implicit */int) arr_39 [i_27 - 3] [i_32 - 1] [i_32 - 2]))))));
                }
                var_50 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) 536608768U)) ? (((/* implicit */int) arr_95 [i_27] [i_24] [i_27 - 1] [i_27] [i_27 + 1] [i_27])) : (((/* implicit */int) arr_95 [i_27] [i_24] [i_27 + 1] [i_27] [i_27 - 3] [i_27 - 3])))) + (((((/* implicit */_Bool) arr_83 [i_27 - 1] [i_27 - 1] [i_27])) ? (((/* implicit */int) arr_83 [i_27 - 2] [i_27] [(unsigned short)3])) : (((/* implicit */int) (unsigned short)52636))))));
            }
            var_51 = ((/* implicit */signed char) min((var_12), (min((arr_67 [i_24] [i_24] [i_24] [i_25]), (511U)))));
        }
        var_52 = ((/* implicit */unsigned short) max((var_52), (((/* implicit */unsigned short) max(((~(((/* implicit */int) min((var_8), (arr_13 [i_24] [i_24] [(signed char)17] [(signed char)17])))))), (((/* implicit */int) max((var_6), (arr_93 [(unsigned short)15] [i_24] [i_24] [i_24])))))))));
    }
    for (unsigned short i_33 = 0; i_33 < 16; i_33 += 1) /* same iter space */
    {
        var_53 |= min(((unsigned short)65535), (arr_10 [i_33] [20U]));
        var_54 = var_6;
        var_55 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_36 [i_33] [i_33] [i_33])))) == (((/* implicit */int) (signed char)-45))));
        var_56 ^= ((/* implicit */signed char) max((((/* implicit */unsigned int) ((((/* implicit */int) min(((unsigned short)1), (arr_6 [i_33])))) + (((/* implicit */int) arr_55 [i_33] [i_33] [i_33]))))), (min((max((((/* implicit */unsigned int) (unsigned short)8)), (var_0))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_79 [i_33] [8U] [i_33])) ? (((/* implicit */int) arr_34 [i_33])) : (((/* implicit */int) arr_19 [i_33] [(unsigned short)9] [i_33])))))))));
    }
}
