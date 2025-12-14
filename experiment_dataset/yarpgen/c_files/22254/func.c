/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22254
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22254 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22254
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
    for (int i_0 = 0; i_0 < 15; i_0 += 3) /* same iter space */
    {
        var_11 = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) arr_0 [i_0])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned int) (~(arr_0 [i_0])));
    }
    for (int i_1 = 0; i_1 < 15; i_1 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_2 = 0; i_2 < 15; i_2 += 1) 
        {
            for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_4 = 0; i_4 < 15; i_4 += 2) 
                    {
                        var_12 = ((int) (-(var_0)));
                        arr_17 [i_1] [i_2] = ((/* implicit */_Bool) var_2);
                        var_13 = ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) ((short) arr_15 [i_1] [i_2] [i_2]))), (((unsigned int) min((((/* implicit */int) arr_9 [i_1] [i_2] [i_2])), (var_2))))));
                    }
                    arr_18 [i_2] = ((/* implicit */unsigned char) ((unsigned long long int) (+(((/* implicit */int) arr_13 [i_1] [i_2])))));
                    arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned int) arr_4 [i_1]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)41420))))) : (((/* implicit */int) ((_Bool) var_5)))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_8))))))))));
                    /* LoopSeq 1 */
                    for (signed char i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_6 = 0; i_6 < 15; i_6 += 2) 
                        {
                            arr_24 [i_2] [i_2] = ((/* implicit */int) ((long long int) var_4));
                            arr_25 [i_1] [i_2] [i_1] [i_1] [i_2] [i_1] [i_1] = ((signed char) ((_Bool) arr_20 [i_1] [i_1] [i_3] [i_5] [i_6]));
                            var_14 |= ((/* implicit */unsigned int) (-(arr_11 [i_2] [i_5])));
                            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) arr_6 [i_2]))));
                            var_16 = ((/* implicit */unsigned long long int) var_0);
                        }
                        for (unsigned long long int i_7 = 0; i_7 < 15; i_7 += 4) 
                        {
                            var_17 = ((/* implicit */unsigned short) var_4);
                            var_18 = ((_Bool) var_6);
                        }
                        for (unsigned short i_8 = 2; i_8 < 12; i_8 += 1) 
                        {
                            var_19 |= ((/* implicit */unsigned short) var_10);
                            arr_33 [i_1] [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) ((short) ((arr_32 [i_1] [i_2] [i_3] [i_8 - 1] [i_3]) ? (((/* implicit */int) arr_28 [i_3] [i_5] [i_3] [i_8 - 2] [i_3])) : (((/* implicit */int) arr_31 [i_1] [i_3] [i_3] [i_8 + 2] [i_3])))));
                            arr_34 [i_1] [i_2] [i_1] [i_1] [i_1] [i_1] [i_1] = min((((unsigned char) arr_27 [i_1] [i_8 - 2] [i_3] [i_5] [i_8 - 1] [i_3])), (((unsigned char) var_2)));
                            arr_35 [i_3] [i_2] [i_3] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((int) var_10));
                        }
                        arr_36 [i_2] [i_2] [i_2] [i_3] [i_5] [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(arr_29 [i_2] [i_3]))))));
                    }
                }
            } 
        } 
        arr_37 [i_1] = ((/* implicit */int) ((unsigned short) (-(((/* implicit */int) ((short) var_0))))));
    }
    /* LoopSeq 4 */
    for (signed char i_9 = 0; i_9 < 16; i_9 += 2) 
    {
        var_20 += ((/* implicit */unsigned short) arr_38 [i_9] [i_9]);
        arr_40 [i_9] = ((/* implicit */_Bool) min(((-(arr_38 [i_9] [i_9]))), (((/* implicit */long long int) ((unsigned short) arr_39 [i_9])))));
        arr_41 [i_9] [i_9] = ((/* implicit */signed char) max(((((!(var_7))) ? (max((arr_38 [i_9] [i_9]), (((/* implicit */long long int) var_2)))) : (arr_38 [i_9] [i_9]))), (((/* implicit */long long int) max((var_1), (((/* implicit */unsigned int) var_2)))))));
    }
    for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
    {
        var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */int) arr_22 [i_10 - 1] [i_10] [i_10 - 1] [i_10 - 1] [i_10 - 1] [i_10])) : (((/* implicit */int) min(((unsigned short)24116), ((unsigned short)41423)))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 1; i_11 < 13; i_11 += 4) 
        {
            arr_47 [i_10] [i_10] [i_11 - 1] = ((((/* implicit */_Bool) ((short) arr_31 [i_10 - 1] [i_10 - 1] [i_11] [i_11] [i_11 - 1]))) ? (((/* implicit */long long int) ((/* implicit */int) ((short) var_8)))) : ((-(((arr_22 [i_10 - 1] [i_10] [i_10 - 1] [i_10] [i_10] [i_10]) ? (arr_16 [i_10] [i_10 - 1] [i_10]) : (((/* implicit */long long int) ((/* implicit */int) var_8))))))));
            /* LoopNest 2 */
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 2) 
            {
                for (long long int i_13 = 1; i_13 < 13; i_13 += 4) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_29 [i_10] [i_13 - 1])))) ? (arr_15 [i_12] [i_11] [i_10 - 1]) : (((/* implicit */int) ((signed char) var_1)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (((((/* implicit */_Bool) var_1)) ? (((long long int) arr_10 [i_11])) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_12 [i_10 - 1] [i_11 + 1] [i_12] [i_13])), (arr_4 [i_11])))))))));
                        var_23 = ((/* implicit */unsigned char) var_1);
                        var_24 = ((/* implicit */long long int) min((var_24), (((/* implicit */long long int) arr_39 [i_11 - 1]))));
                        var_25 = min((((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_6 [i_11])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_10]))))))), (max((((/* implicit */unsigned long long int) ((unsigned short) arr_28 [i_13] [i_12] [i_12] [i_11 + 1] [i_10 - 1]))), (arr_21 [i_10 - 1] [i_11 + 1] [i_12]))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_14 = 0; i_14 < 14; i_14 += 3) 
            {
                for (unsigned short i_15 = 2; i_15 < 11; i_15 += 1) 
                {
                    {
                        arr_61 [i_10] [i_14] [i_15] = ((/* implicit */_Bool) var_3);
                        arr_62 [i_10 - 1] [i_11] [i_15 + 1] [i_15] = ((/* implicit */signed char) arr_5 [i_15 + 1] [i_11 + 1]);
                        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (~(((long long int) arr_59 [i_10 - 1] [i_11 - 1] [i_11 - 1] [i_15 + 1])))))));
                    }
                } 
            } 
            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_51 [i_11] [i_11 - 1] [i_11 + 1] [i_10 - 1])) ? (((/* implicit */int) ((unsigned short) var_7))) : (((/* implicit */int) arr_20 [i_11 + 1] [i_11 - 1] [i_11] [i_11 + 1] [i_10 - 1])))))));
        }
        /* LoopNest 2 */
        for (unsigned short i_16 = 2; i_16 < 13; i_16 += 1) 
        {
            for (int i_17 = 2; i_17 < 12; i_17 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_18 = 1; i_18 < 11; i_18 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_19 = 0; i_19 < 14; i_19 += 4) 
                        {
                            var_28 = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_7 [i_10 - 1] [i_18 + 1] [i_17])) ? ((-(arr_71 [i_10 - 1] [i_10 - 1] [i_10] [i_10 - 1]))) : (((long long int) arr_27 [i_10 - 1] [i_19] [i_19] [i_18 + 2] [i_19] [i_10 - 1])))), (((/* implicit */long long int) ((unsigned short) arr_48 [i_16 - 2] [i_17 + 2])))));
                            var_29 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_2)), (arr_39 [i_18 - 1])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_59 [i_10 - 1] [i_16 + 1] [i_17 - 2] [i_18]))) : (var_3)))) ? (((/* implicit */int) ((signed char) (unsigned short)13573))) : (((/* implicit */int) ((signed char) ((unsigned int) arr_55 [i_10] [i_10] [i_18])))));
                            var_30 = ((/* implicit */short) max((max(((+(var_3))), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) min((max((((/* implicit */unsigned int) arr_42 [i_10])), (var_1))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_10])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_75 [i_19] [i_18 - 1] [i_17 - 2] [i_16 + 1] [i_10]))))))))));
                            var_31 = ((/* implicit */unsigned long long int) ((_Bool) ((int) ((signed char) arr_11 [i_10 - 1] [i_16 - 1]))));
                        }
                        arr_76 [i_18 - 1] [i_16] [i_10] = ((/* implicit */unsigned char) arr_16 [i_18] [i_17 - 1] [i_16]);
                        arr_77 [i_17] [i_18 + 1] [6U] |= ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) arr_6 [i_10 - 1])) ? (((/* implicit */int) arr_12 [i_18] [i_17 - 1] [i_16 - 1] [i_10 - 1])) : (min((arr_1 [i_16 - 2]), (((/* implicit */int) var_7)))))));
                        var_32 = ((/* implicit */int) arr_58 [i_10] [i_10] [i_10] [i_10]);
                    }
                    var_33 = ((/* implicit */short) ((((/* implicit */_Bool) var_5)) ? (((long long int) arr_59 [i_10] [i_10] [i_10 - 1] [i_17 + 1])) : ((-(var_6)))));
                }
            } 
        } 
    }
    for (int i_20 = 2; i_20 < 20; i_20 += 3) 
    {
        var_34 = max((((((/* implicit */_Bool) arr_78 [i_20] [i_20 - 2])) ? ((-(((/* implicit */int) (signed char)85)))) : ((+(((/* implicit */int) arr_78 [i_20 - 1] [i_20 - 2])))))), (((/* implicit */int) max((min((arr_78 [i_20] [i_20]), (((/* implicit */unsigned short) arr_79 [i_20] [i_20])))), (((/* implicit */unsigned short) arr_79 [i_20 + 3] [i_20 + 1]))))));
        var_35 = ((/* implicit */short) (-(((((/* implicit */_Bool) ((short) arr_79 [i_20] [i_20]))) ? (((unsigned long long int) arr_79 [i_20 + 3] [i_20 + 2])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_5))))))));
        var_36 = ((/* implicit */int) ((unsigned int) arr_78 [i_20 + 3] [i_20 + 1]));
        /* LoopSeq 4 */
        for (unsigned short i_21 = 0; i_21 < 23; i_21 += 4) 
        {
            var_37 = ((/* implicit */unsigned long long int) max((var_37), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_79 [i_20 - 2] [i_21])) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (arr_81 [i_20 - 2] [i_20 + 1] [i_20])))) ? (((((/* implicit */_Bool) max((var_0), (((/* implicit */unsigned int) var_2))))) ? (((long long int) arr_78 [i_20 - 1] [i_21])) : (((/* implicit */long long int) (-(var_1)))))) : (((long long int) var_2)))))));
            arr_82 [i_20 - 1] = arr_78 [i_20 + 3] [i_21];
        }
        for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
        {
            var_38 = ((/* implicit */signed char) var_3);
            var_39 = ((/* implicit */unsigned char) arr_83 [i_20 - 1]);
            arr_86 [i_20 + 3] [i_20 + 3] [i_20 + 3] = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) max((arr_84 [i_20 + 3] [i_22] [i_22]), (var_5)))) ? (((int) arr_84 [i_20 + 1] [i_20 + 1] [i_20 + 1])) : (var_2))));
        }
        for (signed char i_23 = 0; i_23 < 23; i_23 += 4) 
        {
            /* LoopSeq 2 */
            for (short i_24 = 3; i_24 < 22; i_24 += 3) 
            {
                arr_92 [i_24] [i_24] [i_24] [i_24] = ((/* implicit */unsigned char) arr_90 [i_20 + 2] [i_24 - 2] [i_24 - 2]);
                /* LoopNest 2 */
                for (long long int i_25 = 0; i_25 < 23; i_25 += 2) 
                {
                    for (long long int i_26 = 2; i_26 < 20; i_26 += 4) 
                    {
                        {
                            arr_97 [i_24] [i_23] [i_23] [i_24 - 3] [i_25] [i_26 - 1] = ((/* implicit */unsigned int) (-((((!(arr_87 [i_25] [i_23]))) ? (arr_89 [i_26] [i_20 + 1] [i_20 + 1]) : (((/* implicit */long long int) ((unsigned int) arr_94 [i_26] [i_25] [i_20 + 2] [i_20 + 2])))))));
                            var_40 = ((/* implicit */signed char) max((var_40), (((/* implicit */signed char) arr_78 [i_20] [i_23]))));
                        }
                    } 
                } 
                var_41 = ((/* implicit */unsigned short) max((var_41), (((/* implicit */unsigned short) ((unsigned int) arr_78 [i_20 + 2] [i_20 + 1])))));
                /* LoopNest 2 */
                for (long long int i_27 = 0; i_27 < 23; i_27 += 3) 
                {
                    for (int i_28 = 2; i_28 < 22; i_28 += 4) 
                    {
                        {
                            var_42 ^= ((/* implicit */int) ((unsigned long long int) arr_81 [i_28] [i_24] [i_23]));
                            arr_103 [i_20 - 1] [i_23] [i_24 - 3] [i_27] [i_24] = ((/* implicit */signed char) min((((/* implicit */unsigned short) arr_79 [i_24] [i_24 - 2])), (((unsigned short) (+(arr_85 [i_20 + 1] [i_23] [i_24 - 2]))))));
                        }
                    } 
                } 
            }
            for (unsigned short i_29 = 0; i_29 < 23; i_29 += 3) 
            {
                var_43 = ((/* implicit */unsigned char) max((var_43), (((/* implicit */unsigned char) arr_90 [i_29] [i_29] [i_29]))));
                var_44 = ((/* implicit */signed char) max((((((/* implicit */_Bool) arr_91 [i_29] [i_20])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_80 [i_20 + 3])))), (((/* implicit */int) ((signed char) var_4)))));
                arr_106 [i_20 - 1] [i_23] [i_29] = ((/* implicit */signed char) ((unsigned long long int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (960442894U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)35))))));
            }
            arr_107 [i_20] = ((/* implicit */int) max((((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_100 [i_20] [i_23])))) : (var_6))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) arr_100 [i_20 - 1] [i_20 - 1])) : (((/* implicit */int) arr_100 [i_20 + 2] [i_20 + 3])))))));
        }
        for (int i_30 = 2; i_30 < 20; i_30 += 3) 
        {
            arr_110 [i_20] [i_20] [i_30] = ((/* implicit */_Bool) ((unsigned char) (~(arr_91 [i_30 + 2] [i_20 - 2]))));
            /* LoopSeq 1 */
            for (_Bool i_31 = 0; i_31 < 0; i_31 += 1) 
            {
                var_45 = ((/* implicit */signed char) arr_102 [i_20 + 1] [i_30]);
                /* LoopNest 2 */
                for (int i_32 = 0; i_32 < 23; i_32 += 2) 
                {
                    for (unsigned int i_33 = 0; i_33 < 23; i_33 += 1) 
                    {
                        {
                            var_46 = ((/* implicit */int) max((var_46), (((/* implicit */int) ((((/* implicit */_Bool) ((unsigned char) (!(((/* implicit */_Bool) arr_78 [i_30 + 1] [i_30 + 3])))))) ? (((/* implicit */long long int) ((/* implicit */int) ((signed char) min((arr_101 [i_20] [i_30] [i_31 + 1]), (arr_83 [i_31])))))) : (((long long int) arr_93 [i_20 + 3] [i_20 + 1])))))));
                            arr_119 [i_20 + 3] [i_30 + 3] [i_20 + 3] [i_30 + 3] [i_30] = ((/* implicit */_Bool) var_6);
                            var_47 = ((/* implicit */unsigned short) max((var_47), (((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) var_10)) ? (arr_89 [i_20] [i_32] [i_33]) : (((/* implicit */long long int) ((/* implicit */int) arr_105 [i_33] [i_32]))))))), (arr_81 [i_31] [i_32] [i_33]))))));
                        }
                    } 
                } 
            }
            var_48 *= ((/* implicit */_Bool) ((unsigned int) (-(max((var_1), (((/* implicit */unsigned int) arr_117 [i_20] [i_20 + 3] [i_20 + 1])))))));
        }
    }
    for (_Bool i_34 = 0; i_34 < 1; i_34 += 1) 
    {
        arr_124 [i_34] [i_34] = ((((/* implicit */_Bool) var_10)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) (!(((/* implicit */_Bool) arr_80 [i_34]))))))));
        arr_125 [i_34] = ((/* implicit */long long int) ((signed char) min((((/* implicit */long long int) var_1)), ((-(var_6))))));
        var_49 = ((/* implicit */int) max((var_49), ((~(((/* implicit */int) var_8))))));
    }
}
