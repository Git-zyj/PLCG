/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223785
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
    var_15 = ((/* implicit */unsigned int) max((((/* implicit */int) var_10)), (((((/* implicit */int) var_4)) << (((((int) (short)20410)) - (20401)))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_2 [i_0 - 1]), (var_13)))) ? ((+(((/* implicit */int) (signed char)-12)))) : (((((/* implicit */int) ((unsigned short) 696169187))) / (((((/* implicit */_Bool) var_0)) ? (-696169210) : (((/* implicit */int) arr_2 [i_0]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            var_17 = ((/* implicit */int) ((unsigned long long int) arr_4 [i_0 - 1] [i_1] [i_0 - 1]));
            arr_7 [i_1] = ((/* implicit */unsigned long long int) -696169187);
        }
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) 
    {
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) (!((!((!(((/* implicit */_Bool) arr_8 [i_2] [i_2])))))))))));
        var_19 = ((((/* implicit */_Bool) ((unsigned char) arr_8 [i_2] [i_2]))) ? (((/* implicit */int) arr_9 [i_2])) : (((-696169187) / (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_10))) != (-6707004635055006209LL)))))));
    }
    for (unsigned long long int i_3 = 3; i_3 < 21; i_3 += 3) 
    {
        arr_12 [i_3] [i_3] = ((/* implicit */short) ((unsigned int) (~(-6707004635055006209LL))));
        /* LoopNest 2 */
        for (unsigned short i_4 = 0; i_4 < 22; i_4 += 3) 
        {
            for (unsigned int i_5 = 3; i_5 < 20; i_5 += 3) 
            {
                {
                    arr_20 [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(arr_16 [i_5 + 2] [i_5] [i_5 - 3])))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) min((0ULL), (((/* implicit */unsigned long long int) arr_15 [i_3] [i_3] [i_3]))))) ? (((unsigned int) var_8)) : (((/* implicit */unsigned int) ((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) (signed char)48))))))))) : (-6707004635055006216LL)));
                    arr_21 [i_3] = ((/* implicit */int) var_4);
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_25 [i_3] [i_5] [i_5 - 2] [i_6] [15LL] = ((/* implicit */int) (((~((+(arr_24 [i_3]))))) >> (((((((/* implicit */_Bool) -274535204)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_22 [i_5 - 3] [i_5 + 2] [i_5 - 3] [i_5 - 3] [i_5 - 2] [i_3 - 2]))) : (((((/* implicit */_Bool) -198888257)) ? (4294967295U) : (arr_16 [i_3] [i_4] [i_6]))))) - (11453U)))));
                        arr_26 [i_3] [i_5 + 2] [i_5 + 2] [i_5 - 3] = ((/* implicit */_Bool) max((((/* implicit */int) min((arr_17 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2]), (arr_17 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2])))), (max((((/* implicit */int) arr_17 [i_5 + 1] [i_5 - 2] [i_5] [i_5 - 2])), (var_1)))));
                        arr_27 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) 3876436546U)) ? (0U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)13))))), (((/* implicit */unsigned int) (unsigned short)30011))));
                    }
                    for (unsigned int i_7 = 0; i_7 < 22; i_7 += 3) 
                    {
                        arr_30 [(short)2] [(short)2] [(signed char)11] [i_3] = ((/* implicit */unsigned int) arr_22 [i_3] [12] [i_5] [i_5 + 2] [i_7] [i_7]);
                        /* LoopSeq 2 */
                        for (long long int i_8 = 1; i_8 < 20; i_8 += 4) 
                        {
                            arr_34 [i_3] [i_3] [i_3] [i_3] [i_7] [i_8 + 2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) (_Bool)1)), (((((/* implicit */_Bool) arr_24 [i_3])) ? (((/* implicit */unsigned int) ((int) arr_24 [i_3]))) : (min((((/* implicit */unsigned int) var_8)), (arr_16 [i_3 - 1] [i_3 - 1] [i_3 - 1])))))));
                            var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((var_0) / (((/* implicit */int) var_3))))) ? (((/* implicit */int) max((arr_17 [i_3 - 2] [i_5 - 3] [i_5 - 3] [i_8 + 1]), (((/* implicit */unsigned char) (signed char)64))))) : (((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) arr_29 [i_3] [i_3] [i_5 - 3] [i_3] [i_8])), ((short)-4)))))))));
                            arr_35 [i_3] [i_4] [i_5 + 1] [i_7] [i_3] [(unsigned short)12] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned long long int) arr_31 [i_5 + 2] [i_5]))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_10 [i_3] [i_3]))) && (((((/* implicit */_Bool) -1)) && (((/* implicit */_Bool) var_9)))))))) : (min((((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_3))))), (arr_32 [i_3 - 1] [i_3 - 1] [i_3 - 1] [(_Bool)1] [i_3])))));
                            var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) (!((!(((/* implicit */_Bool) var_12)))))))));
                        }
                        /* vectorizable */
                        for (short i_9 = 0; i_9 < 22; i_9 += 4) 
                        {
                            var_22 = ((/* implicit */unsigned int) ((signed char) var_5));
                            var_23 = ((/* implicit */short) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) arr_18 [i_3 - 1]))));
                            arr_38 [i_3] [i_3] [i_5 - 3] [i_9] = ((((((/* implicit */_Bool) 696169187)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-7677))) : (arr_28 [(unsigned short)7] [(unsigned short)7] [(unsigned short)7] [i_7] [i_9] [(unsigned short)7]))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)-27796))))));
                            var_24 = ((/* implicit */unsigned int) -1301349071);
                        }
                    }
                    arr_39 [i_3] = ((/* implicit */unsigned char) max((((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_3] [i_3] [i_3] [i_3])) / (-9344065)))), (((long long int) arr_22 [i_3] [i_4] [i_5] [i_5 - 1] [i_3] [i_3 - 2]))));
                }
            } 
        } 
        arr_40 [i_3] = ((/* implicit */signed char) (+(((/* implicit */int) (signed char)-37))));
        arr_41 [(short)0] [i_3] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) 0U)) ? (min((9007198986305536LL), (-3835364039047189719LL))) : (((((/* implicit */_Bool) 779116707)) ? (arr_28 [i_3 - 2] [i_3 - 2] [i_3] [i_3 - 1] [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)173))))))), (((/* implicit */long long int) ((((/* implicit */_Bool) 7203224231643212550ULL)) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_15 [i_3] [i_3 - 1] [i_3])))))))));
        /* LoopNest 2 */
        for (signed char i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_12 = 3; i_12 < 19; i_12 += 2) 
                    {
                        /* LoopSeq 2 */
                        for (int i_13 = 2; i_13 < 21; i_13 += 2) /* same iter space */
                        {
                            var_25 = ((/* implicit */short) arr_51 [i_3] [i_3] [i_3] [i_3] [i_13 - 2]);
                            var_26 &= ((/* implicit */unsigned char) (~(((arr_36 [i_12 - 1] [i_13] [i_13] [i_13 - 2] [i_13]) ? (((/* implicit */int) ((unsigned short) (unsigned short)65349))) : (((/* implicit */int) var_4))))));
                            arr_53 [i_13] [i_3] [i_3] [i_3] [i_3] = (i_3 % 2 == 0) ? (((11706758577926012717ULL) << (((max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_10])), (arr_43 [i_3] [i_13 + 1] [i_13 + 1]))) - (18446744073709551479ULL))))) : (((11706758577926012717ULL) << (((((max((((/* implicit */unsigned long long int) arr_10 [i_3] [i_10])), (arr_43 [i_3] [i_13 + 1] [i_13 + 1]))) - (18446744073709551479ULL))) - (9019541897387522605ULL)))));
                        }
                        for (int i_14 = 2; i_14 < 21; i_14 += 2) /* same iter space */
                        {
                            var_27 ^= ((/* implicit */unsigned long long int) (~(((long long int) (_Bool)1))));
                            arr_56 [i_3] [i_10] [i_11] [i_12 + 2] [i_14 + 1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_49 [i_14 + 1] [i_11] [i_11] [i_11] [i_10] [i_3])) ? (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) : (arr_16 [i_10] [i_11] [i_11])));
                            var_28 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_23 [i_12 - 3] [i_12 - 2] [i_12 - 1] [i_12 + 2])) ? (((/* implicit */int) arr_23 [i_12 - 3] [i_12 - 2] [i_12 - 1] [i_12 + 2])) : (((/* implicit */int) arr_23 [i_12 - 3] [i_12 - 2] [i_12 - 1] [i_12 + 2])))), (((((/* implicit */int) arr_23 [i_12 - 3] [i_12 - 2] [i_12 - 1] [i_12 + 2])) << (((var_1) - (1354748394)))))));
                        }
                        arr_57 [(short)15] [(short)15] [(short)15] [i_3] = ((/* implicit */unsigned char) max((6553883107664202952ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_11 [i_3])), (arr_46 [i_3] [i_3] [i_3] [i_3] [i_3])))) ? (((/* implicit */int) arr_13 [i_3] [i_12 - 3] [i_11])) : (var_8))))));
                        /* LoopSeq 2 */
                        for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                        {
                            arr_61 [i_3] = ((/* implicit */short) (-(((unsigned long long int) arr_16 [i_12 + 1] [i_3 - 2] [i_3]))));
                            var_29 = ((/* implicit */long long int) arr_51 [20] [i_10] [i_11] [10ULL] [i_12]);
                            var_30 ^= ((unsigned short) ((((/* implicit */long long int) (-(-1)))) == ((~(3934959920080235164LL)))));
                        }
                        for (unsigned long long int i_16 = 0; i_16 < 22; i_16 += 1) 
                        {
                            arr_64 [i_10] [i_12] [i_3] = ((/* implicit */unsigned int) (unsigned char)221);
                            arr_65 [9ULL] [i_10] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) var_4)), (4098117830U)))) ? (((/* implicit */int) arr_33 [i_3 + 1] [(signed char)1] [i_12 + 1])) : (min((var_1), (1)))));
                            arr_66 [i_3] = ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) arr_36 [i_3 - 3] [i_12 - 3] [i_3] [i_12 - 1] [i_3 + 1])) != (((/* implicit */int) arr_36 [i_3] [i_12 - 3] [i_3] [i_3] [i_3 + 1]))))) & (((/* implicit */int) arr_58 [i_3 - 3] [i_3] [4U] [i_3 - 1] [13ULL] [i_3 - 1] [17U]))));
                            arr_67 [(unsigned short)17] [i_3] [i_3] [i_3] = ((var_9) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 1950431459U)))))));
                            arr_68 [i_3] [i_12] [i_3] [17U] [i_3] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_42 [i_3])) >> (((3381289409990097331ULL) - (3381289409990097331ULL))))) % (((/* implicit */int) (short)30139))));
                        }
                    }
                    arr_69 [i_3] [i_3 + 1] [i_3] [i_11] = ((/* implicit */short) ((int) var_14));
                    arr_70 [i_3] [i_3] = ((/* implicit */short) (~(6866147097546910796LL)));
                    arr_71 [i_3] [i_3] = ((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) var_6)), (arr_43 [i_3] [i_3] [i_11]))));
                }
            } 
        } 
    }
}
