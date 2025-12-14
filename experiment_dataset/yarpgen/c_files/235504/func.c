/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235504
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235504 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235504
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 1; i_0 < 22; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 23; i_1 += 3) 
        {
            for (int i_2 = 3; i_2 < 20; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 23; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 4; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_10 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((var_2) - (var_2))), (((/* implicit */unsigned long long int) var_4)))))));
                                arr_14 [i_1] [(unsigned char)22] [7ULL] [i_1] [i_1] = ((/* implicit */short) var_3);
                                arr_15 [i_1] [i_0] [i_1] [i_1] [i_3] [i_3] [i_1] = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) var_7))))))))));
                                arr_16 [i_0] [i_0] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-96)) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) ? ((~(((/* implicit */int) var_4)))) : ((~(((/* implicit */int) var_7))))))));
                            }
                        } 
                    } 
                    arr_17 [i_1] [i_1] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_6))))) ? (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_1))) : (((((/* implicit */_Bool) var_3)) ? (var_1) : (var_2))))) + (min(((~(var_1))), (((/* implicit */unsigned long long int) max((var_9), (((/* implicit */unsigned int) var_4)))))))));
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (int i_5 = 3; i_5 < 14; i_5 += 2) 
    {
        /* LoopNest 3 */
        for (unsigned char i_6 = 0; i_6 < 16; i_6 += 1) 
        {
            for (long long int i_7 = 0; i_7 < 16; i_7 += 1) 
            {
                for (unsigned char i_8 = 0; i_8 < 16; i_8 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_9 = 0; i_9 < 16; i_9 += 2) 
                        {
                            arr_29 [i_5] [i_5] [i_5] [i_5] [i_5] [i_5 - 3] = ((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (unsigned char)188)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (127ULL))), (((/* implicit */unsigned long long int) (_Bool)1)))), (((/* implicit */unsigned long long int) var_6))));
                            arr_30 [i_5] [i_6] [i_5] [i_8] [i_9] = ((/* implicit */unsigned short) ((max((max((((/* implicit */unsigned long long int) var_8)), (var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))))) * (min((min((((/* implicit */unsigned long long int) var_0)), (var_2))), (min((((/* implicit */unsigned long long int) var_5)), (var_2)))))));
                            arr_31 [i_5] [2LL] [i_7] [2LL] [i_9] = ((/* implicit */signed char) ((min((((var_9) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), ((!(((/* implicit */_Bool) var_0)))))) ? ((+(((((/* implicit */_Bool) var_2)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (unsigned char)133))))))));
                            var_11 = ((/* implicit */unsigned short) (~((~((~(((/* implicit */int) var_4))))))));
                        }
                        for (int i_10 = 0; i_10 < 16; i_10 += 2) 
                        {
                            arr_35 [i_8] [i_5] [i_6] [i_6] [i_10] [i_6] [i_7] = ((/* implicit */unsigned short) min(((+(((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (var_3))))), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_5)) ? (var_0) : (((/* implicit */int) var_5)))) / (((/* implicit */int) min((((/* implicit */unsigned char) (signed char)-15)), ((unsigned char)64)))))))));
                            var_12 = ((/* implicit */unsigned short) (+(min(((-(2047ULL))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_8)))))))));
                        }
                        /* LoopSeq 1 */
                        for (int i_11 = 0; i_11 < 16; i_11 += 1) 
                        {
                            var_13 = ((/* implicit */signed char) max((var_9), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_8))))))))));
                            var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((((((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) * (var_2))) - (((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) << (((var_1) - (4394292715795016123ULL))))))));
                            arr_38 [i_11] [i_11] [i_11] [i_5] [i_11] [i_11] [i_11] = ((/* implicit */short) (((+(((((/* implicit */_Bool) var_3)) ? (var_1) : (var_3))))) * (((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) 127LL)) ? (((/* implicit */int) (unsigned char)227)) : (((/* implicit */int) var_6)))))))));
                        }
                        arr_39 [i_5] [i_5] [i_5 - 1] [i_8] [(unsigned char)5] [i_5] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) (~(var_1)))) ? ((+(var_3))) : ((-(var_3))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_6)))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 2 */
        for (short i_12 = 0; i_12 < 16; i_12 += 1) 
        {
            var_15 = ((/* implicit */int) min((var_15), ((-((~((+(((/* implicit */int) var_7))))))))));
            /* LoopSeq 3 */
            /* vectorizable */
            for (unsigned long long int i_13 = 0; i_13 < 16; i_13 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
                {
                    for (unsigned char i_15 = 0; i_15 < 16; i_15 += 3) 
                    {
                        {
                            var_16 = ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (var_0)))) - ((~(var_2))));
                            arr_52 [i_5] [i_5] [i_13] [i_14] [i_15] [i_15] = ((/* implicit */unsigned short) var_9);
                        }
                    } 
                } 
                arr_53 [(unsigned char)6] [6ULL] [(unsigned char)6] [i_13] &= ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) var_0))))));
            }
            for (unsigned long long int i_16 = 0; i_16 < 16; i_16 += 2) /* same iter space */
            {
                /* LoopNest 2 */
                for (unsigned char i_17 = 0; i_17 < 16; i_17 += 1) 
                {
                    for (long long int i_18 = 0; i_18 < 16; i_18 += 3) 
                    {
                        {
                            var_17 = ((/* implicit */unsigned char) ((max((((var_3) + (var_1))), (((((/* implicit */_Bool) var_8)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))));
                            var_18 = (~(((((/* implicit */_Bool) (+(var_3)))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) ^ (var_1))) : (max((((/* implicit */unsigned long long int) var_5)), (var_3))))));
                        }
                    } 
                } 
                var_19 += ((/* implicit */unsigned char) min(((-(max((var_1), (((/* implicit */unsigned long long int) var_5)))))), (((/* implicit */unsigned long long int) (+((-(var_9))))))));
            }
            for (unsigned long long int i_19 = 0; i_19 < 16; i_19 += 2) /* same iter space */
            {
                /* LoopSeq 1 */
                for (unsigned char i_20 = 0; i_20 < 16; i_20 += 4) 
                {
                    var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) var_8))));
                    /* LoopSeq 4 */
                    for (unsigned char i_21 = 0; i_21 < 16; i_21 += 4) 
                    {
                        arr_69 [(unsigned short)15] [i_5] [i_19] [i_5] [i_5] = ((/* implicit */unsigned char) (~((-(524160)))));
                        arr_70 [i_19] [i_19] [i_19] [i_5] [i_5] [i_19] = ((/* implicit */signed char) (~(min((min((((/* implicit */unsigned long long int) var_5)), (var_3))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2047ULL)))))))));
                        var_21 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) - ((~(var_2)))))) ? (((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6))))) - ((+(var_2))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_7)) * (((/* implicit */int) var_7)))))))));
                    }
                    for (unsigned char i_22 = 0; i_22 < 16; i_22 += 1) 
                    {
                        arr_73 [i_5] [i_20] [i_19] [i_12] [i_5] = ((/* implicit */signed char) var_9);
                        var_22 = ((((((/* implicit */_Bool) (-(var_0)))) && (((/* implicit */_Bool) max((var_3), (var_2)))))) ? (((((/* implicit */_Bool) max((var_6), (var_6)))) ? (((/* implicit */unsigned long long int) ((var_0) - (((/* implicit */int) var_7))))) : (min((var_3), (((/* implicit */unsigned long long int) var_7)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_2), (((/* implicit */unsigned long long int) var_0))))) ? (((((/* implicit */_Bool) var_3)) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) : (((/* implicit */unsigned int) (~(var_0))))))));
                    }
                    for (unsigned long long int i_23 = 0; i_23 < 16; i_23 += 1) 
                    {
                        var_23 += ((/* implicit */unsigned int) (~(((/* implicit */int) var_6))));
                        var_24 = ((/* implicit */int) (((+((+(var_3))))) << (((/* implicit */int) (!(((/* implicit */_Bool) ((var_9) >> (((((/* implicit */int) var_4)) - (196)))))))))));
                    }
                    for (unsigned char i_24 = 0; i_24 < 16; i_24 += 1) 
                    {
                        var_25 = ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_5)) : (var_0)))) ? ((-(((/* implicit */int) var_6)))) : (((var_0) ^ (((/* implicit */int) var_7))))))) == (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) (+(var_0)))) : (((((/* implicit */_Bool) var_1)) ? (var_9) : (((/* implicit */unsigned int) var_0)))))));
                        arr_81 [i_5] [i_12] [i_5] [i_20] [i_24] = ((/* implicit */short) (~(((/* implicit */int) ((((((/* implicit */unsigned long long int) var_9)) < (var_3))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
                        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(-4294967296LL))))));
                        var_27 = ((/* implicit */unsigned int) max((((max((var_0), (((/* implicit */int) var_6)))) | (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))), (((((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned int) var_0))))) ? ((+(((/* implicit */int) var_5)))) : (((((/* implicit */int) var_4)) * (((/* implicit */int) var_6))))))));
                        var_28 = ((/* implicit */int) var_2);
                    }
                }
                /* LoopSeq 1 */
                for (short i_25 = 2; i_25 < 15; i_25 += 4) 
                {
                    arr_85 [i_12] [i_5] [i_25 - 2] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                    var_29 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_3) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) var_9)) : (var_2)))))) ? ((~(((((/* implicit */_Bool) var_0)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_7)))))) ^ (((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) | (var_2)))))));
                    arr_86 [i_5] [i_12] [i_5] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-((~(((/* implicit */int) var_7))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (signed char)-127)), (4210464712U)))) : ((+(((((/* implicit */_Bool) var_2)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                }
                var_30 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) -1926860990)) < (3135986571U))))) == (((((((/* implicit */_Bool) var_1)) ? (var_3) : (var_2))) >> ((((~(var_3))) - (4753377454567032255ULL)))))));
                /* LoopSeq 2 */
                for (short i_26 = 0; i_26 < 16; i_26 += 3) 
                {
                    var_31 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? (((((/* implicit */int) var_6)) << (((((/* implicit */int) var_7)) + (111))))) : (((/* implicit */int) min((var_7), (var_8)))))) + (max((min((((/* implicit */int) var_7)), (var_0))), (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_7))))))));
                    var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned char)40)) : (((/* implicit */int) (unsigned char)2))))) ? ((+(((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (unsigned char)113)) ? (((/* implicit */int) (unsigned char)4)) : (((/* implicit */int) (unsigned char)122))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_27 = 2; i_27 < 13; i_27 += 2) /* same iter space */
                    {
                        var_33 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_6))))) : (((((/* implicit */_Bool) max((((/* implicit */short) var_8)), (var_5)))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((((((/* implicit */int) var_7)) + (2147483647))) << (((((/* implicit */int) var_4)) - (205))))))))));
                        var_34 = ((/* implicit */signed char) min((var_34), (((/* implicit */signed char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (var_2)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) << ((((~(((((/* implicit */_Bool) var_2)) ? (var_0) : (((/* implicit */int) var_5)))))) - (806655604))))))));
                    }
                    for (unsigned long long int i_28 = 2; i_28 < 13; i_28 += 2) /* same iter space */
                    {
                        var_35 = ((/* implicit */int) min((var_35), (((((/* implicit */int) (short)6141)) * (((/* implicit */int) (unsigned char)158))))));
                        arr_95 [i_28 + 2] [i_28] [i_5] [i_28] [i_28 + 2] [i_28] [i_28 + 3] = ((/* implicit */short) (+((~(((var_3) ^ (var_1)))))));
                        arr_96 [i_5] [i_5] [i_12] [i_5] [i_26] [i_28] [i_28] = ((/* implicit */signed char) (((!(((/* implicit */_Bool) min((var_7), (var_7)))))) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_8)) + (((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))) ? (min((var_1), (((/* implicit */unsigned long long int) var_0)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_5)) + (((/* implicit */int) var_4)))))))));
                    }
                    for (unsigned long long int i_29 = 2; i_29 < 13; i_29 += 2) /* same iter space */
                    {
                        arr_99 [i_5] [i_12] [i_19] [i_26] [i_5] = ((/* implicit */int) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) max((((/* implicit */unsigned char) var_8)), (var_4))))))), (var_2)));
                        var_36 = ((/* implicit */int) (((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_2))))) > (((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) == (var_1))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))) : (var_9))))));
                        var_37 = ((/* implicit */int) var_9);
                    }
                }
                for (unsigned char i_30 = 1; i_30 < 15; i_30 += 3) 
                {
                    var_38 = (+((~(((((/* implicit */int) var_6)) << (((((/* implicit */int) var_7)) + (126))))))));
                    var_39 = ((/* implicit */unsigned long long int) (((((!(((/* implicit */_Bool) var_0)))) ? (((/* implicit */unsigned int) (~(var_0)))) : ((~(var_9))))) | (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                }
                var_40 = var_7;
            }
            arr_102 [i_12] [i_5] = ((/* implicit */unsigned char) (((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (var_2))))) - (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)8064)) ? (((/* implicit */int) (signed char)24)) : (((/* implicit */int) (unsigned char)133))))) ? ((-(var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2047ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)196)))))))));
        }
        for (unsigned char i_31 = 1; i_31 < 13; i_31 += 4) 
        {
            arr_106 [i_5] [i_5] [i_31] = ((/* implicit */long long int) var_9);
            arr_107 [i_5] [i_5] = ((/* implicit */short) (((+(((((/* implicit */int) var_8)) >> (((var_0) + (806655679))))))) + (((/* implicit */int) var_6))));
        }
    }
}
