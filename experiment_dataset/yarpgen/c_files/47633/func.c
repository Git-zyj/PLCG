/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47633
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
    var_16 = var_15;
    /* LoopSeq 4 */
    for (unsigned long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        var_17 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((signed char) min((((/* implicit */unsigned short) var_5)), (var_2))))), (min((((/* implicit */unsigned long long int) ((long long int) (short)10824))), (var_12)))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (long long int i_2 = 1; i_2 < 14; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 16; i_3 += 4) 
                {
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (unsigned short i_4 = 2; i_4 < 14; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */signed char) ((var_12) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))));
                            var_19 = ((/* implicit */short) (-(var_1)));
                            arr_13 [i_1] [(unsigned char)10] [i_4] |= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_3)) & (var_1)))) ? (((/* implicit */unsigned int) var_9)) : ((-(var_14)))));
                        }
                        for (unsigned int i_5 = 1; i_5 < 15; i_5 += 2) 
                        {
                            arr_17 [i_2] [9U] [i_2] [i_3] [12U] = ((/* implicit */unsigned int) max((max((var_12), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) + (((/* implicit */int) var_8)))))));
                            var_20 = ((/* implicit */short) max((((unsigned int) var_4)), (((/* implicit */unsigned int) (-(var_6))))));
                        }
                        arr_18 [i_2] [i_2] = ((/* implicit */short) (!(((/* implicit */_Bool) (+(var_3))))));
                        var_21 = ((/* implicit */_Bool) ((((var_1) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) ((signed char) var_12))))))));
                        var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (-(((((/* implicit */_Bool) ((var_6) & (var_9)))) ? ((~(var_9))) : ((~(((/* implicit */int) var_13)))))))))));
                    }
                } 
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            arr_22 [i_0] [i_6] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_15))));
            var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_1)))) * (((unsigned int) var_8)))))));
            var_24 = ((/* implicit */unsigned int) min((var_24), (((/* implicit */unsigned int) (-(((/* implicit */int) var_2)))))));
        }
    }
    for (unsigned long long int i_7 = 0; i_7 < 19; i_7 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
        {
            for (signed char i_9 = 0; i_9 < 19; i_9 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 16; i_10 += 2) 
                    {
                        for (short i_11 = 1; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) ((int) ((((/* implicit */int) var_8)) >= (((/* implicit */int) min(((short)0), (((/* implicit */short) (_Bool)1)))))))))));
                                var_26 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) ((unsigned char) var_3))) * (((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_13))))))) / (((((/* implicit */_Bool) max((var_6), (((/* implicit */int) var_15))))) ? (((/* implicit */unsigned long long int) ((var_14) << (((((/* implicit */int) var_10)) - (26774)))))) : (((var_1) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                                var_27 -= ((/* implicit */unsigned int) (((-(((var_14) - (((/* implicit */unsigned int) ((/* implicit */int) var_13))))))) >= (min((133169152U), (20248543U)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 1; i_12 < 17; i_12 += 2) 
                    {
                        arr_39 [i_7] [1LL] [7U] [i_7] = ((/* implicit */short) max((((((/* implicit */_Bool) ((unsigned char) var_2))) ? ((~(((/* implicit */int) var_15)))) : (((((/* implicit */_Bool) var_11)) ? (var_6) : (var_6))))), (((int) max((var_2), (((/* implicit */unsigned short) var_4)))))));
                        var_28 = ((/* implicit */long long int) ((-1899380493) - (((/* implicit */int) (_Bool)1))));
                    }
                    arr_40 [13] [(signed char)11] = ((/* implicit */int) ((_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) var_6))))), ((-(((/* implicit */int) var_7)))))));
                }
            } 
        } 
        var_29 += ((/* implicit */int) ((max((((((/* implicit */int) var_2)) | (((/* implicit */int) var_4)))), (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_2)))))) <= (((/* implicit */int) ((short) ((long long int) var_3))))));
        /* LoopNest 2 */
        for (unsigned int i_13 = 1; i_13 < 18; i_13 += 2) 
        {
            for (unsigned int i_14 = 0; i_14 < 19; i_14 += 4) 
            {
                {
                    var_30 = ((/* implicit */unsigned char) ((short) ((var_3) + (((/* implicit */unsigned int) ((/* implicit */int) var_15))))));
                    /* LoopNest 2 */
                    for (signed char i_15 = 3; i_15 < 18; i_15 += 4) 
                    {
                        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
                        {
                            {
                                var_31 += ((/* implicit */unsigned long long int) (((~(((/* implicit */int) min((var_15), (((/* implicit */short) var_5))))))) < (((/* implicit */int) var_5))));
                                var_32 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (var_2))))) : (max((var_1), (((/* implicit */unsigned long long int) var_11))))))) || (((/* implicit */_Bool) max((((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) var_6)) : (var_3))), (((/* implicit */unsigned int) var_0)))))));
                                arr_54 [i_7] [i_7] [10LL] [i_13] [(_Bool)1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)32753)) << (((((/* implicit */int) var_15)) + (8106))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (signed char i_17 = 3; i_17 < 23; i_17 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 3; i_18 < 23; i_18 += 2) 
        {
            for (short i_19 = 1; i_19 < 22; i_19 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (_Bool i_20 = 0; i_20 < 0; i_20 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) 1576773481)), (((long long int) max((((/* implicit */unsigned int) var_9)), (3541864692U))))));
                        var_34 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) - (((/* implicit */int) var_5))))) || (((((/* implicit */_Bool) 16797533360456804340ULL)) && (((/* implicit */_Bool) 1899380492))))));
                        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) ((_Bool) max((var_10), (((/* implicit */short) var_5))))))));
                    }
                    /* vectorizable */
                    for (signed char i_21 = 3; i_21 < 24; i_21 += 4) 
                    {
                        var_36 = ((/* implicit */_Bool) min((var_36), (((/* implicit */_Bool) (+((+(var_1))))))));
                        var_37 = ((/* implicit */unsigned char) ((unsigned short) var_3));
                        var_38 = ((/* implicit */unsigned long long int) max((var_38), (((/* implicit */unsigned long long int) ((((int) var_8)) & (((/* implicit */int) var_8)))))));
                        /* LoopSeq 1 */
                        for (signed char i_22 = 1; i_22 < 24; i_22 += 2) 
                        {
                            var_39 = ((/* implicit */_Bool) ((((((/* implicit */int) var_11)) + (2147483647))) << ((((~(((/* implicit */int) var_11)))) - (12909)))));
                            arr_70 [i_21] [i_18] [(unsigned char)20] [i_18 - 1] [i_18 - 2] = ((/* implicit */short) ((unsigned int) var_11));
                            arr_71 [i_21] [19LL] [i_19] [4U] [(short)1] [i_22] [i_22 + 1] = ((/* implicit */unsigned short) ((((/* implicit */int) var_15)) | (((/* implicit */int) ((short) var_2)))));
                            var_40 = ((/* implicit */signed char) (+(-1899380493)));
                            arr_72 [(_Bool)1] [i_17] [i_21] [i_18] [i_21] [i_17] [i_17] = ((/* implicit */unsigned long long int) ((unsigned int) var_2));
                        }
                        arr_73 [11] [i_18] [i_19] [i_21 - 3] [i_21 - 3] [i_21] = ((/* implicit */short) ((var_6) & (((/* implicit */int) var_8))));
                    }
                    var_41 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) << (((((/* implicit */int) var_2)) - (31371)))))) : (var_1))), (((/* implicit */unsigned long long int) min((((((/* implicit */int) var_4)) != (((/* implicit */int) var_13)))), (((((/* implicit */int) (signed char)-51)) > (((/* implicit */int) (short)-31019)))))))));
                    /* LoopSeq 1 */
                    for (_Bool i_23 = 0; i_23 < 0; i_23 += 1) 
                    {
                        var_42 += ((/* implicit */short) ((((min((((/* implicit */int) ((_Bool) var_0))), (var_6))) + (2147483647))) >> (((min((((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned int) var_9))))), (min((((/* implicit */unsigned long long int) 4274718767U)), (16797533360456804340ULL))))) - (2456471509ULL)))));
                        var_43 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) var_2)) & (((/* implicit */int) var_2)))));
                        arr_76 [i_23] [(signed char)4] [i_18 - 1] [20U] = ((/* implicit */unsigned int) ((unsigned long long int) (-(var_1))));
                    }
                }
            } 
        } 
        var_44 = ((/* implicit */_Bool) max((var_44), ((((-(var_1))) < (((/* implicit */unsigned long long int) ((((/* implicit */int) var_7)) % (((/* implicit */int) var_5)))))))));
        arr_77 [i_17] = max((max(((~(var_1))), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_10))))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) / (((/* implicit */int) var_13))))));
        var_45 = ((/* implicit */int) min((var_45), (((/* implicit */int) (-(min((var_14), (var_14))))))));
    }
    for (_Bool i_24 = 1; i_24 < 1; i_24 += 1) 
    {
        /* LoopSeq 2 */
        for (unsigned int i_25 = 0; i_25 < 21; i_25 += 2) 
        {
            var_46 = ((/* implicit */unsigned int) max((var_46), (((/* implicit */unsigned int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)19541))))), (var_1))) | (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_15), (var_13))))))))));
            var_47 = min((((/* implicit */unsigned int) var_15)), (((((/* implicit */_Bool) max((var_5), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (4274718753U))));
        }
        for (short i_26 = 3; i_26 < 19; i_26 += 2) 
        {
            var_48 = ((/* implicit */_Bool) min((var_48), (((/* implicit */_Bool) max((((((/* implicit */unsigned int) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_7))))) - (var_14))), (((((/* implicit */_Bool) (-(var_0)))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_13))) : (((unsigned int) var_7)))))))));
            var_49 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((var_13), (var_7)))), (((((/* implicit */_Bool) 4274718756U)) ? (1649210713252747286ULL) : (17793954491147078778ULL)))));
        }
        var_50 += ((/* implicit */signed char) (((+(((/* implicit */int) (!(((/* implicit */_Bool) var_4))))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_13)) + (((/* implicit */int) var_7))))))))));
        var_51 = ((/* implicit */unsigned int) (-(-1899380493)));
    }
    var_52 = ((/* implicit */unsigned int) min((var_52), (((/* implicit */unsigned int) var_2))));
    var_53 = ((/* implicit */unsigned int) var_2);
    var_54 = ((/* implicit */signed char) ((((((/* implicit */int) ((short) var_2))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) > (var_12)))))) << (((min((min((((/* implicit */unsigned int) var_10)), (var_3))), (var_3))) - (26783U)))));
}
