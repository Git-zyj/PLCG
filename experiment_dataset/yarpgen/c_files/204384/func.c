/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204384
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
    var_18 ^= ((/* implicit */_Bool) var_5);
    var_19 ^= ((/* implicit */long long int) ((var_1) ? (((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((5710373260209712467ULL) - (5710373260209712453ULL)))))) ? (((var_2) << (((/* implicit */int) var_12)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (var_16)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) + (var_6)))) : ((((_Bool)0) ? (((/* implicit */unsigned long long int) var_16)) : (11033036639955022906ULL)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 2; i_0 < 11; i_0 += 3) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) / (arr_2 [i_0 + 3])))) >= (((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_2))) & (((/* implicit */unsigned long long int) ((arr_1 [12]) ? (344554759U) : (((/* implicit */unsigned int) arr_2 [i_0]))))))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) var_9))));
        var_21 ^= ((/* implicit */unsigned long long int) ((((arr_2 [i_0 - 2]) % (arr_2 [i_0 - 2]))) != (arr_2 [i_0 - 2])));
        var_22 = ((/* implicit */signed char) min((var_22), (((/* implicit */signed char) ((((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [6U])) && (((/* implicit */_Bool) 5710373260209712467ULL)))), (arr_1 [i_0 + 2])))) >> (((((int) 975322U)) - (975314))))))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 4) 
    {
        var_23 = ((/* implicit */_Bool) (~(((((/* implicit */unsigned int) (-2147483647 - 1))) + (3392403943U)))));
        var_24 ^= ((/* implicit */unsigned long long int) arr_4 [i_1] [i_1]);
        var_25 ^= ((/* implicit */long long int) -5740073);
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
    {
        var_26 = ((/* implicit */unsigned long long int) max((var_26), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_2])) ? (arr_6 [i_2] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_2]))))))));
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_2] [i_2])) ? (arr_6 [i_2] [i_2]) : (arr_6 [i_2] [i_2]))))));
        var_28 = ((_Bool) var_7);
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 1; i_4 < 11; i_4 += 3) 
            {
                var_29 ^= ((/* implicit */unsigned int) ((arr_13 [i_4] [i_2] [2] [i_4 + 1]) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3] [i_2] [i_2] [i_4 + 3])))));
                arr_14 [i_3] [i_4] = ((/* implicit */unsigned int) (!(var_11)));
            }
            arr_15 [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (var_14) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4293991973U)) ? (28U) : (var_7))))));
            var_30 = ((((/* implicit */_Bool) ((var_9) % (((/* implicit */unsigned long long int) arr_10 [i_2]))))) && (((/* implicit */_Bool) 2147483642)));
        }
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 3) 
        {
            var_31 = ((arr_17 [i_5] [i_5]) ? (((/* implicit */int) arr_17 [i_5] [i_5])) : (((/* implicit */int) arr_17 [i_5] [i_5])));
            /* LoopSeq 2 */
            for (unsigned int i_6 = 0; i_6 < 14; i_6 += 3) /* same iter space */
            {
                arr_22 [i_5] = ((/* implicit */unsigned long long int) var_15);
                var_32 = ((/* implicit */unsigned long long int) (+(var_0)));
                /* LoopSeq 4 */
                for (signed char i_7 = 0; i_7 < 14; i_7 += 2) 
                {
                    arr_25 [i_5] [i_5] [7ULL] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_7 [i_2] [i_2]) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))) ? (((/* implicit */int) ((_Bool) 2147483642))) : (arr_8 [i_7])));
                    var_33 = ((/* implicit */signed char) ((arr_16 [i_2] [i_5] [i_6]) - (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_10))))))));
                    arr_26 [i_7] [i_6] [i_5] [i_5] [i_5] [(_Bool)1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_2] [i_5] [11ULL] [i_5])) || (var_1)))) << (((((int) 3992855031U)) + (302112291)))));
                    var_34 = ((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_13 [i_2] [i_5] [i_6] [i_5]))))));
                }
                for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                {
                    var_35 ^= ((/* implicit */_Bool) arr_9 [i_2] [4U]);
                    arr_29 [i_5] [i_5] = (_Bool)1;
                }
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_36 = ((/* implicit */unsigned long long int) min((var_36), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_2] [i_6] [i_5] [i_2])) + (((/* implicit */int) var_1)))))));
                    var_37 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_2] [i_5] [i_6] [i_5])) ? (302112255U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_16 [i_2] [i_2] [i_2])));
                    var_38 = ((/* implicit */_Bool) var_15);
                }
                for (int i_10 = 0; i_10 < 14; i_10 += 3) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        arr_36 [2ULL] [i_5] [i_2] [i_2] [i_2] [2LL] = ((/* implicit */int) (+(0LL)));
                        var_39 ^= ((/* implicit */unsigned long long int) (+(arr_18 [i_5] [i_6])));
                        var_40 ^= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) 1746168763U))));
                    }
                    var_41 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (0ULL) : (5710373260209712467ULL)))) || (((/* implicit */_Bool) (+(arr_31 [i_2]))))));
                }
            }
            for (unsigned int i_12 = 0; i_12 < 14; i_12 += 3) /* same iter space */
            {
                /* LoopSeq 4 */
                for (_Bool i_13 = 0; i_13 < 0; i_13 += 1) 
                {
                    var_42 = ((/* implicit */long long int) min((var_42), (((/* implicit */long long int) arr_23 [i_2] [0ULL] [4] [i_2]))));
                    var_43 ^= ((/* implicit */unsigned long long int) (!(var_13)));
                    var_44 = (+(arr_34 [i_2] [i_5] [i_5] [6U] [i_13 + 1]));
                    var_45 = ((/* implicit */_Bool) 4227161093710650074ULL);
                }
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    /* LoopSeq 3 */
                    for (signed char i_15 = 0; i_15 < 14; i_15 += 3) 
                    {
                        arr_45 [i_5] = 3ULL;
                        arr_46 [i_5] [i_12] [i_14] [i_15] = ((/* implicit */_Bool) (-(arr_31 [i_2])));
                    }
                    for (unsigned long long int i_16 = 1; i_16 < 10; i_16 += 1) 
                    {
                        var_46 = ((/* implicit */unsigned int) ((signed char) ((((/* implicit */_Bool) arr_0 [i_5])) ? (var_9) : (arr_34 [8U] [8U] [i_5] [8U] [i_16 + 4]))));
                        var_47 ^= ((((/* implicit */_Bool) arr_2 [i_2])) ? (((((/* implicit */_Bool) 34U)) ? (((/* implicit */unsigned long long int) var_17)) : (17358591093562373315ULL))) : (arr_24 [i_16 + 4] [i_16 + 2]));
                    }
                    for (unsigned long long int i_17 = 0; i_17 < 14; i_17 += 3) 
                    {
                        var_48 = ((/* implicit */unsigned int) min((var_48), (((/* implicit */unsigned int) (((((_Bool)1) ? (((/* implicit */unsigned long long int) 2U)) : (13ULL))) >> (((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) 2069260147)) : (7842208946670472972ULL))) - (2069260137ULL))))))));
                        var_49 ^= ((/* implicit */signed char) ((var_7) >> (((var_5) - (13478615724208552825ULL)))));
                        arr_52 [i_5] [i_5] [i_12] [i_14] [i_17] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_19 [i_2] [i_2] [i_12] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 17358591093562373310ULL)))) : ((((_Bool)1) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) 1572468450U))))));
                        arr_53 [i_2] [i_5] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((long long int) var_0))) : (((((/* implicit */_Bool) var_3)) ? (17358591093562373315ULL) : (((/* implicit */unsigned long long int) arr_23 [i_5] [i_5] [i_5] [i_5]))))));
                    }
                    var_50 ^= ((/* implicit */unsigned long long int) ((unsigned int) ((int) arr_8 [i_14])));
                }
                for (_Bool i_18 = 0; i_18 < 0; i_18 += 1) 
                {
                    arr_56 [i_2] [i_2] [(signed char)12] [i_2] [i_5] = ((/* implicit */_Bool) (+((+(((/* implicit */int) (signed char)-11))))));
                    var_51 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((arr_1 [i_5]) ? (arr_50 [i_2] [i_2] [i_5] [i_5] [5LL] [i_2]) : (((/* implicit */unsigned int) var_0))))) ? ((-(arr_19 [i_2] [i_2] [i_12] [i_5]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_8 [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : (var_10))))));
                    /* LoopSeq 1 */
                    for (unsigned int i_19 = 0; i_19 < 14; i_19 += 2) 
                    {
                        var_52 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_12 [8ULL] [i_12] [i_18 + 1] [i_19])) ? (((/* implicit */int) arr_12 [i_2] [i_5] [i_12] [i_19])) : (((/* implicit */int) (_Bool)0))));
                        arr_59 [i_5] [i_5] [i_5] = ((/* implicit */unsigned long long int) ((arr_23 [i_5] [5LL] [i_18 + 1] [(_Bool)1]) * (arr_23 [i_5] [i_12] [i_18 + 1] [i_5])));
                        var_53 = ((/* implicit */unsigned int) max((var_53), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_57 [i_18 + 1] [i_5] [i_2] [i_18 + 1] [i_19])) ? (((var_13) ? (arr_34 [i_5] [i_5] [i_2] [0LL] [i_19]) : (var_5))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_18]))))))));
                    }
                }
                for (signed char i_20 = 0; i_20 < 14; i_20 += 3) 
                {
                    var_54 = ((/* implicit */_Bool) min((var_54), (((_Bool) arr_51 [i_2]))));
                    var_55 = ((/* implicit */unsigned int) var_14);
                    var_56 = ((/* implicit */long long int) min((var_56), (((/* implicit */long long int) (!(((/* implicit */_Bool) -103326316094449122LL)))))));
                    var_57 = ((/* implicit */unsigned int) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_40 [i_2] [i_5] [7LL] [i_20] [i_20]))))));
                }
                var_58 ^= ((/* implicit */long long int) (-(var_2)));
            }
            arr_64 [i_5] [i_5] = (-(arr_7 [i_5] [i_5]));
            /* LoopNest 3 */
            for (int i_21 = 1; i_21 < 13; i_21 += 2) 
            {
                for (_Bool i_22 = 0; i_22 < 1; i_22 += 1) 
                {
                    for (unsigned long long int i_23 = 2; i_23 < 13; i_23 += 4) 
                    {
                        {
                            var_59 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [i_23] [i_22] [i_21 - 1] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_69 [i_2] [i_5] [1ULL] [12U])))) ^ ((~(14525696457567534398ULL)))));
                            var_60 ^= ((/* implicit */signed char) ((arr_48 [11] [i_23 - 1] [i_22] [i_23 - 1] [i_23] [i_21 + 1]) ? (((/* implicit */long long int) 975322U)) : (var_14)));
                            arr_73 [i_2] [i_2] [i_5] [12] [2ULL] = ((/* implicit */unsigned long long int) ((var_9) != (((/* implicit */unsigned long long int) arr_30 [11U] [i_5] [i_5] [i_5]))));
                            var_61 = ((/* implicit */unsigned long long int) min((var_61), (((arr_47 [i_21 - 1] [i_21 + 1] [i_22] [i_23] [i_21 - 1] [i_23]) << (((arr_47 [i_21] [i_21 - 1] [i_23] [i_23] [i_23] [i_23 - 1]) - (8796748363609992375ULL)))))));
                            arr_74 [i_2] [i_5] [i_5] [i_23] = ((/* implicit */int) arr_32 [i_2] [i_2]);
                        }
                    } 
                } 
            } 
        }
    }
    var_62 ^= var_8;
}
