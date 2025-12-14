/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40538
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
    var_13 = min((var_0), (((/* implicit */unsigned int) var_9)));
    var_14 = ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) (-(((/* implicit */int) var_1))))) : (((var_10) << (((/* implicit */int) var_12)))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 4; i_0 < 13; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = min((arr_0 [i_0]), (((/* implicit */long long int) var_3)));
        arr_3 [i_0] = (~(((max((((/* implicit */unsigned int) var_1)), (var_2))) | (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_7)))))))));
        var_15 = var_5;
        /* LoopNest 3 */
        for (short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            for (unsigned int i_2 = 3; i_2 < 13; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_16 &= ((/* implicit */short) (!(((var_2) > (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [12U] [i_2 - 2])))))));
                        arr_14 [i_0] [i_0] [i_0] = (i_0 % 2 == 0) ? (((/* implicit */unsigned long long int) (+(max((arr_13 [i_2]), (((var_8) << (((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3])) - (96)))))))))) : (((/* implicit */unsigned long long int) (+(max((arr_13 [i_2]), (((var_8) << (((((((/* implicit */int) arr_9 [i_0] [i_0] [i_2] [i_3])) - (96))) + (117))))))))));
                    }
                } 
            } 
        } 
    }
    for (unsigned int i_4 = 1; i_4 < 11; i_4 += 1) 
    {
        arr_18 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_10 [i_4 - 1])) || (((/* implicit */_Bool) 3U)))))) : ((+(((unsigned int) var_9))))));
        arr_19 [i_4 + 1] [i_4] = ((/* implicit */unsigned int) (~(5883091109007668078ULL)));
        var_17 = ((/* implicit */signed char) min((arr_17 [i_4 + 1]), (((1939069374U) ^ (495473446U)))));
        arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) arr_15 [i_4]);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [3U])) ? (((/* implicit */long long int) var_2)) : (3064743303026777859LL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_2) != (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))) : (12563652964701883540ULL))))))));
    }
    for (unsigned char i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        /* LoopSeq 4 */
        for (long long int i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_19 *= ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) >> (((((/* implicit */int) var_3)) + (32069)))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 22; i_7 += 3) 
            {
                for (unsigned int i_8 = 0; i_8 < 23; i_8 += 3) 
                {
                    {
                        var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_25 [i_5] [i_5 - 2] [i_5] [i_5]) : (arr_25 [i_5] [i_5 - 2] [5U] [i_5])))) ? (min((((/* implicit */long long int) 2355897906U)), (-274877906944LL))) : (((/* implicit */long long int) ((/* implicit */int) min((arr_21 [i_5] [i_5 - 2]), (((/* implicit */unsigned char) var_12))))))));
                        arr_30 [i_5] [i_5] [i_7 + 1] [i_8] = ((/* implicit */long long int) 2355897922U);
                        var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) ((unsigned int) 2355897931U))) ? (((/* implicit */unsigned long long int) arr_29 [i_6] [2U] [i_8])) : (((var_11) % (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))))))));
                        arr_31 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((unsigned long long int) (!(((/* implicit */_Bool) (~(1546703399U)))))));
                    }
                } 
            } 
        }
        /* vectorizable */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_22 |= ((/* implicit */_Bool) ((unsigned char) var_6));
            arr_35 [i_5] [i_9] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) 312795329U)) ? (((/* implicit */long long int) var_10)) : (var_5)))));
        }
        for (unsigned char i_10 = 0; i_10 < 23; i_10 += 1) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_11 = 2; i_11 < 20; i_11 += 2) 
            {
                var_23 = ((((/* implicit */_Bool) arr_22 [i_5])) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_1)), (var_9))))) : (((((/* implicit */_Bool) -2868487515343656391LL)) ? (((/* implicit */long long int) arr_26 [i_5 + 1] [i_5 - 2] [i_11 + 2] [i_11])) : (arr_27 [i_5] [i_10] [i_5 - 1] [i_11 + 3] [(short)19]))));
                /* LoopSeq 3 */
                for (signed char i_12 = 1; i_12 < 21; i_12 += 2) 
                {
                    var_24 = ((/* implicit */long long int) 5883091109007668078ULL);
                    var_25 += ((/* implicit */unsigned int) max(((~(min((((/* implicit */long long int) arr_25 [i_5] [16ULL] [i_11] [i_11])), (-7888885844864827282LL))))), (((/* implicit */long long int) ((3431330647U) ^ (3431330673U))))));
                    arr_43 [i_5] [i_5] [17U] [i_12] = ((/* implicit */long long int) min(((signed char)0), (((/* implicit */signed char) (!((!(((/* implicit */_Bool) arr_37 [i_11] [4U] [i_5])))))))));
                }
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    arr_47 [i_5] [i_5] [i_5] [i_10] [i_11] [i_13] = ((/* implicit */unsigned int) var_7);
                    arr_48 [i_5] = 2217662887U;
                    var_26 &= min((min((((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)123)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (arr_25 [i_11] [i_11] [i_10] [i_11])))), (arr_46 [i_5 + 2] [i_11] [i_5 + 2] [i_11]))), (((/* implicit */long long int) arr_29 [i_5] [i_11] [i_13])));
                    arr_49 [i_5] [i_10] = ((/* implicit */long long int) ((unsigned char) ((unsigned char) (-(3948128984U)))));
                }
                /* vectorizable */
                for (long long int i_14 = 1; i_14 < 22; i_14 += 1) 
                {
                    var_27 = -8190791348907020727LL;
                    arr_53 [i_5] [(unsigned char)3] [i_5] [(short)22] = ((/* implicit */unsigned char) (!(var_12)));
                }
                var_28 &= ((/* implicit */long long int) arr_22 [i_11]);
                var_29 += ((/* implicit */signed char) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_12))) - (var_2)))));
            }
            for (unsigned int i_15 = 0; i_15 < 23; i_15 += 1) 
            {
                arr_57 [i_15] [i_5] [i_15] [i_15] = ((/* implicit */short) var_4);
                var_30 = ((/* implicit */long long int) ((((((/* implicit */unsigned int) ((/* implicit */int) var_12))) / (325677958U))) >> (((((((/* implicit */unsigned int) ((/* implicit */int) var_4))) | (3969289341U))) - (3969289451U)))));
                var_31 = ((/* implicit */unsigned int) (((-(((/* implicit */int) var_6)))) < (((/* implicit */int) var_1))));
                var_32 = ((/* implicit */unsigned int) arr_24 [i_5]);
                arr_58 [i_5] [i_10] [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((arr_25 [i_15] [i_5 - 2] [(short)10] [i_5]) | (arr_55 [i_5] [i_5 - 2] [i_15])))) | (max(((-(var_5))), (((/* implicit */long long int) var_1))))));
            }
            for (unsigned char i_16 = 2; i_16 < 21; i_16 += 1) 
            {
                var_33 &= ((/* implicit */unsigned long long int) var_7);
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_17 = 3; i_17 < 22; i_17 += 3) 
                {
                    arr_65 [(unsigned char)21] [i_5] [(unsigned char)18] [(unsigned char)18] [6ULL] = ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) arr_46 [i_5] [i_5] [i_5 + 2] [3U])))) : (((arr_55 [i_5] [i_17] [i_17]) * (var_10))));
                    var_34 = ((/* implicit */unsigned int) ((arr_46 [15U] [i_5] [15U] [i_17]) > (((/* implicit */long long int) var_10))));
                }
                for (unsigned char i_18 = 4; i_18 < 22; i_18 += 3) 
                {
                    var_35 = ((((/* implicit */long long int) (+(((/* implicit */int) var_1))))) == (var_5));
                    var_36 = ((/* implicit */unsigned char) ((unsigned int) (-(((-7888885844864827291LL) / (((/* implicit */long long int) var_2)))))));
                }
                for (unsigned int i_19 = 1; i_19 < 20; i_19 += 1) 
                {
                    arr_71 [i_19 + 1] [i_5] = ((/* implicit */signed char) -4474251105830046317LL);
                    arr_72 [i_16 + 1] [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) ((((((long long int) var_8)) << (((((long long int) var_4)) - (177LL))))) >> (((((/* implicit */int) var_9)) + (14976)))));
                }
            }
            for (signed char i_20 = 0; i_20 < 23; i_20 += 3) 
            {
                /* LoopSeq 2 */
                for (signed char i_21 = 0; i_21 < 23; i_21 += 1) 
                {
                    arr_79 [i_5] [8U] [i_20] [i_5] [i_5] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_74 [i_5] [i_5] [i_5 - 1] [10U]))));
                    var_37 = ((/* implicit */unsigned char) min((var_37), (((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_21] [20LL] [10U] [10U]))) - (346838312U))))) << (((((long long int) arr_37 [i_5 + 1] [i_5 - 2] [i_5 - 2])) + (25618LL))))))));
                }
                for (long long int i_22 = 0; i_22 < 23; i_22 += 2) 
                {
                    arr_82 [i_5] [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_41 [i_5] [12U] [i_20] [i_5]))) <= (2722381684U)))), (2355897934U)));
                    arr_83 [i_5] [i_10] [2U] [i_10] [i_20] [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_5]))) : (((((/* implicit */_Bool) 7888885844864827308LL)) ? (325677936U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))))) ? (((/* implicit */long long int) (~(((unsigned int) var_11))))) : ((~(((((/* implicit */_Bool) var_9)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)185))) : (var_5)))))));
                    arr_84 [i_22] [i_5] [i_20] [i_20] [i_5] [i_5] = ((((/* implicit */_Bool) min((arr_37 [i_5 - 2] [i_5 - 1] [i_5 + 2]), (arr_37 [i_5] [i_5 - 1] [i_5 + 2])))) ? (((unsigned int) arr_51 [i_5 + 1] [i_5 - 1] [i_5] [i_5 - 1])) : (var_8));
                    var_38 = ((/* implicit */short) ((max(((!(var_12))), ((!(var_1))))) ? (((((/* implicit */_Bool) arr_80 [i_5 + 2] [i_5] [i_5] [9LL])) ? (arr_55 [i_5] [i_10] [i_20]) : (1939069365U))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_75 [1LL] [3LL] [i_22])))));
                    arr_85 [i_10] [i_5] = ((/* implicit */unsigned int) (+(min((arr_46 [i_5] [i_5] [i_20] [i_22]), (((/* implicit */long long int) var_6))))));
                }
                arr_86 [i_5] [i_10] [2LL] [i_5] = ((/* implicit */long long int) ((var_12) ? ((+(var_11))) : (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_8)))) ? (((var_8) + (((/* implicit */unsigned int) ((/* implicit */int) var_7))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
                /* LoopSeq 3 */
                for (short i_23 = 2; i_23 < 22; i_23 += 2) 
                {
                    arr_90 [i_23] [i_20] [i_23] [i_23] [i_5] [i_20] = ((/* implicit */unsigned int) ((long long int) ((long long int) ((long long int) (unsigned char)233))));
                    var_39 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) ((_Bool) var_3))), (arr_59 [i_5] [i_10] [i_20] [i_5])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((3969289343U) == (2355897926U))))) : ((~(var_2))))))));
                }
                for (unsigned int i_24 = 4; i_24 < 21; i_24 += 2) 
                {
                    arr_94 [i_5] [i_5] [6U] [i_20] [i_20] = ((/* implicit */long long int) min((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 316642977U)))))) : (var_11))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((unsigned int) var_3)) : (max((3948128979U), (1939069362U))))))));
                    arr_95 [i_24] [i_24] [i_20] [i_24] [i_5] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) || (((min((arr_78 [i_5] [i_10] [i_20] [i_24]), (((/* implicit */unsigned long long int) var_3)))) > (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-80)))))))));
                    arr_96 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((var_10), (((/* implicit */unsigned int) var_4)))) >> (((((((/* implicit */_Bool) 3759351771U)) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_45 [i_5] [i_10] [i_20] [i_24])))) + (23)))))) ? (max((((((/* implicit */_Bool) arr_88 [i_5] [i_5] [i_20] [i_24] [i_24])) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (-20LL))), (((/* implicit */long long int) ((var_10) * (arr_42 [i_5] [i_10] [(unsigned char)2] [i_24])))))) : (((/* implicit */long long int) ((/* implicit */int) (short)-25576)))));
                }
                for (unsigned char i_25 = 2; i_25 < 21; i_25 += 1) 
                {
                    arr_99 [i_5] [i_10] [19LL] [i_10] [i_20] [i_25] = ((/* implicit */unsigned char) var_10);
                    arr_100 [(_Bool)1] [i_10] [(_Bool)1] &= ((/* implicit */long long int) (-((((~(((/* implicit */int) var_6)))) | (((/* implicit */int) arr_61 [i_5 + 2] [i_5 - 2]))))));
                    arr_101 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */long long int) (((-(arr_81 [i_5] [i_10] [i_20] [i_25]))) * (((/* implicit */unsigned int) (+(((((/* implicit */int) var_4)) - (((/* implicit */int) var_9)))))))));
                }
                arr_102 [i_5] = ((/* implicit */short) ((-4185338989187673942LL) == (((/* implicit */long long int) ((max((var_2), (((/* implicit */unsigned int) (short)63)))) + (((3948128960U) >> (((((/* implicit */int) var_4)) - (182))))))))));
            }
            arr_103 [i_5] = ((/* implicit */unsigned int) max((((/* implicit */short) (signed char)69)), (((short) ((_Bool) 1379460074122441974ULL)))));
        }
        for (unsigned int i_26 = 3; i_26 < 21; i_26 += 1) 
        {
            var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((((/* implicit */int) ((signed char) (unsigned char)254))) + (((((/* implicit */int) var_7)) + (((/* implicit */int) arr_52 [22U] [i_26 - 1] [14LL] [22U])))))))));
            arr_106 [i_5] [i_5] [i_5] = ((/* implicit */unsigned int) min((-5952460999900570967LL), (((/* implicit */long long int) (signed char)-80))));
            arr_107 [i_5] [i_5] = ((/* implicit */unsigned char) ((long long int) var_7));
        }
        arr_108 [i_5] = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_51 [i_5 + 2] [i_5 - 1] [4ULL] [i_5 + 2])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) ((unsigned char) 3948128996U))))) - (((/* implicit */int) ((_Bool) var_8)))));
        arr_109 [i_5] [i_5] = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) 346838294U)) ? (4194302U) : (3948129006U))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_7))))))) << (((max((((/* implicit */unsigned int) var_9)), (((var_0) | (1939069363U))))) - (4294952305U)))));
    }
    var_41 = ((/* implicit */short) (-((-(((/* implicit */int) max(((signed char)123), (((/* implicit */signed char) var_12)))))))));
}
