/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243450
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243450 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243450
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
    var_14 = ((/* implicit */unsigned short) ((signed char) min((-494059200), (((/* implicit */int) (_Bool)1)))));
    var_15 = ((/* implicit */signed char) ((_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))));
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 4) /* same iter space */
        {
            arr_6 [10U] = ((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_2 [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))));
            arr_7 [i_0] = ((/* implicit */unsigned char) (((-(((/* implicit */int) (_Bool)1)))) == (((/* implicit */int) arr_5 [i_0] [i_1]))));
        }
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) /* same iter space */
        {
            arr_11 [i_0] = ((/* implicit */signed char) (_Bool)1);
            var_16 = ((/* implicit */unsigned char) 3941958912U);
        }
        arr_12 [(unsigned short)4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (_Bool)1))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) arr_1 [i_0])) : (69557321)))) : ((-(4158771499U)))));
        arr_13 [i_0] = ((/* implicit */unsigned char) (signed char)(-127 - 1));
        var_17 = ((/* implicit */int) min((var_17), ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_11)), (((unsigned short) arr_3 [i_0])))))))));
    }
    /* vectorizable */
    for (signed char i_3 = 4; i_3 < 14; i_3 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_3 + 2])) ? (arr_14 [i_3 - 2]) : (((/* implicit */int) arr_16 [i_3 + 3]))));
        arr_17 [i_3] [i_3 + 2] = ((/* implicit */unsigned short) arr_15 [1U]);
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) arr_16 [(signed char)13]))) ? (((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned short)24680))))) : (((((/* implicit */_Bool) arr_14 [i_3])) ? (((/* implicit */unsigned int) var_6)) : (var_2)))));
        var_20 = ((/* implicit */unsigned short) max((var_20), (((/* implicit */unsigned short) (-(((/* implicit */int) ((unsigned char) (-2147483647 - 1)))))))));
    }
    for (signed char i_4 = 4; i_4 < 14; i_4 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (int i_5 = 0; i_5 < 17; i_5 += 2) 
        {
            var_21 = ((/* implicit */int) ((signed char) max((arr_21 [i_4 - 3] [i_5]), (arr_21 [i_5] [i_5]))));
            var_22 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 - 3]))))) << (((((((/* implicit */_Bool) (signed char)31)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)52))) : (var_10))) - (21LL)))));
            var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) ((((/* implicit */int) var_3)) ^ (((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_4 - 3]))))))))));
            /* LoopNest 2 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (unsigned int i_7 = 0; i_7 < 17; i_7 += 1) 
                {
                    {
                        var_24 = ((/* implicit */long long int) ((_Bool) max((min((2147450880U), (((/* implicit */unsigned int) var_13)))), (((/* implicit */unsigned int) (signed char)(-127 - 1))))));
                        var_25 ^= ((/* implicit */unsigned int) min((min((((/* implicit */int) var_11)), (((((/* implicit */_Bool) (signed char)-120)) ? (((/* implicit */int) arr_16 [(unsigned short)4])) : (((/* implicit */int) arr_28 [i_5] [i_5] [i_5] [12U])))))), (((/* implicit */int) ((arr_26 [i_4 - 1] [i_4 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) var_11))))))));
                    }
                } 
            } 
            var_26 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) max((arr_28 [i_4 + 3] [i_4 + 1] [i_5] [i_4 + 3]), (max((((/* implicit */unsigned char) (signed char)-126)), (var_1))))))) | (min((((/* implicit */unsigned int) 3)), (2447733715U)))));
        }
        for (int i_8 = 1; i_8 < 13; i_8 += 4) 
        {
            var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) min(((signed char)93), ((signed char)-13)))) - ((+(((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned int) min((1002827595), ((((_Bool)1) ? (238115434) : (arr_23 [i_4] [13U] [i_4 + 3])))))) : (max((((unsigned int) var_9)), (((/* implicit */unsigned int) (_Bool)1))))));
            /* LoopSeq 3 */
            for (int i_9 = 3; i_9 < 15; i_9 += 3) 
            {
                var_28 = min((((/* implicit */unsigned char) ((((long long int) arr_20 [i_4])) == (((/* implicit */long long int) ((/* implicit */int) ((268402688) == (((/* implicit */int) (unsigned short)39798))))))))), (((unsigned char) ((arr_16 [16U]) ? (((/* implicit */int) arr_34 [i_4] [i_8 - 1])) : (((/* implicit */int) (_Bool)1))))));
                /* LoopNest 2 */
                for (signed char i_10 = 2; i_10 < 16; i_10 += 4) 
                {
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_27 [i_4] [i_4] [i_9] [i_9 - 2]))), (((int) arr_25 [i_4] [i_9]))));
                            var_30 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) var_1))))));
                            var_31 = ((/* implicit */unsigned char) 402653184U);
                            arr_42 [(signed char)0] [(signed char)10] [i_9] [i_10] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)66)) : (((/* implicit */int) arr_38 [i_4] [i_8] [i_9] [i_10] [i_11]))))) ? (min((((/* implicit */unsigned int) var_13)), (var_7))) : (((unsigned int) (unsigned char)57))))) ? (min((((/* implicit */unsigned int) min((1002827595), (463291701)))), (arr_26 [i_4 + 3] [i_10 + 1]))) : (((/* implicit */unsigned int) (((-(((/* implicit */int) var_8)))) + (((/* implicit */int) arr_34 [i_4 - 3] [i_8 + 3]))))));
                            var_32 = ((/* implicit */unsigned short) max((arr_20 [(unsigned char)0]), (((/* implicit */unsigned int) 463291700))));
                        }
                    } 
                } 
                var_33 = ((/* implicit */unsigned char) max((((int) var_8)), (((/* implicit */int) arr_22 [i_4 - 3] [i_4 - 4]))));
            }
            for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
            {
                var_34 += ((/* implicit */unsigned int) (+(var_6)));
                arr_45 [i_4] [i_8] [i_12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1216677879U)) ? (max((var_6), (max((-14), (-463291702))))) : (((/* implicit */int) arr_34 [i_4] [i_4]))));
            }
            /* vectorizable */
            for (signed char i_13 = 0; i_13 < 17; i_13 += 2) 
            {
                /* LoopNest 2 */
                for (long long int i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (int i_15 = 2; i_15 < 16; i_15 += 2) 
                    {
                        {
                            var_35 = ((/* implicit */_Bool) var_1);
                            var_36 = ((/* implicit */unsigned int) ((unsigned char) var_0));
                            arr_55 [i_4] [i_4] [i_4] [(_Bool)0] [12] |= ((/* implicit */_Bool) (unsigned char)37);
                        }
                    } 
                } 
                var_37 = ((/* implicit */_Bool) min((var_37), (((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)25738))) ^ (var_2))))))));
                var_38 = ((/* implicit */unsigned int) ((signed char) var_8));
                /* LoopNest 2 */
                for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                {
                    for (long long int i_17 = 0; i_17 < 17; i_17 += 1) 
                    {
                        {
                            arr_62 [i_4] [i_4 - 3] [i_8 - 1] [i_8] [i_13] [i_16] [i_17] = ((/* implicit */unsigned char) ((long long int) 1185717140U));
                            arr_63 [i_4] [i_4] [i_4] [i_4] [i_4 + 2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [(signed char)5])) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [i_4] [i_13] [i_16] [i_17])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)63))) : (3323094075U)));
                            var_39 = ((/* implicit */unsigned char) ((arr_53 [i_8] [i_8 + 1] [i_8] [(unsigned char)10] [i_8 + 3] [i_8 + 2]) ? (2446158055U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-101)))));
                            var_40 = ((/* implicit */unsigned char) ((arr_51 [i_4 + 1] [i_4 + 1] [i_4 + 2] [i_4 - 3] [i_4 + 1] [i_4 - 1]) << (((((((/* implicit */_Bool) arr_27 [i_8] [(unsigned char)2] [i_16] [i_17])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned short)25737)))) - (79)))));
                        }
                    } 
                } 
            }
            arr_64 [13] [i_8 + 4] = ((unsigned char) max((((/* implicit */unsigned int) arr_30 [i_4 - 4])), (var_2)));
        }
        /* vectorizable */
        for (signed char i_18 = 0; i_18 < 17; i_18 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned short i_19 = 0; i_19 < 17; i_19 += 3) 
            {
                for (int i_20 = 0; i_20 < 17; i_20 += 2) 
                {
                    {
                        var_41 = ((/* implicit */unsigned int) ((arr_46 [i_4 - 3]) ? (((/* implicit */int) (unsigned short)40401)) : (((/* implicit */int) arr_48 [i_4 - 1] [i_4 + 2] [i_4 + 2] [i_4 - 4]))));
                        /* LoopSeq 2 */
                        for (unsigned char i_21 = 0; i_21 < 17; i_21 += 2) /* same iter space */
                        {
                            var_42 = ((/* implicit */_Bool) ((unsigned char) (~(((/* implicit */int) (signed char)113)))));
                            var_43 = ((/* implicit */unsigned char) max((var_43), (((unsigned char) var_2))));
                            arr_75 [i_4 + 2] [i_4 + 3] [i_4 - 3] [i_4 + 1] [i_4] [i_19] = ((/* implicit */unsigned int) ((_Bool) arr_51 [i_4 + 3] [i_4 - 3] [(unsigned char)7] [(_Bool)1] [i_4 + 2] [i_4 - 1]));
                        }
                        for (unsigned char i_22 = 0; i_22 < 17; i_22 += 2) /* same iter space */
                        {
                            var_44 = ((/* implicit */long long int) (((_Bool)1) ? (arr_65 [i_4 + 1] [i_4 + 1] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) var_13)))));
                            var_45 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -8577110787496449046LL)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)4))) : (-6579510442930258664LL)));
                        }
                        var_46 = ((/* implicit */int) (unsigned char)255);
                    }
                } 
            } 
            var_47 = ((/* implicit */unsigned int) ((arr_24 [i_4 - 2] [i_4 - 4]) ? (((/* implicit */int) (signed char)-83)) : (-1017038125)));
        }
        for (unsigned short i_23 = 0; i_23 < 17; i_23 += 4) 
        {
            var_48 = ((/* implicit */_Bool) arr_18 [i_4 - 4]);
            var_49 |= ((/* implicit */unsigned short) (signed char)-79);
            var_50 = ((/* implicit */unsigned char) (+(min((var_6), (((/* implicit */int) arr_54 [(_Bool)1] [i_23] [i_4 - 3] [i_4 - 1] [i_4]))))));
        }
        var_51 = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) max((((/* implicit */unsigned int) -941389942)), (4294967295U)))) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (min((((/* implicit */long long int) (unsigned short)30031)), (634461047892205282LL)))))));
        arr_81 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)49))) == (((((/* implicit */_Bool) arr_39 [i_4] [i_4 - 2] [i_4 - 1] [i_4 - 3] [i_4])) ? (595718093U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-108)))))))));
        arr_82 [(unsigned char)1] [i_4] = ((/* implicit */int) (((!(((/* implicit */_Bool) (signed char)1)))) ? (((long long int) min((((/* implicit */unsigned short) arr_19 [i_4] [(signed char)6])), ((unsigned short)65535)))) : (min((arr_29 [i_4] [i_4 - 4] [i_4]), (((/* implicit */long long int) (unsigned short)39789))))));
    }
    for (signed char i_24 = 4; i_24 < 14; i_24 += 2) /* same iter space */
    {
        var_52 = ((/* implicit */unsigned char) (unsigned short)42944);
        /* LoopSeq 3 */
        /* vectorizable */
        for (int i_25 = 2; i_25 < 16; i_25 += 4) 
        {
            var_53 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned char)128))));
            arr_89 [i_24 - 4] [i_24 - 1] = ((/* implicit */_Bool) var_11);
        }
        for (unsigned int i_26 = 0; i_26 < 17; i_26 += 4) 
        {
            arr_92 [i_24 - 3] = ((/* implicit */_Bool) var_0);
            arr_93 [i_24] [i_24] = ((/* implicit */long long int) (+((-((-(-1614256231)))))));
        }
        for (int i_27 = 0; i_27 < 17; i_27 += 3) 
        {
            var_54 += ((/* implicit */unsigned int) var_11);
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned short i_28 = 0; i_28 < 17; i_28 += 4) 
            {
                arr_100 [i_27] [i_27] = ((/* implicit */int) (_Bool)1);
                var_55 = ((((/* implicit */_Bool) (unsigned char)113)) || (((/* implicit */_Bool) var_9)));
            }
            for (unsigned char i_29 = 1; i_29 < 15; i_29 += 1) 
            {
                var_56 = ((/* implicit */unsigned char) -5887897640263067406LL);
                arr_104 [i_27] [i_27] = ((/* implicit */_Bool) min((arr_20 [i_29 + 1]), (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned char)162)))))));
            }
            /* vectorizable */
            for (_Bool i_30 = 0; i_30 < 1; i_30 += 1) 
            {
                /* LoopSeq 2 */
                for (unsigned char i_31 = 0; i_31 < 17; i_31 += 2) 
                {
                    var_57 += ((/* implicit */unsigned int) var_5);
                    var_58 = ((/* implicit */unsigned int) min((var_58), (((/* implicit */unsigned int) ((((/* implicit */int) ((_Bool) 788739172))) << (((((/* implicit */int) arr_60 [i_24 - 2] [i_27] [i_30] [i_30])) - (81))))))));
                }
                for (unsigned char i_32 = 0; i_32 < 17; i_32 += 3) 
                {
                    var_59 ^= ((/* implicit */signed char) var_7);
                    var_60 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -3095077582999024784LL)) ? (var_10) : (((/* implicit */long long int) arr_77 [i_24] [i_24] [i_27] [i_24 + 1]))));
                }
                var_61 = ((/* implicit */_Bool) min((var_61), (((((/* implicit */int) ((((/* implicit */_Bool) var_9)) || (var_13)))) != (((/* implicit */int) var_8))))));
            }
        }
        var_62 ^= ((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))));
    }
}
