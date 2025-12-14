/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20079
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20079 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20079
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
    var_18 = ((/* implicit */unsigned short) var_12);
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_19 -= ((/* implicit */int) -2259987172036036456LL);
        arr_2 [i_0] = ((/* implicit */unsigned int) var_4);
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 2) 
                {
                    {
                        var_20 = ((/* implicit */int) ((6ULL) & (15707273009768811801ULL)));
                        arr_11 [i_0] [i_1] [i_2] = ((/* implicit */unsigned char) (+(arr_3 [i_0] [i_0] [i_0 - 1])));
                        var_21 = ((/* implicit */short) ((((/* implicit */int) (short)10640)) < ((~(((/* implicit */int) (signed char)105))))));
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */int) max((var_22), (((/* implicit */int) ((((/* implicit */_Bool) 17179869183ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 17179869183ULL)))))) : (6402626162202583864ULL))))));
    }
    for (int i_4 = 1; i_4 < 18; i_4 += 2) 
    {
        var_23 &= ((/* implicit */signed char) min((min((min((18446744056529682422ULL), (((/* implicit */unsigned long long int) 725256348)))), (((/* implicit */unsigned long long int) (short)-20132)))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-20131))) : (arr_4 [i_4] [i_4 + 1])))));
        var_24 = ((/* implicit */signed char) max((var_24), (((/* implicit */signed char) (!(((/* implicit */_Bool) (-((((_Bool)1) ? (((/* implicit */int) (short)20155)) : (((/* implicit */int) (_Bool)1))))))))))));
        var_25 += ((/* implicit */long long int) min(((((-(3519619806U))) + (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_4] [i_4] [i_4 + 2] [i_4 + 2]))))), (((8191U) >> (((min((arr_15 [7U]), (((/* implicit */int) (unsigned short)21486)))) - (21466)))))));
    }
    for (long long int i_5 = 1; i_5 < 18; i_5 += 4) 
    {
        arr_20 [i_5] [i_5 + 1] = ((17179869202ULL) % (((/* implicit */unsigned long long int) 7667711026276884295LL)));
        /* LoopSeq 3 */
        for (short i_6 = 2; i_6 < 15; i_6 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */signed char) arr_23 [i_5] [i_6]);
            var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_23 [i_5 - 1] [i_6 + 2])) / (((/* implicit */int) arr_23 [i_5 + 1] [i_6 + 3]))))) ? (((/* implicit */int) ((signed char) min((((/* implicit */unsigned long long int) (_Bool)1)), (18446744056529682419ULL))))) : (((/* implicit */int) (signed char)24))));
            arr_24 [i_5] [i_6] [i_5 - 1] = ((/* implicit */int) ((((/* implicit */_Bool) arr_21 [i_6] [18ULL])) ? (((/* implicit */long long int) (((+(((/* implicit */int) arr_12 [i_5])))) % ((-(((/* implicit */int) (signed char)-32))))))) : (-708284335906790093LL)));
        }
        for (short i_7 = 2; i_7 < 15; i_7 += 1) /* same iter space */
        {
            /* LoopSeq 4 */
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                var_28 = ((/* implicit */short) min((var_28), (((/* implicit */short) (!(((/* implicit */_Bool) min(((short)-16052), ((short)20132)))))))));
                var_29 += ((/* implicit */long long int) ((short) 22U));
                arr_30 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */signed char) var_1);
                var_30 *= ((/* implicit */unsigned long long int) ((short) min((3984431738575561493ULL), (((/* implicit */unsigned long long int) arr_14 [i_5 - 1] [i_7 + 1])))));
                /* LoopSeq 2 */
                for (unsigned int i_9 = 0; i_9 < 19; i_9 += 3) 
                {
                    var_31 *= ((/* implicit */_Bool) ((signed char) 664883473U));
                    var_32 = ((/* implicit */unsigned long long int) var_12);
                }
                for (unsigned long long int i_10 = 2; i_10 < 17; i_10 += 2) 
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((arr_0 [i_10 + 2]) >= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_7] [i_7 + 4] [i_8] [i_10 + 2] [15U]))))) ? ((+(((var_14) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_6))))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_3))))))))));
                    var_34 = ((/* implicit */unsigned int) max((var_34), (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 14462312335133990122ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)16635))) : (3984431738575561493ULL))), (((((((/* implicit */_Bool) 18446744073709551590ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_5 - 1] [i_10 + 1]))) : (arr_0 [i_10]))) | (arr_17 [i_10]))))))));
                    arr_35 [i_5] [i_7] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) ((long long int) (~(((((/* implicit */_Bool) arr_4 [i_7] [i_10])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_9 [i_10] [i_8] [i_7] [i_5 - 1])))))));
                    var_35 = ((/* implicit */long long int) max((var_35), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_8)))))));
                }
            }
            for (long long int i_11 = 0; i_11 < 19; i_11 += 3) 
            {
                arr_38 [i_5] [i_5] [i_5] [i_5 - 1] = (((~(((((/* implicit */int) var_3)) & (((/* implicit */int) (_Bool)1)))))) - (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119))) >= ((~(3984431738575561493ULL)))))));
                arr_39 [i_5] [i_7] [i_11] [i_5] = ((/* implicit */unsigned int) ((((unsigned long long int) arr_15 [i_5])) / (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_15 [i_5 + 1]))))));
            }
            for (int i_12 = 1; i_12 < 17; i_12 += 4) /* same iter space */
            {
                arr_44 [i_5] [i_12] = ((/* implicit */int) ((((((/* implicit */int) (signed char)24)) << (((((((/* implicit */int) (short)-4253)) + (4281))) - (22))))) >= (((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_28 [i_5 - 1] [i_5])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_26 [i_5])))))))));
                arr_45 [i_5] [i_5] [i_7 - 2] [i_12] = ((/* implicit */unsigned int) ((((15511472694558721715ULL) | (((/* implicit */unsigned long long int) var_5)))) / (min((var_8), (((/* implicit */unsigned long long int) (signed char)24))))));
                var_36 -= ((/* implicit */long long int) (!(((((/* implicit */_Bool) arr_19 [8ULL])) && ((_Bool)1)))));
            }
            /* vectorizable */
            for (int i_13 = 1; i_13 < 17; i_13 += 4) /* same iter space */
            {
                var_37 = ((/* implicit */unsigned long long int) (short)-30818);
                arr_48 [i_5] [i_7] [i_5] = ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)24))));
                arr_49 [i_5] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((/* implicit */int) arr_8 [i_13 + 1] [i_13 + 1] [i_13 - 1] [i_7])) : (arr_3 [i_5] [i_5] [i_13])));
                /* LoopSeq 4 */
                for (long long int i_14 = 3; i_14 < 18; i_14 += 3) 
                {
                    var_38 = ((/* implicit */_Bool) min((var_38), (((/* implicit */_Bool) ((unsigned long long int) arr_14 [i_5] [i_7])))));
                    arr_53 [i_5] [i_7] [i_13] [i_14] = ((/* implicit */short) ((int) arr_14 [i_7 - 1] [i_7 + 4]));
                    var_39 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((unsigned char) (_Bool)1)))));
                    arr_54 [i_5] = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) arr_12 [i_7 + 2])) : ((~(((/* implicit */int) arr_46 [i_5] [i_13]))))));
                }
                for (unsigned long long int i_15 = 4; i_15 < 18; i_15 += 2) /* same iter space */
                {
                    var_40 = ((/* implicit */short) min((var_40), (((/* implicit */short) (+(((/* implicit */int) var_9)))))));
                    arr_57 [i_5] [i_7] [i_7] [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (var_8) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 33285996544LL)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))));
                }
                for (unsigned long long int i_16 = 4; i_16 < 18; i_16 += 2) /* same iter space */
                {
                    var_41 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (short)2912)) & (((/* implicit */int) var_0))))) ? (((/* implicit */int) arr_7 [i_7 + 3] [i_13])) : (((/* implicit */int) arr_9 [i_13 - 1] [i_13] [i_13 + 2] [i_13]))));
                    var_42 = ((/* implicit */short) max((var_42), ((short)30818)));
                }
                for (unsigned long long int i_17 = 4; i_17 < 18; i_17 += 2) /* same iter space */
                {
                    var_43 += ((/* implicit */unsigned int) arr_36 [i_17] [i_17] [i_17 - 3] [i_13 - 1]);
                    arr_63 [i_5] [i_5] = ((/* implicit */unsigned int) ((_Bool) arr_37 [i_5 - 1] [i_7 + 3]));
                    /* LoopSeq 3 */
                    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                    {
                        var_44 = ((/* implicit */short) (signed char)-4);
                        var_45 = ((/* implicit */short) var_3);
                        var_46 = ((/* implicit */unsigned char) ((arr_27 [i_5 + 1] [i_17 + 1] [i_13 + 1]) >= (((/* implicit */int) arr_36 [i_7 - 2] [i_7] [i_7 + 1] [i_7 + 3]))));
                    }
                    for (short i_19 = 0; i_19 < 19; i_19 += 4) 
                    {
                        var_47 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) 1938551434731590298LL))));
                        var_48 = ((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 122043115U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (7711401164806581497ULL))));
                        var_49 += ((/* implicit */short) ((signed char) arr_47 [i_19] [i_7] [i_13 - 1] [i_5 - 1]));
                        arr_68 [i_5] [i_17] [i_13 + 1] [i_7 + 1] [i_5] = ((/* implicit */unsigned int) arr_56 [i_5] [12U] [i_13] [i_7 - 2] [i_5]);
                    }
                    for (signed char i_20 = 1; i_20 < 17; i_20 += 3) 
                    {
                        arr_72 [i_5] [i_17 + 1] [i_13] [i_7 - 2] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 122043120U)) && ((_Bool)1)));
                        var_50 -= ((/* implicit */_Bool) (short)-14582);
                        var_51 *= ((/* implicit */short) (!((_Bool)1)));
                    }
                }
            }
            var_52 -= ((/* implicit */signed char) var_15);
        }
        for (short i_21 = 0; i_21 < 19; i_21 += 2) 
        {
            arr_75 [i_5] = (~(((arr_28 [i_5 + 1] [i_5]) * (((((/* implicit */_Bool) 18446744056529682422ULL)) ? (2047ULL) : (arr_17 [i_5]))))));
            arr_76 [i_5] = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((unsigned long long int) 4294967295U))))) != (var_6)));
        }
        arr_77 [i_5] [i_5] = ((/* implicit */unsigned long long int) (short)4095);
    }
    var_53 = ((/* implicit */unsigned short) var_10);
}
