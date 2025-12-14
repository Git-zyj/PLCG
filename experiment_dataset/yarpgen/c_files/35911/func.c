/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35911
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
    for (unsigned long long int i_0 = 0; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max((((unsigned int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_6))))), (((/* implicit */unsigned int) ((_Bool) var_0)))));
        arr_3 [i_0] [i_0] = ((/* implicit */short) min((var_4), (min((((var_10) - (var_3))), (((/* implicit */unsigned long long int) ((unsigned int) var_4)))))));
        var_12 = ((/* implicit */int) min((((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) <= (var_2))), (((var_3) < (var_4)))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned short) ((((_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) min((((/* implicit */int) var_6)), (arr_0 [i_0] [i_0])))), (arr_1 [i_0] [i_0])))) : (((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_11))) + (arr_1 [i_0] [i_0])))) ? (((/* implicit */unsigned long long int) arr_1 [i_0] [i_0])) : (((18446744073709551615ULL) + (1476866154895812138ULL)))))));
    }
    for (short i_1 = 0; i_1 < 18; i_1 += 3) 
    {
        var_13 ^= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((long long int) var_9))) && (((/* implicit */_Bool) var_2)))) ? (((((/* implicit */_Bool) ((unsigned int) arr_7 [i_1] [i_1]))) ? (var_10) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_1] [i_1])))));
        var_14 = ((/* implicit */short) ((((/* implicit */_Bool) min((var_10), (var_7)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((max((var_2), (var_1))) >= (((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_7))))))) : (min(((+(var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) < (var_10))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
            {
                {
                    arr_16 [i_3] [i_3] [i_4] [i_4] = ((/* implicit */long long int) max((18446744073709551614ULL), (((/* implicit */unsigned long long int) (short)-28763))));
                    var_15 = ((/* implicit */_Bool) max((var_15), (((/* implicit */_Bool) ((unsigned long long int) ((unsigned short) 3603554043U))))));
                    var_16 = ((/* implicit */unsigned int) ((unsigned long long int) ((min((arr_5 [i_2] [i_3]), (var_7))) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))))));
                }
            } 
        } 
        arr_17 [i_2] = ((/* implicit */int) ((unsigned short) var_10));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_2)) || (((/* implicit */_Bool) var_1))))), (var_8)))) && (((/* implicit */_Bool) var_1))));
    /* LoopSeq 2 */
    for (unsigned int i_5 = 3; i_5 < 12; i_5 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_6 = 1; i_6 < 1; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 15; i_7 += 3) 
            {
                {
                    var_18 *= ((/* implicit */short) ((((unsigned long long int) ((short) var_5))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) ((var_5) - (var_3))))))));
                    arr_25 [i_6] = ((/* implicit */unsigned long long int) ((_Bool) max((((/* implicit */unsigned long long int) var_6)), (max((var_3), (((/* implicit */unsigned long long int) var_0)))))));
                    var_19 = ((/* implicit */short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_0))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) : (((/* implicit */int) min((arr_21 [i_5] [i_6]), (arr_21 [i_5 + 3] [i_6]))))));
                    var_20 = ((/* implicit */unsigned long long int) ((_Bool) var_11));
                    var_21 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) max((((/* implicit */unsigned long long int) var_11)), (var_10))))) ? ((-(arr_5 [i_5 + 1] [i_7]))) : (((var_10) - (max((var_4), (((/* implicit */unsigned long long int) var_11))))))));
                }
            } 
        } 
        var_22 = ((var_7) + (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_5 + 2]))))));
    }
    for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
    {
        var_23 = ((/* implicit */_Bool) (~(((unsigned long long int) var_0))));
        /* LoopSeq 2 */
        for (short i_9 = 1; i_9 < 14; i_9 += 1) 
        {
            arr_31 [i_8] [i_9] [i_8] = ((((/* implicit */unsigned long long int) var_9)) * (((((/* implicit */_Bool) (+(var_8)))) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_24 [i_8])))))))));
            arr_32 [i_8] [i_9 + 1] = ((/* implicit */unsigned int) var_0);
            var_24 = ((/* implicit */unsigned long long int) ((long long int) (+(arr_8 [i_8] [i_9 - 1]))));
        }
        for (short i_10 = 1; i_10 < 11; i_10 += 2) 
        {
            var_25 = ((/* implicit */_Bool) ((long long int) var_2));
            arr_36 [i_8] = max((((short) (-(var_1)))), (((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_8]))) != (arr_13 [i_8])))));
            var_26 -= ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (short)28762)) : (((/* implicit */int) (_Bool)1))))), ((+(((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5)))))));
            /* LoopSeq 1 */
            for (unsigned short i_11 = 2; i_11 < 11; i_11 += 3) 
            {
                /* LoopSeq 4 */
                for (unsigned long long int i_12 = 0; i_12 < 15; i_12 += 3) /* same iter space */
                {
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_1)) ? (var_5) : (var_3))) * (min((((/* implicit */unsigned long long int) var_8)), (arr_39 [i_12] [i_11 + 4] [i_10 + 4] [i_8])))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!((!(var_11)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_13 = 1; i_13 < 13; i_13 += 2) 
                    {
                        var_28 = var_10;
                        var_29 ^= ((/* implicit */unsigned int) ((_Bool) min((((unsigned int) var_4)), (arr_27 [i_10 - 1]))));
                    }
                }
                /* vectorizable */
                for (unsigned long long int i_14 = 0; i_14 < 15; i_14 += 3) /* same iter space */
                {
                    arr_46 [i_8] [i_10] [i_11] [i_11] = ((/* implicit */short) var_4);
                    arr_47 [i_8] [i_8] [i_10] [i_11] [i_14] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (var_10) : (((/* implicit */unsigned long long int) var_9))));
                    var_30 = ((/* implicit */unsigned int) var_5);
                    var_31 = ((/* implicit */_Bool) var_1);
                    arr_48 [i_8] [i_10] [i_10] [i_11] [i_14] [i_8] &= ((/* implicit */unsigned long long int) ((long long int) arr_38 [i_8] [i_10 + 2] [i_11]));
                }
                for (unsigned long long int i_15 = 0; i_15 < 15; i_15 += 3) /* same iter space */
                {
                    arr_53 [i_11] [i_10] [i_11] [i_15] = ((/* implicit */unsigned int) var_5);
                    var_32 = ((/* implicit */_Bool) max((var_32), (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (~(((var_11) ? (var_9) : (((/* implicit */int) var_0))))))) - (min((((/* implicit */unsigned long long int) ((var_0) ? (arr_43 [i_15] [i_10] [i_8]) : (((/* implicit */unsigned int) ((/* implicit */int) var_6)))))), (max((((/* implicit */unsigned long long int) arr_42 [i_8])), (var_3))))))))));
                    var_33 = ((/* implicit */unsigned int) arr_37 [i_8] [i_10 + 1] [i_11] [i_15]);
                    var_34 *= ((/* implicit */long long int) ((((/* implicit */_Bool) min((((unsigned long long int) arr_30 [i_11])), (var_3)))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_11)))) : (var_8)));
                    arr_54 [i_8] [i_11] [i_11] [i_15] = ((/* implicit */short) max(((+(var_7))), (((unsigned long long int) var_1))));
                }
                for (unsigned long long int i_16 = 0; i_16 < 15; i_16 += 3) /* same iter space */
                {
                    var_35 = ((/* implicit */_Bool) min((min((var_4), (((unsigned long long int) var_10)))), (var_2)));
                    var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_14 [i_8]), (arr_14 [i_8])))) && (((/* implicit */_Bool) min((arr_14 [i_8]), (var_5))))));
                }
                /* LoopSeq 1 */
                for (int i_17 = 0; i_17 < 15; i_17 += 3) 
                {
                    arr_60 [i_8] [i_11] [i_11] [i_11] = ((/* implicit */short) ((max((var_3), (arr_8 [i_10 + 2] [i_17]))) | (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 1974313729))))));
                    var_37 *= ((/* implicit */_Bool) max((var_1), (min((arr_49 [i_8] [i_8] [i_10 + 4] [i_17]), (arr_49 [i_11] [i_8] [i_10 + 2] [i_17])))));
                    var_38 &= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) ((arr_5 [i_10] [i_11]) < (var_1))))) >= (((((/* implicit */_Bool) var_1)) ? (arr_57 [i_11] [i_8]) : (((/* implicit */long long int) var_9))))))) < (((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned int i_18 = 1; i_18 < 14; i_18 += 3) 
                    {
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) & (((((/* implicit */_Bool) 18446744073709551607ULL)) ? (2ULL) : (3758096384ULL)))))));
                        var_40 = ((/* implicit */unsigned int) var_1);
                        var_41 = ((/* implicit */int) min((var_41), (((/* implicit */int) ((((/* implicit */unsigned int) ((int) var_3))) * (var_8))))));
                        var_42 = ((/* implicit */unsigned long long int) ((int) var_11));
                        arr_63 [i_8] [i_11] [i_10 - 1] [i_10 + 1] [i_11] [i_17] [i_18] = ((/* implicit */unsigned long long int) ((var_2) >= (arr_15 [i_8] [i_11 + 2])));
                    }
                    for (unsigned int i_19 = 1; i_19 < 14; i_19 += 2) 
                    {
                        var_43 = ((/* implicit */unsigned long long int) ((unsigned int) var_9));
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_52 [i_8] [i_10] [i_11] [i_19]))) : (arr_64 [i_11])))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_23 [i_10 - 1] [i_11]))) : (var_8)))) ? (max((var_5), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))))) : (((((/* implicit */_Bool) var_10)) ? (var_2) : (((519181402675887088ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                    }
                }
                arr_66 [i_11 - 2] [i_11] [i_11] = ((/* implicit */unsigned long long int) min((((unsigned int) var_8)), (((/* implicit */unsigned int) min((((/* implicit */short) (_Bool)1)), ((short)-28763))))));
                /* LoopNest 2 */
                for (unsigned long long int i_20 = 1; i_20 < 11; i_20 += 3) 
                {
                    for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                    {
                        {
                            var_45 = ((/* implicit */unsigned int) min((max((8570658755883575786ULL), (((/* implicit */unsigned long long int) (unsigned short)27210)))), (((/* implicit */unsigned long long int) ((short) (short)24653)))));
                            arr_71 [i_8] [i_10 - 1] [i_11 - 2] [i_20 + 3] [i_11] = (~(max((((((/* implicit */_Bool) var_3)) ? (var_2) : (((/* implicit */unsigned long long int) var_9)))), (((/* implicit */unsigned long long int) arr_27 [i_20 - 1])))));
                            var_46 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((short) 1878274274U))) ? (((((/* implicit */_Bool) ((unsigned long long int) var_4))) ? (((/* implicit */unsigned long long int) arr_56 [i_21] [i_8] [i_8] [i_8])) : (max((var_3), (var_3))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) ((4369714725943373761ULL) - (((/* implicit */unsigned long long int) 1554823496U)))))))));
                        }
                    } 
                } 
                var_47 = ((/* implicit */short) max((var_47), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((((((/* implicit */_Bool) arr_67 [i_11] [i_10] [i_10 + 2] [i_8])) ? (var_3) : (arr_15 [i_8] [i_10 + 2]))) + (((/* implicit */unsigned long long int) ((unsigned int) 17927562671033664527ULL))))) : (((/* implicit */unsigned long long int) ((unsigned int) arr_68 [i_8] [i_8] [i_8] [i_10 + 4] [i_11] [i_11]))))))));
            }
            arr_72 [i_8] [i_10 + 4] [i_10] = min(((_Bool)1), (((_Bool) 1ULL)));
        }
        arr_73 [i_8] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) var_11))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_27 [i_8]))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_8])) && (((/* implicit */_Bool) var_7)))))));
    }
    var_48 *= max((max((((unsigned long long int) var_11)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)24089)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (short)22))))))), (max((((var_0) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_5))), (((/* implicit */unsigned long long int) ((var_0) || (((/* implicit */_Bool) var_4))))))));
}
