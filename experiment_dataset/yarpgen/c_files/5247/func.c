/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5247
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5247 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5247
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
    for (int i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        var_11 -= ((/* implicit */int) (unsigned short)49087);
        var_12 = ((/* implicit */short) ((((/* implicit */int) (signed char)(-127 - 1))) != ((~(arr_2 [i_0])))));
        arr_3 [i_0] = ((/* implicit */unsigned char) (~(((/* implicit */int) (signed char)-1))));
    }
    /* vectorizable */
    for (long long int i_1 = 1; i_1 < 19; i_1 += 4) 
    {
        var_13 = ((/* implicit */short) -20449441);
        var_14 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_4 [i_1] [i_1]))));
    }
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_2 = 0; i_2 < 14; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (short i_4 = 2; i_4 < 11; i_4 += 1) 
            {
                {
                    var_15 += (~(((/* implicit */int) (short)-30262)));
                    var_16 += ((/* implicit */long long int) (-(((/* implicit */int) var_2))));
                }
            } 
        } 
        var_17 = (+(((int) var_5)));
        arr_13 [i_2] = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (short)-30262)))))));
        var_18 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-116))));
    }
    for (signed char i_5 = 4; i_5 < 18; i_5 += 3) 
    {
        arr_16 [i_5] = ((/* implicit */unsigned short) ((unsigned int) var_9));
        arr_17 [i_5 + 1] [i_5] = ((/* implicit */unsigned int) arr_15 [i_5 + 2]);
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 20; i_6 += 1) 
        {
            for (unsigned int i_7 = 2; i_7 < 19; i_7 += 3) 
            {
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    {
                        var_19 = ((897455548) % (((/* implicit */int) (signed char)-119)));
                        arr_25 [i_5] = ((/* implicit */signed char) ((((/* implicit */int) (signed char)127)) != ((+(((/* implicit */int) (signed char)-61))))));
                        arr_26 [i_5] [i_7] = (+((-(((/* implicit */int) (short)-25561)))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_9 = 0; i_9 < 20; i_9 += 4) 
        {
            arr_31 [i_5] [i_9] = ((/* implicit */int) ((((/* implicit */_Bool) (~(0)))) ? (((((/* implicit */_Bool) arr_27 [i_5 + 1])) ? (arr_27 [i_5 - 4]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_5 - 1] [i_5 + 2] [i_5] [i_5] [(short)13]))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))));
            var_20 = ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) (short)-25561)) ? (((/* implicit */int) (unsigned short)44278)) : (2071772956))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)89))))));
        }
    }
    for (int i_10 = 2; i_10 < 15; i_10 += 1) 
    {
        var_21 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (arr_28 [i_10] [4LL]) : (((/* implicit */long long int) 4279515092U))));
        var_22 += ((/* implicit */long long int) ((((/* implicit */int) (signed char)-105)) == (((/* implicit */int) (_Bool)1))));
        arr_34 [i_10] [i_10] &= ((/* implicit */short) min((max((((/* implicit */unsigned int) -1682196555)), (var_10))), (min((2147400977U), (max((((/* implicit */unsigned int) 638772361)), (var_1)))))));
        arr_35 [i_10] [i_10 + 2] = 3537310649U;
        var_23 = ((/* implicit */unsigned int) (~(((((/* implicit */int) (unsigned short)50188)) * ((-(((/* implicit */int) arr_22 [i_10] [i_10] [(signed char)6]))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 3) 
    {
        var_24 += ((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_27 [i_11]) : (arr_27 [i_11])));
        arr_39 [i_11] = ((/* implicit */unsigned short) var_10);
    }
    for (int i_12 = 1; i_12 < 19; i_12 += 1) 
    {
        /* LoopSeq 3 */
        for (unsigned short i_13 = 0; i_13 < 21; i_13 += 4) 
        {
            var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) arr_42 [i_12 - 1] [i_13] [i_13])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_5))));
            var_26 = ((/* implicit */unsigned int) (unsigned short)27005);
            /* LoopSeq 2 */
            for (unsigned long long int i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12 - 1]))) / (arr_43 [i_12] [i_12 + 2] [i_12 + 1])))) ? (arr_40 [i_14]) : (((((/* implicit */_Bool) 53669840U)) ? (4294967266U) : (((/* implicit */unsigned int) (+(((/* implicit */int) arr_4 [i_12 - 1] [i_12 - 1])))))))));
                var_28 += ((/* implicit */unsigned char) arr_45 [i_12 + 1]);
                /* LoopSeq 2 */
                for (long long int i_15 = 2; i_15 < 19; i_15 += 1) 
                {
                    arr_50 [i_12] [i_12] [i_12] [i_14] [i_15] = ((/* implicit */short) ((((/* implicit */_Bool) min((2870457964U), (((/* implicit */unsigned int) arr_47 [i_15 - 1] [i_15]))))) ? (var_0) : (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) arr_42 [i_12 - 1] [i_12] [i_12])) < (17061161)))) % (max((-1904287935), (-17061176))))))));
                    var_29 = ((((/* implicit */_Bool) (+(6610268602990579340LL)))) ? (((((/* implicit */_Bool) var_5)) ? (469762048U) : (arr_40 [i_12 + 1]))) : (((/* implicit */unsigned int) -802148033)));
                }
                for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    /* LoopSeq 2 */
                    for (int i_17 = 0; i_17 < 21; i_17 += 4) 
                    {
                        var_30 = ((/* implicit */unsigned long long int) (((~(arr_40 [i_12]))) + (((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) 260716789U)) ? (var_7) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_47 [i_12] [i_17]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [(signed char)17] [i_12 + 1])))))))));
                        var_31 = min((((((/* implicit */int) (unsigned short)27236)) << (((1106283165033026631LL) - (1106283165033026626LL))))), ((~(((/* implicit */int) arr_45 [i_12 - 1])))));
                        var_32 = ((/* implicit */long long int) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)712)) ? (((/* implicit */unsigned int) arr_49 [i_17] [i_16] [i_14] [i_13])) : (469762048U)))))) ? (-1416774859) : (((/* implicit */int) (signed char)42))));
                        var_33 += ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((/* implicit */int) arr_46 [i_12] [i_12 + 1] [i_12 + 1])) % (((/* implicit */int) arr_46 [i_12] [i_12 + 2] [i_12 + 2]))))), (((unsigned int) var_8))));
                    }
                    for (signed char i_18 = 2; i_18 < 17; i_18 += 1) 
                    {
                        arr_57 [i_12] [i_13] [i_14] [3] [i_18 - 2] = ((/* implicit */unsigned int) (+(((((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) 4241297456U)) : (849722267377438720ULL))) / (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_42 [i_13] [i_16] [i_18])))))))));
                        arr_58 [(unsigned short)14] [(unsigned short)14] [(unsigned short)14] [i_18 + 3] = ((/* implicit */int) ((unsigned int) (~(arr_54 [i_13] [i_13] [i_13] [i_13] [i_13] [i_13]))));
                    }
                    /* LoopSeq 2 */
                    for (long long int i_19 = 4; i_19 < 19; i_19 += 1) 
                    {
                        var_34 = ((/* implicit */long long int) ((signed char) arr_53 [i_14] [i_16] [i_14] [i_13] [i_12 + 2]));
                        arr_62 [i_13] [i_19] [i_14] [i_19] [i_14] [i_19] [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((4241297456U) + (((/* implicit */unsigned int) arr_49 [i_12] [i_16] [i_12 + 2] [i_16]))))))) ? (((((/* implicit */_Bool) max((arr_51 [i_12] [i_13] [i_13] [i_16] [i_13] [i_16]), (arr_42 [i_12 + 2] [i_14] [i_14])))) ? (16420884048055407036ULL) : (((/* implicit */unsigned long long int) ((var_8) >> (((((/* implicit */int) arr_51 [i_19] [i_16] [i_14] [i_13] [i_13] [i_12 + 1])) - (6675)))))))) : (((/* implicit */unsigned long long int) arr_49 [i_12] [i_12] [i_12] [i_12]))));
                    }
                    for (unsigned long long int i_20 = 1; i_20 < 17; i_20 += 4) 
                    {
                        var_35 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_46 [i_20] [i_20] [i_20])) ? (var_4) : (arr_53 [i_14] [i_13] [i_14] [i_16] [i_13])))) ? (-1129427592) : (arr_64 [i_20] [(unsigned short)16] [i_14] [i_16] [i_20 + 4])))) ? (max((1602700954U), (max((var_3), (arr_40 [i_12]))))) : (arr_61 [i_20])));
                        arr_66 [i_13] [i_20] = ((/* implicit */long long int) (~(max((((/* implicit */unsigned long long int) var_3)), (min((((/* implicit */unsigned long long int) arr_56 [i_12] [i_12 - 1] [i_12] [i_12] [i_12 + 1] [i_12])), (var_7)))))));
                        var_36 = ((/* implicit */long long int) ((((-1484584521) + (2147483647))) >> ((((-((+(((/* implicit */int) (unsigned short)8399)))))) + (8423)))));
                    }
                }
            }
            for (unsigned short i_21 = 0; i_21 < 21; i_21 += 4) 
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_22 = 0; i_22 < 21; i_22 += 1) 
                {
                    arr_71 [i_12] [i_12] [i_13] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_4 [i_12] [i_12 - 1])) && (((/* implicit */_Bool) var_7))));
                    var_37 = ((/* implicit */int) 17533073244026197552ULL);
                    arr_72 [i_21] [i_21] = ((/* implicit */signed char) arr_49 [i_12 + 2] [i_12 + 1] [i_12] [i_13]);
                    var_38 = ((/* implicit */signed char) max((var_38), (((/* implicit */signed char) ((unsigned short) arr_51 [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_12 - 1] [i_22] [i_22])))));
                }
                /* vectorizable */
                for (int i_23 = 2; i_23 < 20; i_23 += 1) 
                {
                    arr_76 [i_23 - 1] [i_23 - 2] [i_21] [i_13] [i_12] [i_12] = ((/* implicit */int) ((((/* implicit */int) arr_46 [i_12] [i_12 - 1] [i_12 + 1])) != (((/* implicit */int) arr_46 [i_12] [i_12] [i_12 + 1]))));
                    var_39 = ((/* implicit */unsigned int) arr_46 [i_12] [i_13] [i_23]);
                }
                /* vectorizable */
                for (unsigned int i_24 = 2; i_24 < 18; i_24 += 1) 
                {
                    var_40 += ((/* implicit */unsigned int) arr_51 [i_12] [i_12] [i_12] [i_12] [i_12] [i_12]);
                    var_41 = ((/* implicit */int) (((_Bool)1) ? (((/* implicit */unsigned int) -1590273045)) : (4234124912U)));
                    /* LoopSeq 2 */
                    for (signed char i_25 = 0; i_25 < 21; i_25 += 4) 
                    {
                        var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_44 [i_12] [18U] [i_24 + 1] [i_24 + 1])) ? (arr_44 [i_12] [i_25] [i_24 + 3] [i_12]) : (((/* implicit */unsigned int) -1590273045))));
                        var_43 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) 3825205247U)) + ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_7)));
                        var_44 = ((/* implicit */unsigned long long int) ((int) arr_47 [i_12 + 1] [i_21]));
                    }
                    for (signed char i_26 = 2; i_26 < 19; i_26 += 1) 
                    {
                        var_45 &= ((/* implicit */int) arr_53 [i_24] [i_24] [i_24 - 2] [i_24 + 3] [i_24 - 1]);
                        arr_84 [i_12] [i_24] [(unsigned short)13] [i_24 + 1] [i_26] = ((/* implicit */signed char) (~(((/* implicit */int) (short)9671))));
                    }
                }
                var_46 &= ((/* implicit */long long int) var_0);
            }
        }
        for (unsigned int i_27 = 0; i_27 < 21; i_27 += 3) 
        {
            var_47 = ((/* implicit */unsigned int) arr_60 [i_12] [i_12] [16ULL] [i_12] [i_12] [(signed char)4]);
            arr_87 [16] [i_27] = arr_41 [i_12 + 1];
            var_48 = ((/* implicit */unsigned short) arr_83 [i_12] [(signed char)4] [i_12 - 1] [i_12] [i_27] [i_27] [i_27]);
            var_49 = ((/* implicit */signed char) (unsigned char)8);
        }
        for (unsigned int i_28 = 0; i_28 < 21; i_28 += 3) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_29 = 0; i_29 < 21; i_29 += 1) 
            {
                var_50 = ((/* implicit */unsigned int) min((((/* implicit */unsigned short) (!(((((/* implicit */unsigned int) -1450980481)) < (var_4)))))), (((unsigned short) min((((/* implicit */unsigned int) -1675592461)), (53669866U))))));
                arr_94 [i_29] [i_28] [i_28] = ((/* implicit */unsigned short) -1969410852);
            }
            var_51 -= ((/* implicit */unsigned long long int) var_10);
            arr_95 [i_12 - 1] = ((((/* implicit */_Bool) 60842405U)) ? ((-(((((/* implicit */_Bool) (short)1057)) ? (-5964494621509783078LL) : (((/* implicit */long long int) -1590273045)))))) : (((/* implicit */long long int) ((/* implicit */int) arr_47 [i_12 + 1] [i_28]))));
            /* LoopSeq 2 */
            for (signed char i_30 = 0; i_30 < 21; i_30 += 4) 
            {
                arr_100 [i_30] = ((/* implicit */_Bool) ((long long int) 358660834));
                arr_101 [i_28] = ((/* implicit */int) arr_69 [i_28] [i_28]);
                var_52 = ((/* implicit */signed char) var_3);
                arr_102 [i_12 + 2] [i_12 + 2] [i_30] [i_12 + 2] = ((/* implicit */unsigned short) (!(min((((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_3)))), ((!(((/* implicit */_Bool) var_6))))))));
            }
            /* vectorizable */
            for (unsigned int i_31 = 1; i_31 < 17; i_31 += 4) 
            {
                var_53 = ((/* implicit */long long int) (-(((/* implicit */int) (short)-20664))));
                arr_106 [i_12] = ((/* implicit */long long int) ((var_9) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_12 - 1]))) : (var_0)));
            }
            var_54 = ((/* implicit */unsigned short) ((long long int) (+(-308751166))));
        }
        arr_107 [i_12 - 1] = ((/* implicit */unsigned short) arr_90 [i_12 + 2]);
        var_55 = ((/* implicit */unsigned long long int) ((max((((/* implicit */long long int) arr_98 [i_12 + 1])), (3793998710468982225LL))) >= (((/* implicit */long long int) ((((/* implicit */int) min(((signed char)-60), (arr_96 [i_12 - 1] [i_12] [i_12] [i_12])))) ^ (arr_89 [i_12 + 2]))))));
        var_56 = ((/* implicit */int) max((((unsigned char) var_6)), (((/* implicit */unsigned char) ((arr_70 [i_12 + 1] [(unsigned char)15] [(unsigned char)15] [i_12]) >= (((/* implicit */int) (unsigned short)14050)))))));
        var_57 = ((/* implicit */signed char) max((var_57), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_82 [i_12] [5LL] [i_12] [5LL] [i_12] [i_12])) ? (53669839U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_79 [i_12] [i_12] [i_12] [i_12] [i_12])))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_88 [i_12 + 2] [i_12] [i_12 + 2]))))) : (((/* implicit */int) arr_82 [i_12] [i_12 + 2] [i_12] [i_12 + 2] [i_12] [i_12]))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) max((var_2), ((signed char)86))))))))));
    }
}
